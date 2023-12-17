#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnvironmentAudioEffectsPlayer)
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentAudioEffectsPlayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentAudioEffectsPlayer);
// Type: ::EnvironmentAudioEffectsPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4062))
// CS Name: ::EnvironmentAudioEffectsPlayer*
class CORDL_TYPE EnvironmentAudioEffectsPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _audioSource offset 0x18
 __declspec(property(get=__get__audioSource, put=__set__audioSource)) ::UnityEngine::AudioSource*  _audioSource;

 __declspec(property(get=get_audioSource)) ::UnityEngine::AudioSource*  audioSource;

constexpr void __set__audioSource(::UnityEngine::AudioSource*  value) ;

constexpr ::UnityEngine::AudioSource* __get__audioSource() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> __get__audioSource() const;

/// @brief Method get_audioSource addr 0x222d348 size 0x8 virtual false final false
inline ::UnityEngine::AudioSource* get_audioSource() ;

/// @brief Method PlayEffect addr 0x222d350 size 0x64 virtual false final false
inline void PlayEffect(::UnityEngine::AudioClip*  clip, float_t  volume) ;

static inline ::GlobalNamespace::EnvironmentAudioEffectsPlayer* New_ctor() ;

/// @brief Method .ctor addr 0x222d3b4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentAudioEffectsPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentAudioEffectsPlayer(EnvironmentAudioEffectsPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentAudioEffectsPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentAudioEffectsPlayer(EnvironmentAudioEffectsPlayer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnvironmentAudioEffectsPlayer()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentAudioEffectsPlayer, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentAudioEffectsPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentAudioEffectsPlayer*, "", "EnvironmentAudioEffectsPlayer");
