#pragma once

#include "LiquidBlock.h"
#include "../Block.h"

class LiquidBlockStatic : public LiquidBlock
{
public:
	//Virtual Tables
	//virtual ~LiquidBlockStatic();
	virtual void tick(BlockSource&, BlockPos const&, Random&) const;
	virtual void neighborChanged(BlockSource&, BlockPos const&, BlockPos const&) const;
public:
	//Methods
	LiquidBlockStatic(std::string const&, int, BlockID, Material const&);
	void _isFlammable(BlockSource&, BlockPos const&);
	void _setDynamic(BlockSource&, BlockPos const&) const;
};//LiquidBlockStatic
