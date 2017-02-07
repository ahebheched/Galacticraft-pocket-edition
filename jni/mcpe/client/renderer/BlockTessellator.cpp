#include "BlockTessellator.h"

int BlockTessellator::ID1(const BlockPos&pos){
	return getRegion().getBlock({pos.x+1,pos.y,pos.z})->blockId;
}
int BlockTessellator::DATA1(const BlockPos&pos){
	return getRegion().getData({pos.x+1,pos.y,pos.z});
}
int BlockTessellator::ID2(const BlockPos&pos){
	return getRegion().getBlock({pos.x-1,pos.y,pos.z})->blockId;
}
int BlockTessellator::DATA2(const BlockPos&pos){
	return getRegion().getData({pos.x-1,pos.y,pos.z});
}
int BlockTessellator::ID3(const BlockPos&pos){
	return getRegion().getBlock({pos.x,pos.y+1,pos.z})->blockId;
}
int BlockTessellator::DATA3(const BlockPos&pos){
	return getRegion().getData({pos.x,pos.y+1,pos.z});
}
int BlockTessellator::ID4(const BlockPos&pos){
	return getRegion().getBlock({pos.x,pos.y-1,pos.z})->blockId;
}
int BlockTessellator::DATA4(const BlockPos&pos){
	return getRegion().getData({pos.x,pos.y-1,pos.z});
}
int BlockTessellator::ID5(const BlockPos&pos){
	return getRegion().getBlock({pos.x,pos.y,pos.z+1})->blockId;
}
int BlockTessellator::DATA5(const BlockPos&pos){
	return getRegion().getData({pos.x,pos.y,pos.z+1});
}
int BlockTessellator::ID6(const BlockPos&pos){
	return getRegion().getBlock({pos.x,pos.y,pos.z-1})->blockId;
}
int BlockTessellator::DATA6(const BlockPos&pos){
	return getRegion().getData({pos.x,pos.y,pos.z-1});
}
void BlockTessellator::xxx(float f1,float f2,float f3,float f4,float f5,float f6,float f7,float f8,float f9,float f10,TextureUVCoordinateSet image,const BlockPos&pos){
	int x=pos.x,y=pos.y,z=pos.z;
	getTessellator().vertexUV({x+f1,y+f9,z+f2},image.maxU,image.minV);
	getTessellator().vertexUV({x+f3,y+f9,z+f4},image.maxU,image.maxV);
	getTessellator().vertexUV({x+f5,y+f9,z+f6},image.minU,image.maxV);
	getTessellator().vertexUV({x+f7,y+f9,z+f8},image.minU,image.minV);
	
	getTessellator().vertexUV({x+f3,y+f10,z+f4},image.maxU,image.maxV);
	getTessellator().vertexUV({x+f1,y+f10,z+f2},image.maxU,image.minV);
	getTessellator().vertexUV({x+f7,y+f10,z+f8},image.minU,image.minV);
	getTessellator().vertexUV({x+f5,y+f10,z+f6},image.minU,image.maxV);
	
	getTessellator().vertexUV({x+f3,y+f10,z+f4},image.maxU,image.maxV);
	getTessellator().vertexUV({x+f3,y+f9,z+f4},image.maxU,image.minV);
	getTessellator().vertexUV({x+f1,y+f9,z+f2},image.minU,image.minV);
	getTessellator().vertexUV({x+f1,y+f10,z+f2},image.minU,image.maxV);
	
	getTessellator().vertexUV({x+f5,y+f9,z+f6},image.maxU,image.minV);
	getTessellator().vertexUV({x+f5,y+f10,z+f6},image.maxU,image.maxV);
	getTessellator().vertexUV({x+f7,y+f10,z+f8},image.minU,image.maxV);
	getTessellator().vertexUV({x+f7,y+f9,z+f8},image.minU,image.minV);
	
	getTessellator().vertexUV({x+f3,y+f9,z+f4},image.maxU,image.minV);
	getTessellator().vertexUV({x+f3,y+f10,z+f4},image.maxU,image.maxV);
	getTessellator().vertexUV({x+f5,y+f10,z+f6},image.minU,image.maxV);
	getTessellator().vertexUV({x+f5,y+f9,z+f6},image.minU,image.minV);
	
	getTessellator().vertexUV({x+f1,y+f10,z+f2},image.maxU,image.maxV);
	getTessellator().vertexUV({x+f1,y+f9,z+f2},image.maxU,image.minV);
	getTessellator().vertexUV({x+f7,y+f9,z+f8},image.minU,image.minV);
	getTessellator().vertexUV({x+f7,y+f10,z+f8},image.minU,image.maxV);
	
}

void BlockTessellator::xxxx(float f1,float f2,float f3,float f4,float f5,float f6,float f7,float f8,float f9,float f10,float f11,float f12,float f13,float f14,float f15,float f16,float f17,float f18,float f19,float f20,float f21,float f22,float f23,float f24,TextureUVCoordinateSet image,const BlockPos& pos){
	int x=pos.x,y=pos.y,z=pos.z;
	getTessellator().vertexUV({x+f4,y+f5,z+f6},image.maxU,image.maxV);
	getTessellator().vertexUV({x+f1,y+f2,z+f3},image.maxU,image.minV);
	getTessellator().vertexUV({x+f10,y+f11,z+f12},image.minU,image.minV);
	getTessellator().vertexUV({x+f7,y+f8,z+f9},image.minU,image.maxV);
	
	getTessellator().vertexUV({x+f13,y+f14,z+f15},image.maxU,image.maxV);
	getTessellator().vertexUV({x+f16,y+f17,z+f18},image.maxU,image.minV);
	getTessellator().vertexUV({x+f19,y+f20,z+f21},image.minU,image.minV);
	getTessellator().vertexUV({x+f22,y+f23,z+f24},image.minU,image.maxV);
	
	getTessellator().vertexUV({x+f13,y+f14,z+f15},image.maxU,image.maxV);
	getTessellator().vertexUV({x+f1,y+f2,z+f3},image.maxU,image.minV);
	getTessellator().vertexUV({x+f4,y+f5,z+f6},image.minU,image.minV);
	getTessellator().vertexUV({x+f16,y+f17,z+f18},image.minU,image.maxV);
	
	getTessellator().vertexUV({x+f19,y+f20,z+f21},image.maxU,image.maxV);
	getTessellator().vertexUV({x+f7,y+f8,z+f9},image.maxU,image.minV);
	getTessellator().vertexUV({x+f10,y+f11,z+f12},image.minU,image.minV);
	getTessellator().vertexUV({x+f22,y+f23,z+f24},image.minU,image.maxV);
	
	getTessellator().vertexUV({x+f1,y+f2,z+f3},image.maxU,image.minV);
	getTessellator().vertexUV({x+f13,y+f14,z+f15},image.maxU,image.maxV);
	getTessellator().vertexUV({x+f22,y+f23,z+f24},image.minU,image.maxV);
	getTessellator().vertexUV({x+f10,y+f11,z+f12},image.minU,image.minV);
	
	getTessellator().vertexUV({x+f16,y+f17,z+f18},image.maxU,image.maxV);
	getTessellator().vertexUV({x+f4,y+f5,z+f6},image.maxU,image.minV);
	getTessellator().vertexUV({x+f7,y+f8,z+f9},image.minU,image.minV);
	getTessellator().vertexUV({x+f19,y+f20,z+f21},image.minU,image.maxV);
}
