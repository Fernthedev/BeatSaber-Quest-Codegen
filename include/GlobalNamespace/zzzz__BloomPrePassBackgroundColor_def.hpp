#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundColor)
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundColor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundColor);
// Type: ::BloomPrePassBackgroundColor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14478))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14456))
// CS Name: ::BloomPrePassBackgroundColor*
class CORDL_TYPE BloomPrePassBackgroundColor : public ::GlobalNamespace::BloomPrePassNonLightPass {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::GlobalNamespace::BloomPrePassNonLightPass)]{};

/// @brief Field _intensity offset 0x20
 __declspec(property(get=__get__intensity, put=__set__intensity)) float_t  _intensity;

/// @brief Field _minAlpha offset 0x24
 __declspec(property(get=__get__minAlpha, put=__set__minAlpha)) float_t  _minAlpha;

/// @brief Field _grayscaleFactor offset 0x28
 __declspec(property(get=__get__grayscaleFactor, put=__set__grayscaleFactor)) float_t  _grayscaleFactor;

/// @brief Field _shader offset 0x30
 __declspec(property(get=__get__shader, put=__set__shader)) ::UnityEngine::Shader*  _shader;

/// @brief Field _color offset 0x38
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

 __declspec(property(get=get_color, put=set_color)) ::UnityEngine::Color  color;

 __declspec(property(get=get_bgColor)) ::UnityEngine::Color  bgColor;

constexpr void __set__intensity(float_t  value) ;

constexpr float_t& __get__intensity() ;

constexpr float_t const& __get__intensity() const;

constexpr void __set__minAlpha(float_t  value) ;

constexpr float_t& __get__minAlpha() ;

constexpr float_t const& __get__minAlpha() const;

constexpr void __set__grayscaleFactor(float_t  value) ;

constexpr float_t& __get__grayscaleFactor() ;

constexpr float_t const& __get__grayscaleFactor() const;

constexpr void __set__shader(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get__shader() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get__shader() const;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

static inline void setStaticF__colorID(int32_t  value) ;

static inline int32_t getStaticF__colorID() ;

static inline void setStaticF__material(::UnityEngine::Material*  value) ;

static inline ::UnityEngine::Material* getStaticF__material() ;

static inline void setStaticF__initialized(bool  value) ;

static inline bool getStaticF__initialized() ;

/// @brief Method get_color addr 0x2103dc4 size 0xc virtual false final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x2103dd0 size 0xc virtual false final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method get_bgColor addr 0x2103ddc size 0x90 virtual false final false
inline ::UnityEngine::Color get_bgColor() ;

/// @brief Method InitIfNeeded addr 0x2103e6c size 0x184 virtual false final false
inline void InitIfNeeded() ;

/// @brief Method Render addr 0x2103ff0 size 0xd4 virtual true final false
inline void Render(::UnityEngine::RenderTexture*  dest, ::UnityEngine::Matrix4x4  viewMatrix, ::UnityEngine::Matrix4x4  projectionMatrix) ;

static inline ::GlobalNamespace::BloomPrePassBackgroundColor* New_ctor() ;

/// @brief Method .ctor addr 0x21040c4 size 0x6c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassBackgroundColor(BloomPrePassBackgroundColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassBackgroundColor(BloomPrePassBackgroundColor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomPrePassBackgroundColor()  = default;
public:


// Fields

// Static field _colorID

// Static field _material

// Static field _initialized


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColor, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColor*, "", "BloomPrePassBackgroundColor");
