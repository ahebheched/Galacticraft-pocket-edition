#include "GCOreItem.h"

GCOreItem::GCOreItem(std::string const&name, short id, std::string const&tex) : Item(name, id - 0x100){
	setCategory(CreativeItemCategory::ITEMS);
	setIcon(tex,0);
}
