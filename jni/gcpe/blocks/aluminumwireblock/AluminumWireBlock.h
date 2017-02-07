#pragma once

#include "mcpe/block/Block.h"

class AluminumWireBlock : public Block
{
	public:
		AluminumWireBlock(std::string const&, int, const Material&);
	public:
    	virtual std::string buildDescriptionName(unsigned char) const;
		virtual int getResource(Random&, int, int) const;
		virtual const AABB& getVisualShape(BlockSource&, BlockPos const&, AABB&, bool) const;
		virtual AABB const& getVisualShape(unsigned char, AABB&, bool) const;
		virtual void addCollisionShapes(BlockSource&, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB> >&, Entity*) const;
};
