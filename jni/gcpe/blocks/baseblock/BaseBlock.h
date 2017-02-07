#pragma once

#include "mcpe/block/Block.h"

class BaseBlock : public Block
{
	public:
		BaseBlock(std::string const&, int);
	public:
    	virtual std::string buildDescriptionName(unsigned char) const;
		virtual int getSpawnResourcesAuxValue(unsigned char) const;
		virtual int getResource(Random&, int, int) const;
};
