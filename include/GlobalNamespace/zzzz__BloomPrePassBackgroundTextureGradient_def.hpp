#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundTextureGradient)
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Texture2D;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundTextureGradient;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundTextureGradient);
// Type: ::BloomPrePassBackgroundTextureGradient
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14478))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14468))
// CS Name: ::BloomPrePassBackgroundTextureGradient*
class CORDL_TYPE BloomPrePassBackgroundTextureGradient : public ::GlobalNamespace::BloomPrePassNonLightPass {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::BloomPrePassNonLightPass)]{};

/// @brief Field kUseToneMappingKeyword offset 0x0
static constexpr ::ConstString  kUseToneMappingKeyword{u"USE_TONE_MAPPING"};

/// @brief Field kSkyGradientShaderName offset 0x0
static constexpr ::ConstString  kSkyGradientShaderName{u"Hidden/SkyGradient"};

/// @brief Field kTextureWidth offset 0x0
static constexpr int32_t  kTextureWidth{static_cast<int32_t>(0x80)};

/// @brief Field _tintColor offset 0x20
 __declspec(property(get=__get__tintColor, put=__set__tintColor)) ::UnityEngine::Color  _tintColor;

/// @brief Field _texture offset 0x30
 __declspec(property(get=__get__texture, put=__set__texture)) ::UnityEngine::Texture2D*  _texture;

/// @brief Field _material offset 0x38
 __declspec(property(get=__get__material, put=__set__material)) ::UnityEngine::Material*  _material;

 __declspec(property(get=get_tintColor, put=set_tintColor)) ::UnityEngine::Color  tintColor;

constexpr void __set__tintColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__tintColor() ;

constexpr ::UnityEngine::Color const& __get__tintColor() const;

static inline void setStaticF__gradientTexID(int32_t  value) ;

static inline int32_t getStaticF__gradientTexID() ;

static inline void setStaticF__inverseProjectionMatrixID(int32_t  value) ;

static inline int32_t getStaticF__inverseProjectionMatrixID() ;

static inline void setStaticF__cameraToWorldMatrixID(int32_t  value) ;

static inline int32_t getStaticF__cameraToWorldMatrixID() ;

static inline void setStaticF__colorID(int32_t  value) ;

static inline int32_t getStaticF__colorID() ;

constexpr void __set__texture(::UnityEngine::Texture2D*  value) ;

constexpr ::UnityEngine::Texture2D* __get__texture() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> __get__texture() const;

constexpr void __set__material(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__material() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__material() const;

/// @brief Method get_tintColor addr 0x210624c size 0xc virtual false final false
inline ::UnityEngine::Color get_tintColor() ;

/// @brief Method set_tintColor addr 0x2106258 size 0xc virtual false final false
inline void set_tintColor(::UnityEngine::Color  value) ;

/// @brief Method InitIfNeeded addr 0x2106264 size 0x22c virtual false final false
inline void InitIfNeeded() ;

/// @brief Method Start addr 0x2106490 size 0x4 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x2106520 size 0x24 virtual false final false
inline void OnDestroy() ;

/// @brief Method UpdatePixels addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdatePixels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  pixels, int32_t  numberOfPixels) ;

/// @brief Method OnValidate addr 0x2106544 size 0xa8 virtual true final false
inline void OnValidate() ;

/// @brief Method UpdateGradientTexture addr 0x2106494 size 0x8c virtual false final false
inline void UpdateGradientTexture() ;

/// @brief Method Render addr 0x2106618 size 0x1b8 virtual true final false
inline void Render(::UnityEngine::RenderTexture*  dest, ::UnityEngine::Matrix4x4  viewMatrix, ::UnityEngine::Matrix4x4  projectionMatrix) ;

static inline ::GlobalNamespace::BloomPrePassBackgroundTextureGradient* New_ctor() ;

/// @brief Method .ctor addr 0x21045e8 size 0x60 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundTextureGradient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassBackgroundTextureGradient(BloomPrePassBackgroundTextureGradient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundTextureGradient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassBackgroundTextureGradient(BloomPrePassBackgroundTextureGradient const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomPrePassBackgroundTextureGradient()  = default;
public:


// Fields

// Static field _gradientTexID

// Static field _inverseProjectionMatrixID

// Static field _cameraToWorldMatrixID

// Static field _colorID


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundTextureGradient, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundTextureGradient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundTextureGradient*, "", "BloomPrePassBackgroundTextureGradient");
