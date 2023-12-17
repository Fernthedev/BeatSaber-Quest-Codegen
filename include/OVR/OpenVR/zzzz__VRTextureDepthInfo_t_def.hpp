#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRTextureDepthInfo_t)
namespace OVR::OpenVR {
struct HmdVector2_t;
}
namespace OVR::OpenVR {
struct HmdMatrix44_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VRTextureDepthInfo_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRTextureDepthInfo_t);
// Type: OVR.OpenVR::VRTextureDepthInfo_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8661))
// CS Name: ::OVR.OpenVR::VRTextureDepthInfo_t
struct CORDL_TYPE VRTextureDepthInfo_t : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field handle offset 0x0
 __declspec(property(get=__get_handle, put=__set_handle)) ::cordl_internals::intptr_t  handle;

/// @brief Field mProjection offset 0x8
 __declspec(property(get=__get_mProjection, put=__set_mProjection)) ::OVR::OpenVR::HmdMatrix44_t  mProjection;

/// @brief Field vRange offset 0x48
 __declspec(property(get=__get_vRange, put=__set_vRange)) ::OVR::OpenVR::HmdVector2_t  vRange;

constexpr void __set_handle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_handle() ;

constexpr ::cordl_internals::intptr_t const& __get_handle() const;

constexpr void __set_mProjection(::OVR::OpenVR::HmdMatrix44_t  value) ;

constexpr ::OVR::OpenVR::HmdMatrix44_t& __get_mProjection() ;

constexpr ::OVR::OpenVR::HmdMatrix44_t const& __get_mProjection() const;

constexpr void __set_vRange(::OVR::OpenVR::HmdVector2_t  value) ;

constexpr ::OVR::OpenVR::HmdVector2_t& __get_vRange() ;

constexpr ::OVR::OpenVR::HmdVector2_t const& __get_vRange() const;

// Ctor Parameters [CppParam { name: "handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "mProjection", ty: "::OVR::OpenVR::HmdMatrix44_t", modifiers: "", def_value: None }, CppParam { name: "vRange", ty: "::OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: None }]
constexpr VRTextureDepthInfo_t(::cordl_internals::intptr_t  handle, ::OVR::OpenVR::HmdMatrix44_t  mProjection, ::OVR::OpenVR::HmdVector2_t  vRange) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VRTextureDepthInfo_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VRTextureDepthInfo_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRTextureDepthInfo_t, 0x50>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRTextureDepthInfo_t, "OVR.OpenVR", "VRTextureDepthInfo_t");
