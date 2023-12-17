#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HmdQuaternion_t)
// Forward declare root types
namespace OVR::OpenVR {
struct HmdQuaternion_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdQuaternion_t);
// Type: OVR.OpenVR::HmdQuaternion_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8651))
// CS Name: ::OVR.OpenVR::HmdQuaternion_t
struct CORDL_TYPE HmdQuaternion_t : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field w offset 0x0
 __declspec(property(get=__get_w, put=__set_w)) double_t  w;

/// @brief Field x offset 0x8
 __declspec(property(get=__get_x, put=__set_x)) double_t  x;

/// @brief Field y offset 0x10
 __declspec(property(get=__get_y, put=__set_y)) double_t  y;

/// @brief Field z offset 0x18
 __declspec(property(get=__get_z, put=__set_z)) double_t  z;

constexpr void __set_w(double_t  value) ;

constexpr double_t& __get_w() ;

constexpr double_t const& __get_w() const;

constexpr void __set_x(double_t  value) ;

constexpr double_t& __get_x() ;

constexpr double_t const& __get_x() const;

constexpr void __set_y(double_t  value) ;

constexpr double_t& __get_y() ;

constexpr double_t const& __get_y() const;

constexpr void __set_z(double_t  value) ;

constexpr double_t& __get_z() ;

constexpr double_t const& __get_z() const;

// Ctor Parameters [CppParam { name: "w", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "x", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "double_t", modifiers: "", def_value: None }]
constexpr HmdQuaternion_t(double_t  w, double_t  x, double_t  y, double_t  z) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HmdQuaternion_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HmdQuaternion_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdQuaternion_t, 0x20>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdQuaternion_t, "OVR.OpenVR", "HmdQuaternion_t");
