#pragma once

#include "mcpe/block/blocks/OreBlock.h"

class GCOreBlock : public OreBlock
{
	public:
		GCOreBlock(std::string const&, int);
	public:
    	virtual std::string buildDescriptionName(unsigned char) const;
		virtual int getSpawnResourcesAuxValue(unsigned char) const;
		virtual int getResource(Random&, int, int) const;
		virtual int getResourceCount(Random&, int, int) const;
};
