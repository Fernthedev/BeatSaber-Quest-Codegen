#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputPoseActionData_t)
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct InputPoseActionData_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::InputPoseActionData_t);
// Type: OVR.OpenVR::InputPoseActionData_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8722))
// CS Name: ::OVR.OpenVR::InputPoseActionData_t
struct CORDL_TYPE InputPoseActionData_t : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field bActive offset 0x0
 __declspec(property(get=__get_bActive, put=__set_bActive)) bool  bActive;

/// @brief Field activeOrigin offset 0x8
 __declspec(property(get=__get_activeOrigin, put=__set_activeOrigin)) uint64_t  activeOrigin;

/// @brief Field pose offset 0x10
 __declspec(property(get=__get_pose, put=__set_pose)) ::OVR::OpenVR::TrackedDevicePose_t  pose;

constexpr void __set_bActive(bool  value) ;

constexpr bool& __get_bActive() ;

constexpr bool const& __get_bActive() const;

constexpr void __set_activeOrigin(uint64_t  value) ;

constexpr uint64_t& __get_activeOrigin() ;

constexpr uint64_t const& __get_activeOrigin() const;

constexpr void __set_pose(::OVR::OpenVR::TrackedDevicePose_t  value) ;

constexpr ::OVR::OpenVR::TrackedDevicePose_t& __get_pose() ;

constexpr ::OVR::OpenVR::TrackedDevicePose_t const& __get_pose() const;

// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pose", ty: "::OVR::OpenVR::TrackedDevicePose_t", modifiers: "", def_value: None }]
constexpr InputPoseActionData_t(bool  bActive, uint64_t  activeOrigin, ::OVR::OpenVR::TrackedDevicePose_t  pose) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputPoseActionData_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputPoseActionData_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::InputPoseActionData_t, 0x60>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::InputPoseActionData_t, "OVR.OpenVR", "InputPoseActionData_t");
