#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Notification_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Notification_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Notification_t);
// Type: OVR.OpenVR::VREvent_Notification_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8670))
// CS Name: ::OVR.OpenVR::VREvent_Notification_t
struct CORDL_TYPE VREvent_Notification_t : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field ulUserValue offset 0x0
 __declspec(property(get=__get_ulUserValue, put=__set_ulUserValue)) uint64_t  ulUserValue;

/// @brief Field notificationId offset 0x8
 __declspec(property(get=__get_notificationId, put=__set_notificationId)) uint32_t  notificationId;

constexpr void __set_ulUserValue(uint64_t  value) ;

constexpr uint64_t& __get_ulUserValue() ;

constexpr uint64_t const& __get_ulUserValue() const;

constexpr void __set_notificationId(uint32_t  value) ;

constexpr uint32_t& __get_notificationId() ;

constexpr uint32_t const& __get_notificationId() const;

// Ctor Parameters [CppParam { name: "ulUserValue", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "notificationId", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VREvent_Notification_t(uint64_t  ulUserValue, uint32_t  notificationId) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_Notification_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_Notification_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Notification_t, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Notification_t, "OVR.OpenVR", "VREvent_Notification_t");
