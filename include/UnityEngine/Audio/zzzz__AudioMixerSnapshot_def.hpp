#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AudioMixerSnapshot)
// Forward declare root types
namespace UnityEngine::Audio {
class AudioMixerSnapshot;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Audio::AudioMixerSnapshot);
// Type: UnityEngine.Audio::AudioMixerSnapshot
namespace UnityEngine::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15606))
// CS Name: ::UnityEngine.Audio::AudioMixerSnapshot*
class CORDL_TYPE AudioMixerSnapshot : public ::UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "AudioMixerSnapshot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioMixerSnapshot(AudioMixerSnapshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixerSnapshot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioMixerSnapshot(AudioMixerSnapshot const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AudioMixerSnapshot()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioMixerSnapshot, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Audio
NEED_NO_BOX(::UnityEngine::Audio::AudioMixerSnapshot);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioMixerSnapshot*, "UnityEngine.Audio", "AudioMixerSnapshot");
