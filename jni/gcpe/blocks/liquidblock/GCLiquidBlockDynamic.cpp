#include "GCLiquidBlockDynamic.h"

GCLiquidBlockDynamic::GCLiquidBlockDynamic(std::string const&name, int id) : LiquidBlockDynamic(name,id,Material::getMaterial(MaterialType::OIL))
{
	
}
int GCLiquidBlockDynamic::getTickDelay(BlockSource&) const
{
	return 100;
}

