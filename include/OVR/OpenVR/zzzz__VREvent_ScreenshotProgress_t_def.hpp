#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VREvent_ScreenshotProgress_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_ScreenshotProgress_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_ScreenshotProgress_t);
// Type: OVR.OpenVR::VREvent_ScreenshotProgress_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8681))
// CS Name: ::OVR.OpenVR::VREvent_ScreenshotProgress_t
struct CORDL_TYPE VREvent_ScreenshotProgress_t : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field progress offset 0x0
 __declspec(property(get=__get_progress, put=__set_progress)) float_t  progress;

constexpr void __set_progress(float_t  value) ;

constexpr float_t& __get_progress() ;

constexpr float_t const& __get_progress() const;

// Ctor Parameters [CppParam { name: "progress", ty: "float_t", modifiers: "", def_value: None }]
constexpr VREvent_ScreenshotProgress_t(float_t  progress) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_ScreenshotProgress_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_ScreenshotProgress_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_ScreenshotProgress_t, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_ScreenshotProgress_t, "OVR.OpenVR", "VREvent_ScreenshotProgress_t");
