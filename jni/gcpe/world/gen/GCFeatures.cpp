#include "GCFeatures.h"
#include "mcpe/level/biome/BiomeDecorator.h"
#include "mcpe/level/gen/OreFeature.h"
#include "GCFeatureInfo.h"
#include "NewFeature.h"

std::vector<GCFeatureInfo> GCFeatures::features;
bool GCFeatures::Registered = false;

void GCFeatures::registerFeatures() {
	if(Registered)
		return;
	Registered = true;

	// Create FeatureInfo and push to the global feature vector
	features.emplace_back(GCFeatureInfo::GenType::AVERAGE, std::unique_ptr<Feature>(new OreFeature(204, 0, 7)), 22, 0, 60);
	features.emplace_back(GCFeatureInfo::GenType::AVERAGE, std::unique_ptr<Feature>(new OreFeature(204, 1, 7)), 3, 0, 25);
	features.emplace_back(GCFeatureInfo::GenType::AVERAGE, std::unique_ptr<Feature>(new OreFeature(204, 2, 7)), 24, 0, 75);
	features.emplace_back(GCFeatureInfo::GenType::AVERAGE, std::unique_ptr<Feature>(new OreFeature(204, 3, 7)), 18, 0, 45);
}

void GCFeatures::populateFeatures(BiomeDecorator* decorator, BlockSource* region, Random& random, const BlockPos& pos) {
	registerFeatures();

	//features.emplace_back(GCFeatureInfo::GenType::SPAN, std::unique_ptr<Feature>(new NewFeature(region, pos)), 5, 128, 200);
	for(GCFeatureInfo& fe : features) {
		if(fe.gentype == GCFeatureInfo::GenType::SPAN)
			decorator->decorateDepthSpan(region, random, pos, fe.amountPerChunk, fe.feature, fe.minY, fe.maxY);
		else if(fe.gentype == GCFeatureInfo::GenType::AVERAGE)
			decorator->decorateDepthAverage(region, random, pos, fe.amountPerChunk, fe.feature, fe.minY, fe.maxY);
	}
}
