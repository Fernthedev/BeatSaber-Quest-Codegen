#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AceFlags)
// Forward declare root types
namespace System::Security::AccessControl {
struct AceFlags;
}
// Write type traits
MARK_VAL_T(::System::Security::AccessControl::AceFlags);
// Type: System.Security.AccessControl::AceFlags
namespace System::Security::AccessControl {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3017))
// CS Name: ::System.Security.AccessControl::AceFlags
struct CORDL_TYPE AceFlags : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __AceFlags_Unwrapped
enum struct __AceFlags_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_ObjectInherit = static_cast<uint8_t>(0x1u),
__E_ContainerInherit = static_cast<uint8_t>(0x2u),
__E_NoPropagateInherit = static_cast<uint8_t>(0x4u),
__E_InheritOnly = static_cast<uint8_t>(0x8u),
__E_InheritanceFlags = static_cast<uint8_t>(0xfu),
__E_Inherited = static_cast<uint8_t>(0x10u),
__E_SuccessfulAccess = static_cast<uint8_t>(0x40u),
__E_FailedAccess = static_cast<uint8_t>(0x80u),
__E_AuditFlags = static_cast<uint8_t>(0xc0u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field None value: static_cast<uint8_t>(0x0u)
static ::System::Security::AccessControl::AceFlags const None;

/// @brief Field ObjectInherit value: static_cast<uint8_t>(0x1u)
static ::System::Security::AccessControl::AceFlags const ObjectInherit;

/// @brief Field ContainerInherit value: static_cast<uint8_t>(0x2u)
static ::System::Security::AccessControl::AceFlags const ContainerInherit;

/// @brief Field NoPropagateInherit value: static_cast<uint8_t>(0x4u)
static ::System::Security::AccessControl::AceFlags const NoPropagateInherit;

/// @brief Field InheritOnly value: static_cast<uint8_t>(0x8u)
static ::System::Security::AccessControl::AceFlags const InheritOnly;

/// @brief Field InheritanceFlags value: static_cast<uint8_t>(0xfu)
static ::System::Security::AccessControl::AceFlags const InheritanceFlags;

/// @brief Field Inherited value: static_cast<uint8_t>(0x10u)
static ::System::Security::AccessControl::AceFlags const Inherited;

/// @brief Field SuccessfulAccess value: static_cast<uint8_t>(0x40u)
static ::System::Security::AccessControl::AceFlags const SuccessfulAccess;

/// @brief Field FailedAccess value: static_cast<uint8_t>(0x80u)
static ::System::Security::AccessControl::AceFlags const FailedAccess;

/// @brief Field AuditFlags value: static_cast<uint8_t>(0xc0u)
static ::System::Security::AccessControl::AceFlags const AuditFlags;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AceFlags_Unwrapped () const noexcept {
return std::bit_cast<__AceFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr AceFlags(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AceFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AceFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AceFlags, 0x1>, "Size mismatch!");

} // namespace end def System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AceFlags, "System.Security.AccessControl", "AceFlags");
