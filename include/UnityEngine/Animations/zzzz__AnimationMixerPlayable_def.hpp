#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationMixerPlayable)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationMixerPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationMixerPlayable);
// Type: UnityEngine.Animations::AnimationMixerPlayable
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14899))
// CS Name: ::UnityEngine.Animations::AnimationMixerPlayable
struct CORDL_TYPE AnimationMixerPlayable : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle offset 0x0
 __declspec(property(get=__get_m_Handle, put=__set_m_Handle)) ::UnityEngine::Playables::PlayableHandle  m_Handle;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationMixerPlayable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Animations::AnimationMixerPlayable>*() ;

constexpr void __set_m_Handle(::UnityEngine::Playables::PlayableHandle  value) ;

constexpr ::UnityEngine::Playables::PlayableHandle& __get_m_Handle() ;

constexpr ::UnityEngine::Playables::PlayableHandle const& __get_m_Handle() const;

static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationMixerPlayable  value) ;

static inline ::UnityEngine::Animations::AnimationMixerPlayable getStaticF_m_NullPlayable() ;

/// @brief Method Create addr 0x2c98c94 size 0x98 virtual false final false
static inline ::UnityEngine::Animations::AnimationMixerPlayable Create(::UnityEngine::Playables::PlayableGraph  graph, int32_t  inputCount) ;

/// @brief Method CreateHandle addr 0x2c98d2c size 0xe4 virtual false final false
static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph  graph, int32_t  inputCount) ;

/// @brief Method .ctor addr 0x2c98e10 size 0xc0 virtual false final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle) ;

/// @brief Method GetHandle addr 0x2c98f5c size 0xc virtual true final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method op_Implicit addr 0x2c98f68 size 0x30 virtual false final false
static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationMixerPlayable  playable) ;

/// @brief Method Equals addr 0x2c98f98 size 0x78 virtual true final true
inline bool Equals(::UnityEngine::Animations::AnimationMixerPlayable  other) ;

/// @brief Method CreateHandleInternal addr 0x2c98ed0 size 0x8c virtual false final false
static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph  graph, ByRef<::UnityEngine::Playables::PlayableHandle>  handle) ;

/// @brief Method CreateHandleInternal_Injected addr 0x2c99010 size 0x44 virtual false final false
static inline bool CreateHandleInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph>  graph, ByRef<::UnityEngine::Playables::PlayableHandle>  handle) ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AnimationMixerPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AnimationMixerPlayable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AnimationMixerPlayable()  = default;


// Fields

// Static field m_NullPlayable


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationMixerPlayable, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationMixerPlayable, "UnityEngine.Animations", "AnimationMixerPlayable");
