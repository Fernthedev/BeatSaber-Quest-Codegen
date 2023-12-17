#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InstancedMaterialLightWithId)
namespace GlobalNamespace {
class MaterialPropertyBlockColorSetter;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class InstancedMaterialLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InstancedMaterialLightWithId);
// Type: ::InstancedMaterialLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14531))
// CS Name: ::InstancedMaterialLightWithId*
class CORDL_TYPE InstancedMaterialLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::GlobalNamespace::LightWithIdMonoBehaviour)]{};

/// @brief Field _materialPropertyBlockColorSetter offset 0x30
 __declspec(property(get=__get__materialPropertyBlockColorSetter, put=__set__materialPropertyBlockColorSetter)) ::GlobalNamespace::MaterialPropertyBlockColorSetter*  _materialPropertyBlockColorSetter;

/// @brief Field _setColorOnly offset 0x38
 __declspec(property(get=__get__setColorOnly, put=__set__setColorOnly)) bool  _setColorOnly;

/// @brief Field _intensity offset 0x3c
 __declspec(property(get=__get__intensity, put=__set__intensity)) float_t  _intensity;

/// @brief Field _minAlpha offset 0x40
 __declspec(property(get=__get__minAlpha, put=__set__minAlpha)) float_t  _minAlpha;

/// @brief Field _hdr offset 0x44
 __declspec(property(get=__get__hdr, put=__set__hdr)) bool  _hdr;

/// @brief Field _color offset 0x48
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

/// @brief Field _startColorWasSet offset 0x58
 __declspec(property(get=__get__startColorWasSet, put=__set__startColorWasSet)) bool  _startColorWasSet;

constexpr void __set__materialPropertyBlockColorSetter(::GlobalNamespace::MaterialPropertyBlockColorSetter*  value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockColorSetter* __get__materialPropertyBlockColorSetter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockColorSetter*> __get__materialPropertyBlockColorSetter() const;

constexpr void __set__setColorOnly(bool  value) ;

constexpr bool& __get__setColorOnly() ;

constexpr bool const& __get__setColorOnly() const;

constexpr void __set__intensity(float_t  value) ;

constexpr float_t& __get__intensity() ;

constexpr float_t const& __get__intensity() const;

constexpr void __set__minAlpha(float_t  value) ;

constexpr float_t& __get__minAlpha() ;

constexpr float_t const& __get__minAlpha() const;

constexpr void __set__hdr(bool  value) ;

constexpr bool& __get__hdr() ;

constexpr bool const& __get__hdr() const;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

constexpr void __set__startColorWasSet(bool  value) ;

constexpr bool& __get__startColorWasSet() ;

constexpr bool const& __get__startColorWasSet() const;

/// @brief Method ColorWasSet addr 0x210f27c size 0x80 virtual true final false
inline void ColorWasSet(::UnityEngine::Color  newColor) ;

/// @brief Method AddNecessaryComponents addr 0x210f2fc size 0x104 virtual false final false
inline void AddNecessaryComponents() ;

static inline ::GlobalNamespace::InstancedMaterialLightWithId* New_ctor() ;

/// @brief Method .ctor addr 0x210f400 size 0x18 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InstancedMaterialLightWithId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstancedMaterialLightWithId(InstancedMaterialLightWithId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstancedMaterialLightWithId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstancedMaterialLightWithId(InstancedMaterialLightWithId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InstancedMaterialLightWithId()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InstancedMaterialLightWithId, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InstancedMaterialLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InstancedMaterialLightWithId*, "", "InstancedMaterialLightWithId");
