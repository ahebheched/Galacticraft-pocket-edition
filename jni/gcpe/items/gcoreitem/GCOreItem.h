#pragma once

#include "mcpe/item/Item.h"

class GCOreItem : public Item{
	public:
		GCOreItem(std::string const&, short, std::string const&);
		//virtual void useOn(ItemInstance&, Entity&, int, int, int, signed char, float, float, float);
};
