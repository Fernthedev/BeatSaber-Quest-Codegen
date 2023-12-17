#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoAudioOutputMode)
// Forward declare root types
namespace UnityEngine::Video {
struct VideoAudioOutputMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Video::VideoAudioOutputMode);
// Type: UnityEngine.Video::VideoAudioOutputMode
namespace UnityEngine::Video {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16082))
// CS Name: ::UnityEngine.Video::VideoAudioOutputMode
struct CORDL_TYPE VideoAudioOutputMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VideoAudioOutputMode_Unwrapped
enum struct __VideoAudioOutputMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_AudioSource = static_cast<int32_t>(0x1),
__E_Direct = static_cast<int32_t>(0x2),
__E_APIOnly = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::Video::VideoAudioOutputMode const None;

/// @brief Field AudioSource value: static_cast<int32_t>(0x1)
static ::UnityEngine::Video::VideoAudioOutputMode const AudioSource;

/// @brief Field Direct value: static_cast<int32_t>(0x2)
static ::UnityEngine::Video::VideoAudioOutputMode const Direct;

/// @brief Field APIOnly value: static_cast<int32_t>(0x3)
static ::UnityEngine::Video::VideoAudioOutputMode const APIOnly;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __VideoAudioOutputMode_Unwrapped () const noexcept {
return std::bit_cast<__VideoAudioOutputMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VideoAudioOutputMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VideoAudioOutputMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VideoAudioOutputMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoAudioOutputMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Video
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoAudioOutputMode, "UnityEngine.Video", "VideoAudioOutputMode");
