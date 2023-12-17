#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoAspectRatio)
// Forward declare root types
namespace UnityEngine::Video {
struct VideoAspectRatio;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Video::VideoAspectRatio);
// Type: UnityEngine.Video::VideoAspectRatio
namespace UnityEngine::Video {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16078))
// CS Name: ::UnityEngine.Video::VideoAspectRatio
struct CORDL_TYPE VideoAspectRatio : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VideoAspectRatio_Unwrapped
enum struct __VideoAspectRatio_Unwrapped : int32_t {
__E_NoScaling = static_cast<int32_t>(0x0),
__E_FitVertically = static_cast<int32_t>(0x1),
__E_FitHorizontally = static_cast<int32_t>(0x2),
__E_FitInside = static_cast<int32_t>(0x3),
__E_FitOutside = static_cast<int32_t>(0x4),
__E_Stretch = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NoScaling value: static_cast<int32_t>(0x0)
static ::UnityEngine::Video::VideoAspectRatio const NoScaling;

/// @brief Field FitVertically value: static_cast<int32_t>(0x1)
static ::UnityEngine::Video::VideoAspectRatio const FitVertically;

/// @brief Field FitHorizontally value: static_cast<int32_t>(0x2)
static ::UnityEngine::Video::VideoAspectRatio const FitHorizontally;

/// @brief Field FitInside value: static_cast<int32_t>(0x3)
static ::UnityEngine::Video::VideoAspectRatio const FitInside;

/// @brief Field FitOutside value: static_cast<int32_t>(0x4)
static ::UnityEngine::Video::VideoAspectRatio const FitOutside;

/// @brief Field Stretch value: static_cast<int32_t>(0x5)
static ::UnityEngine::Video::VideoAspectRatio const Stretch;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __VideoAspectRatio_Unwrapped () const noexcept {
return std::bit_cast<__VideoAspectRatio_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VideoAspectRatio(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VideoAspectRatio(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VideoAspectRatio()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoAspectRatio, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Video
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoAspectRatio, "UnityEngine.Video", "VideoAspectRatio");
