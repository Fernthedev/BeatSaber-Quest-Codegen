#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ActivationControlPlayable)
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Timeline {
struct __ActivationControlPlayable__PostPlaybackState;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
template<typename T>
struct ScriptPlayable_1;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Timeline {
struct __ActivationControlPlayable__InitialState;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct __ActivationControlPlayable__InitialState;
}
namespace UnityEngine::Timeline {
struct __ActivationControlPlayable__PostPlaybackState;
}
namespace UnityEngine::Timeline {
class ActivationControlPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::__ActivationControlPlayable__InitialState);
MARK_VAL_T(::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState);
MARK_REF_PTR_T(::UnityEngine::Timeline::ActivationControlPlayable);
// Type: ::PostPlaybackState
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13900))
// CS Name: ::ActivationControlPlayable::PostPlaybackState
struct CORDL_TYPE __ActivationControlPlayable__PostPlaybackState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ActivationControlPlayable__PostPlaybackState_Unwrapped
enum struct ____ActivationControlPlayable__PostPlaybackState_Unwrapped : int32_t {
__E_Active = static_cast<int32_t>(0x0),
__E_Inactive = static_cast<int32_t>(0x1),
__E_Revert = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Active value: static_cast<int32_t>(0x0)
static ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState const Active;

/// @brief Field Inactive value: static_cast<int32_t>(0x1)
static ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState const Inactive;

/// @brief Field Revert value: static_cast<int32_t>(0x2)
static ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState const Revert;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ActivationControlPlayable__PostPlaybackState_Unwrapped () const noexcept {
return std::bit_cast<____ActivationControlPlayable__PostPlaybackState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ActivationControlPlayable__PostPlaybackState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ActivationControlPlayable__PostPlaybackState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ActivationControlPlayable__PostPlaybackState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// Type: ::InitialState
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13901))
// CS Name: ::ActivationControlPlayable::InitialState
struct CORDL_TYPE __ActivationControlPlayable__InitialState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ActivationControlPlayable__InitialState_Unwrapped
enum struct ____ActivationControlPlayable__InitialState_Unwrapped : int32_t {
__E_Unset = static_cast<int32_t>(0x0),
__E_Active = static_cast<int32_t>(0x1),
__E_Inactive = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unset value: static_cast<int32_t>(0x0)
static ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState const Unset;

/// @brief Field Active value: static_cast<int32_t>(0x1)
static ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState const Active;

/// @brief Field Inactive value: static_cast<int32_t>(0x2)
static ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState const Inactive;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ActivationControlPlayable__InitialState_Unwrapped () const noexcept {
return std::bit_cast<____ActivationControlPlayable__InitialState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ActivationControlPlayable__InitialState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ActivationControlPlayable__InitialState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ActivationControlPlayable__InitialState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__ActivationControlPlayable__InitialState, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::ActivationControlPlayable
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10425))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13902))
// CS Name: ::UnityEngine.Timeline::ActivationControlPlayable*
class CORDL_TYPE ActivationControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
using InitialState = ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState;

using PostPlaybackState = ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::Playables::PlayableBehaviour)]{};

/// @brief Field gameObject offset 0x10
 __declspec(property(get=__get_gameObject, put=__set_gameObject)) ::UnityEngine::GameObject*  gameObject;

/// @brief Field postPlayback offset 0x18
 __declspec(property(get=__get_postPlayback, put=__set_postPlayback)) ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState  postPlayback;

/// @brief Field m_InitialState offset 0x1c
 __declspec(property(get=__get_m_InitialState, put=__set_m_InitialState)) ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState  m_InitialState;

constexpr void __set_gameObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_gameObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_gameObject() const;

constexpr void __set_postPlayback(::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState  value) ;

constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState& __get_postPlayback() ;

constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState const& __get_postPlayback() const;

constexpr void __set_m_InitialState(::UnityEngine::Timeline::__ActivationControlPlayable__InitialState  value) ;

constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState& __get_m_InitialState() ;

constexpr ::UnityEngine::Timeline::__ActivationControlPlayable__InitialState const& __get_m_InitialState() const;

/// @brief Method Create addr 0x2c65224 size 0x140 virtual false final false
static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  gameObject, ::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState  postPlaybackState) ;

/// @brief Method OnBehaviourPlay addr 0x2c6a31c size 0x88 virtual true final false
inline void OnBehaviourPlay(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method OnBehaviourPause addr 0x2c6a3a4 size 0xa8 virtual true final false
inline void OnBehaviourPause(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method ProcessFrame addr 0x2c6a44c size 0x88 virtual true final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  userData) ;

/// @brief Method OnGraphStart addr 0x2c6a4d4 size 0x94 virtual true final false
inline void OnGraphStart(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method OnPlayableDestroy addr 0x2c6a568 size 0xcc virtual true final false
inline void OnPlayableDestroy(::UnityEngine::Playables::Playable  playable) ;

static inline ::UnityEngine::Timeline::ActivationControlPlayable* New_ctor() ;

/// @brief Method .ctor addr 0x2c6a634 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ActivationControlPlayable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ActivationControlPlayable(ActivationControlPlayable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActivationControlPlayable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActivationControlPlayable(ActivationControlPlayable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ActivationControlPlayable()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ActivationControlPlayable, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__ActivationControlPlayable__InitialState, "UnityEngine.Timeline", "ActivationControlPlayable/InitialState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__ActivationControlPlayable__PostPlaybackState, "UnityEngine.Timeline", "ActivationControlPlayable/PostPlaybackState");
NEED_NO_BOX(::UnityEngine::Timeline::ActivationControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ActivationControlPlayable*, "UnityEngine.Timeline", "ActivationControlPlayable");
