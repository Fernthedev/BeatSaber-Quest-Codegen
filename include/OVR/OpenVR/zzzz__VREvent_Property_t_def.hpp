#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Property_t)
namespace OVR::OpenVR {
struct ETrackedDeviceProperty;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Property_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Property_t);
// Type: OVR.OpenVR::VREvent_Property_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8685))
// CS Name: ::OVR.OpenVR::VREvent_Property_t
struct CORDL_TYPE VREvent_Property_t : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field container offset 0x0
 __declspec(property(get=__get_container, put=__set_container)) uint64_t  container;

/// @brief Field prop offset 0x8
 __declspec(property(get=__get_prop, put=__set_prop)) ::OVR::OpenVR::ETrackedDeviceProperty  prop;

constexpr void __set_container(uint64_t  value) ;

constexpr uint64_t& __get_container() ;

constexpr uint64_t const& __get_container() const;

constexpr void __set_prop(::OVR::OpenVR::ETrackedDeviceProperty  value) ;

constexpr ::OVR::OpenVR::ETrackedDeviceProperty& __get_prop() ;

constexpr ::OVR::OpenVR::ETrackedDeviceProperty const& __get_prop() const;

// Ctor Parameters [CppParam { name: "container", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "prop", ty: "::OVR::OpenVR::ETrackedDeviceProperty", modifiers: "", def_value: None }]
constexpr VREvent_Property_t(uint64_t  container, ::OVR::OpenVR::ETrackedDeviceProperty  prop) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_Property_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_Property_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Property_t, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Property_t, "OVR.OpenVR", "VREvent_Property_t");
