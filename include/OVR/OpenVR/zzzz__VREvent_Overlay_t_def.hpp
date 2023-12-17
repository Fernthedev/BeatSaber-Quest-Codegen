#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Overlay_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Overlay_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Overlay_t);
// Type: OVR.OpenVR::VREvent_Overlay_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8672))
// CS Name: ::OVR.OpenVR::VREvent_Overlay_t
struct CORDL_TYPE VREvent_Overlay_t : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field overlayHandle offset 0x0
 __declspec(property(get=__get_overlayHandle, put=__set_overlayHandle)) uint64_t  overlayHandle;

/// @brief Field devicePath offset 0x8
 __declspec(property(get=__get_devicePath, put=__set_devicePath)) uint64_t  devicePath;

constexpr void __set_overlayHandle(uint64_t  value) ;

constexpr uint64_t& __get_overlayHandle() ;

constexpr uint64_t const& __get_overlayHandle() const;

constexpr void __set_devicePath(uint64_t  value) ;

constexpr uint64_t& __get_devicePath() ;

constexpr uint64_t const& __get_devicePath() const;

// Ctor Parameters [CppParam { name: "overlayHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "devicePath", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr VREvent_Overlay_t(uint64_t  overlayHandle, uint64_t  devicePath) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_Overlay_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_Overlay_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Overlay_t, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Overlay_t, "OVR.OpenVR", "VREvent_Overlay_t");
