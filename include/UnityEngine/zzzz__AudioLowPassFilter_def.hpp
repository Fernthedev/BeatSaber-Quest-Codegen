#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioLowPassFilter)
// Forward declare root types
namespace UnityEngine {
class AudioLowPassFilter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AudioLowPassFilter);
// Type: UnityEngine::AudioLowPassFilter
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10187))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15599))
// CS Name: ::UnityEngine::AudioLowPassFilter*
class CORDL_TYPE AudioLowPassFilter : public ::UnityEngine::Behaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Behaviour)]{};

 __declspec(property(get=get_cutoffFrequency, put=set_cutoffFrequency)) float_t  cutoffFrequency;

/// @brief Method get_cutoffFrequency addr 0x2c9bfe4 size 0x3c virtual false final false
inline float_t get_cutoffFrequency() ;

/// @brief Method set_cutoffFrequency addr 0x2c9c020 size 0x4c virtual false final false
inline void set_cutoffFrequency(float_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "AudioLowPassFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioLowPassFilter(AudioLowPassFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioLowPassFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioLowPassFilter(AudioLowPassFilter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AudioLowPassFilter()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioLowPassFilter, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AudioLowPassFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioLowPassFilter*, "UnityEngine", "AudioLowPassFilter");
