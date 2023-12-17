#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AceQualifier)
// Forward declare root types
namespace System::Security::AccessControl {
struct AceQualifier;
}
// Write type traits
MARK_VAL_T(::System::Security::AccessControl::AceQualifier);
// Type: System.Security.AccessControl::AceQualifier
namespace System::Security::AccessControl {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3018))
// CS Name: ::System.Security.AccessControl::AceQualifier
struct CORDL_TYPE AceQualifier : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AceQualifier_Unwrapped
enum struct __AceQualifier_Unwrapped : int32_t {
__E_AccessAllowed = static_cast<int32_t>(0x0),
__E_AccessDenied = static_cast<int32_t>(0x1),
__E_SystemAudit = static_cast<int32_t>(0x2),
__E_SystemAlarm = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field AccessAllowed value: static_cast<int32_t>(0x0)
static ::System::Security::AccessControl::AceQualifier const AccessAllowed;

/// @brief Field AccessDenied value: static_cast<int32_t>(0x1)
static ::System::Security::AccessControl::AceQualifier const AccessDenied;

/// @brief Field SystemAudit value: static_cast<int32_t>(0x2)
static ::System::Security::AccessControl::AceQualifier const SystemAudit;

/// @brief Field SystemAlarm value: static_cast<int32_t>(0x3)
static ::System::Security::AccessControl::AceQualifier const SystemAlarm;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AceQualifier_Unwrapped () const noexcept {
return std::bit_cast<__AceQualifier_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AceQualifier(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AceQualifier(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AceQualifier()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AceQualifier, 0x4>, "Size mismatch!");

} // namespace end def System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AceQualifier, "System.Security.AccessControl", "AceQualifier");
