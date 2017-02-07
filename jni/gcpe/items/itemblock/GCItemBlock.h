#pragma once

#include "mcpe/item/Item.h"

class GCItemBlock : public Item{
	public:
		int blockId;
		int blockData;
		std::string name;
		std::string dd;
		GCItemBlock(std::string, std::string, short, std::string const&, int, int, int);
		virtual void useOn(ItemInstance&, Entity&, int, int, int, signed char, float, float, float);
		virtual std::string buildDescriptionName(ItemInstance const&) const;
		virtual std::string buildEffectDescriptionName(ItemInstance const&) const;
};
