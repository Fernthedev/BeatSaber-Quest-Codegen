#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSpeakerMode)
// Forward declare root types
namespace UnityEngine {
struct AudioSpeakerMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AudioSpeakerMode);
// Type: UnityEngine::AudioSpeakerMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15585))
// CS Name: ::UnityEngine::AudioSpeakerMode
struct CORDL_TYPE AudioSpeakerMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioSpeakerMode_Unwrapped
enum struct __AudioSpeakerMode_Unwrapped : int32_t {
__E_Raw = static_cast<int32_t>(0x0),
__E_Mono = static_cast<int32_t>(0x1),
__E_Stereo = static_cast<int32_t>(0x2),
__E_Quad = static_cast<int32_t>(0x3),
__E_Surround = static_cast<int32_t>(0x4),
__E_Mode5point1 = static_cast<int32_t>(0x5),
__E_Mode7point1 = static_cast<int32_t>(0x6),
__E_Prologic = static_cast<int32_t>(0x7),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Raw value: static_cast<int32_t>(0x0)
static ::UnityEngine::AudioSpeakerMode const Raw;

/// @brief Field Mono value: static_cast<int32_t>(0x1)
static ::UnityEngine::AudioSpeakerMode const Mono;

/// @brief Field Stereo value: static_cast<int32_t>(0x2)
static ::UnityEngine::AudioSpeakerMode const Stereo;

/// @brief Field Quad value: static_cast<int32_t>(0x3)
static ::UnityEngine::AudioSpeakerMode const Quad;

/// @brief Field Surround value: static_cast<int32_t>(0x4)
static ::UnityEngine::AudioSpeakerMode const Surround;

/// @brief Field Mode5point1 value: static_cast<int32_t>(0x5)
static ::UnityEngine::AudioSpeakerMode const Mode5point1;

/// @brief Field Mode7point1 value: static_cast<int32_t>(0x6)
static ::UnityEngine::AudioSpeakerMode const Mode7point1;

/// @brief Field Prologic value: static_cast<int32_t>(0x7)
static ::UnityEngine::AudioSpeakerMode const Prologic;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioSpeakerMode_Unwrapped () const noexcept {
return std::bit_cast<__AudioSpeakerMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioSpeakerMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AudioSpeakerMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AudioSpeakerMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioSpeakerMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioSpeakerMode, "UnityEngine", "AudioSpeakerMode");
