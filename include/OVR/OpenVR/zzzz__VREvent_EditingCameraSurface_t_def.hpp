#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_EditingCameraSurface_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_EditingCameraSurface_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_EditingCameraSurface_t);
// Type: OVR.OpenVR::VREvent_EditingCameraSurface_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8683))
// CS Name: ::OVR.OpenVR::VREvent_EditingCameraSurface_t
struct CORDL_TYPE VREvent_EditingCameraSurface_t : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field overlayHandle offset 0x0
 __declspec(property(get=__get_overlayHandle, put=__set_overlayHandle)) uint64_t  overlayHandle;

/// @brief Field nVisualMode offset 0x8
 __declspec(property(get=__get_nVisualMode, put=__set_nVisualMode)) uint32_t  nVisualMode;

constexpr void __set_overlayHandle(uint64_t  value) ;

constexpr uint64_t& __get_overlayHandle() ;

constexpr uint64_t const& __get_overlayHandle() const;

constexpr void __set_nVisualMode(uint32_t  value) ;

constexpr uint32_t& __get_nVisualMode() ;

constexpr uint32_t const& __get_nVisualMode() const;

// Ctor Parameters [CppParam { name: "overlayHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "nVisualMode", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VREvent_EditingCameraSurface_t(uint64_t  overlayHandle, uint32_t  nVisualMode) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_EditingCameraSurface_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_EditingCameraSurface_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_EditingCameraSurface_t, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_EditingCameraSurface_t, "OVR.OpenVR", "VREvent_EditingCameraSurface_t");
