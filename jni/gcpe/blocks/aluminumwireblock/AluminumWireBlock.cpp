#include "AluminumWireBlock.h"
#include "mcpe/client/resources/I18n.h"

AluminumWireBlock::AluminumWireBlock(std::string const&name, int id, const Material&mater) : Block(name, id, mater)
{
	setCategory(CreativeItemCategory::DECORATIONS);
	//setVisualShape({0.4375,0.4375,0.4375,0.5625,0.5625,0.5625});
	setSolid(false);
	setDestroyTime(0.3);
	setNameId("Aluminum_Wire");
}

void AluminumWireBlock::addCollisionShapes(BlockSource&s, BlockPos const&pos, AABB const*pAABB, std::vector<AABB, std::allocator<AABB> >&list,Entity*) const
{
	int x=pos.x,y=pos.y,z=pos.z;
	float a=s.getData(pos)?0.375:0.4375;
	if(s.getBlock(x+1,y,z)->blockId==205){
		list.push_back({x+1-a,y+a,z+a,x+1,y+1-a,z+1-a});
	}
	if(s.getBlock(x-1,y,z)->blockId==205){
		list.push_back({x,y+a,z+a,x+a,y+1-a,z+1-a});
	}
	if(s.getBlock(x,y+1,z)->blockId==205){
		list.push_back({x+a,y+1-a,z+a,x+1-a,y+1,z+1-a});
	}
	if(s.getBlock(x,y-1,z)->blockId==205){
		list.push_back({x+a,y,z+a,x+1-a,y+a,z+1-a});
	}
	if(s.getBlock(x,y,z+1)->blockId==205){
		list.push_back({x+a,y+1-a,z+a,x+1-a,y+1-a,z+1});
	}
	if(s.getBlock(x,y,z-1)->blockId==205){
		list.push_back({x+a,y+a,z,x+1-a,y+1-a,z+a});
	}
	
	Block::addAABBs(s,pos,pAABB,list);
}

std::string AluminumWireBlock::buildDescriptionName(unsigned char aux) const
{
	switch(aux){
		case 0:
			return I18n::get("tile.aluminum_wire.alu_wire.name")+"\n"+"§7"+I18n::get("tile.aluminum_wire.alu_wire.description");
		case 1:
			return I18n::get("tile.aluminum_wire.alu_wire_heavy.name")+"\n"+"§7"+I18n::get("tile.aluminum_wire.alu_wire_heavy.description");
		default:
			return "Aluminum Wire Block";
	}
}

int AluminumWireBlock::getResource(Random&, int data, int) const
{
	switch(data){
		case 0:
			return 807;
		case 1:
			return 808;
		default:
			return 0;
	}
}

const AABB& AluminumWireBlock::getVisualShape(BlockSource&, BlockPos const&, AABB&, bool) const
{
	return {0.4375,0.4375,0.4375,0.5625,0.5625,0.5625};
}

AABB const& AluminumWireBlock::getVisualShape(unsigned char data, AABB&, bool) const
{
	float f = data?0.375:0.4375;
	return {f,f,f,1-f,1-f,1-f};
}
