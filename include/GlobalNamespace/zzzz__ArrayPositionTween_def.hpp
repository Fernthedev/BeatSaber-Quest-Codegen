#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ArrayPositionTween)
namespace GlobalNamespace {
class TimelineArrayReference;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
template<typename T>
struct ExposedReference_1;
}
namespace GlobalNamespace {
class CustomTweenBehaviour;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace GlobalNamespace {
class ArrayPositionTween;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ArrayPositionTween);
// Type: ::ArrayPositionTween
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10422))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6002))
// CS Name: ::ArrayPositionTween*
class CORDL_TYPE ArrayPositionTween : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::Playables::PlayableAsset)]{};

/// @brief Field arrayReference offset 0x18
 __declspec(property(get=__get_arrayReference, put=__set_arrayReference)) ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*>  arrayReference;

/// @brief Field elementDelay offset 0x28
 __declspec(property(get=__get_elementDelay, put=__set_elementDelay)) float_t  elementDelay;

/// @brief Field template offset 0x30
 __declspec(property(get=__get__cordl_template, put=__set__cordl_template)) ::GlobalNamespace::CustomTweenBehaviour*  _cordl_template;

 __declspec(property(get=get_clipCaps)) ::UnityEngine::Timeline::ClipCaps  clipCaps;

/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr operator  ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

constexpr void __set_arrayReference(::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*>  value) ;

constexpr ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*>& __get_arrayReference() ;

constexpr ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*> const& __get_arrayReference() const;

constexpr void __set_elementDelay(float_t  value) ;

constexpr float_t& __get_elementDelay() ;

constexpr float_t const& __get_elementDelay() const;

constexpr void __set__cordl_template(::GlobalNamespace::CustomTweenBehaviour*  value) ;

constexpr ::GlobalNamespace::CustomTweenBehaviour* __get__cordl_template() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CustomTweenBehaviour*> __get__cordl_template() const;

/// @brief Method get_clipCaps addr 0x2315044 size 0x8 virtual true final true
inline ::UnityEngine::Timeline::ClipCaps get_clipCaps() ;

/// @brief Method CreatePlayable addr 0x231504c size 0x144 virtual true final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go) ;

static inline ::GlobalNamespace::ArrayPositionTween* New_ctor() ;

/// @brief Method .ctor addr 0x2315190 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPositionTween", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayPositionTween(ArrayPositionTween && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPositionTween", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayPositionTween(ArrayPositionTween const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ArrayPositionTween()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ArrayPositionTween, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ArrayPositionTween);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ArrayPositionTween*, "", "ArrayPositionTween");
