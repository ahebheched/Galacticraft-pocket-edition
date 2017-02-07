#include "BaseBlock.h"
#include "mcpe/client/resources/I18n.h"

BaseBlock::BaseBlock(std::string const&name, int id):Block(name, id, Material::getMaterial(MaterialType::STONE))
{
	init();
	setCategory(CreativeItemCategory::DECORATIONS);
	setSolid(true);
	setDestroyTime(1);
	setNameId("GC_Base_Block");
}

std::string BaseBlock::buildDescriptionName(unsigned char aux) const
{
	switch(aux){
		case 0:
			return I18n::get("tile.basic_block_core.block_tin_gc.name");
		case 1:
			return I18n::get("tile.basic_block_core.block_copper_gc.name");
		case 2:
			return I18n::get("tile.basic_block_core.block_aluminum_gc.name");
		default:
			return "BaseBlock";
	}
}

int BaseBlock::getSpawnResourcesAuxValue(unsigned char aux) const
{
	return aux;
}

int BaseBlock::getResource(Random&, int, int) const
{
	
}
