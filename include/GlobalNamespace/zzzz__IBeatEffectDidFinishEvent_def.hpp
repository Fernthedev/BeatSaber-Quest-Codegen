#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBeatEffectDidFinishEvent)
namespace GlobalNamespace {
class BeatEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatEffectDidFinishEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatEffectDidFinishEvent);
// Type: ::IBeatEffectDidFinishEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4835))
// CS Name: ::IBeatEffectDidFinishEvent*
class CORDL_TYPE IBeatEffectDidFinishEvent {
public:
// Declarations
/// @brief Method HandleBeatEffectDidFinish addr 0x0 size 0xffffffffffffffff virtual true final false
inline void HandleBeatEffectDidFinish(::GlobalNamespace::BeatEffect*  beatEffect) ;

// Ctor Parameters [CppParam { name: "", ty: "IBeatEffectDidFinishEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IBeatEffectDidFinishEvent(IBeatEffectDidFinishEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IBeatEffectDidFinishEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBeatEffectDidFinishEvent(IBeatEffectDidFinishEvent const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatEffectDidFinishEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatEffectDidFinishEvent*, "", "IBeatEffectDidFinishEvent");
