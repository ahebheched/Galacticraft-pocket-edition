#include <stdlib.h>
#include "NASAWorkBench.h"
#include "mcpe/client/resources/I18n.h"
#include "gcpe/gui/screen/Machine0Screen.h"

extern MinecraftClient* mc;

NASAWorkBench::NASAWorkBench(std::string const& name, int id) : Block(name, id, Material::getMaterial(MaterialType::DEVICE))
{
	init();
	setCategory(CreativeItemCategory::DECORATIONS);
	setSolid(true);
	setDestroyTime(5);
	setNameId("NASAWorkBench");
}
bool NASAWorkBench::use(Player&, BlockPos const&) const
{
	//mc->getScreenChooser()->_pushScreen(std::make_shared<Machine0Screen>(*mc),false);
	return true;
}
