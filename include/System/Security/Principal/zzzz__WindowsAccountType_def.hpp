#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsAccountType)
// Forward declare root types
namespace System::Security::Principal {
struct WindowsAccountType;
}
// Write type traits
MARK_VAL_T(::System::Security::Principal::WindowsAccountType);
// Type: System.Security.Principal::WindowsAccountType
namespace System::Security::Principal {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3005))
// CS Name: ::System.Security.Principal::WindowsAccountType
struct CORDL_TYPE WindowsAccountType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WindowsAccountType_Unwrapped
enum struct __WindowsAccountType_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Guest = static_cast<int32_t>(0x1),
__E_System = static_cast<int32_t>(0x2),
__E_Anonymous = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Normal value: static_cast<int32_t>(0x0)
static ::System::Security::Principal::WindowsAccountType const Normal;

/// @brief Field Guest value: static_cast<int32_t>(0x1)
static ::System::Security::Principal::WindowsAccountType const Guest;

/// @brief Field System value: static_cast<int32_t>(0x2)
static ::System::Security::Principal::WindowsAccountType const System;

/// @brief Field Anonymous value: static_cast<int32_t>(0x3)
static ::System::Security::Principal::WindowsAccountType const Anonymous;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __WindowsAccountType_Unwrapped () const noexcept {
return std::bit_cast<__WindowsAccountType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WindowsAccountType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit WindowsAccountType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 WindowsAccountType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::WindowsAccountType, 0x4>, "Size mismatch!");

} // namespace end def System::Security::Principal
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::WindowsAccountType, "System.Security.Principal", "WindowsAccountType");
