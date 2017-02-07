#pragma once
#include <vector>
#include <memory>

#include "MaterialType.h"

// Size : 16
class Material
{
public:
	static Material *mInitialized;
	static Material *mMaterials;

public:
	bool flammable;				// 0
	bool neverBuildable;		// 1
	bool notAlwaysDestroyable;	// 2
	bool replaceable;			// 3
	char filler1[9];			// 4
	bool notBlockingMotion;		// 12
	char filler2[3];			// 13
	
	enum Settings : int {
		DefaultMaterialSettings
	};

public:
	Material(MaterialType, Material::Settings, float);
	~Material();
	bool isSolid() const;
	bool isLiquid() const;
	bool isType(MaterialType) const;
	bool isSuperHot() const;
	static Material& getMaterial(MaterialType);
	void operator!=(Material const&) const;
	void operator==(Material const&) const;
	bool isSolidBlocking() const;
	bool isAlwaysDestroyable() const;
	bool isReplaceable() const;
	void getTranslucency() const;
	void getBlocksMotion() const;
	void getColor() const;
	bool isFlammable() const;
	static void addMaterial(std::unique_ptr<Material, std::default_delete<Material> >);
	//void _setMapColor(Color const&);
	void _setNotSolid();
	void _setSuperHot();
	void _setFlammable();
	void initMaterials();
	void _setReplaceable();
	void teardownMaterials();
	void _setNeverBuildable();
	void _setNotBlockingMotion();
	void _setupSurfaceMaterials();
	void _setNotAlwaysDestroyable();
	bool isNeverBuildable() const;/*
public:
	//Objects
	static Material * mMaterials;
	static Material * mInitialized;*/
};
