#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRPlatformSDK)
// Forward declare root types
namespace GlobalNamespace {
struct VRPlatformSDK;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VRPlatformSDK);
// Type: ::VRPlatformSDK
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14415))
// CS Name: ::VRPlatformSDK
struct CORDL_TYPE VRPlatformSDK : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VRPlatformSDK_Unwrapped
enum struct __VRPlatformSDK_Unwrapped : int32_t {
__E_OpenXR = static_cast<int32_t>(0x0),
__E_Oculus = static_cast<int32_t>(0x1),
__E_Unknown = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OpenXR value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::VRPlatformSDK const OpenXR;

/// @brief Field Oculus value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::VRPlatformSDK const Oculus;

/// @brief Field Unknown value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::VRPlatformSDK const Unknown;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __VRPlatformSDK_Unwrapped () const noexcept {
return std::bit_cast<__VRPlatformSDK_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VRPlatformSDK(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VRPlatformSDK(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VRPlatformSDK()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRPlatformSDK, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRPlatformSDK, "", "VRPlatformSDK");
