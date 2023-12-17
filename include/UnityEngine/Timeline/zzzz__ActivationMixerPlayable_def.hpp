#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ActivationMixerPlayable)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Timeline {
struct __ActivationTrack__PostPlaybackState;
}
namespace UnityEngine::Playables {
template<typename T>
struct ScriptPlayable_1;
}
namespace UnityEngine::Playables {
struct FrameData;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ActivationMixerPlayable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::ActivationMixerPlayable);
// Type: UnityEngine.Timeline::ActivationMixerPlayable
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10425))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13825))
// CS Name: ::UnityEngine.Timeline::ActivationMixerPlayable*
class CORDL_TYPE ActivationMixerPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::Playables::PlayableBehaviour)]{};

/// @brief Field m_PostPlaybackState offset 0x10
 __declspec(property(get=__get_m_PostPlaybackState, put=__set_m_PostPlaybackState)) ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState  m_PostPlaybackState;

/// @brief Field m_BoundGameObjectInitialStateIsActive offset 0x14
 __declspec(property(get=__get_m_BoundGameObjectInitialStateIsActive, put=__set_m_BoundGameObjectInitialStateIsActive)) bool  m_BoundGameObjectInitialStateIsActive;

/// @brief Field m_BoundGameObject offset 0x18
 __declspec(property(get=__get_m_BoundGameObject, put=__set_m_BoundGameObject)) ::UnityEngine::GameObject*  m_BoundGameObject;

 __declspec(property(get=get_postPlaybackState, put=set_postPlaybackState)) ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState  postPlaybackState;

constexpr void __set_m_PostPlaybackState(::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState  value) ;

constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState& __get_m_PostPlaybackState() ;

constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState const& __get_m_PostPlaybackState() const;

constexpr void __set_m_BoundGameObjectInitialStateIsActive(bool  value) ;

constexpr bool& __get_m_BoundGameObjectInitialStateIsActive() ;

constexpr bool const& __get_m_BoundGameObjectInitialStateIsActive() const;

constexpr void __set_m_BoundGameObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_m_BoundGameObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_m_BoundGameObject() const;

/// @brief Method Create addr 0x2c4e978 size 0x84 virtual false final false
static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationMixerPlayable*> Create(::UnityEngine::Playables::PlayableGraph  graph, int32_t  inputCount) ;

/// @brief Method get_postPlaybackState addr 0x2c4e9fc size 0x8 virtual false final false
inline ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState get_postPlaybackState() ;

/// @brief Method set_postPlaybackState addr 0x2c4ea04 size 0x8 virtual false final false
inline void set_postPlaybackState(::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState  value) ;

/// @brief Method OnPlayableDestroy addr 0x2c4ea0c size 0xc0 virtual true final false
inline void OnPlayableDestroy(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method ProcessFrame addr 0x2c4eacc size 0x1c4 virtual true final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

static inline ::UnityEngine::Timeline::ActivationMixerPlayable* New_ctor() ;

/// @brief Method .ctor addr 0x2c4ec90 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ActivationMixerPlayable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ActivationMixerPlayable(ActivationMixerPlayable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActivationMixerPlayable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActivationMixerPlayable(ActivationMixerPlayable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ActivationMixerPlayable()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ActivationMixerPlayable, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ActivationMixerPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ActivationMixerPlayable*, "UnityEngine.Timeline", "ActivationMixerPlayable");
