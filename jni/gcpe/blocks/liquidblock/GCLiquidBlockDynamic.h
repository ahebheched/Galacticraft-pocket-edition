#pragma once

#include "mcpe/block/blocks/LiquidBlockDynamic.h"

class GCLiquidBlockDynamic : public LiquidBlockDynamic
{
	public:
		GCLiquidBlockDynamic(std::string const&, int);
		
	public:
		int getTickDelay(BlockSource&) const;
};
