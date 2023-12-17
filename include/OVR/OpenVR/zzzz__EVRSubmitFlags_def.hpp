#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRSubmitFlags)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRSubmitFlags;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRSubmitFlags);
// Type: OVR.OpenVR::EVRSubmitFlags
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8589))
// CS Name: ::OVR.OpenVR::EVRSubmitFlags
struct CORDL_TYPE EVRSubmitFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVRSubmitFlags_Unwrapped
enum struct __EVRSubmitFlags_Unwrapped : int32_t {
__E_Submit_Default = static_cast<int32_t>(0x0),
__E_Submit_LensDistortionAlreadyApplied = static_cast<int32_t>(0x1),
__E_Submit_GlRenderBuffer = static_cast<int32_t>(0x2),
__E_Submit_Reserved = static_cast<int32_t>(0x4),
__E_Submit_TextureWithPose = static_cast<int32_t>(0x8),
__E_Submit_TextureWithDepth = static_cast<int32_t>(0x10),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Submit_Default value: static_cast<int32_t>(0x0)
static ::OVR::OpenVR::EVRSubmitFlags const Submit_Default;

/// @brief Field Submit_LensDistortionAlreadyApplied value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::EVRSubmitFlags const Submit_LensDistortionAlreadyApplied;

/// @brief Field Submit_GlRenderBuffer value: static_cast<int32_t>(0x2)
static ::OVR::OpenVR::EVRSubmitFlags const Submit_GlRenderBuffer;

/// @brief Field Submit_Reserved value: static_cast<int32_t>(0x4)
static ::OVR::OpenVR::EVRSubmitFlags const Submit_Reserved;

/// @brief Field Submit_TextureWithPose value: static_cast<int32_t>(0x8)
static ::OVR::OpenVR::EVRSubmitFlags const Submit_TextureWithPose;

/// @brief Field Submit_TextureWithDepth value: static_cast<int32_t>(0x10)
static ::OVR::OpenVR::EVRSubmitFlags const Submit_TextureWithDepth;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRSubmitFlags_Unwrapped () const noexcept {
return std::bit_cast<__EVRSubmitFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRSubmitFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EVRSubmitFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EVRSubmitFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRSubmitFlags, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRSubmitFlags, "OVR.OpenVR", "EVRSubmitFlags");
