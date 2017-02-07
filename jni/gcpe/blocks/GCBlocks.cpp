#include "GCBlocks.h"

#include "gcoreblock/GCOreBlock.h"
#include "aluminumwireblock/AluminumWireBlock.h"
#include "machineblock/GCMachineBlock.h"
#include "baseblock/BaseBlock.h"
#include "liquidblock/GCLiquidBlockStatic.h"
#include "liquidblock/GCLiquidBlockDynamic.h"
#include "nasaworkbench/NASAWorkBench.h"

void GCBlocks::initGCBlocks(){
	Block::mBlocks[204] = new GCOreBlock("ore_block",204);
	Block::mBlocks[205] = new AluminumWireBlock("aluminumwire",205,Material::getMaterial(MaterialType::DEVICE));
	Block::mBlocks[119] = new GCMachineBlock("gc_machine",119);
	Block::mBlocks[36] = new BaseBlock("gc_base_block",36);
	Block::mBlocks[230] = new GCLiquidBlockDynamic("oil",230);
	Block::mBlocks[231] = new GCLiquidBlockStatic("oil",231);
	Block::mBlocks[210] = new NASAWorkBench("NASA",210);
}
