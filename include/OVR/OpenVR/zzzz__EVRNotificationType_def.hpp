#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRNotificationType)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRNotificationType;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRNotificationType);
// Type: OVR.OpenVR::EVRNotificationType
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8634))
// CS Name: ::OVR.OpenVR::EVRNotificationType
struct CORDL_TYPE EVRNotificationType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVRNotificationType_Unwrapped
enum struct __EVRNotificationType_Unwrapped : int32_t {
__E_Transient = static_cast<int32_t>(0x0),
__E_Persistent = static_cast<int32_t>(0x1),
__E_Transient_SystemWithUserValue = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Transient value: static_cast<int32_t>(0x0)
static ::OVR::OpenVR::EVRNotificationType const Transient;

/// @brief Field Persistent value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::EVRNotificationType const Persistent;

/// @brief Field Transient_SystemWithUserValue value: static_cast<int32_t>(0x2)
static ::OVR::OpenVR::EVRNotificationType const Transient_SystemWithUserValue;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRNotificationType_Unwrapped () const noexcept {
return std::bit_cast<__EVRNotificationType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRNotificationType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EVRNotificationType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EVRNotificationType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRNotificationType, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRNotificationType, "OVR.OpenVR", "EVRNotificationType");
