#include "GCItemBlock.h"
#include "mcpe/client/resources/I18n.h"

GCItemBlock::GCItemBlock(std::string name, std::string dd, short id, std::string const& tex, int texa, int blockId, int blockData) : Item("itemBlock", id - 0x100), name(name), dd(dd), blockId(blockId), blockData(blockData)
{
	setCategory(CreativeItemCategory::TOOLS);
	setIcon(tex,texa);
}
void GCItemBlock::useOn(ItemInstance&instance, Entity&p, int x, int y, int z, signed char side, float pixelx, float pixely, float pixelz)
{
	ItemInstance block(blockId,instance.count,blockData);
	block.useOn(p,x,y,z,side,pixelx,pixely,pixelz);
	
	instance.count=block.count;
	if(instance.count==0)
		instance.setNull();
	return;
}
std::string GCItemBlock::buildDescriptionName(ItemInstance const&) const
{
	return I18n::get(name);
}
std::string GCItemBlock::buildEffectDescriptionName(ItemInstance const&) const
{
	return "§7"+I18n::get(dd);
}
