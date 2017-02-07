#include "OILMaterial.h"

OILMaterial::OILMaterial():Material(MaterialType::OIL,Material::Settings::DefaultMaterialSettings,0.0)
{
	_setReplaceable();
}

bool OILMaterial::isLiquid() const
{
	return true;
}

bool OILMaterial::isSolidBlocking() const
{
	return true;
}
