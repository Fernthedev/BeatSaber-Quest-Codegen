#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationSchemes)
// Forward declare root types
namespace System::Net {
struct AuthenticationSchemes;
}
// Write type traits
MARK_VAL_T(::System::Net::AuthenticationSchemes);
// Type: System.Net::AuthenticationSchemes
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9056))
// CS Name: ::System.Net::AuthenticationSchemes
struct CORDL_TYPE AuthenticationSchemes : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AuthenticationSchemes_Unwrapped
enum struct __AuthenticationSchemes_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Digest = static_cast<int32_t>(0x1),
__E_Negotiate = static_cast<int32_t>(0x2),
__E_Ntlm = static_cast<int32_t>(0x4),
__E_Basic = static_cast<int32_t>(0x8),
__E_Anonymous = static_cast<int32_t>(0x8000),
__E_IntegratedWindowsAuthentication = static_cast<int32_t>(0x6),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Net::AuthenticationSchemes const None;

/// @brief Field Digest value: static_cast<int32_t>(0x1)
static ::System::Net::AuthenticationSchemes const Digest;

/// @brief Field Negotiate value: static_cast<int32_t>(0x2)
static ::System::Net::AuthenticationSchemes const Negotiate;

/// @brief Field Ntlm value: static_cast<int32_t>(0x4)
static ::System::Net::AuthenticationSchemes const Ntlm;

/// @brief Field Basic value: static_cast<int32_t>(0x8)
static ::System::Net::AuthenticationSchemes const Basic;

/// @brief Field Anonymous value: static_cast<int32_t>(0x8000)
static ::System::Net::AuthenticationSchemes const Anonymous;

/// @brief Field IntegratedWindowsAuthentication value: static_cast<int32_t>(0x6)
static ::System::Net::AuthenticationSchemes const IntegratedWindowsAuthentication;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AuthenticationSchemes_Unwrapped () const noexcept {
return std::bit_cast<__AuthenticationSchemes_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AuthenticationSchemes(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AuthenticationSchemes(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AuthenticationSchemes()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::AuthenticationSchemes, 0x4>, "Size mismatch!");

} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::AuthenticationSchemes, "System.Net", "AuthenticationSchemes");
