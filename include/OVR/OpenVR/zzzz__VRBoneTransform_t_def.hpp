#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VRBoneTransform_t)
namespace OVR::OpenVR {
struct HmdVector4_t;
}
namespace OVR::OpenVR {
struct HmdQuaternionf_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VRBoneTransform_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRBoneTransform_t);
// Type: OVR.OpenVR::VRBoneTransform_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8699))
// CS Name: ::OVR.OpenVR::VRBoneTransform_t
struct CORDL_TYPE VRBoneTransform_t : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field position offset 0x0
 __declspec(property(get=__get_position, put=__set_position)) ::OVR::OpenVR::HmdVector4_t  position;

/// @brief Field orientation offset 0x10
 __declspec(property(get=__get_orientation, put=__set_orientation)) ::OVR::OpenVR::HmdQuaternionf_t  orientation;

constexpr void __set_position(::OVR::OpenVR::HmdVector4_t  value) ;

constexpr ::OVR::OpenVR::HmdVector4_t& __get_position() ;

constexpr ::OVR::OpenVR::HmdVector4_t const& __get_position() const;

constexpr void __set_orientation(::OVR::OpenVR::HmdQuaternionf_t  value) ;

constexpr ::OVR::OpenVR::HmdQuaternionf_t& __get_orientation() ;

constexpr ::OVR::OpenVR::HmdQuaternionf_t const& __get_orientation() const;

// Ctor Parameters [CppParam { name: "position", ty: "::OVR::OpenVR::HmdVector4_t", modifiers: "", def_value: None }, CppParam { name: "orientation", ty: "::OVR::OpenVR::HmdQuaternionf_t", modifiers: "", def_value: None }]
constexpr VRBoneTransform_t(::OVR::OpenVR::HmdVector4_t  position, ::OVR::OpenVR::HmdQuaternionf_t  orientation) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VRBoneTransform_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VRBoneTransform_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRBoneTransform_t, 0x20>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRBoneTransform_t, "OVR.OpenVR", "VRBoneTransform_t");
