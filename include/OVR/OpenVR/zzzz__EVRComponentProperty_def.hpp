#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRComponentProperty)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRComponentProperty;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRComponentProperty);
// Type: OVR.OpenVR::EVRComponentProperty
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8633))
// CS Name: ::OVR.OpenVR::EVRComponentProperty
struct CORDL_TYPE EVRComponentProperty : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVRComponentProperty_Unwrapped
enum struct __EVRComponentProperty_Unwrapped : int32_t {
__E_IsStatic = static_cast<int32_t>(0x1),
__E_IsVisible = static_cast<int32_t>(0x2),
__E_IsTouched = static_cast<int32_t>(0x4),
__E_IsPressed = static_cast<int32_t>(0x8),
__E_IsScrolled = static_cast<int32_t>(0x10),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field IsStatic value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::EVRComponentProperty const IsStatic;

/// @brief Field IsVisible value: static_cast<int32_t>(0x2)
static ::OVR::OpenVR::EVRComponentProperty const IsVisible;

/// @brief Field IsTouched value: static_cast<int32_t>(0x4)
static ::OVR::OpenVR::EVRComponentProperty const IsTouched;

/// @brief Field IsPressed value: static_cast<int32_t>(0x8)
static ::OVR::OpenVR::EVRComponentProperty const IsPressed;

/// @brief Field IsScrolled value: static_cast<int32_t>(0x10)
static ::OVR::OpenVR::EVRComponentProperty const IsScrolled;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRComponentProperty_Unwrapped () const noexcept {
return std::bit_cast<__EVRComponentProperty_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRComponentProperty(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EVRComponentProperty(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EVRComponentProperty()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRComponentProperty, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRComponentProperty, "OVR.OpenVR", "EVRComponentProperty");
