#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Scroll_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Scroll_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Scroll_t);
// Type: OVR.OpenVR::VREvent_Scroll_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8668))
// CS Name: ::OVR.OpenVR::VREvent_Scroll_t
struct CORDL_TYPE VREvent_Scroll_t : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field xdelta offset 0x0
 __declspec(property(get=__get_xdelta, put=__set_xdelta)) float_t  xdelta;

/// @brief Field ydelta offset 0x4
 __declspec(property(get=__get_ydelta, put=__set_ydelta)) float_t  ydelta;

/// @brief Field repeatCount offset 0x8
 __declspec(property(get=__get_repeatCount, put=__set_repeatCount)) uint32_t  repeatCount;

constexpr void __set_xdelta(float_t  value) ;

constexpr float_t& __get_xdelta() ;

constexpr float_t const& __get_xdelta() const;

constexpr void __set_ydelta(float_t  value) ;

constexpr float_t& __get_ydelta() ;

constexpr float_t const& __get_ydelta() const;

constexpr void __set_repeatCount(uint32_t  value) ;

constexpr uint32_t& __get_repeatCount() ;

constexpr uint32_t const& __get_repeatCount() const;

// Ctor Parameters [CppParam { name: "xdelta", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ydelta", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "repeatCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VREvent_Scroll_t(float_t  xdelta, float_t  ydelta, uint32_t  repeatCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_Scroll_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_Scroll_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Scroll_t, 0xc>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Scroll_t, "OVR.OpenVR", "VREvent_Scroll_t");
