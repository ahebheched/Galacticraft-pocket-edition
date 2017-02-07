#include <jni.h>
#include <dlfcn.h>
#include <algorithm>
#include <android/log.h>
#include <stdlib.h>
#include <Substrate.h>
#include <cmath>
#include <unistd.h>
#include <time.h>
#include "GCInclude.h"

MinecraftClient *mc=0;

void (*BlockInit_)(Block *);
void (*BlockGraphicsInit_)(BlockGraphics *);
void (*ItemInit_)(Item *);
void (*CreativeItemInit_)(Item *);
void (*BiomeDecoratorOre_)(BiomeDecorator *, BlockSource*, Random&, const BlockPos&);
void (*Language_)(Localization *, std::string const&);
ItemInstance (*GCIcon_)(InventoryScreen *, InventoryScreen::InventoryPaneType);
void (*AddRecipes_)(Recipes *);
bool (*BlockRenderer_)(BlockTessellator *, Block const&, const BlockPos&, unsigned char, bool);
void (*McClientInit_)(MinecraftClient *);
void (*MaterialInit_)(Material *);
void (*Attack_)(GameMode *, Player&, Entity&);

void BlockInit(Block *b){
	BlockInit_(b);
	GCBlocks::initGCBlocks();
}

void BlockGraphicsInit(BlockGraphics *bg){
	BlockGraphicsInit_(bg);
	GCBlockGraphics::initGCBlockGraphics();
}

void ItemInit(Item *i){
	ItemInit_(i);
	GCItems::initGCItems();
	GCItems::initGCBlocks();
}

void CreativeItemInit(Item *ii){
	CreativeItemInit_(ii);
	GCItems::addGCCreativeItems();
}

void BiomeDecoratorOre(BiomeDecorator *bd, BlockSource *bs, Random &r, const BlockPos &pos){
	BiomeDecoratorOre_(bd,bs,r,pos);
	GCFeatures::populateFeatures(bd,bs,r,pos);
}

void Language(Localization *lz, std::string const&languageName){
	Language_(lz,languageName);
	std::vector<std::string> languageList;
	
	LOG_P("Load localization:"+languageName);
	
	if(languageName=="zh_CN")
	languageList=zh_CN;
	for(std::string translation : languageList)
		lz->_appendTranslations(translation);
}

ItemInstance GCIcon(InventoryScreen *is, InventoryScreen::InventoryPaneType type){
	if(type==InventoryScreen::InventoryPaneType::TOOLS) return ItemInstance(800, 1, 0);
	return GCIcon_(is,type);
}

void AddRecipes(Recipes *r){
	AddRecipes_(r);
	GCRecipes::addGCRecipes(r);
}

bool BlockRenderer(BlockTessellator *bt, Block const&b, const BlockPos&pos, unsigned char data, bool w){
	if(&b==Block::mBlocks[205])
		return bt->AluminumWire(b,pos,data,w);
	if(&b==Block::mBlocks[210])
		return bt->NASAWorkBench(b,pos,data,w);
	return BlockRenderer_(bt,b,pos,data,w);
}

void McClientInit(MinecraftClient*mcClient){
	McClientInit_(mcClient);
	mc = mcClient;
}

void MaterialInit(Material *m){
	MaterialInit_(m);
	GCMaterial::initGCMaterial();
}

Entity* e1;
Entity* e2;
int i = 0;
void Attack(GameMode *g, Player&p, Entity&e){
	i++;
	if(i==1) e1=&e;
	else if(i==2){
		e2=&e;
		e2->setTarget(e1);
		e1->setTarget(e2);
		i=0;
	}
	else{
		Attack_(g,p,e);
	}
}

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
	void* handle = dlopen("libminecraftpe.so", RTLD_LAZY);
	
	MSHookFunction((void*)&Block::initBlocks,(void*)&BlockInit,(void**)&BlockInit_);
	MSHookFunction((void*)&BlockGraphics::initBlocks,(void*)&BlockGraphicsInit,(void**)&BlockGraphicsInit_);
	MSHookFunction((void*)&Item::initClientData,(void*)&ItemInit,(void**)&ItemInit_);
	MSHookFunction((void*)&Item::initCreativeItems,(void*)&CreativeItemInit,(void**)&CreativeItemInit_);
	MSHookFunction((void*)&BiomeDecorator::decorateOres,(void*)&BiomeDecoratorOre,(void**)&BiomeDecoratorOre_);
	MSHookFunction((void*)&Localization::_load,(void*)&Language,(void**)&Language_);
	MSHookFunction((void*)&InventoryScreen::getItemFromType,(void*)&GCIcon,(void**)&GCIcon_);
	MSHookFunction((void*)&Recipes::init,(void*)&AddRecipes,(void**)&AddRecipes_);
	MSHookFunction(dlsym(handle,"_ZN16BlockTessellator17tessellateInWorldERK5BlockRK8BlockPoshb"),(void*)&BlockRenderer,(void**)&BlockRenderer_);
	MSHookFunction((void*)&MinecraftClient::init,(void*)&McClientInit,(void**)&McClientInit_);
	MSHookFunction((void*)&Material::initMaterials,(void*)&MaterialInit,(void**)&MaterialInit_);
	MSHookFunction((void*)&GameMode::attack,(void*)&Attack,(void**)&Attack_);
	return JNI_VERSION_1_2;
}
