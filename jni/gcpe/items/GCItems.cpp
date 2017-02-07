#include "GCItems.h"
#include "mcpe/item/AuxDataBlockItem.h"

#include "gcoreitem/GCOreItem.h"
#include "itemblock/GCItemBlock.h"

#include "../blocks/GCBlocks.h"
#include "../blocks/gcoreblock/GCOreBlock.h"
#include "../blocks/aluminumwireblock/AluminumWireBlock.h"
#include "../blocks/baseblock/BaseBlock.h"
#include "../blocks/liquidblock/GCLiquidBlockStatic.h"

void GCItems::initGCItems(){
	Item::mItems[800]=new GCOreItem("basic_item.raw_silicon",800,"rawSilicon");
	Item::mItems[801]=new GCOreItem("basic_item.ingot_tin",801,"ingotTin");
	Item::mItems[802]=new GCOreItem("basic_item.ingot_copper",802,"ingotCopper");
	Item::mItems[803]=new GCOreItem("basic_item.ingot_aluminum",803,"ingotAluminum");
	Item::mItems[804]=new GCOreItem("meteoric_iron_ingot",804,"meteoricIronIngot");
	Item::mItems[805]=new GCOreItem("meteoric_iron_raw",805,"meteoricIronRaw");
	Item::mItems[806]=new GCOreItem("basic_item.lunar_sapphire",806,"lunarsapphire");
	
	Item::mItems[807]=new GCItemBlock("tile.aluminum_wire.alu_wire.name","tile.aluminum_wire.alu_wire.description",807,"aluminumWire",0,205,0);
	Item::mItems[808]=new GCItemBlock("tile.aluminum_wire.alu_wire_heavy.name","tile.aluminum_wire.alu_wire_heavy.description",808,"aluminumWire",1,205,1);
}

void GCItems::initGCBlocks(){
	Item::mItems[204]=new AuxDataBlockItem("ore_block",204-256,Block::mBlocks[204]);
	Item::mItems[205]=new AuxDataBlockItem("aluminumwireblock",205-256,Block::mBlocks[205]);
	Item::mItems[119]=new AuxDataBlockItem("ore_block",119-256,Block::mBlocks[119]);
	Item::mItems[36]=new AuxDataBlockItem("base_block",36-256,Block::mBlocks[36]);
	Item::mItems[230]=new BlockItem("oil",230-256);
	Item::mItems[231]=new BlockItem("oil",231-256);
	Item::mItems[210]=new BlockItem("NASA",210-256);
}

void GCItems::addGCCreativeItems(){
	Item::addCreativeItem(204,0);
	Item::addCreativeItem(204,1);
	Item::addCreativeItem(204,2);
	Item::addCreativeItem(204,3);
	Item::addCreativeItem(204,4);
	Item::addCreativeItem(204,5);
	Item::addCreativeItem(204,6);
	Item::addCreativeItem(204,7);
	Item::addCreativeItem(204,8);
	Item::addCreativeItem(204,9);
	Item::addCreativeItem(204,10);
	Item::addCreativeItem(204,11);
	Item::addCreativeItem(204,12);
	Item::addCreativeItem(204,13);
	Item::addCreativeItem(204,14);
	Item::addCreativeItem(119,2);
	Item::addCreativeItem(36,0);
	Item::addCreativeItem(36,1);
	Item::addCreativeItem(36,2);
	Item::addCreativeItem(230,0);
	Item::addCreativeItem(231,0);
	Item::addCreativeItem(210,0);
	
	Item::addCreativeItem(800,0);
	Item::addCreativeItem(801,0);
	Item::addCreativeItem(802,0);
	Item::addCreativeItem(803,0);
	Item::addCreativeItem(804,0);
	Item::addCreativeItem(805,0);
	Item::addCreativeItem(806,0);
	Item::addCreativeItem(807,0);
	Item::addCreativeItem(808,0);
}
