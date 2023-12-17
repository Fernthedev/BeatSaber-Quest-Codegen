#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_LoadBufferVolume)
namespace UnityEngine {
struct Vector3;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferVolumeLayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_VolumeScatterTrees;
}
namespace HoudiniEngineUnity {
class HEU_DetailPrototype;
}
namespace HoudiniEngineUnity {
class HEU_DetailProperties;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_LoadBufferVolume;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_LoadBufferVolume);
// Type: HoudiniEngineUnity::HEU_LoadBufferVolume
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9804))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9806))
// CS Name: ::HoudiniEngineUnity::HEU_LoadBufferVolume*
class CORDL_TYPE HEU_LoadBufferVolume : public ::HoudiniEngineUnity::HEU_LoadBufferBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::HoudiniEngineUnity::HEU_LoadBufferBase)]{};

/// @brief Field _tileIndex offset 0x30
 __declspec(property(get=__get__tileIndex, put=__set__tileIndex)) int32_t  _tileIndex;

/// @brief Field _splatLayers offset 0x38
 __declspec(property(get=__get__splatLayers, put=__set__splatLayers)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>*  _splatLayers;

/// @brief Field _heightMapWidth offset 0x40
 __declspec(property(get=__get__heightMapWidth, put=__set__heightMapWidth)) int32_t  _heightMapWidth;

/// @brief Field _heightMapHeight offset 0x44
 __declspec(property(get=__get__heightMapHeight, put=__set__heightMapHeight)) int32_t  _heightMapHeight;

/// @brief Field _heightMap offset 0x48
 __declspec(property(get=__get__heightMap, put=__set__heightMap)) Il2CppObject*  _heightMap;

/// @brief Field _splatMaps offset 0x50
 __declspec(property(get=__get__splatMaps, put=__set__splatMaps)) Il2CppObject*  _splatMaps;

/// @brief Field _terrainSizeX offset 0x58
 __declspec(property(get=__get__terrainSizeX, put=__set__terrainSizeX)) float_t  _terrainSizeX;

/// @brief Field _terrainSizeY offset 0x5c
 __declspec(property(get=__get__terrainSizeY, put=__set__terrainSizeY)) float_t  _terrainSizeY;

/// @brief Field _heightRange offset 0x60
 __declspec(property(get=__get__heightRange, put=__set__heightRange)) float_t  _heightRange;

/// @brief Field _position offset 0x64
 __declspec(property(get=__get__position, put=__set__position)) ::UnityEngine::Vector3  _position;

/// @brief Field _terrainDataPath offset 0x70
 __declspec(property(get=__get__terrainDataPath, put=__set__terrainDataPath)) ::StringW  _terrainDataPath;

/// @brief Field _terrainDataExportPath offset 0x78
 __declspec(property(get=__get__terrainDataExportPath, put=__set__terrainDataExportPath)) ::StringW  _terrainDataExportPath;

/// @brief Field _scatterTrees offset 0x80
 __declspec(property(get=__get__scatterTrees, put=__set__scatterTrees)) ::HoudiniEngineUnity::HEU_VolumeScatterTrees*  _scatterTrees;

/// @brief Field _detailPrototypes offset 0x88
 __declspec(property(get=__get__detailPrototypes, put=__set__detailPrototypes)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*  _detailPrototypes;

/// @brief Field _detailMaps offset 0x90
 __declspec(property(get=__get__detailMaps, put=__set__detailMaps)) ::System::Collections::Generic::List_1<Il2CppObject*>*  _detailMaps;

/// @brief Field _detailProperties offset 0x98
 __declspec(property(get=__get__detailProperties, put=__set__detailProperties)) ::HoudiniEngineUnity::HEU_DetailProperties*  _detailProperties;

/// @brief Field _specifiedTerrainMaterialName offset 0xa0
 __declspec(property(get=__get__specifiedTerrainMaterialName, put=__set__specifiedTerrainMaterialName)) ::StringW  _specifiedTerrainMaterialName;

constexpr void __set__tileIndex(int32_t  value) ;

constexpr int32_t& __get__tileIndex() ;

constexpr int32_t const& __get__tileIndex() const;

constexpr void __set__splatLayers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>* __get__splatLayers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>*> __get__splatLayers() const;

constexpr void __set__heightMapWidth(int32_t  value) ;

constexpr int32_t& __get__heightMapWidth() ;

constexpr int32_t const& __get__heightMapWidth() const;

constexpr void __set__heightMapHeight(int32_t  value) ;

constexpr int32_t& __get__heightMapHeight() ;

constexpr int32_t const& __get__heightMapHeight() const;

constexpr void __set__heightMap(Il2CppObject*  value) ;

constexpr Il2CppObject* __get__heightMap() ;

constexpr ::cordl_internals::to_const_pointer<Il2CppObject*> __get__heightMap() const;

constexpr void __set__splatMaps(Il2CppObject*  value) ;

constexpr Il2CppObject* __get__splatMaps() ;

constexpr ::cordl_internals::to_const_pointer<Il2CppObject*> __get__splatMaps() const;

constexpr void __set__terrainSizeX(float_t  value) ;

constexpr float_t& __get__terrainSizeX() ;

constexpr float_t const& __get__terrainSizeX() const;

constexpr void __set__terrainSizeY(float_t  value) ;

constexpr float_t& __get__terrainSizeY() ;

constexpr float_t const& __get__terrainSizeY() const;

constexpr void __set__heightRange(float_t  value) ;

constexpr float_t& __get__heightRange() ;

constexpr float_t const& __get__heightRange() const;

constexpr void __set__position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__position() ;

constexpr ::UnityEngine::Vector3 const& __get__position() const;

constexpr void __set__terrainDataPath(::StringW  value) ;

constexpr ::StringW& __get__terrainDataPath() ;

constexpr ::StringW const& __get__terrainDataPath() const;

constexpr void __set__terrainDataExportPath(::StringW  value) ;

constexpr ::StringW& __get__terrainDataExportPath() ;

constexpr ::StringW const& __get__terrainDataExportPath() const;

constexpr void __set__scatterTrees(::HoudiniEngineUnity::HEU_VolumeScatterTrees*  value) ;

constexpr ::HoudiniEngineUnity::HEU_VolumeScatterTrees* __get__scatterTrees() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_VolumeScatterTrees*> __get__scatterTrees() const;

constexpr void __set__detailPrototypes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>* __get__detailPrototypes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*> __get__detailPrototypes() const;

constexpr void __set__detailMaps(::System::Collections::Generic::List_1<Il2CppObject*>*  value) ;

constexpr ::System::Collections::Generic::List_1<Il2CppObject*>* __get__detailMaps() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<Il2CppObject*>*> __get__detailMaps() const;

constexpr void __set__detailProperties(::HoudiniEngineUnity::HEU_DetailProperties*  value) ;

constexpr ::HoudiniEngineUnity::HEU_DetailProperties* __get__detailProperties() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_DetailProperties*> __get__detailProperties() const;

constexpr void __set__specifiedTerrainMaterialName(::StringW  value) ;

constexpr ::StringW& __get__specifiedTerrainMaterialName() ;

constexpr ::StringW const& __get__specifiedTerrainMaterialName() const;

static inline ::HoudiniEngineUnity::HEU_LoadBufferVolume* New_ctor() ;

/// @brief Method .ctor addr 0x21abc14 size 0x104 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferVolume", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_LoadBufferVolume(HEU_LoadBufferVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferVolume", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_LoadBufferVolume(HEU_LoadBufferVolume const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_LoadBufferVolume()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_LoadBufferVolume, 0xa8>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_LoadBufferVolume);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_LoadBufferVolume*, "HoudiniEngineUnity", "HEU_LoadBufferVolume");
