#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
CORDL_MODULE_EXPORT(GhostEffectAsset)
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
template<typename T>
struct ExposedReference_1;
}
namespace GlobalNamespace {
class GhostEffectBehaviour;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace GlobalNamespace {
class TimelineArrayReference;
}
namespace GlobalNamespace {
struct __GhostEffectBehaviour__GhostEffectType;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostEffectAsset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GhostEffectAsset);
// Type: ::GhostEffectAsset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10422))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6013))
// CS Name: ::GhostEffectAsset*
class CORDL_TYPE GhostEffectAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::Playables::PlayableAsset)]{};

/// @brief Field _ghostEffectType offset 0x18
 __declspec(property(get=__get__ghostEffectType, put=__set__ghostEffectType)) ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType  _ghostEffectType;

/// @brief Field arrayReference offset 0x20
 __declspec(property(get=__get_arrayReference, put=__set_arrayReference)) ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*>  arrayReference;

/// @brief Field template offset 0x30
 __declspec(property(get=__get__cordl_template, put=__set__cordl_template)) ::GlobalNamespace::GhostEffectBehaviour*  _cordl_template;

 __declspec(property(get=get_clipCaps)) ::UnityEngine::Timeline::ClipCaps  clipCaps;

/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr operator  ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

constexpr void __set__ghostEffectType(::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType  value) ;

constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType& __get__ghostEffectType() ;

constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType const& __get__ghostEffectType() const;

constexpr void __set_arrayReference(::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*>  value) ;

constexpr ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*>& __get_arrayReference() ;

constexpr ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*> const& __get_arrayReference() const;

constexpr void __set__cordl_template(::GlobalNamespace::GhostEffectBehaviour*  value) ;

constexpr ::GlobalNamespace::GhostEffectBehaviour* __get__cordl_template() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GhostEffectBehaviour*> __get__cordl_template() const;

/// @brief Method get_clipCaps addr 0x2316234 size 0x8 virtual true final true
inline ::UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method CreatePlayable addr 0x231623c size 0x13c virtual true final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go) ;

static inline ::GlobalNamespace::GhostEffectAsset* New_ctor() ;

/// @brief Method .ctor addr 0x2316378 size 0x1008 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GhostEffectAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostEffectAsset(GhostEffectAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostEffectAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostEffectAsset(GhostEffectAsset const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GhostEffectAsset()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GhostEffectAsset, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GhostEffectAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GhostEffectAsset*, "", "GhostEffectAsset");
