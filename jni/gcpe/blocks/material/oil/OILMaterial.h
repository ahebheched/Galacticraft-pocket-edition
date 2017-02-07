#pragma once

#include "mcpe/block/material/Material.h"

class OILMaterial : public Material
{
	public:
		OILMaterial();
		
	public:
		bool isLiquid() const;
		bool isSolidBlocking() const;
};
