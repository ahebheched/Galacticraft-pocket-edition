#include <stdlib.h>
#include "GCMachineBlock.h"
#include "mcpe/client/resources/I18n.h"
#include "gcpe/gui/screen/Machine0Screen.h"

extern MinecraftClient* mc;

GCMachineBlock::GCMachineBlock(std::string const& name, int id) : Block(name, id, Material::getMaterial(MaterialType::DEVICE))
{
	init();
	setCategory(CreativeItemCategory::DECORATIONS);
	setSolid(true);
	setDestroyTime(5);
	setNameId("GC_Machine");
}
std::string GCMachineBlock::buildDescriptionName(unsigned char aux) const
{
	switch(aux)
	{
	case 0:
	case 1:
	case 2:
	case 3:
		return I18n::get("tile.machine.0.name")+"\n"+"§7"+I18n::get("tile.coal_generator.description");
	default:
		return I18n::get("GC_Machine");
	}
}
int GCMachineBlock::getSpawnResourcesAuxValue(unsigned char aux)const
{
	switch(aux)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 2;
		default:
			return 0;
	}
	
}
int GCMachineBlock::getPlacementDataValue(Entity&e, BlockPos const&pos, signed char side, Vec3 const&pixel, int aux)const
{
}
bool GCMachineBlock::use(Player&, BlockPos const&) const
{
	//mc->getScreenChooser()->_pushScreen(std::make_shared<Machine0Screen>(*mc),false);
	return true;
}
