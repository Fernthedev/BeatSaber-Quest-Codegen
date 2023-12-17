#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRApplicationTransitionState)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRApplicationTransitionState;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRApplicationTransitionState);
// Type: OVR.OpenVR::EVRApplicationTransitionState
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8618))
// CS Name: ::OVR.OpenVR::EVRApplicationTransitionState
struct CORDL_TYPE EVRApplicationTransitionState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVRApplicationTransitionState_Unwrapped
enum struct __EVRApplicationTransitionState_Unwrapped : int32_t {
__E_VRApplicationTransition_None = static_cast<int32_t>(0x0),
__E_VRApplicationTransition_OldAppQuitSent = static_cast<int32_t>(0xa),
__E_VRApplicationTransition_WaitingForExternalLaunch = static_cast<int32_t>(0xb),
__E_VRApplicationTransition_NewAppLaunched = static_cast<int32_t>(0x14),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field VRApplicationTransition_None value: static_cast<int32_t>(0x0)
static ::OVR::OpenVR::EVRApplicationTransitionState const VRApplicationTransition_None;

/// @brief Field VRApplicationTransition_OldAppQuitSent value: static_cast<int32_t>(0xa)
static ::OVR::OpenVR::EVRApplicationTransitionState const VRApplicationTransition_OldAppQuitSent;

/// @brief Field VRApplicationTransition_WaitingForExternalLaunch value: static_cast<int32_t>(0xb)
static ::OVR::OpenVR::EVRApplicationTransitionState const VRApplicationTransition_WaitingForExternalLaunch;

/// @brief Field VRApplicationTransition_NewAppLaunched value: static_cast<int32_t>(0x14)
static ::OVR::OpenVR::EVRApplicationTransitionState const VRApplicationTransition_NewAppLaunched;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRApplicationTransitionState_Unwrapped () const noexcept {
return std::bit_cast<__EVRApplicationTransitionState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRApplicationTransitionState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EVRApplicationTransitionState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EVRApplicationTransitionState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRApplicationTransitionState, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRApplicationTransitionState, "OVR.OpenVR", "EVRApplicationTransitionState");
