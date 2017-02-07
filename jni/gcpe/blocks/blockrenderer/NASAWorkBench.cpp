#include "mcpe/client/renderer/BlockTessellator.h"
#include "mcpe/block/BlockGraphics.h"

bool BlockTessellator::NASAWorkBench(const Block&block, const BlockPos&pos, unsigned char data, bool wtf)
{
	_setShapeAndTessellate({0,0,0},{1,1,1},block,pos,data);
	int x=pos.x,y=pos.y,z=pos.z;
	TextureUVCoordinateSet image=BlockGraphics::getTextureUVCoordinateSet("assembly",1);
	TextureUVCoordinateSet image2=BlockGraphics::getTextureUVCoordinateSet("assembly",2);
	TextureUVCoordinateSet image3=BlockGraphics::getTextureUVCoordinateSet("rocket_workbench",0);
	TextureUVCoordinateSet image4=BlockGraphics::getTextureUVCoordinateSet("assembly",3);
	TextureUVCoordinateSet image5=BlockGraphics::getTextureUVCoordinateSet("assembly",5);
	TextureUVCoordinateSet image6=BlockGraphics::getTextureUVCoordinateSet("assembly",4);
	getTessellator().init();
	
	//基
	float h=0.1;
	xxx(0.8,-0.15,1.15,0.2,0.2,1.15,-0.15,0.8,0.95,1.200+h,image,pos);
	xxx(0.2,-0.15,1.15,0.8,0.8,1.15,-0.15,0.2,0.95,1.201+h,image,pos);
	xxx(0.8,-0.15,0.8,1.15,0.2,1.15,0.2,-0.15,1.05,1.1+h,image2,pos);
	xxx(1.15,0.2,1.15,0.8,-0.15,0.8,-0.15,0.2,1.05,1.1+h,image2,pos);
	xxx(0.99,-0.05,1.05,0.01,0.01,1.05,-0.05,0.99,1.00,1.220+h,image2,pos);
	xxx(0.01,-0.05,1.05,0.99,0.99,1.05,-0.05,0.01,1.00,1.221+h,image2,pos);
	xxx(0.5,0.1,0.9,0.5,0.5,0.9,0.1,0.5,0.95,1.25+h,image3,pos);
	
	//臂1
	xxxx(-0.3,1.05,0.6,-0.1,1.00,0.6,-0.1,1.00,0.4,-0.3,1.05,0.4,/**/-0.25,1.25,0.6,-0.05,1.20,0.6,-0.05,1.20,0.4,-0.25,1.25,0.4,image4,pos);
	xxxx(-0.225,1.15,0.575,-0.075,1.20,0.575,-0.075,1.20,0.425,-0.225,1.15,0.425,/**/-0.625,2,0.575,-0.475,2.05,0.575,-0.475,2.05,0.425,-0.625,2,0.425,image5,pos);
	xxxx(-0.7,1.9,0.7,-0.6,1.85,0.7,-0.6,1.85,0.3,-0.7,1.9,0.3,/**/-0.5,2.2,0.7,-0.4,2.15,0.7,-0.4,2.15,0.3,-0.5,2.2,0.3,image6,pos);
	
	//臂2
	xxxx(0.6,1.05,-0.3,0.6,1.0,-0.1,0.4,1.0,-0.1,0.4,1.05,-0.3,/**/0.6,1.25,-0.25,0.6,1.2,-0.05,0.4,1.2,-0.05,0.4,1.20,-0.25,image4,pos);
	return true;
}
