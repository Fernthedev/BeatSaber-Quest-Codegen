#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
CORDL_MODULE_EXPORT(SinglePositionTween)
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine {
template<typename T>
struct ExposedReference_1;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class CustomTweenBehaviour;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
// Forward declare root types
namespace GlobalNamespace {
class SinglePositionTween;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SinglePositionTween);
// Type: ::SinglePositionTween
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10422))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6017))
// CS Name: ::SinglePositionTween*
class CORDL_TYPE SinglePositionTween : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Playables::PlayableAsset)]{};

/// @brief Field transformReference offset 0x18
 __declspec(property(get=__get_transformReference, put=__set_transformReference)) ::UnityEngine::ExposedReference_1<::UnityEngine::Transform*>  transformReference;

/// @brief Field template offset 0x28
 __declspec(property(get=__get__cordl_template, put=__set__cordl_template)) ::GlobalNamespace::CustomTweenBehaviour*  _cordl_template;

 __declspec(property(get=get_clipCaps)) ::UnityEngine::Timeline::ClipCaps  clipCaps;

/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr operator  ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

constexpr void __set_transformReference(::UnityEngine::ExposedReference_1<::UnityEngine::Transform*>  value) ;

constexpr ::UnityEngine::ExposedReference_1<::UnityEngine::Transform*>& __get_transformReference() ;

constexpr ::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> const& __get_transformReference() const;

constexpr void __set__cordl_template(::GlobalNamespace::CustomTweenBehaviour*  value) ;

constexpr ::GlobalNamespace::CustomTweenBehaviour* __get__cordl_template() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CustomTweenBehaviour*> __get__cordl_template() const;

/// @brief Method get_clipCaps addr 0x2317b2c size 0x8 virtual true final true
inline ::UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method CreatePlayable addr 0x2317b34 size 0x1c4 virtual true final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go) ;

static inline ::GlobalNamespace::SinglePositionTween* New_ctor() ;

/// @brief Method .ctor addr 0x2317cf8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SinglePositionTween", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SinglePositionTween(SinglePositionTween && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SinglePositionTween", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SinglePositionTween(SinglePositionTween const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SinglePositionTween()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SinglePositionTween, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SinglePositionTween);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SinglePositionTween*, "", "SinglePositionTween");
