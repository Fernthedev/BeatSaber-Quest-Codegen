#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
CORDL_MODULE_EXPORT(AvatarColorAsset)
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace GlobalNamespace {
class AvatarColorBehaviour;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarColorAsset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarColorAsset);
// Type: ::AvatarColorAsset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10422))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6003))
// CS Name: ::AvatarColorAsset*
class CORDL_TYPE AvatarColorAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::Playables::PlayableAsset)]{};

/// @brief Field _template offset 0x18
 __declspec(property(get=__get__template, put=__set__template)) ::GlobalNamespace::AvatarColorBehaviour*  _template;

 __declspec(property(get=get_clipCaps)) ::UnityEngine::Timeline::ClipCaps  clipCaps;

/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr operator  ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

constexpr void __set__template(::GlobalNamespace::AvatarColorBehaviour*  value) ;

constexpr ::GlobalNamespace::AvatarColorBehaviour* __get__template() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarColorBehaviour*> __get__template() const;

/// @brief Method get_clipCaps addr 0x2315198 size 0x8 virtual true final true
inline ::UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method CreatePlayable addr 0x23151a0 size 0xa8 virtual true final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go) ;

static inline ::GlobalNamespace::AvatarColorAsset* New_ctor() ;

/// @brief Method .ctor addr 0x2315248 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarColorAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarColorAsset(AvatarColorAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarColorAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarColorAsset(AvatarColorAsset const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarColorAsset()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarColorAsset, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarColorAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarColorAsset*, "", "AvatarColorAsset");
