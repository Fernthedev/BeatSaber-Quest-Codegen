#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MixedLightsColorSetterRuntimeLightWithIds)
namespace GlobalNamespace {
class MaterialPropertyBlockColorSetter;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MixedLightsColorSetterRuntimeLightWithIds;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds);
// Type: ::MixedLightsColorSetterRuntimeLightWithIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14552))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14547))
// CS Name: ::MixedLightsColorSetterRuntimeLightWithIds*
class CORDL_TYPE MixedLightsColorSetterRuntimeLightWithIds : public ::GlobalNamespace::RuntimeLightWithIds {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::GlobalNamespace::RuntimeLightWithIds)]{};

/// @brief Field _materialPropertyBlockColorSetter offset 0x48
 __declspec(property(get=__get__materialPropertyBlockColorSetter, put=__set__materialPropertyBlockColorSetter)) ::GlobalNamespace::MaterialPropertyBlockColorSetter*  _materialPropertyBlockColorSetter;

/// @brief Field _lightMultiplier offset 0x50
 __declspec(property(get=__get__lightMultiplier, put=__set__lightMultiplier)) float_t  _lightMultiplier;

constexpr void __set__materialPropertyBlockColorSetter(::GlobalNamespace::MaterialPropertyBlockColorSetter*  value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockColorSetter* __get__materialPropertyBlockColorSetter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockColorSetter*> __get__materialPropertyBlockColorSetter() const;

constexpr void __set__lightMultiplier(float_t  value) ;

constexpr float_t& __get__lightMultiplier() ;

constexpr float_t const& __get__lightMultiplier() const;

/// @brief Method ColorWasSet addr 0x2111e74 size 0x34 virtual true final false
inline void ColorWasSet(::UnityEngine::Color  color) ;

static inline ::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds* New_ctor() ;

/// @brief Method .ctor addr 0x2111ea8 size 0x20 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MixedLightsColorSetterRuntimeLightWithIds", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MixedLightsColorSetterRuntimeLightWithIds(MixedLightsColorSetterRuntimeLightWithIds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MixedLightsColorSetterRuntimeLightWithIds", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MixedLightsColorSetterRuntimeLightWithIds(MixedLightsColorSetterRuntimeLightWithIds const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MixedLightsColorSetterRuntimeLightWithIds()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*, "", "MixedLightsColorSetterRuntimeLightWithIds");
