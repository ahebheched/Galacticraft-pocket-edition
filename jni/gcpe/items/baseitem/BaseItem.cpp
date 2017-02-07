#include "BaseItem.h"

BaseItem::BaseItem(std::string const&name, short id, std::string const& tex, int texa) : Item(name, id - 0x100)
{
	setCategory(CreativeItemCategory::ITEMS);
	setIcon(tex,texa);
}
