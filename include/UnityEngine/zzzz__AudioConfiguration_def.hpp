#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioConfiguration)
namespace UnityEngine {
struct AudioSpeakerMode;
}
// Forward declare root types
namespace UnityEngine {
struct AudioConfiguration;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AudioConfiguration);
// Type: UnityEngine::AudioConfiguration
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15587))
// CS Name: ::UnityEngine::AudioConfiguration
struct CORDL_TYPE AudioConfiguration : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field speakerMode offset 0x0
 __declspec(property(get=__get_speakerMode, put=__set_speakerMode)) ::UnityEngine::AudioSpeakerMode  speakerMode;

/// @brief Field dspBufferSize offset 0x4
 __declspec(property(get=__get_dspBufferSize, put=__set_dspBufferSize)) int32_t  dspBufferSize;

/// @brief Field sampleRate offset 0x8
 __declspec(property(get=__get_sampleRate, put=__set_sampleRate)) int32_t  sampleRate;

/// @brief Field numRealVoices offset 0xc
 __declspec(property(get=__get_numRealVoices, put=__set_numRealVoices)) int32_t  numRealVoices;

/// @brief Field numVirtualVoices offset 0x10
 __declspec(property(get=__get_numVirtualVoices, put=__set_numVirtualVoices)) int32_t  numVirtualVoices;

constexpr void __set_speakerMode(::UnityEngine::AudioSpeakerMode  value) ;

constexpr ::UnityEngine::AudioSpeakerMode& __get_speakerMode() ;

constexpr ::UnityEngine::AudioSpeakerMode const& __get_speakerMode() const;

constexpr void __set_dspBufferSize(int32_t  value) ;

constexpr int32_t& __get_dspBufferSize() ;

constexpr int32_t const& __get_dspBufferSize() const;

constexpr void __set_sampleRate(int32_t  value) ;

constexpr int32_t& __get_sampleRate() ;

constexpr int32_t const& __get_sampleRate() const;

constexpr void __set_numRealVoices(int32_t  value) ;

constexpr int32_t& __get_numRealVoices() ;

constexpr int32_t const& __get_numRealVoices() const;

constexpr void __set_numVirtualVoices(int32_t  value) ;

constexpr int32_t& __get_numVirtualVoices() ;

constexpr int32_t const& __get_numVirtualVoices() const;

// Ctor Parameters [CppParam { name: "speakerMode", ty: "::UnityEngine::AudioSpeakerMode", modifiers: "", def_value: None }, CppParam { name: "dspBufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sampleRate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "numRealVoices", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "numVirtualVoices", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioConfiguration(::UnityEngine::AudioSpeakerMode  speakerMode, int32_t  dspBufferSize, int32_t  sampleRate, int32_t  numRealVoices, int32_t  numVirtualVoices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AudioConfiguration(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AudioConfiguration()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioConfiguration, 0x14>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioConfiguration, "UnityEngine", "AudioConfiguration");
