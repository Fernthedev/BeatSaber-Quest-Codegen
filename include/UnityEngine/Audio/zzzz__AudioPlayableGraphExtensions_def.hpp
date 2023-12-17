#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AudioPlayableGraphExtensions)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Forward declare root types
namespace UnityEngine::Audio {
class AudioPlayableGraphExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Audio::AudioPlayableGraphExtensions);
// Type: UnityEngine.Audio::AudioPlayableGraphExtensions
namespace UnityEngine::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15605))
// CS Name: ::UnityEngine.Audio::AudioPlayableGraphExtensions*
class CORDL_TYPE AudioPlayableGraphExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method InternalCreateAudioOutput addr 0x2c9c114 size 0x54 virtual false final false
static inline bool InternalCreateAudioOutput(ByRef<::UnityEngine::Playables::PlayableGraph>  graph, ::StringW  name, ByRef<::UnityEngine::Playables::PlayableOutputHandle>  handle) ;

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayableGraphExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioPlayableGraphExtensions(AudioPlayableGraphExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayableGraphExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioPlayableGraphExtensions(AudioPlayableGraphExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AudioPlayableGraphExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioPlayableGraphExtensions, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Audio
NEED_NO_BOX(::UnityEngine::Audio::AudioPlayableGraphExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioPlayableGraphExtensions*, "UnityEngine.Audio", "AudioPlayableGraphExtensions");
