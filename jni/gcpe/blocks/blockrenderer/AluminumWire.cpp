#include "mcpe/client/renderer/BlockTessellator.h"
#include "mcpe/block/BlockGraphics.h"

bool BlockTessellator::AluminumWire(const Block&block, const BlockPos&pos, unsigned char data, bool wtf)
{
	int x=pos.x,y=pos.y,z=pos.z;
	TextureUVCoordinateSet image=BlockGraphics::getTextureUVCoordinateSet("assembly",0);
	if(data == 0){
		_setShapeAndTessellate({0.4375,0.4375,0.4375},{0.5625,0.5625,0.5625},block,pos,data);
		if(ID1(pos)==205&&DATA1(pos)==0||ID1(pos)==119&&DATA1(pos)==2){
			_setShapeAndTessellate({0.5625,0.4375,0.4375},{1,0.5625,0.5625},block,pos,data);
		}
		if(ID2(pos)==205&&DATA2(pos)==0||ID2(pos)==119&&DATA2(pos)==0){
			_setShapeAndTessellate({0,0.4375,0.4375},{0.4375,0.5625,0.5625},block,pos,data);
		}
		if(ID5(pos)==205&&DATA5(pos)==0||ID5(pos)==119&&DATA5(pos)==1){
			_setShapeAndTessellate({0.4375,0.4375,0.5625},{0.5625,0.5625,1},block,pos,data);
		}
		if(ID6(pos)==205&&DATA6(pos)==0||ID6(pos)==119&&DATA6(pos)==3){
			_setShapeAndTessellate({0.4375,0.4375,0},{0.5625,0.5625,0.4375},block,pos,data);
		}
		if(ID3(pos)==205&&DATA3(pos)==0){
			_setShapeAndTessellate({0.4375,0.5625,0.4375},{0.5625,1,0.5625},block,pos,data);
		}
		if(ID4(pos)==205&&DATA4(pos)==0){
			_setShapeAndTessellate({0.4375,0,0.4375},{0.5625,0.4375,0.5625},block,pos,data);
		}
	}
	if(data == 1){
		_setShapeAndTessellate({0.375,0.375,0.375},{0.625,0.625,0.625},block,pos,data);
		if(ID1(pos)==205&&DATA1(pos)==1){
			_setShapeAndTessellate({0.625,0.375,0.375},{1,0.625,0.625},block,pos,data);
		}
		if(ID2(pos)==205&&DATA2(pos)==1){
			_setShapeAndTessellate({0,0.375,0.375},{0.375,0.625,0.625},block,pos,data);
		}
		if(ID5(pos)==205&&DATA5(pos)==1){
			_setShapeAndTessellate({0.375,0.375,0.625},{0.625,0.625,1},block,pos,data);
		}
		if(ID6(pos)==205&&DATA6(pos)==1){
			_setShapeAndTessellate({0.375,0.375,0},{0.625,0.625,0.375},block,pos,data);
		}
		if(ID3(pos)==205&&DATA3(pos)==1){
			_setShapeAndTessellate({0.375,0.625,0.375},{0.625,1,0.625},block,pos,data);
		}
		if(ID4(pos)==205&&DATA4(pos)==1){
			_setShapeAndTessellate({0.375,0,0.375},{0.625,0.375,0.625},block,pos,data);
		}
	}
	return true;
}
