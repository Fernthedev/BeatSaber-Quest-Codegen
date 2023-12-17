#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_MessageOverlay_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_MessageOverlay_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_MessageOverlay_t);
// Type: OVR.OpenVR::VREvent_MessageOverlay_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8684))
// CS Name: ::OVR.OpenVR::VREvent_MessageOverlay_t
struct CORDL_TYPE VREvent_MessageOverlay_t : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field unVRMessageOverlayResponse offset 0x0
 __declspec(property(get=__get_unVRMessageOverlayResponse, put=__set_unVRMessageOverlayResponse)) uint32_t  unVRMessageOverlayResponse;

constexpr void __set_unVRMessageOverlayResponse(uint32_t  value) ;

constexpr uint32_t& __get_unVRMessageOverlayResponse() ;

constexpr uint32_t const& __get_unVRMessageOverlayResponse() const;

// Ctor Parameters [CppParam { name: "unVRMessageOverlayResponse", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VREvent_MessageOverlay_t(uint32_t  unVRMessageOverlayResponse) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_MessageOverlay_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_MessageOverlay_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_MessageOverlay_t, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_MessageOverlay_t, "OVR.OpenVR", "VREvent_MessageOverlay_t");
