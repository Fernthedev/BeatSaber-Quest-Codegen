#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputAnalogActionData_t)
// Forward declare root types
namespace OVR::OpenVR {
struct InputAnalogActionData_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::InputAnalogActionData_t);
// Type: OVR.OpenVR::InputAnalogActionData_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8720))
// CS Name: ::OVR.OpenVR::InputAnalogActionData_t
struct CORDL_TYPE InputAnalogActionData_t : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field bActive offset 0x0
 __declspec(property(get=__get_bActive, put=__set_bActive)) bool  bActive;

/// @brief Field activeOrigin offset 0x8
 __declspec(property(get=__get_activeOrigin, put=__set_activeOrigin)) uint64_t  activeOrigin;

/// @brief Field x offset 0x10
 __declspec(property(get=__get_x, put=__set_x)) float_t  x;

/// @brief Field y offset 0x14
 __declspec(property(get=__get_y, put=__set_y)) float_t  y;

/// @brief Field z offset 0x18
 __declspec(property(get=__get_z, put=__set_z)) float_t  z;

/// @brief Field deltaX offset 0x1c
 __declspec(property(get=__get_deltaX, put=__set_deltaX)) float_t  deltaX;

/// @brief Field deltaY offset 0x20
 __declspec(property(get=__get_deltaY, put=__set_deltaY)) float_t  deltaY;

/// @brief Field deltaZ offset 0x24
 __declspec(property(get=__get_deltaZ, put=__set_deltaZ)) float_t  deltaZ;

/// @brief Field fUpdateTime offset 0x28
 __declspec(property(get=__get_fUpdateTime, put=__set_fUpdateTime)) float_t  fUpdateTime;

constexpr void __set_bActive(bool  value) ;

constexpr bool& __get_bActive() ;

constexpr bool const& __get_bActive() const;

constexpr void __set_activeOrigin(uint64_t  value) ;

constexpr uint64_t& __get_activeOrigin() ;

constexpr uint64_t const& __get_activeOrigin() const;

constexpr void __set_x(float_t  value) ;

constexpr float_t& __get_x() ;

constexpr float_t const& __get_x() const;

constexpr void __set_y(float_t  value) ;

constexpr float_t& __get_y() ;

constexpr float_t const& __get_y() const;

constexpr void __set_z(float_t  value) ;

constexpr float_t& __get_z() ;

constexpr float_t const& __get_z() const;

constexpr void __set_deltaX(float_t  value) ;

constexpr float_t& __get_deltaX() ;

constexpr float_t const& __get_deltaX() const;

constexpr void __set_deltaY(float_t  value) ;

constexpr float_t& __get_deltaY() ;

constexpr float_t const& __get_deltaY() const;

constexpr void __set_deltaZ(float_t  value) ;

constexpr float_t& __get_deltaZ() ;

constexpr float_t const& __get_deltaZ() const;

constexpr void __set_fUpdateTime(float_t  value) ;

constexpr float_t& __get_fUpdateTime() ;

constexpr float_t const& __get_fUpdateTime() const;

// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "deltaX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "deltaY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "deltaZ", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fUpdateTime", ty: "float_t", modifiers: "", def_value: None }]
constexpr InputAnalogActionData_t(bool  bActive, uint64_t  activeOrigin, float_t  x, float_t  y, float_t  z, float_t  deltaX, float_t  deltaY, float_t  deltaZ, float_t  fUpdateTime) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputAnalogActionData_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputAnalogActionData_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::InputAnalogActionData_t, 0x30>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::InputAnalogActionData_t, "OVR.OpenVR", "InputAnalogActionData_t");
