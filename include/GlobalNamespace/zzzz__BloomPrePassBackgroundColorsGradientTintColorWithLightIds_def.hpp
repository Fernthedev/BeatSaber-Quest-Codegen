#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassBackgroundColorsGradientTintColorWithLightIds)
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradientTintColorWithLightIds;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds);
// Type: ::BloomPrePassBackgroundColorsGradientTintColorWithLightIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14517))
// CS Name: ::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*
class CORDL_TYPE BloomPrePassBackgroundColorsGradientTintColorWithLightIds : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::LightWithIdMonoBehaviour)]{};

/// @brief Field _bloomPrePassBackgroundColorsGradient offset 0x30
 __declspec(property(get=__get__bloomPrePassBackgroundColorsGradient, put=__set__bloomPrePassBackgroundColorsGradient)) ::GlobalNamespace::BloomPrePassBackgroundColorsGradient*  _bloomPrePassBackgroundColorsGradient;

constexpr void __set__bloomPrePassBackgroundColorsGradient(::GlobalNamespace::BloomPrePassBackgroundColorsGradient*  value) ;

constexpr ::GlobalNamespace::BloomPrePassBackgroundColorsGradient* __get__bloomPrePassBackgroundColorsGradient() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassBackgroundColorsGradient*> __get__bloomPrePassBackgroundColorsGradient() const;

/// @brief Method ColorWasSet addr 0x210e958 size 0x20 virtual true final false
inline void ColorWasSet(::UnityEngine::Color  color) ;

static inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds* New_ctor() ;

/// @brief Method .ctor addr 0x210e978 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientTintColorWithLightIds", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassBackgroundColorsGradientTintColorWithLightIds(BloomPrePassBackgroundColorsGradientTintColorWithLightIds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientTintColorWithLightIds", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassBackgroundColorsGradientTintColorWithLightIds(BloomPrePassBackgroundColorsGradientTintColorWithLightIds const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomPrePassBackgroundColorsGradientTintColorWithLightIds()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*, "", "BloomPrePassBackgroundColorsGradientTintColorWithLightIds");
