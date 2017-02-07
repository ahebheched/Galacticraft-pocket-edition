#include "GCMaterial.h"

#include "oil/OILMaterial.h"

void GCMaterial::initGCMaterial(){
	Material::addMaterial(std::unique_ptr<Material, std::default_delete<Material>>(new OILMaterial()));
}
