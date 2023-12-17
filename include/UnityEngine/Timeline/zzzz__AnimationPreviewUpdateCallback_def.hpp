#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AnimationPreviewUpdateCallback)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Animations {
struct AnimationPlayableOutput;
}
namespace UnityEngine::Timeline {
class ITimelineEvaluateCallback;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Animations {
class IAnimationWindowPreview;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AnimationPreviewUpdateCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::AnimationPreviewUpdateCallback);
// Type: UnityEngine.Timeline::AnimationPreviewUpdateCallback
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13836))
// CS Name: ::UnityEngine.Timeline::AnimationPreviewUpdateCallback*
class CORDL_TYPE AnimationPreviewUpdateCallback : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field m_Output offset 0x10
 __declspec(property(get=__get_m_Output, put=__set_m_Output)) ::UnityEngine::Animations::AnimationPlayableOutput  m_Output;

/// @brief Field m_Graph offset 0x20
 __declspec(property(get=__get_m_Graph, put=__set_m_Graph)) ::UnityEngine::Playables::PlayableGraph  m_Graph;

/// @brief Field m_PreviewComponents offset 0x30
 __declspec(property(get=__get_m_PreviewComponents, put=__set_m_PreviewComponents)) ::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>*  m_PreviewComponents;

/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineEvaluateCallback"
constexpr operator  ::UnityEngine::Timeline::ITimelineEvaluateCallback*() noexcept;

constexpr void __set_m_Output(::UnityEngine::Animations::AnimationPlayableOutput  value) ;

constexpr ::UnityEngine::Animations::AnimationPlayableOutput& __get_m_Output() ;

constexpr ::UnityEngine::Animations::AnimationPlayableOutput const& __get_m_Output() const;

constexpr void __set_m_Graph(::UnityEngine::Playables::PlayableGraph  value) ;

constexpr ::UnityEngine::Playables::PlayableGraph& __get_m_Graph() ;

constexpr ::UnityEngine::Playables::PlayableGraph const& __get_m_Graph() const;

constexpr void __set_m_PreviewComponents(::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>* __get_m_PreviewComponents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Animations::IAnimationWindowPreview*>*> __get_m_PreviewComponents() const;

static inline ::UnityEngine::Timeline::AnimationPreviewUpdateCallback* New_ctor(::UnityEngine::Animations::AnimationPlayableOutput  output) ;

/// @brief Method .ctor addr 0x2c50918 size 0xc8 virtual false final false
inline void _ctor(::UnityEngine::Animations::AnimationPlayableOutput  output) ;

/// @brief Method Evaluate addr 0x2c509e0 size 0x1d4 virtual true final true
inline void Evaluate() ;

/// @brief Method FetchPreviewComponents addr 0x2c50bb4 size 0x124 virtual false final false
inline void FetchPreviewComponents() ;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPreviewUpdateCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationPreviewUpdateCallback(AnimationPreviewUpdateCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPreviewUpdateCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationPreviewUpdateCallback(AnimationPreviewUpdateCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AnimationPreviewUpdateCallback()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AnimationPreviewUpdateCallback, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::AnimationPreviewUpdateCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationPreviewUpdateCallback*, "UnityEngine.Timeline", "AnimationPreviewUpdateCallback");
