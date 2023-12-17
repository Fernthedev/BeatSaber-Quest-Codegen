#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MainAudioEffects)
namespace UnityEngine {
class AudioLowPassFilter;
}
// Forward declare root types
namespace GlobalNamespace {
class MainAudioEffects;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainAudioEffects);
// Type: ::MainAudioEffects
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4066))
// CS Name: ::MainAudioEffects*
class CORDL_TYPE MainAudioEffects : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kDefaultCutoffFrequency offset 0x0
static constexpr int32_t  kDefaultCutoffFrequency{static_cast<int32_t>(0x55f0)};

/// @brief Field kLowPassCutoffFrequency offset 0x0
static constexpr int32_t  kLowPassCutoffFrequency{static_cast<int32_t>(0x96)};

/// @brief Field _audioLowPassFilter offset 0x18
 __declspec(property(get=__get__audioLowPassFilter, put=__set__audioLowPassFilter)) ::UnityEngine::AudioLowPassFilter*  _audioLowPassFilter;

/// @brief Field _smooth offset 0x20
 __declspec(property(get=__get__smooth, put=__set__smooth)) float_t  _smooth;

/// @brief Field _targetFrequency offset 0x24
 __declspec(property(get=__get__targetFrequency, put=__set__targetFrequency)) float_t  _targetFrequency;

constexpr void __set__audioLowPassFilter(::UnityEngine::AudioLowPassFilter*  value) ;

constexpr ::UnityEngine::AudioLowPassFilter* __get__audioLowPassFilter() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioLowPassFilter*> __get__audioLowPassFilter() const;

constexpr void __set__smooth(float_t  value) ;

constexpr float_t& __get__smooth() ;

constexpr float_t const& __get__smooth() const;

constexpr void __set__targetFrequency(float_t  value) ;

constexpr float_t& __get__targetFrequency() ;

constexpr float_t const& __get__targetFrequency() const;

/// @brief Method Start addr 0x222e018 size 0x34 virtual false final false
inline void Start() ;

/// @brief Method LateUpdate addr 0x222e04c size 0xbc virtual false final false
inline void LateUpdate() ;

/// @brief Method ResumeNormalSound addr 0x222e108 size 0x28 virtual false final false
inline void ResumeNormalSound() ;

/// @brief Method TriggerLowPass addr 0x222e130 size 0x3c virtual false final false
inline void TriggerLowPass() ;

static inline ::GlobalNamespace::MainAudioEffects* New_ctor() ;

/// @brief Method .ctor addr 0x222e16c size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MainAudioEffects", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainAudioEffects(MainAudioEffects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainAudioEffects", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainAudioEffects(MainAudioEffects const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MainAudioEffects()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainAudioEffects, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainAudioEffects);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainAudioEffects*, "", "MainAudioEffects");
