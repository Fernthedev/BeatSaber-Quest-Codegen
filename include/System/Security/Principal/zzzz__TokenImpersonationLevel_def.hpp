#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TokenImpersonationLevel)
// Forward declare root types
namespace System::Security::Principal {
struct TokenImpersonationLevel;
}
// Write type traits
MARK_VAL_T(::System::Security::Principal::TokenImpersonationLevel);
// Type: System.Security.Principal::TokenImpersonationLevel
namespace System::Security::Principal {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2997))
// CS Name: ::System.Security.Principal::TokenImpersonationLevel
struct CORDL_TYPE TokenImpersonationLevel : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TokenImpersonationLevel_Unwrapped
enum struct __TokenImpersonationLevel_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Anonymous = static_cast<int32_t>(0x1),
__E_Identification = static_cast<int32_t>(0x2),
__E_Impersonation = static_cast<int32_t>(0x3),
__E_Delegation = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Security::Principal::TokenImpersonationLevel const None;

/// @brief Field Anonymous value: static_cast<int32_t>(0x1)
static ::System::Security::Principal::TokenImpersonationLevel const Anonymous;

/// @brief Field Identification value: static_cast<int32_t>(0x2)
static ::System::Security::Principal::TokenImpersonationLevel const Identification;

/// @brief Field Impersonation value: static_cast<int32_t>(0x3)
static ::System::Security::Principal::TokenImpersonationLevel const Impersonation;

/// @brief Field Delegation value: static_cast<int32_t>(0x4)
static ::System::Security::Principal::TokenImpersonationLevel const Delegation;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TokenImpersonationLevel_Unwrapped () const noexcept {
return std::bit_cast<__TokenImpersonationLevel_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TokenImpersonationLevel(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TokenImpersonationLevel(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TokenImpersonationLevel()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::TokenImpersonationLevel, 0x4>, "Size mismatch!");

} // namespace end def System::Security::Principal
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::TokenImpersonationLevel, "System.Security.Principal", "TokenImpersonationLevel");
