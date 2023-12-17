#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
CORDL_MODULE_EXPORT(DirectionalLightWithIds)
namespace GlobalNamespace {
class DirectionalLight;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class DirectionalLightWithIds;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DirectionalLightWithIds);
// Type: ::DirectionalLightWithIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14552))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14524))
// CS Name: ::DirectionalLightWithIds*
class CORDL_TYPE DirectionalLightWithIds : public ::GlobalNamespace::RuntimeLightWithIds {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::GlobalNamespace::RuntimeLightWithIds)]{};

/// @brief Field _directionalLight offset 0x48
 __declspec(property(get=__get__directionalLight, put=__set__directionalLight)) ::GlobalNamespace::DirectionalLight*  _directionalLight;

/// @brief Field _setIntensityOnly offset 0x50
 __declspec(property(get=__get__setIntensityOnly, put=__set__setIntensityOnly)) bool  _setIntensityOnly;

/// @brief Field _defaultColor offset 0x54
 __declspec(property(get=__get__defaultColor, put=__set__defaultColor)) ::UnityEngine::Color  _defaultColor;

constexpr void __set__directionalLight(::GlobalNamespace::DirectionalLight*  value) ;

constexpr ::GlobalNamespace::DirectionalLight* __get__directionalLight() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DirectionalLight*> __get__directionalLight() const;

constexpr void __set__setIntensityOnly(bool  value) ;

constexpr bool& __get__setIntensityOnly() ;

constexpr bool const& __get__setIntensityOnly() const;

constexpr void __set__defaultColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__defaultColor() ;

constexpr ::UnityEngine::Color const& __get__defaultColor() const;

/// @brief Method ColorWasSet addr 0x210f0e4 size 0x44 virtual true final false
inline void ColorWasSet(::UnityEngine::Color  color) ;

static inline ::GlobalNamespace::DirectionalLightWithIds* New_ctor() ;

/// @brief Method .ctor addr 0x210f128 size 0x24 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithIds", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectionalLightWithIds(DirectionalLightWithIds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithIds", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectionalLightWithIds(DirectionalLightWithIds const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DirectionalLightWithIds()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DirectionalLightWithIds, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DirectionalLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DirectionalLightWithIds*, "", "DirectionalLightWithIds");
