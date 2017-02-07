#pragma once

#include "mcpe/recipe/FurnaceRecipes.h"
#include "mcpe/recipe/Recipes.h"
#include "mcpe/item/Item.h"
#include "mcpe/block/Block.h"

class GCRecipes : public Recipes , public FurnaceRecipes
{
	public:
		static void addGCRecipes(Recipes *);
};
