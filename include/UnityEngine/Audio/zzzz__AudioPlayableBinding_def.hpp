#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AudioPlayableBinding)
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
// Forward declare root types
namespace UnityEngine::Audio {
class AudioPlayableBinding;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Audio::AudioPlayableBinding);
// Type: UnityEngine.Audio::AudioPlayableBinding
namespace UnityEngine::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15602))
// CS Name: ::UnityEngine.Audio::AudioPlayableBinding*
class CORDL_TYPE AudioPlayableBinding : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Create addr 0x2c9c434 size 0x13c virtual false final false
static inline ::UnityEngine::Playables::PlayableBinding Create(::StringW  name, ::UnityEngine::Object*  key) ;

/// @brief Method CreateAudioOutput addr 0x2c9c570 size 0x40 virtual false final false
static inline ::UnityEngine::Playables::PlayableOutput CreateAudioOutput(::UnityEngine::Playables::PlayableGraph  graph, ::StringW  name) ;

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayableBinding", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioPlayableBinding(AudioPlayableBinding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayableBinding", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioPlayableBinding(AudioPlayableBinding const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AudioPlayableBinding()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioPlayableBinding, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Audio
NEED_NO_BOX(::UnityEngine::Audio::AudioPlayableBinding);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioPlayableBinding*, "UnityEngine.Audio", "AudioPlayableBinding");
