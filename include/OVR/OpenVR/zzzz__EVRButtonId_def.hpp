#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRButtonId)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRButtonId;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRButtonId);
// Type: OVR.OpenVR::EVRButtonId
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8593))
// CS Name: ::OVR.OpenVR::EVRButtonId
struct CORDL_TYPE EVRButtonId : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVRButtonId_Unwrapped
enum struct __EVRButtonId_Unwrapped : int32_t {
__E_k_EButton_System = static_cast<int32_t>(0x0),
__E_k_EButton_ApplicationMenu = static_cast<int32_t>(0x1),
__E_k_EButton_Grip = static_cast<int32_t>(0x2),
__E_k_EButton_DPad_Left = static_cast<int32_t>(0x3),
__E_k_EButton_DPad_Up = static_cast<int32_t>(0x4),
__E_k_EButton_DPad_Right = static_cast<int32_t>(0x5),
__E_k_EButton_DPad_Down = static_cast<int32_t>(0x6),
__E_k_EButton_A = static_cast<int32_t>(0x7),
__E_k_EButton_ProximitySensor = static_cast<int32_t>(0x1f),
__E_k_EButton_Axis0 = static_cast<int32_t>(0x20),
__E_k_EButton_Axis1 = static_cast<int32_t>(0x21),
__E_k_EButton_Axis2 = static_cast<int32_t>(0x22),
__E_k_EButton_Axis3 = static_cast<int32_t>(0x23),
__E_k_EButton_Axis4 = static_cast<int32_t>(0x24),
__E_k_EButton_SteamVR_Touchpad = static_cast<int32_t>(0x20),
__E_k_EButton_SteamVR_Trigger = static_cast<int32_t>(0x21),
__E_k_EButton_Dashboard_Back = static_cast<int32_t>(0x2),
__E_k_EButton_Knuckles_A = static_cast<int32_t>(0x2),
__E_k_EButton_Knuckles_B = static_cast<int32_t>(0x1),
__E_k_EButton_Knuckles_JoyStick = static_cast<int32_t>(0x23),
__E_k_EButton_Max = static_cast<int32_t>(0x40),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EButton_System value: static_cast<int32_t>(0x0)
static ::OVR::OpenVR::EVRButtonId const k_EButton_System;

/// @brief Field k_EButton_ApplicationMenu value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::EVRButtonId const k_EButton_ApplicationMenu;

/// @brief Field k_EButton_Grip value: static_cast<int32_t>(0x2)
static ::OVR::OpenVR::EVRButtonId const k_EButton_Grip;

/// @brief Field k_EButton_DPad_Left value: static_cast<int32_t>(0x3)
static ::OVR::OpenVR::EVRButtonId const k_EButton_DPad_Left;

/// @brief Field k_EButton_DPad_Up value: static_cast<int32_t>(0x4)
static ::OVR::OpenVR::EVRButtonId const k_EButton_DPad_Up;

/// @brief Field k_EButton_DPad_Right value: static_cast<int32_t>(0x5)
static ::OVR::OpenVR::EVRButtonId const k_EButton_DPad_Right;

/// @brief Field k_EButton_DPad_Down value: static_cast<int32_t>(0x6)
static ::OVR::OpenVR::EVRButtonId const k_EButton_DPad_Down;

/// @brief Field k_EButton_A value: static_cast<int32_t>(0x7)
static ::OVR::OpenVR::EVRButtonId const k_EButton_A;

/// @brief Field k_EButton_ProximitySensor value: static_cast<int32_t>(0x1f)
static ::OVR::OpenVR::EVRButtonId const k_EButton_ProximitySensor;

/// @brief Field k_EButton_Axis0 value: static_cast<int32_t>(0x20)
static ::OVR::OpenVR::EVRButtonId const k_EButton_Axis0;

/// @brief Field k_EButton_Axis1 value: static_cast<int32_t>(0x21)
static ::OVR::OpenVR::EVRButtonId const k_EButton_Axis1;

/// @brief Field k_EButton_Axis2 value: static_cast<int32_t>(0x22)
static ::OVR::OpenVR::EVRButtonId const k_EButton_Axis2;

/// @brief Field k_EButton_Axis3 value: static_cast<int32_t>(0x23)
static ::OVR::OpenVR::EVRButtonId const k_EButton_Axis3;

/// @brief Field k_EButton_Axis4 value: static_cast<int32_t>(0x24)
static ::OVR::OpenVR::EVRButtonId const k_EButton_Axis4;

/// @brief Field k_EButton_SteamVR_Touchpad value: static_cast<int32_t>(0x20)
static ::OVR::OpenVR::EVRButtonId const k_EButton_SteamVR_Touchpad;

/// @brief Field k_EButton_SteamVR_Trigger value: static_cast<int32_t>(0x21)
static ::OVR::OpenVR::EVRButtonId const k_EButton_SteamVR_Trigger;

/// @brief Field k_EButton_Dashboard_Back value: static_cast<int32_t>(0x2)
static ::OVR::OpenVR::EVRButtonId const k_EButton_Dashboard_Back;

/// @brief Field k_EButton_Knuckles_A value: static_cast<int32_t>(0x2)
static ::OVR::OpenVR::EVRButtonId const k_EButton_Knuckles_A;

/// @brief Field k_EButton_Knuckles_B value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::EVRButtonId const k_EButton_Knuckles_B;

/// @brief Field k_EButton_Knuckles_JoyStick value: static_cast<int32_t>(0x23)
static ::OVR::OpenVR::EVRButtonId const k_EButton_Knuckles_JoyStick;

/// @brief Field k_EButton_Max value: static_cast<int32_t>(0x40)
static ::OVR::OpenVR::EVRButtonId const k_EButton_Max;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRButtonId_Unwrapped () const noexcept {
return std::bit_cast<__EVRButtonId_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRButtonId(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EVRButtonId(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EVRButtonId()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRButtonId, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRButtonId, "OVR.OpenVR", "EVRButtonId");
