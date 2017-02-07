#include "GCRecipes.h"

Recipes *r;

void GCRecipes::addGCRecipes(Recipes *r){
	//熔炉
	FurnaceRecipes::mInstance->addFurnaceRecipeAuxData(204,1,ItemInstance(800,1,0));
	FurnaceRecipes::mInstance->addFurnaceRecipeAuxData(204,0,ItemInstance(801,1,0));
	FurnaceRecipes::mInstance->addFurnaceRecipeAuxData(204,2,ItemInstance(802,1,0));
	FurnaceRecipes::mInstance->addFurnaceRecipeAuxData(204,3,ItemInstance(803,1,0));
	
	//工作台
	for(int i=0;i<=15;i++){
		std::vector<Recipes::Type> hh;
		Recipes::Type rt;
		rt.c='a';
		rt.item=0;
		rt.block=0;
		rt.inst=ItemInstance(35,1,i);
		hh.push_back(rt);
		rt.c='b';
		rt.item=Item::mItems[803];
		rt.block=0;
		rt.inst=ItemInstance();
		hh.push_back(rt);
		r->addShapedRecipe(ItemInstance(807,6,0),{"aaa","bbb","aaa"},hh);
	}
	for(int i=0;i<=15;i++){
		std::vector<Recipes::Type> hh;
		Recipes::Type rt;
		rt.c='a';
		rt.item=0;
		rt.block=0;
		rt.inst=ItemInstance(35,1,i);
		hh.push_back(rt);
		rt.c='b';
		rt.item=Item::mItems[807];
		rt.block=0;
		rt.inst=ItemInstance();
		hh.push_back(rt);
		rt.c='c';
		rt.item=Item::mItems[803];
		rt.block=0;
		rt.inst=ItemInstance();
		hh.push_back(rt);
		r->addShapedRecipe(ItemInstance(808,1,0),{"a","b","c"},hh);
	}
	for(int i=0;i<=15;i++){
		std::vector<Recipes::Type> hh;
		Recipes::Type rt;
		rt.c='a';
		rt.item=0;
		rt.block=0;
		rt.inst=ItemInstance(35,1,i);
		hh.push_back(rt);
		rt.c='b';
		rt.item=Item::mItems[807];
		rt.block=0;
		rt.inst=ItemInstance();
		hh.push_back(rt);
		rt.c='c';
		rt.item=Item::mItems[803];
		rt.block=0;
		rt.inst=ItemInstance();
		hh.push_back(rt);
		r->addShapedRecipe(ItemInstance(808,1,0),{"c","b","a"},hh);
	}
	if(true){
	std::vector<Recipes::Type> hh;
	Recipes::Type rt;
	rt.c='a';
	rt.item=Item::mItems[802];
	rt.block=0;
	rt.inst=ItemInstance();
	hh.push_back(rt);
	rt.c='b';
	rt.item=Item::mItems[265];
	rt.block=0;
	rt.inst=ItemInstance();
	hh.push_back(rt);
	rt.c='c';
	rt.item=Item::mItems[807];
	rt.block=0;
	rt.inst=ItemInstance();
	hh.push_back(rt);
	rt.c='d';
	rt.item=0;
	rt.block=Block::mBlocks[61];
	rt.inst=ItemInstance();
	hh.push_back(rt);
	r->addShapedRecipe(ItemInstance(119,1,2),{"aaa","bdb","bcb"},hh);
	}
	if(true){
	std::vector<Recipes::Type> hh;
	Recipes::Type rt;
	rt.c='a';
	rt.item=Item::mItems[801];
	rt.block=0;
	rt.inst=ItemInstance();
	hh.push_back(rt);
	r->addShapedRecipe(ItemInstance(36,1,0),{"aaa","aaa","aaa"},hh);
	}
	if(true){
	std::vector<Recipes::Type> hh;
	Recipes::Type rt;
	rt.c='a';
	rt.item=Item::mItems[802];
	rt.block=0;
	rt.inst=ItemInstance();
	hh.push_back(rt);
	r->addShapedRecipe(ItemInstance(36,1,1),{"aaa","aaa","aaa"},hh);
	}
	if(true){
	std::vector<Recipes::Type> hh;
	Recipes::Type rt;
	rt.c='a';
	rt.item=Item::mItems[803];
	rt.block=0;
	rt.inst=ItemInstance();
	hh.push_back(rt);
	r->addShapedRecipe(ItemInstance(36,1,2),{"aaa","aaa","aaa"},hh);
	}
}
