#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AnimatorControllerPlayable)
namespace UnityEngine::Playables {
class IPlayable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimatorControllerPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimatorControllerPlayable);
// Type: UnityEngine.Animations::AnimatorControllerPlayable
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14889))
// CS Name: ::UnityEngine.Animations::AnimatorControllerPlayable
struct CORDL_TYPE AnimatorControllerPlayable : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle offset 0x0
 __declspec(property(get=__get_m_Handle, put=__set_m_Handle)) ::UnityEngine::Playables::PlayableHandle  m_Handle;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>*() ;

constexpr void __set_m_Handle(::UnityEngine::Playables::PlayableHandle  value) ;

constexpr ::UnityEngine::Playables::PlayableHandle& __get_m_Handle() ;

constexpr ::UnityEngine::Playables::PlayableHandle const& __get_m_Handle() const;

static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimatorControllerPlayable  value) ;

static inline ::UnityEngine::Animations::AnimatorControllerPlayable getStaticF_m_NullPlayable() ;

/// @brief Method .ctor addr 0x2c96e08 size 0x78 virtual false final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle) ;

/// @brief Method GetHandle addr 0x2c96f88 size 0xc virtual true final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method SetHandle addr 0x2c96e80 size 0x108 virtual false final false
inline void SetHandle(::UnityEngine::Playables::PlayableHandle  handle) ;

/// @brief Method Equals addr 0x2c96f94 size 0x78 virtual true final true
inline bool Equals(::UnityEngine::Animations::AnimatorControllerPlayable  other) ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AnimatorControllerPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AnimatorControllerPlayable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AnimatorControllerPlayable()  = default;


// Fields

// Static field m_NullPlayable


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimatorControllerPlayable, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimatorControllerPlayable, "UnityEngine.Animations", "AnimatorControllerPlayable");
