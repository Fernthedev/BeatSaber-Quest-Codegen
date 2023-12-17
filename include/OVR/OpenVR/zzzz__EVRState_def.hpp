#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRState)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRState;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRState);
// Type: OVR.OpenVR::EVRState
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8590))
// CS Name: ::OVR.OpenVR::EVRState
struct CORDL_TYPE EVRState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVRState_Unwrapped
enum struct __EVRState_Unwrapped : int32_t {
__E_Undefined = static_cast<int32_t>(0xffffffff),
__E_Off = static_cast<int32_t>(0x0),
__E_Searching = static_cast<int32_t>(0x1),
__E_Searching_Alert = static_cast<int32_t>(0x2),
__E_Ready = static_cast<int32_t>(0x3),
__E_Ready_Alert = static_cast<int32_t>(0x4),
__E_NotReady = static_cast<int32_t>(0x5),
__E_Standby = static_cast<int32_t>(0x6),
__E_Ready_Alert_Low = static_cast<int32_t>(0x7),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Undefined value: static_cast<int32_t>(0xffffffff)
static ::OVR::OpenVR::EVRState const Undefined;

/// @brief Field Off value: static_cast<int32_t>(0x0)
static ::OVR::OpenVR::EVRState const Off;

/// @brief Field Searching value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::EVRState const Searching;

/// @brief Field Searching_Alert value: static_cast<int32_t>(0x2)
static ::OVR::OpenVR::EVRState const Searching_Alert;

/// @brief Field Ready value: static_cast<int32_t>(0x3)
static ::OVR::OpenVR::EVRState const Ready;

/// @brief Field Ready_Alert value: static_cast<int32_t>(0x4)
static ::OVR::OpenVR::EVRState const Ready_Alert;

/// @brief Field NotReady value: static_cast<int32_t>(0x5)
static ::OVR::OpenVR::EVRState const NotReady;

/// @brief Field Standby value: static_cast<int32_t>(0x6)
static ::OVR::OpenVR::EVRState const Standby;

/// @brief Field Ready_Alert_Low value: static_cast<int32_t>(0x7)
static ::OVR::OpenVR::EVRState const Ready_Alert_Low;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRState_Unwrapped () const noexcept {
return std::bit_cast<__EVRState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EVRState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EVRState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRState, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRState, "OVR.OpenVR", "EVRState");
