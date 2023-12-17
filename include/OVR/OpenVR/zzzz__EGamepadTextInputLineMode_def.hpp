#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EGamepadTextInputLineMode)
// Forward declare root types
namespace OVR::OpenVR {
struct EGamepadTextInputLineMode;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EGamepadTextInputLineMode);
// Type: OVR.OpenVR::EGamepadTextInputLineMode
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8629))
// CS Name: ::OVR.OpenVR::EGamepadTextInputLineMode
struct CORDL_TYPE EGamepadTextInputLineMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EGamepadTextInputLineMode_Unwrapped
enum struct __EGamepadTextInputLineMode_Unwrapped : int32_t {
__E_k_EGamepadTextInputLineModeSingleLine = static_cast<int32_t>(0x0),
__E_k_EGamepadTextInputLineModeMultipleLines = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EGamepadTextInputLineModeSingleLine value: static_cast<int32_t>(0x0)
static ::OVR::OpenVR::EGamepadTextInputLineMode const k_EGamepadTextInputLineModeSingleLine;

/// @brief Field k_EGamepadTextInputLineModeMultipleLines value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::EGamepadTextInputLineMode const k_EGamepadTextInputLineModeMultipleLines;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EGamepadTextInputLineMode_Unwrapped () const noexcept {
return std::bit_cast<__EGamepadTextInputLineMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EGamepadTextInputLineMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EGamepadTextInputLineMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EGamepadTextInputLineMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EGamepadTextInputLineMode, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EGamepadTextInputLineMode, "OVR.OpenVR", "EGamepadTextInputLineMode");
