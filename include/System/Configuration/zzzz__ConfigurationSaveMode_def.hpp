#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConfigurationSaveMode)
// Forward declare root types
namespace System::Configuration {
struct ConfigurationSaveMode;
}
// Write type traits
MARK_VAL_T(::System::Configuration::ConfigurationSaveMode);
// Type: System.Configuration::ConfigurationSaveMode
namespace System::Configuration {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16259))
// CS Name: ::System.Configuration::ConfigurationSaveMode
struct CORDL_TYPE ConfigurationSaveMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConfigurationSaveMode_Unwrapped
enum struct __ConfigurationSaveMode_Unwrapped : int32_t {
__E_Full = static_cast<int32_t>(0x2),
__E_Minimal = static_cast<int32_t>(0x1),
__E_Modified = static_cast<int32_t>(0x0),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Full value: static_cast<int32_t>(0x2)
static ::System::Configuration::ConfigurationSaveMode const Full;

/// @brief Field Minimal value: static_cast<int32_t>(0x1)
static ::System::Configuration::ConfigurationSaveMode const Minimal;

/// @brief Field Modified value: static_cast<int32_t>(0x0)
static ::System::Configuration::ConfigurationSaveMode const Modified;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ConfigurationSaveMode_Unwrapped () const noexcept {
return std::bit_cast<__ConfigurationSaveMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConfigurationSaveMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConfigurationSaveMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConfigurationSaveMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::ConfigurationSaveMode, 0x4>, "Size mismatch!");

} // namespace end def System::Configuration
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationSaveMode, "System.Configuration", "ConfigurationSaveMode");
