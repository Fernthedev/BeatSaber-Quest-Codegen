#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDigitalActionData_t)
// Forward declare root types
namespace OVR::OpenVR {
struct InputDigitalActionData_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::InputDigitalActionData_t);
// Type: OVR.OpenVR::InputDigitalActionData_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8721))
// CS Name: ::OVR.OpenVR::InputDigitalActionData_t
struct CORDL_TYPE InputDigitalActionData_t : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field bActive offset 0x0
 __declspec(property(get=__get_bActive, put=__set_bActive)) bool  bActive;

/// @brief Field activeOrigin offset 0x8
 __declspec(property(get=__get_activeOrigin, put=__set_activeOrigin)) uint64_t  activeOrigin;

/// @brief Field bState offset 0x10
 __declspec(property(get=__get_bState, put=__set_bState)) bool  bState;

/// @brief Field bChanged offset 0x11
 __declspec(property(get=__get_bChanged, put=__set_bChanged)) bool  bChanged;

/// @brief Field fUpdateTime offset 0x14
 __declspec(property(get=__get_fUpdateTime, put=__set_fUpdateTime)) float_t  fUpdateTime;

constexpr void __set_bActive(bool  value) ;

constexpr bool& __get_bActive() ;

constexpr bool const& __get_bActive() const;

constexpr void __set_activeOrigin(uint64_t  value) ;

constexpr uint64_t& __get_activeOrigin() ;

constexpr uint64_t const& __get_activeOrigin() const;

constexpr void __set_bState(bool  value) ;

constexpr bool& __get_bState() ;

constexpr bool const& __get_bState() const;

constexpr void __set_bChanged(bool  value) ;

constexpr bool& __get_bChanged() ;

constexpr bool const& __get_bChanged() const;

constexpr void __set_fUpdateTime(float_t  value) ;

constexpr float_t& __get_fUpdateTime() ;

constexpr float_t const& __get_fUpdateTime() const;

// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "bState", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "bChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fUpdateTime", ty: "float_t", modifiers: "", def_value: None }]
constexpr InputDigitalActionData_t(bool  bActive, uint64_t  activeOrigin, bool  bState, bool  bChanged, float_t  fUpdateTime) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputDigitalActionData_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputDigitalActionData_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::InputDigitalActionData_t, 0x18>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::InputDigitalActionData_t, "OVR.OpenVR", "InputDigitalActionData_t");
