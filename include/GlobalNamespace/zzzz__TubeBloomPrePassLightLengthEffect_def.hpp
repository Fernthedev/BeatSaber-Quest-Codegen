#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TubeBloomPrePassLightLengthEffect)
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
// Forward declare root types
namespace GlobalNamespace {
class TubeBloomPrePassLightLengthEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TubeBloomPrePassLightLengthEffect);
// Type: ::TubeBloomPrePassLightLengthEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4909))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4916))
// CS Name: ::TubeBloomPrePassLightLengthEffect*
class CORDL_TYPE TubeBloomPrePassLightLengthEffect : public ::GlobalNamespace::FloatFxGroupEffectTarget {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::FloatFxGroupEffectTarget)]{};

/// @brief Field _tubeBloomPrePassLight offset 0x18
 __declspec(property(get=__get__tubeBloomPrePassLight, put=__set__tubeBloomPrePassLight)) ::GlobalNamespace::TubeBloomPrePassLight*  _tubeBloomPrePassLight;

constexpr void __set__tubeBloomPrePassLight(::GlobalNamespace::TubeBloomPrePassLight*  value) ;

constexpr ::GlobalNamespace::TubeBloomPrePassLight* __get__tubeBloomPrePassLight() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> __get__tubeBloomPrePassLight() const;

/// @brief Method SetValue addr 0x23a71f4 size 0x2c virtual true final false
inline void SetValue(float_t  value) ;

/// @brief Method TriggerValue addr 0x23a7220 size 0x2c virtual true final false
inline void TriggerValue(float_t  value) ;

static inline ::GlobalNamespace::TubeBloomPrePassLightLengthEffect* New_ctor() ;

/// @brief Method .ctor addr 0x23a724c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightLengthEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TubeBloomPrePassLightLengthEffect(TubeBloomPrePassLightLengthEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightLengthEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TubeBloomPrePassLightLengthEffect(TubeBloomPrePassLightLengthEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TubeBloomPrePassLightLengthEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeBloomPrePassLightLengthEffect, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeBloomPrePassLightLengthEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeBloomPrePassLightLengthEffect*, "", "TubeBloomPrePassLightLengthEffect");
