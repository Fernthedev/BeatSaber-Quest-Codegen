#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialLightWithId)
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialLightWithId);
// Type: ::MaterialLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14545))
// CS Name: ::MaterialLightWithId*
class CORDL_TYPE MaterialLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::GlobalNamespace::LightWithIdMonoBehaviour)]{};

/// @brief Field _meshRenderer offset 0x30
 __declspec(property(get=__get__meshRenderer, put=__set__meshRenderer)) ::UnityEngine::MeshRenderer*  _meshRenderer;

/// @brief Field _setAlphaOnly offset 0x38
 __declspec(property(get=__get__setAlphaOnly, put=__set__setAlphaOnly)) bool  _setAlphaOnly;

/// @brief Field _alphaIntoColor offset 0x39
 __declspec(property(get=__get__alphaIntoColor, put=__set__alphaIntoColor)) bool  _alphaIntoColor;

/// @brief Field _setColorOnly offset 0x3a
 __declspec(property(get=__get__setColorOnly, put=__set__setColorOnly)) bool  _setColorOnly;

/// @brief Field _colorProperty offset 0x40
 __declspec(property(get=__get__colorProperty, put=__set__colorProperty)) ::StringW  _colorProperty;

/// @brief Field _alphaIntensity offset 0x48
 __declspec(property(get=__get__alphaIntensity, put=__set__alphaIntensity)) float_t  _alphaIntensity;

/// @brief Field _multiplyColorWithAlpha offset 0x4c
 __declspec(property(get=__get__multiplyColorWithAlpha, put=__set__multiplyColorWithAlpha)) bool  _multiplyColorWithAlpha;

/// @brief Field _multiplyColor offset 0x4d
 __declspec(property(get=__get__multiplyColor, put=__set__multiplyColor)) bool  _multiplyColor;

/// @brief Field _colorMultiplier offset 0x50
 __declspec(property(get=__get__colorMultiplier, put=__set__colorMultiplier)) float_t  _colorMultiplier;

/// @brief Field _color offset 0x54
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

/// @brief Field _alpha offset 0x64
 __declspec(property(get=__get__alpha, put=__set__alpha)) float_t  _alpha;

/// @brief Field _propertyId offset 0x68
 __declspec(property(get=__get__propertyId, put=__set__propertyId)) int32_t  _propertyId;

 __declspec(property(get=get_color)) ::UnityEngine::Color  color;

constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer*  value) ;

constexpr ::UnityEngine::MeshRenderer* __get__meshRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> __get__meshRenderer() const;

constexpr void __set__setAlphaOnly(bool  value) ;

constexpr bool& __get__setAlphaOnly() ;

constexpr bool const& __get__setAlphaOnly() const;

constexpr void __set__alphaIntoColor(bool  value) ;

constexpr bool& __get__alphaIntoColor() ;

constexpr bool const& __get__alphaIntoColor() const;

constexpr void __set__setColorOnly(bool  value) ;

constexpr bool& __get__setColorOnly() ;

constexpr bool const& __get__setColorOnly() const;

constexpr void __set__colorProperty(::StringW  value) ;

constexpr ::StringW& __get__colorProperty() ;

constexpr ::StringW const& __get__colorProperty() const;

constexpr void __set__alphaIntensity(float_t  value) ;

constexpr float_t& __get__alphaIntensity() ;

constexpr float_t const& __get__alphaIntensity() const;

constexpr void __set__multiplyColorWithAlpha(bool  value) ;

constexpr bool& __get__multiplyColorWithAlpha() ;

constexpr bool const& __get__multiplyColorWithAlpha() const;

constexpr void __set__multiplyColor(bool  value) ;

constexpr bool& __get__multiplyColor() ;

constexpr bool const& __get__multiplyColor() const;

constexpr void __set__colorMultiplier(float_t  value) ;

constexpr float_t& __get__colorMultiplier() ;

constexpr float_t const& __get__colorMultiplier() const;

static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock() ;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

constexpr void __set__alpha(float_t  value) ;

constexpr float_t& __get__alpha() ;

constexpr float_t const& __get__alpha() const;

constexpr void __set__propertyId(int32_t  value) ;

constexpr int32_t& __get__propertyId() ;

constexpr int32_t const& __get__propertyId() const;

/// @brief Method get_color addr 0x21119d8 size 0xc virtual false final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method Awake addr 0x21119e4 size 0x80 virtual false final false
inline void Awake() ;

/// @brief Method ColorWasSet addr 0x2111a64 size 0x188 virtual true final false
inline void ColorWasSet(::UnityEngine::Color  color) ;

static inline ::GlobalNamespace::MaterialLightWithId* New_ctor() ;

/// @brief Method .ctor addr 0x2111bec size 0x64 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MaterialLightWithId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialLightWithId(MaterialLightWithId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialLightWithId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialLightWithId(MaterialLightWithId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MaterialLightWithId()  = default;
public:


// Fields

// Static field _materialPropertyBlock


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialLightWithId, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialLightWithId*, "", "MaterialLightWithId");
