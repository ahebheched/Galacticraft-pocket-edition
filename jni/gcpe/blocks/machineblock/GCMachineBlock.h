#pragma once

#include "mcpe/block/Block.h"

class GCMachineBlock : public Block
{
	public:
		GCMachineBlock(std::string const&, int);
	public:
    	virtual std::string buildDescriptionName(unsigned char) const;
		virtual int getSpawnResourcesAuxValue(unsigned char) const;
		virtual int getPlacementDataValue(Entity&, BlockPos const&, signed char, Vec3 const&, int) const;
		virtual bool use(Player&, BlockPos const&) const;
};
