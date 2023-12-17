#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioClipProperties)
// Forward declare root types
namespace UnityEngine::Timeline {
class AudioClipProperties;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::AudioClipProperties);
// Type: UnityEngine.Timeline::AudioClipProperties
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10425))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13865))
// CS Name: ::UnityEngine.Timeline::AudioClipProperties*
class CORDL_TYPE AudioClipProperties : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Playables::PlayableBehaviour)]{};

/// @brief Field volume offset 0x10
 __declspec(property(get=__get_volume, put=__set_volume)) float_t  volume;

constexpr void __set_volume(float_t  value) ;

constexpr float_t& __get_volume() ;

constexpr float_t const& __get_volume() const;

static inline ::UnityEngine::Timeline::AudioClipProperties* New_ctor() ;

/// @brief Method .ctor addr 0x2c61ac0 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipProperties", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioClipProperties(AudioClipProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipProperties", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioClipProperties(AudioClipProperties const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AudioClipProperties()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AudioClipProperties, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::AudioClipProperties);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AudioClipProperties*, "UnityEngine.Timeline", "AudioClipProperties");
