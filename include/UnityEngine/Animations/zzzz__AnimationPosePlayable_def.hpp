#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AnimationPosePlayable)
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
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationPosePlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationPosePlayable);
// Type: UnityEngine.Animations::AnimationPosePlayable
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14897))
// CS Name: ::UnityEngine.Animations::AnimationPosePlayable
struct CORDL_TYPE AnimationPosePlayable : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle offset 0x0
 __declspec(property(get=__get_m_Handle, put=__set_m_Handle)) ::UnityEngine::Playables::PlayableHandle  m_Handle;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Animations::AnimationPosePlayable>*() ;

constexpr void __set_m_Handle(::UnityEngine::Playables::PlayableHandle  value) ;

constexpr ::UnityEngine::Playables::PlayableHandle& __get_m_Handle() ;

constexpr ::UnityEngine::Playables::PlayableHandle const& __get_m_Handle() const;

static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationPosePlayable  value) ;

static inline ::UnityEngine::Animations::AnimationPosePlayable getStaticF_m_NullPlayable() ;

/// @brief Method .ctor addr 0x2c98568 size 0xc0 virtual false final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle) ;

/// @brief Method GetHandle addr 0x2c98628 size 0xc virtual true final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method Equals addr 0x2c98634 size 0xac virtual true final true
inline bool Equals(::UnityEngine::Animations::AnimationPosePlayable  other) ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AnimationPosePlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AnimationPosePlayable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AnimationPosePlayable()  = default;


// Fields

// Static field m_NullPlayable


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationPosePlayable, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationPosePlayable, "UnityEngine.Animations", "AnimationPosePlayable");
