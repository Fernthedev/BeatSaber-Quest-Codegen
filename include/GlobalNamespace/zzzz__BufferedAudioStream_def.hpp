#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedAudioStream)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class BufferedAudioStream;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BufferedAudioStream);
// Type: ::BufferedAudioStream
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13220))
// CS Name: ::BufferedAudioStream*
class CORDL_TYPE BufferedAudioStream : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field VerboseLogging offset 0x0
static constexpr bool  VerboseLogging{false};

/// @brief Field bufferLengthSeconds offset 0x0
static constexpr float_t  bufferLengthSeconds{0.25};

/// @brief Field sampleRate offset 0x0
static constexpr int32_t  sampleRate{static_cast<int32_t>(0xbb80)};

/// @brief Field bufferSize offset 0x0
static constexpr int32_t  bufferSize{static_cast<int32_t>(0x2ee0)};

/// @brief Field playbackDelayTimeSeconds offset 0x0
static constexpr float_t  playbackDelayTimeSeconds{0.05};

/// @brief Field audio offset 0x10
 __declspec(property(get=__get_audio, put=__set_audio)) ::UnityEngine::AudioSource*  audio;

/// @brief Field audioBuffer offset 0x18
 __declspec(property(get=__get_audioBuffer, put=__set_audioBuffer)) ::ArrayW<float_t,::Array<float_t>*>  audioBuffer;

/// @brief Field writePos offset 0x20
 __declspec(property(get=__get_writePos, put=__set_writePos)) int32_t  writePos;

/// @brief Field playbackDelayRemaining offset 0x24
 __declspec(property(get=__get_playbackDelayRemaining, put=__set_playbackDelayRemaining)) float_t  playbackDelayRemaining;

/// @brief Field remainingBufferTime offset 0x28
 __declspec(property(get=__get_remainingBufferTime, put=__set_remainingBufferTime)) float_t  remainingBufferTime;

constexpr void __set_audio(::UnityEngine::AudioSource*  value) ;

constexpr ::UnityEngine::AudioSource* __get_audio() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> __get_audio() const;

constexpr void __set_audioBuffer(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_audioBuffer() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_audioBuffer() const;

constexpr void __set_writePos(int32_t  value) ;

constexpr int32_t& __get_writePos() ;

constexpr int32_t const& __get_writePos() const;

constexpr void __set_playbackDelayRemaining(float_t  value) ;

constexpr float_t& __get_playbackDelayRemaining() ;

constexpr float_t const& __get_playbackDelayRemaining() const;

constexpr void __set_remainingBufferTime(float_t  value) ;

constexpr float_t& __get_remainingBufferTime() ;

constexpr float_t const& __get_remainingBufferTime() const;

static inline ::GlobalNamespace::BufferedAudioStream* New_ctor(::UnityEngine::AudioSource*  audio) ;

/// @brief Method .ctor addr 0x26cd350 size 0xc4 virtual false final false
inline void _ctor(::UnityEngine::AudioSource*  audio) ;

/// @brief Method Update addr 0x26cd458 size 0x1d0 virtual false final false
inline void Update() ;

/// @brief Method Stop addr 0x26cd414 size 0x44 virtual false final false
inline void Stop() ;

/// @brief Method AddData addr 0x26cd628 size 0x11c virtual false final false
inline void AddData(::ArrayW<float_t,::Array<float_t>*>  samples) ;

// Ctor Parameters [CppParam { name: "", ty: "BufferedAudioStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferedAudioStream(BufferedAudioStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferedAudioStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferedAudioStream(BufferedAudioStream const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BufferedAudioStream()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BufferedAudioStream, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BufferedAudioStream);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BufferedAudioStream*, "", "BufferedAudioStream");
