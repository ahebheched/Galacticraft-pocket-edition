#include "GCBlockGraphics.h"

void GCBlockGraphics::initGCBlockGraphics(){
	BlockGraphics::mBlocks[204]=new BlockGraphics("stone");
	BlockGraphics::mBlocks[204]->setTextureItem("ore");
	BlockGraphics::mBlocks[204]->setSoundType(BlockSoundType::STONE);
	
	BlockGraphics::mBlocks[205]=new BlockGraphics("portal");
	BlockGraphics::mBlocks[205]->setTextureItem("aluminumWire");
	BlockGraphics::mBlocks[205]->setSoundType(BlockSoundType::STONE);
	
	BlockGraphics::mBlocks[119]=new BlockGraphics("dirt");
	BlockGraphics::mBlocks[119]->setTextureItem("machine","machine","machine_0_side_0","machine_0_side_1","machine_0_side_2","machine_0_side_3");
	BlockGraphics::mBlocks[119]->setSoundType(BlockSoundType::STONE);
	
	BlockGraphics::mBlocks[36]=new BlockGraphics("stone");
	BlockGraphics::mBlocks[36]->setTextureItem("baseblock");
	BlockGraphics::mBlocks[36]->setSoundType(BlockSoundType::STONE);
	
	BlockGraphics::mBlocks[230]=new BlockGraphics("flowing_water");
	BlockGraphics::mBlocks[230]->setTextureItem("oil_flow");
	BlockGraphics::mBlocks[230]->setBlockShape(BlockShape::LIQUID);
	//BlockGraphics::mBlocks[231]->setSoundType(BlockSoundType::STONE);
	
	BlockGraphics::mBlocks[231]=new BlockGraphics("water");
	BlockGraphics::mBlocks[231]->setTextureItem("oil_still");
	BlockGraphics::mBlocks[231]->setBlockShape(BlockShape::LIQUID);
	//BlockGraphics::mBlocks[230]->setSoundType(BlockSoundType::STONE);
	
	BlockGraphics::mBlocks[210]=new BlockGraphics("dirt");
	BlockGraphics::mBlocks[210]->setTextureItem("rocket_workbench","workbench_nasa_side","workbench_nasa_side","workbench_nasa_side","workbench_nasa_side","workbench_nasa_side");
	BlockGraphics::mBlocks[210]->setSoundType(BlockSoundType::STONE);
	
}
