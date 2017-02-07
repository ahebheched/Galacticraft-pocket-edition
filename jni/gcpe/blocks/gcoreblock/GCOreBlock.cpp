#include <stdlib.h>
#include "GCOreBlock.h"
#include "mcpe/client/resources/I18n.h"

GCOreBlock::GCOreBlock(std::string const& name, int id) : OreBlock(name, id)
{
	init();
	setCategory(CreativeItemCategory::BLOCKS);
	setSolid(true);
	setDestroyTime(5);
	setNameId("GC_Ore");
}
std::string GCOreBlock::buildDescriptionName(unsigned char aux) const
{
	switch(aux)
	{
	case 0:
		return I18n::get("tile.basic_block_core.ore_tin_gc.name");
	case 1:
		return I18n::get("tile.basic_block_core.ore_silicon_gc.name");
	case 2:
		return I18n::get("tile.basic_block_core.ore_copper_gc.name");
	case 3:
		return I18n::get("tile.basic_block_core.ore_aluminum_gc.name");
	case 4:
		return I18n::get("tile.basic_block_moon.tinmoon.name");
	case 5:
		return I18n::get("tile.basic_block_moon.coppermoon.name");
	case 6:
		return I18n::get("tile.basic_block_moon.cheesestone.name");
	case 7:
		return I18n::get("tile.basic_block_moon.sapphire.name");
	case 8:
		return I18n::get("tile.asteroids_block.ore_iron_asteroids.name");
	case 9:
		return I18n::get("tile.asteroids_block.ore_aluminum_asteroids.name");
	case 10:
		return I18n::get("tile.asteroids_block.ore_ilmenite_asteroids.name");
	case 11:
		return I18n::get("tile.mars.ironmars.name");
	case 12:
		return I18n::get("tile.mars.coppermars.name");
	case 13:
		return I18n::get("tile.mars.tinmars.name");
	case 14:
		return I18n::get("tile.mars.deshmars.name");
	default:
		return I18n::get("basic_block_core.ore");
	}
}
int GCOreBlock::getSpawnResourcesAuxValue(unsigned char aux)const
{
	switch(aux)
	{
		case 1:
			return 0;
		default:
			return aux;
	}
	
}
int GCOreBlock::getResource(Random&r, int data, int handitem) const{
	switch(data){
		case 1:
			return 800;
		default:
			return 204;
	}
}
int GCOreBlock::getResourceCount(Random&r, int data, int handitem) const{
	switch(data)
	{
		case 1:
			srand((unsigned)time(NULL));
			return 1+rand()%4;;
		default:
			return 1;
	}
}
