#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoRenderMode)
// Forward declare root types
namespace UnityEngine::Video {
struct VideoRenderMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Video::VideoRenderMode);
// Type: UnityEngine.Video::VideoRenderMode
namespace UnityEngine::Video {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16076))
// CS Name: ::UnityEngine.Video::VideoRenderMode
struct CORDL_TYPE VideoRenderMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VideoRenderMode_Unwrapped
enum struct __VideoRenderMode_Unwrapped : int32_t {
__E_CameraFarPlane = static_cast<int32_t>(0x0),
__E_CameraNearPlane = static_cast<int32_t>(0x1),
__E_RenderTexture = static_cast<int32_t>(0x2),
__E_MaterialOverride = static_cast<int32_t>(0x3),
__E_APIOnly = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field CameraFarPlane value: static_cast<int32_t>(0x0)
static ::UnityEngine::Video::VideoRenderMode const CameraFarPlane;

/// @brief Field CameraNearPlane value: static_cast<int32_t>(0x1)
static ::UnityEngine::Video::VideoRenderMode const CameraNearPlane;

/// @brief Field RenderTexture value: static_cast<int32_t>(0x2)
static ::UnityEngine::Video::VideoRenderMode const RenderTexture;

/// @brief Field MaterialOverride value: static_cast<int32_t>(0x3)
static ::UnityEngine::Video::VideoRenderMode const MaterialOverride;

/// @brief Field APIOnly value: static_cast<int32_t>(0x4)
static ::UnityEngine::Video::VideoRenderMode const APIOnly;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __VideoRenderMode_Unwrapped () const noexcept {
return std::bit_cast<__VideoRenderMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VideoRenderMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VideoRenderMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VideoRenderMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoRenderMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Video
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoRenderMode, "UnityEngine.Video", "VideoRenderMode");
