#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VRTextureWithDepth_t)
namespace OVR::OpenVR {
struct VRTextureDepthInfo_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VRTextureWithDepth_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRTextureWithDepth_t);
// Type: OVR.OpenVR::VRTextureWithDepth_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8662))
// CS Name: ::OVR.OpenVR::VRTextureWithDepth_t
struct CORDL_TYPE VRTextureWithDepth_t : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field depth offset 0x0
 __declspec(property(get=__get_depth, put=__set_depth)) ::OVR::OpenVR::VRTextureDepthInfo_t  depth;

constexpr void __set_depth(::OVR::OpenVR::VRTextureDepthInfo_t  value) ;

constexpr ::OVR::OpenVR::VRTextureDepthInfo_t& __get_depth() ;

constexpr ::OVR::OpenVR::VRTextureDepthInfo_t const& __get_depth() const;

// Ctor Parameters [CppParam { name: "depth", ty: "::OVR::OpenVR::VRTextureDepthInfo_t", modifiers: "", def_value: None }]
constexpr VRTextureWithDepth_t(::OVR::OpenVR::VRTextureDepthInfo_t  depth) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VRTextureWithDepth_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VRTextureWithDepth_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRTextureWithDepth_t, 0x50>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRTextureWithDepth_t, "OVR.OpenVR", "VRTextureWithDepth_t");
