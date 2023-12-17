#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AudioClipPlayable)
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
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioClipPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::AudioClipPlayable);
// Type: UnityEngine.Audio::AudioClipPlayable
namespace UnityEngine::Audio {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15607))
// CS Name: ::UnityEngine.Audio::AudioClipPlayable
struct CORDL_TYPE AudioClipPlayable : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle offset 0x0
 __declspec(property(get=__get_m_Handle, put=__set_m_Handle)) ::UnityEngine::Playables::PlayableHandle  m_Handle;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>*() ;

constexpr void __set_m_Handle(::UnityEngine::Playables::PlayableHandle  value) ;

constexpr ::UnityEngine::Playables::PlayableHandle& __get_m_Handle() ;

constexpr ::UnityEngine::Playables::PlayableHandle const& __get_m_Handle() const;

/// @brief Method Create addr 0x2c9c69c size 0x124 virtual false final false
static inline ::UnityEngine::Audio::AudioClipPlayable Create(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::AudioClip*  clip, bool  looping) ;

/// @brief Method CreateHandle addr 0x2c9c7c0 size 0xd0 virtual false final false
static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::AudioClip*  clip, bool  looping) ;

/// @brief Method .ctor addr 0x2c9c890 size 0xc0 virtual false final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle) ;

/// @brief Method GetHandle addr 0x2c9c9ac size 0xc virtual true final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method op_Implicit addr 0x2c9c9b8 size 0x30 virtual false final false
static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Audio::AudioClipPlayable  playable) ;

/// @brief Method op_Explicit addr 0x2c9c9e8 size 0x44 virtual false final false
static inline ::UnityEngine::Audio::AudioClipPlayable op_Explicit___UnityEngine__Audio__AudioClipPlayable(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method Equals addr 0x2c9ca2c size 0x78 virtual true final true
inline bool Equals(::UnityEngine::Audio::AudioClipPlayable  other) ;

/// @brief Method SetVolume addr 0x2c9caa4 size 0xd8 virtual false final false
inline void SetVolume(float_t  value) ;

/// @brief Method SetStereoPan addr 0x2c9cbc8 size 0xdc virtual false final false
inline void SetStereoPan(float_t  value) ;

/// @brief Method SetSpatialBlend addr 0x2c9ccf0 size 0xd8 virtual false final false
inline void SetSpatialBlend(float_t  value) ;

/// @brief Method Seek addr 0x2c9ce14 size 0x134 virtual false final false
inline void Seek(double_t  startTime, double_t  startDelay, double_t  duration) ;

/// @brief Method SetVolumeInternal addr 0x2c9cb7c size 0x4c virtual false final false
static inline void SetVolumeInternal(ByRef<::UnityEngine::Playables::PlayableHandle>  hdl, float_t  volume) ;

/// @brief Method SetStereoPanInternal addr 0x2c9cca4 size 0x4c virtual false final false
static inline void SetStereoPanInternal(ByRef<::UnityEngine::Playables::PlayableHandle>  hdl, float_t  stereoPan) ;

/// @brief Method SetSpatialBlendInternal addr 0x2c9cdc8 size 0x4c virtual false final false
static inline void SetSpatialBlendInternal(ByRef<::UnityEngine::Playables::PlayableHandle>  hdl, float_t  spatialBlend) ;

/// @brief Method SetStartDelayInternal addr 0x2c9cf48 size 0x4c virtual false final false
static inline void SetStartDelayInternal(ByRef<::UnityEngine::Playables::PlayableHandle>  hdl, double_t  delay) ;

/// @brief Method SetPauseDelayInternal addr 0x2c9cf94 size 0x4c virtual false final false
static inline void SetPauseDelayInternal(ByRef<::UnityEngine::Playables::PlayableHandle>  hdl, double_t  delay) ;

/// @brief Method InternalCreateAudioClipPlayable addr 0x2c9c950 size 0x5c virtual false final false
static inline bool InternalCreateAudioClipPlayable(ByRef<::UnityEngine::Playables::PlayableGraph>  graph, ::UnityEngine::AudioClip*  clip, bool  looping, ByRef<::UnityEngine::Playables::PlayableHandle>  handle) ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AudioClipPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AudioClipPlayable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AudioClipPlayable()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioClipPlayable, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Audio
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioClipPlayable, "UnityEngine.Audio", "AudioClipPlayable");
