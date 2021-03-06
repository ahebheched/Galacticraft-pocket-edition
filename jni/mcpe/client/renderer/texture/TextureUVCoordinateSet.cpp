#include "TextureUVCoordinateSet.h"


TextureUVCoordinateSet::TextureUVCoordinateSet(float minU, float minV, float maxU, float maxV, ushort width, ushort height, ResourceLocation res) {
	setUV(minU, minV, maxU, maxV);
	this->width = width;
	this->height = height;
}

void TextureUVCoordinateSet::setUV(float minU, float minV, float maxU, float maxV) {
	this->minU = minU;
	this->maxU = maxU;
	this->minV = minV;
	this->maxV = maxV;
}

float TextureUVCoordinateSet::getInterpolatedU(float par1) {
	float var3 = maxU - minU;
	return minU + par1;
}

float TextureUVCoordinateSet::getInterpolatedV(float par1) {
	float var3 = maxV - minV;
	return minV + par1;
}
