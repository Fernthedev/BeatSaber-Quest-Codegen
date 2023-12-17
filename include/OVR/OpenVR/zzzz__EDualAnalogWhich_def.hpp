#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EDualAnalogWhich)
// Forward declare root types
namespace OVR::OpenVR {
struct EDualAnalogWhich;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EDualAnalogWhich);
// Type: OVR.OpenVR::EDualAnalogWhich
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8595))
// CS Name: ::OVR.OpenVR::EDualAnalogWhich
struct CORDL_TYPE EDualAnalogWhich : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EDualAnalogWhich_Unwrapped
enum struct __EDualAnalogWhich_Unwrapped : int32_t {
__E_k_EDualAnalog_Left = static_cast<int32_t>(0x0),
__E_k_EDualAnalog_Right = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EDualAnalog_Left value: static_cast<int32_t>(0x0)
static ::OVR::OpenVR::EDualAnalogWhich const k_EDualAnalog_Left;

/// @brief Field k_EDualAnalog_Right value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::EDualAnalogWhich const k_EDualAnalog_Right;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EDualAnalogWhich_Unwrapped () const noexcept {
return std::bit_cast<__EDualAnalogWhich_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EDualAnalogWhich(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EDualAnalogWhich(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EDualAnalogWhich()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EDualAnalogWhich, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EDualAnalogWhich, "OVR.OpenVR", "EDualAnalogWhich");
