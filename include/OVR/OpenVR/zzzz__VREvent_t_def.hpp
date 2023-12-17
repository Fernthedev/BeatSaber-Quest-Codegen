#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_t)
namespace OVR::OpenVR {
struct VREvent_Data_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_t);
// Type: OVR.OpenVR::VREvent_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8692))
// CS Name: ::OVR.OpenVR::VREvent_t
struct CORDL_TYPE VREvent_t : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field eventType offset 0x0
 __declspec(property(get=__get_eventType, put=__set_eventType)) uint32_t  eventType;

/// @brief Field trackedDeviceIndex offset 0x4
 __declspec(property(get=__get_trackedDeviceIndex, put=__set_trackedDeviceIndex)) uint32_t  trackedDeviceIndex;

/// @brief Field eventAgeSeconds offset 0x8
 __declspec(property(get=__get_eventAgeSeconds, put=__set_eventAgeSeconds)) float_t  eventAgeSeconds;

/// @brief Field data offset 0x10
 __declspec(property(get=__get_data, put=__set_data)) ::OVR::OpenVR::VREvent_Data_t  data;

constexpr void __set_eventType(uint32_t  value) ;

constexpr uint32_t& __get_eventType() ;

constexpr uint32_t const& __get_eventType() const;

constexpr void __set_trackedDeviceIndex(uint32_t  value) ;

constexpr uint32_t& __get_trackedDeviceIndex() ;

constexpr uint32_t const& __get_trackedDeviceIndex() const;

constexpr void __set_eventAgeSeconds(float_t  value) ;

constexpr float_t& __get_eventAgeSeconds() ;

constexpr float_t const& __get_eventAgeSeconds() const;

constexpr void __set_data(::OVR::OpenVR::VREvent_Data_t  value) ;

constexpr ::OVR::OpenVR::VREvent_Data_t& __get_data() ;

constexpr ::OVR::OpenVR::VREvent_Data_t const& __get_data() const;

// Ctor Parameters [CppParam { name: "eventType", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "trackedDeviceIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "eventAgeSeconds", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::OVR::OpenVR::VREvent_Data_t", modifiers: "", def_value: None }]
constexpr VREvent_t(uint32_t  eventType, uint32_t  trackedDeviceIndex, float_t  eventAgeSeconds, ::OVR::OpenVR::VREvent_Data_t  data) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_t, 0x30>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_t, "OVR.OpenVR", "VREvent_t");
