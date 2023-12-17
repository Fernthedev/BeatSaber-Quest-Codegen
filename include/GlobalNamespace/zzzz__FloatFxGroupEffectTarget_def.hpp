#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatFxGroupEffectTarget)
// Forward declare root types
namespace GlobalNamespace {
class FloatFxGroupEffectTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxGroupEffectTarget);
// Type: ::FloatFxGroupEffectTarget
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4909))
// CS Name: ::FloatFxGroupEffectTarget*
class CORDL_TYPE FloatFxGroupEffectTarget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Method SetValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SetValue(float_t  value) ;

/// @brief Method TriggerValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline void TriggerValue(float_t  value) ;

static inline ::GlobalNamespace::FloatFxGroupEffectTarget* New_ctor() ;

/// @brief Method .ctor addr 0x23a57f8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffectTarget", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatFxGroupEffectTarget(FloatFxGroupEffectTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffectTarget", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatFxGroupEffectTarget(FloatFxGroupEffectTarget const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FloatFxGroupEffectTarget()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxGroupEffectTarget, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxGroupEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxGroupEffectTarget*, "", "FloatFxGroupEffectTarget");
