#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRControllerState_t)
namespace OVR::OpenVR {
struct VRControllerAxis_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VRControllerState_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRControllerState_t);
// Type: OVR.OpenVR::VRControllerState_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8696))
// CS Name: ::OVR.OpenVR::VRControllerState_t
struct CORDL_TYPE VRControllerState_t : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field unPacketNum offset 0x0
 __declspec(property(get=__get_unPacketNum, put=__set_unPacketNum)) uint32_t  unPacketNum;

/// @brief Field ulButtonPressed offset 0x8
 __declspec(property(get=__get_ulButtonPressed, put=__set_ulButtonPressed)) uint64_t  ulButtonPressed;

/// @brief Field ulButtonTouched offset 0x10
 __declspec(property(get=__get_ulButtonTouched, put=__set_ulButtonTouched)) uint64_t  ulButtonTouched;

/// @brief Field rAxis0 offset 0x18
 __declspec(property(get=__get_rAxis0, put=__set_rAxis0)) ::OVR::OpenVR::VRControllerAxis_t  rAxis0;

/// @brief Field rAxis1 offset 0x20
 __declspec(property(get=__get_rAxis1, put=__set_rAxis1)) ::OVR::OpenVR::VRControllerAxis_t  rAxis1;

/// @brief Field rAxis2 offset 0x28
 __declspec(property(get=__get_rAxis2, put=__set_rAxis2)) ::OVR::OpenVR::VRControllerAxis_t  rAxis2;

/// @brief Field rAxis3 offset 0x30
 __declspec(property(get=__get_rAxis3, put=__set_rAxis3)) ::OVR::OpenVR::VRControllerAxis_t  rAxis3;

/// @brief Field rAxis4 offset 0x38
 __declspec(property(get=__get_rAxis4, put=__set_rAxis4)) ::OVR::OpenVR::VRControllerAxis_t  rAxis4;

constexpr void __set_unPacketNum(uint32_t  value) ;

constexpr uint32_t& __get_unPacketNum() ;

constexpr uint32_t const& __get_unPacketNum() const;

constexpr void __set_ulButtonPressed(uint64_t  value) ;

constexpr uint64_t& __get_ulButtonPressed() ;

constexpr uint64_t const& __get_ulButtonPressed() const;

constexpr void __set_ulButtonTouched(uint64_t  value) ;

constexpr uint64_t& __get_ulButtonTouched() ;

constexpr uint64_t const& __get_ulButtonTouched() const;

constexpr void __set_rAxis0(::OVR::OpenVR::VRControllerAxis_t  value) ;

constexpr ::OVR::OpenVR::VRControllerAxis_t& __get_rAxis0() ;

constexpr ::OVR::OpenVR::VRControllerAxis_t const& __get_rAxis0() const;

constexpr void __set_rAxis1(::OVR::OpenVR::VRControllerAxis_t  value) ;

constexpr ::OVR::OpenVR::VRControllerAxis_t& __get_rAxis1() ;

constexpr ::OVR::OpenVR::VRControllerAxis_t const& __get_rAxis1() const;

constexpr void __set_rAxis2(::OVR::OpenVR::VRControllerAxis_t  value) ;

constexpr ::OVR::OpenVR::VRControllerAxis_t& __get_rAxis2() ;

constexpr ::OVR::OpenVR::VRControllerAxis_t const& __get_rAxis2() const;

constexpr void __set_rAxis3(::OVR::OpenVR::VRControllerAxis_t  value) ;

constexpr ::OVR::OpenVR::VRControllerAxis_t& __get_rAxis3() ;

constexpr ::OVR::OpenVR::VRControllerAxis_t const& __get_rAxis3() const;

constexpr void __set_rAxis4(::OVR::OpenVR::VRControllerAxis_t  value) ;

constexpr ::OVR::OpenVR::VRControllerAxis_t& __get_rAxis4() ;

constexpr ::OVR::OpenVR::VRControllerAxis_t const& __get_rAxis4() const;

// Ctor Parameters [CppParam { name: "unPacketNum", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ulButtonPressed", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "ulButtonTouched", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "rAxis0", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }, CppParam { name: "rAxis1", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }, CppParam { name: "rAxis2", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }, CppParam { name: "rAxis3", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }, CppParam { name: "rAxis4", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }]
constexpr VRControllerState_t(uint32_t  unPacketNum, uint64_t  ulButtonPressed, uint64_t  ulButtonTouched, ::OVR::OpenVR::VRControllerAxis_t  rAxis0, ::OVR::OpenVR::VRControllerAxis_t  rAxis1, ::OVR::OpenVR::VRControllerAxis_t  rAxis2, ::OVR::OpenVR::VRControllerAxis_t  rAxis3, ::OVR::OpenVR::VRControllerAxis_t  rAxis4) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VRControllerState_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VRControllerState_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRControllerState_t, 0x40>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRControllerState_t, "OVR.OpenVR", "VRControllerState_t");
