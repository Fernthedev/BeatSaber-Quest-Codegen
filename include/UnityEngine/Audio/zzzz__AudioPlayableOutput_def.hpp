#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AudioPlayableOutput)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
class IPlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioPlayableOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::AudioPlayableOutput);
// Type: UnityEngine.Audio::AudioPlayableOutput
namespace UnityEngine::Audio {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15600))
// CS Name: ::UnityEngine.Audio::AudioPlayableOutput
struct CORDL_TYPE AudioPlayableOutput : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle offset 0x0
 __declspec(property(get=__get_m_Handle, put=__set_m_Handle)) ::UnityEngine::Playables::PlayableOutputHandle  m_Handle;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
constexpr operator  ::UnityEngine::Playables::IPlayableOutput*() ;

constexpr void __set_m_Handle(::UnityEngine::Playables::PlayableOutputHandle  value) ;

constexpr ::UnityEngine::Playables::PlayableOutputHandle& __get_m_Handle() ;

constexpr ::UnityEngine::Playables::PlayableOutputHandle const& __get_m_Handle() const;

/// @brief Method Create addr 0x2c9c06c size 0xa8 virtual false final false
static inline ::UnityEngine::Audio::AudioPlayableOutput Create(::UnityEngine::Playables::PlayableGraph  graph, ::StringW  name, ::UnityEngine::AudioSource*  target) ;

/// @brief Method .ctor addr 0x2c9c1e4 size 0xc0 virtual false final false
inline void _ctor(::UnityEngine::Playables::PlayableOutputHandle  handle) ;

/// @brief Method get_Null addr 0x2c9c168 size 0x7c virtual false final false
static inline ::UnityEngine::Audio::AudioPlayableOutput get_Null() ;

/// @brief Method GetHandle addr 0x2c9c2e8 size 0xc virtual true final true
inline ::UnityEngine::Playables::PlayableOutputHandle GetHandle() ;

/// @brief Method op_Implicit addr 0x2c9c2f4 size 0x30 virtual false final false
static inline ::UnityEngine::Playables::PlayableOutput op_Implicit___UnityEngine__Playables__PlayableOutput(::UnityEngine::Audio::AudioPlayableOutput  output) ;

/// @brief Method op_Explicit addr 0x2c9c324 size 0x44 virtual false final false
static inline ::UnityEngine::Audio::AudioPlayableOutput op_Explicit___UnityEngine__Audio__AudioPlayableOutput(::UnityEngine::Playables::PlayableOutput  output) ;

/// @brief Method SetTarget addr 0x2c9c2a4 size 0x44 virtual false final false
inline void SetTarget(::UnityEngine::AudioSource*  value) ;

/// @brief Method SetEvaluateOnSeek addr 0x2c9c3ac size 0x44 virtual false final false
inline void SetEvaluateOnSeek(bool  value) ;

/// @brief Method InternalSetTarget addr 0x2c9c368 size 0x44 virtual false final false
static inline void InternalSetTarget(ByRef<::UnityEngine::Playables::PlayableOutputHandle>  output, ::UnityEngine::AudioSource*  target) ;

/// @brief Method InternalSetEvaluateOnSeek addr 0x2c9c3f0 size 0x44 virtual false final false
static inline void InternalSetEvaluateOnSeek(ByRef<::UnityEngine::Playables::PlayableOutputHandle>  output, bool  value) ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
constexpr AudioPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle  m_Handle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AudioPlayableOutput(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AudioPlayableOutput()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioPlayableOutput, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Audio
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioPlayableOutput, "UnityEngine.Audio", "AudioPlayableOutput");
