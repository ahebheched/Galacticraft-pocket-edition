#pragma once

#include "../Block.h"

class OreBlock
 : public Block
{
public:
	virtual int getResource(Random&, int, int) const;
	virtual int getResourceCount(Random&, int, int) const;
	virtual int getExperienceDrop(Random&) const;
	virtual int getSpawnResourcesAuxValue(unsigned char) const;
public:
	OreBlock(std::string const&, int);
};

