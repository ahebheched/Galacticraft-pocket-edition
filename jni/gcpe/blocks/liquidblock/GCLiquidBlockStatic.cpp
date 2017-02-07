#include "GCLiquidBlockStatic.h"

GCLiquidBlockStatic::GCLiquidBlockStatic(std::string const&name, int id) : LiquidBlockStatic(name,id,id-1,Material::getMaterial(MaterialType::OIL))
{
	
}

