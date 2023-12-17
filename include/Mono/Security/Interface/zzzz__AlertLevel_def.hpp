#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AlertLevel)
// Forward declare root types
namespace Mono::Security::Interface {
struct AlertLevel;
}
// Write type traits
MARK_VAL_T(::Mono::Security::Interface::AlertLevel);
// Type: Mono.Security.Interface::AlertLevel
namespace Mono::Security::Interface {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13772))
// CS Name: ::Mono.Security.Interface::AlertLevel
struct CORDL_TYPE AlertLevel : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __AlertLevel_Unwrapped
enum struct __AlertLevel_Unwrapped : uint8_t {
__E_Warning = static_cast<uint8_t>(0x1u),
__E_Fatal = static_cast<uint8_t>(0x2u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field Warning value: static_cast<uint8_t>(0x1u)
static ::Mono::Security::Interface::AlertLevel const Warning;

/// @brief Field Fatal value: static_cast<uint8_t>(0x2u)
static ::Mono::Security::Interface::AlertLevel const Fatal;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AlertLevel_Unwrapped () const noexcept {
return std::bit_cast<__AlertLevel_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr AlertLevel(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AlertLevel(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AlertLevel()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::AlertLevel, 0x1>, "Size mismatch!");

} // namespace end def Mono::Security::Interface
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::AlertLevel, "Mono.Security.Interface", "AlertLevel");
