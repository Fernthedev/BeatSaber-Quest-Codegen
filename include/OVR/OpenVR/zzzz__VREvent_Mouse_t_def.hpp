#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Mouse_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Mouse_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Mouse_t);
// Type: OVR.OpenVR::VREvent_Mouse_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8667))
// CS Name: ::OVR.OpenVR::VREvent_Mouse_t
struct CORDL_TYPE VREvent_Mouse_t : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field x offset 0x0
 __declspec(property(get=__get_x, put=__set_x)) float_t  x;

/// @brief Field y offset 0x4
 __declspec(property(get=__get_y, put=__set_y)) float_t  y;

/// @brief Field button offset 0x8
 __declspec(property(get=__get_button, put=__set_button)) uint32_t  button;

constexpr void __set_x(float_t  value) ;

constexpr float_t& __get_x() ;

constexpr float_t const& __get_x() const;

constexpr void __set_y(float_t  value) ;

constexpr float_t& __get_y() ;

constexpr float_t const& __get_y() const;

constexpr void __set_button(uint32_t  value) ;

constexpr uint32_t& __get_button() ;

constexpr uint32_t const& __get_button() const;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "button", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VREvent_Mouse_t(float_t  x, float_t  y, uint32_t  button) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_Mouse_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_Mouse_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Mouse_t, 0xc>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Mouse_t, "OVR.OpenVR", "VREvent_Mouse_t");
