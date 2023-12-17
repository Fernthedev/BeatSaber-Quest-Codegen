#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
CORDL_MODULE_EXPORT(BloomFogParamsAsset)
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class BloomFogParamsBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomFogParamsAsset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomFogParamsAsset);
// Type: ::BloomFogParamsAsset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10422))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6006))
// CS Name: ::BloomFogParamsAsset*
class CORDL_TYPE BloomFogParamsAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::Playables::PlayableAsset)]{};

/// @brief Field _template offset 0x18
 __declspec(property(get=__get__template, put=__set__template)) ::GlobalNamespace::BloomFogParamsBehaviour*  _template;

 __declspec(property(get=get_clipCaps)) ::UnityEngine::Timeline::ClipCaps  clipCaps;

/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr operator  ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

constexpr void __set__template(::GlobalNamespace::BloomFogParamsBehaviour*  value) ;

constexpr ::GlobalNamespace::BloomFogParamsBehaviour* __get__template() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogParamsBehaviour*> __get__template() const;

/// @brief Method get_clipCaps addr 0x23155b0 size 0x8 virtual true final true
inline ::UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method CreatePlayable addr 0x23155b8 size 0xa8 virtual true final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go) ;

static inline ::GlobalNamespace::BloomFogParamsAsset* New_ctor() ;

/// @brief Method .ctor addr 0x2315660 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomFogParamsAsset(BloomFogParamsAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomFogParamsAsset(BloomFogParamsAsset const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomFogParamsAsset()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFogParamsAsset, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomFogParamsAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogParamsAsset*, "", "BloomFogParamsAsset");
