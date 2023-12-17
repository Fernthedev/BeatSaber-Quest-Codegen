#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AnimationPlayableGraphExtensions)
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Forward declare root types
namespace UnityEngine::Animations {
class AnimationPlayableGraphExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Animations::AnimationPlayableGraphExtensions);
// Type: UnityEngine.Animations::AnimationPlayableGraphExtensions
namespace UnityEngine::Animations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14892))
// CS Name: ::UnityEngine.Animations::AnimationPlayableGraphExtensions*
class CORDL_TYPE AnimationPlayableGraphExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method InternalCreateAnimationOutput addr 0x2c9765c size 0x54 virtual false final false
static inline bool InternalCreateAnimationOutput(ByRef<::UnityEngine::Playables::PlayableGraph>  graph, ::StringW  name, ByRef<::UnityEngine::Playables::PlayableOutputHandle>  handle) ;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableGraphExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationPlayableGraphExtensions(AnimationPlayableGraphExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableGraphExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationPlayableGraphExtensions(AnimationPlayableGraphExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AnimationPlayableGraphExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationPlayableGraphExtensions, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Animations
NEED_NO_BOX(::UnityEngine::Animations::AnimationPlayableGraphExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationPlayableGraphExtensions*, "UnityEngine.Animations", "AnimationPlayableGraphExtensions");
