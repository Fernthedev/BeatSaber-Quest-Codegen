#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_LoadBufferVolumeLayer)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
namespace HoudiniEngineUnity {
struct HFLayerType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_LoadBufferVolumeLayer;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer);
// Type: HoudiniEngineUnity::HEU_LoadBufferVolumeLayer
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9807))
// CS Name: ::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*
class CORDL_TYPE HEU_LoadBufferVolumeLayer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xd8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xd8 - sizeof(::System::Object)]{};

/// @brief Field _layerName offset 0x10
 __declspec(property(get=__get__layerName, put=__set__layerName)) ::StringW  _layerName;

/// @brief Field _partID offset 0x18
 __declspec(property(get=__get__partID, put=__set__partID)) int32_t  _partID;

/// @brief Field _heightMapWidth offset 0x1c
 __declspec(property(get=__get__heightMapWidth, put=__set__heightMapWidth)) int32_t  _heightMapWidth;

/// @brief Field _heightMapHeight offset 0x20
 __declspec(property(get=__get__heightMapHeight, put=__set__heightMapHeight)) int32_t  _heightMapHeight;

/// @brief Field _strength offset 0x24
 __declspec(property(get=__get__strength, put=__set__strength)) float_t  _strength;

/// @brief Field _diffuseTexturePath offset 0x28
 __declspec(property(get=__get__diffuseTexturePath, put=__set__diffuseTexturePath)) ::StringW  _diffuseTexturePath;

/// @brief Field _maskTexturePath offset 0x30
 __declspec(property(get=__get__maskTexturePath, put=__set__maskTexturePath)) ::StringW  _maskTexturePath;

/// @brief Field _metallic offset 0x38
 __declspec(property(get=__get__metallic, put=__set__metallic)) float_t  _metallic;

/// @brief Field _normalTexturePath offset 0x40
 __declspec(property(get=__get__normalTexturePath, put=__set__normalTexturePath)) ::StringW  _normalTexturePath;

/// @brief Field _normalScale offset 0x48
 __declspec(property(get=__get__normalScale, put=__set__normalScale)) float_t  _normalScale;

/// @brief Field _smoothness offset 0x4c
 __declspec(property(get=__get__smoothness, put=__set__smoothness)) float_t  _smoothness;

/// @brief Field _specularColor offset 0x50
 __declspec(property(get=__get__specularColor, put=__set__specularColor)) ::UnityEngine::Color  _specularColor;

/// @brief Field _tileSize offset 0x60
 __declspec(property(get=__get__tileSize, put=__set__tileSize)) ::UnityEngine::Vector2  _tileSize;

/// @brief Field _tileOffset offset 0x68
 __declspec(property(get=__get__tileOffset, put=__set__tileOffset)) ::UnityEngine::Vector2  _tileOffset;

/// @brief Field _uiExpanded offset 0x70
 __declspec(property(get=__get__uiExpanded, put=__set__uiExpanded)) bool  _uiExpanded;

/// @brief Field _tile offset 0x74
 __declspec(property(get=__get__tile, put=__set__tile)) int32_t  _tile;

/// @brief Field _normalizedHeights offset 0x78
 __declspec(property(get=__get__normalizedHeights, put=__set__normalizedHeights)) ::ArrayW<float_t,::Array<float_t>*>  _normalizedHeights;

/// @brief Field _minHeight offset 0x80
 __declspec(property(get=__get__minHeight, put=__set__minHeight)) float_t  _minHeight;

/// @brief Field _maxHeight offset 0x84
 __declspec(property(get=__get__maxHeight, put=__set__maxHeight)) float_t  _maxHeight;

/// @brief Field _heightRange offset 0x88
 __declspec(property(get=__get__heightRange, put=__set__heightRange)) float_t  _heightRange;

/// @brief Field _terrainSizeX offset 0x8c
 __declspec(property(get=__get__terrainSizeX, put=__set__terrainSizeX)) float_t  _terrainSizeX;

/// @brief Field _terrainSizeY offset 0x90
 __declspec(property(get=__get__terrainSizeY, put=__set__terrainSizeY)) float_t  _terrainSizeY;

/// @brief Field _position offset 0x94
 __declspec(property(get=__get__position, put=__set__position)) ::UnityEngine::Vector3  _position;

/// @brief Field _minBounds offset 0xa0
 __declspec(property(get=__get__minBounds, put=__set__minBounds)) ::UnityEngine::Vector3  _minBounds;

/// @brief Field _maxBounds offset 0xac
 __declspec(property(get=__get__maxBounds, put=__set__maxBounds)) ::UnityEngine::Vector3  _maxBounds;

/// @brief Field _center offset 0xb8
 __declspec(property(get=__get__center, put=__set__center)) ::UnityEngine::Vector3  _center;

/// @brief Field _layerPath offset 0xc8
 __declspec(property(get=__get__layerPath, put=__set__layerPath)) ::StringW  _layerPath;

/// @brief Field _hasLayerAttributes offset 0xd0
 __declspec(property(get=__get__hasLayerAttributes, put=__set__hasLayerAttributes)) bool  _hasLayerAttributes;

/// @brief Field _layerType offset 0xd4
 __declspec(property(get=__get__layerType, put=__set__layerType)) ::HoudiniEngineUnity::HFLayerType  _layerType;

constexpr void __set__layerName(::StringW  value) ;

constexpr ::StringW& __get__layerName() ;

constexpr ::StringW const& __get__layerName() const;

constexpr void __set__partID(int32_t  value) ;

constexpr int32_t& __get__partID() ;

constexpr int32_t const& __get__partID() const;

constexpr void __set__heightMapWidth(int32_t  value) ;

constexpr int32_t& __get__heightMapWidth() ;

constexpr int32_t const& __get__heightMapWidth() const;

constexpr void __set__heightMapHeight(int32_t  value) ;

constexpr int32_t& __get__heightMapHeight() ;

constexpr int32_t const& __get__heightMapHeight() const;

constexpr void __set__strength(float_t  value) ;

constexpr float_t& __get__strength() ;

constexpr float_t const& __get__strength() const;

constexpr void __set__diffuseTexturePath(::StringW  value) ;

constexpr ::StringW& __get__diffuseTexturePath() ;

constexpr ::StringW const& __get__diffuseTexturePath() const;

constexpr void __set__maskTexturePath(::StringW  value) ;

constexpr ::StringW& __get__maskTexturePath() ;

constexpr ::StringW const& __get__maskTexturePath() const;

constexpr void __set__metallic(float_t  value) ;

constexpr float_t& __get__metallic() ;

constexpr float_t const& __get__metallic() const;

constexpr void __set__normalTexturePath(::StringW  value) ;

constexpr ::StringW& __get__normalTexturePath() ;

constexpr ::StringW const& __get__normalTexturePath() const;

constexpr void __set__normalScale(float_t  value) ;

constexpr float_t& __get__normalScale() ;

constexpr float_t const& __get__normalScale() const;

constexpr void __set__smoothness(float_t  value) ;

constexpr float_t& __get__smoothness() ;

constexpr float_t const& __get__smoothness() const;

constexpr void __set__specularColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__specularColor() ;

constexpr ::UnityEngine::Color const& __get__specularColor() const;

constexpr void __set__tileSize(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__tileSize() ;

constexpr ::UnityEngine::Vector2 const& __get__tileSize() const;

constexpr void __set__tileOffset(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__tileOffset() ;

constexpr ::UnityEngine::Vector2 const& __get__tileOffset() const;

constexpr void __set__uiExpanded(bool  value) ;

constexpr bool& __get__uiExpanded() ;

constexpr bool const& __get__uiExpanded() const;

constexpr void __set__tile(int32_t  value) ;

constexpr int32_t& __get__tile() ;

constexpr int32_t const& __get__tile() const;

constexpr void __set__normalizedHeights(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get__normalizedHeights() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get__normalizedHeights() const;

constexpr void __set__minHeight(float_t  value) ;

constexpr float_t& __get__minHeight() ;

constexpr float_t const& __get__minHeight() const;

constexpr void __set__maxHeight(float_t  value) ;

constexpr float_t& __get__maxHeight() ;

constexpr float_t const& __get__maxHeight() const;

constexpr void __set__heightRange(float_t  value) ;

constexpr float_t& __get__heightRange() ;

constexpr float_t const& __get__heightRange() const;

constexpr void __set__terrainSizeX(float_t  value) ;

constexpr float_t& __get__terrainSizeX() ;

constexpr float_t const& __get__terrainSizeX() const;

constexpr void __set__terrainSizeY(float_t  value) ;

constexpr float_t& __get__terrainSizeY() ;

constexpr float_t const& __get__terrainSizeY() const;

constexpr void __set__position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__position() ;

constexpr ::UnityEngine::Vector3 const& __get__position() const;

constexpr void __set__minBounds(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__minBounds() ;

constexpr ::UnityEngine::Vector3 const& __get__minBounds() const;

constexpr void __set__maxBounds(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__maxBounds() ;

constexpr ::UnityEngine::Vector3 const& __get__maxBounds() const;

constexpr void __set__center(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__center() ;

constexpr ::UnityEngine::Vector3 const& __get__center() const;

constexpr void __set__layerPath(::StringW  value) ;

constexpr ::StringW& __get__layerPath() ;

constexpr ::StringW const& __get__layerPath() const;

constexpr void __set__hasLayerAttributes(bool  value) ;

constexpr bool& __get__hasLayerAttributes() ;

constexpr bool const& __get__hasLayerAttributes() const;

constexpr void __set__layerType(::HoudiniEngineUnity::HFLayerType  value) ;

constexpr ::HoudiniEngineUnity::HFLayerType& __get__layerType() ;

constexpr ::HoudiniEngineUnity::HFLayerType const& __get__layerType() const;

static inline ::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer* New_ctor() ;

/// @brief Method .ctor addr 0x21abd18 size 0x80 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferVolumeLayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_LoadBufferVolumeLayer(HEU_LoadBufferVolumeLayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferVolumeLayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_LoadBufferVolumeLayer(HEU_LoadBufferVolumeLayer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_LoadBufferVolumeLayer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, 0xd8>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*, "HoudiniEngineUnity", "HEU_LoadBufferVolumeLayer");
