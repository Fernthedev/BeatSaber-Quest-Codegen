#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRNotificationError)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRNotificationError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRNotificationError);
// Type: OVR.OpenVR::EVRNotificationError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8605))
// CS Name: ::OVR.OpenVR::EVRNotificationError
struct CORDL_TYPE EVRNotificationError : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVRNotificationError_Unwrapped
enum struct __EVRNotificationError_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x0),
__E_InvalidNotificationId = static_cast<int32_t>(0x64),
__E_NotificationQueueFull = static_cast<int32_t>(0x65),
__E_InvalidOverlayHandle = static_cast<int32_t>(0x66),
__E_SystemWithUserValueAlreadyExists = static_cast<int32_t>(0x67),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OK value: static_cast<int32_t>(0x0)
static ::OVR::OpenVR::EVRNotificationError const OK;

/// @brief Field InvalidNotificationId value: static_cast<int32_t>(0x64)
static ::OVR::OpenVR::EVRNotificationError const InvalidNotificationId;

/// @brief Field NotificationQueueFull value: static_cast<int32_t>(0x65)
static ::OVR::OpenVR::EVRNotificationError const NotificationQueueFull;

/// @brief Field InvalidOverlayHandle value: static_cast<int32_t>(0x66)
static ::OVR::OpenVR::EVRNotificationError const InvalidOverlayHandle;

/// @brief Field SystemWithUserValueAlreadyExists value: static_cast<int32_t>(0x67)
static ::OVR::OpenVR::EVRNotificationError const SystemWithUserValueAlreadyExists;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRNotificationError_Unwrapped () const noexcept {
return std::bit_cast<__EVRNotificationError_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRNotificationError(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EVRNotificationError(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EVRNotificationError()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRNotificationError, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRNotificationError, "OVR.OpenVR", "EVRNotificationError");
