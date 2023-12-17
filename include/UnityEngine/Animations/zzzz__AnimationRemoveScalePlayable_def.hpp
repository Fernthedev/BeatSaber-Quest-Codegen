#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationRemoveScalePlayable)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationRemoveScalePlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationRemoveScalePlayable);
// Type: UnityEngine.Animations::AnimationRemoveScalePlayable
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14888))
// CS Name: ::UnityEngine.Animations::AnimationRemoveScalePlayable
struct CORDL_TYPE AnimationRemoveScalePlayable : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle offset 0x0
 __declspec(property(get=__get_m_Handle, put=__set_m_Handle)) ::UnityEngine::Playables::PlayableHandle  m_Handle;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationRemoveScalePlayable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Animations::AnimationRemoveScalePlayable>*() ;

constexpr void __set_m_Handle(::UnityEngine::Playables::PlayableHandle  value) ;

constexpr ::UnityEngine::Playables::PlayableHandle& __get_m_Handle() ;

constexpr ::UnityEngine::Playables::PlayableHandle const& __get_m_Handle() const;

static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationRemoveScalePlayable  value) ;

static inline ::UnityEngine::Animations::AnimationRemoveScalePlayable getStaticF_m_NullPlayable() ;

/// @brief Method Create addr 0x2c96978 size 0x98 virtual false final false
static inline ::UnityEngine::Animations::AnimationRemoveScalePlayable Create(::UnityEngine::Playables::PlayableGraph  graph, int32_t  inputCount) ;

/// @brief Method CreateHandle addr 0x2c96a10 size 0xe4 virtual false final false
static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph  graph, int32_t  inputCount) ;

/// @brief Method .ctor addr 0x2c96af4 size 0xc0 virtual false final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle) ;

/// @brief Method GetHandle addr 0x2c96c40 size 0xc virtual true final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method op_Implicit addr 0x2c96c4c size 0x30 virtual false final false
static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationRemoveScalePlayable  playable) ;

/// @brief Method Equals addr 0x2c96c7c size 0xac virtual true final true
inline bool Equals(::UnityEngine::Animations::AnimationRemoveScalePlayable  other) ;

/// @brief Method CreateHandleInternal addr 0x2c96bb4 size 0x8c virtual false final false
static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph  graph, ByRef<::UnityEngine::Playables::PlayableHandle>  handle) ;

/// @brief Method CreateHandleInternal_Injected addr 0x2c96d28 size 0x44 virtual false final false
static inline bool CreateHandleInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph>  graph, ByRef<::UnityEngine::Playables::PlayableHandle>  handle) ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AnimationRemoveScalePlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AnimationRemoveScalePlayable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AnimationRemoveScalePlayable()  = default;


// Fields

// Static field m_NullPlayable


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationRemoveScalePlayable, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationRemoveScalePlayable, "UnityEngine.Animations", "AnimationRemoveScalePlayable");
