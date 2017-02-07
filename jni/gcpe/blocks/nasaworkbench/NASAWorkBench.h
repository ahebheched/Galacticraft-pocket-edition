#pragma once

#include "mcpe/block/Block.h"

class NASAWorkBench : public Block
{
	public:
		NASAWorkBench(std::string const&, int);
	public:
    	virtual bool use(Player&, BlockPos const&) const;
};
