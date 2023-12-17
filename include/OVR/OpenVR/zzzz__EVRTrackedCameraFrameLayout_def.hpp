#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRTrackedCameraFrameLayout)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRTrackedCameraFrameLayout;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRTrackedCameraFrameLayout);
// Type: OVR.OpenVR::EVRTrackedCameraFrameLayout
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8611))
// CS Name: ::OVR.OpenVR::EVRTrackedCameraFrameLayout
struct CORDL_TYPE EVRTrackedCameraFrameLayout : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVRTrackedCameraFrameLayout_Unwrapped
enum struct __EVRTrackedCameraFrameLayout_Unwrapped : int32_t {
__E_Mono = static_cast<int32_t>(0x1),
__E_Stereo = static_cast<int32_t>(0x2),
__E_VerticalLayout = static_cast<int32_t>(0x10),
__E_HorizontalLayout = static_cast<int32_t>(0x20),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Mono value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::EVRTrackedCameraFrameLayout const Mono;

/// @brief Field Stereo value: static_cast<int32_t>(0x2)
static ::OVR::OpenVR::EVRTrackedCameraFrameLayout const Stereo;

/// @brief Field VerticalLayout value: static_cast<int32_t>(0x10)
static ::OVR::OpenVR::EVRTrackedCameraFrameLayout const VerticalLayout;

/// @brief Field HorizontalLayout value: static_cast<int32_t>(0x20)
static ::OVR::OpenVR::EVRTrackedCameraFrameLayout const HorizontalLayout;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRTrackedCameraFrameLayout_Unwrapped () const noexcept {
return std::bit_cast<__EVRTrackedCameraFrameLayout_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRTrackedCameraFrameLayout(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EVRTrackedCameraFrameLayout(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EVRTrackedCameraFrameLayout()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRTrackedCameraFrameLayout, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRTrackedCameraFrameLayout, "OVR.OpenVR", "EVRTrackedCameraFrameLayout");
