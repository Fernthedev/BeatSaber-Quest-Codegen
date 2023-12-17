#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AceType)
// Forward declare root types
namespace System::Security::AccessControl {
struct AceType;
}
// Write type traits
MARK_VAL_T(::System::Security::AccessControl::AceType);
// Type: System.Security.AccessControl::AceType
namespace System::Security::AccessControl {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3019))
// CS Name: ::System.Security.AccessControl::AceType
struct CORDL_TYPE AceType : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __AceType_Unwrapped
enum struct __AceType_Unwrapped : uint8_t {
__E_AccessAllowed = static_cast<uint8_t>(0x0u),
__E_AccessDenied = static_cast<uint8_t>(0x1u),
__E_SystemAudit = static_cast<uint8_t>(0x2u),
__E_SystemAlarm = static_cast<uint8_t>(0x3u),
__E_AccessAllowedCompound = static_cast<uint8_t>(0x4u),
__E_AccessAllowedObject = static_cast<uint8_t>(0x5u),
__E_AccessDeniedObject = static_cast<uint8_t>(0x6u),
__E_SystemAuditObject = static_cast<uint8_t>(0x7u),
__E_SystemAlarmObject = static_cast<uint8_t>(0x8u),
__E_AccessAllowedCallback = static_cast<uint8_t>(0x9u),
__E_AccessDeniedCallback = static_cast<uint8_t>(0xau),
__E_AccessAllowedCallbackObject = static_cast<uint8_t>(0xbu),
__E_AccessDeniedCallbackObject = static_cast<uint8_t>(0xcu),
__E_SystemAuditCallback = static_cast<uint8_t>(0xdu),
__E_SystemAlarmCallback = static_cast<uint8_t>(0xeu),
__E_SystemAuditCallbackObject = static_cast<uint8_t>(0xfu),
__E_SystemAlarmCallbackObject = static_cast<uint8_t>(0x10u),
__E_MaxDefinedAceType = static_cast<uint8_t>(0x10u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field AccessAllowed value: static_cast<uint8_t>(0x0u)
static ::System::Security::AccessControl::AceType const AccessAllowed;

/// @brief Field AccessDenied value: static_cast<uint8_t>(0x1u)
static ::System::Security::AccessControl::AceType const AccessDenied;

/// @brief Field SystemAudit value: static_cast<uint8_t>(0x2u)
static ::System::Security::AccessControl::AceType const SystemAudit;

/// @brief Field SystemAlarm value: static_cast<uint8_t>(0x3u)
static ::System::Security::AccessControl::AceType const SystemAlarm;

/// @brief Field AccessAllowedCompound value: static_cast<uint8_t>(0x4u)
static ::System::Security::AccessControl::AceType const AccessAllowedCompound;

/// @brief Field AccessAllowedObject value: static_cast<uint8_t>(0x5u)
static ::System::Security::AccessControl::AceType const AccessAllowedObject;

/// @brief Field AccessDeniedObject value: static_cast<uint8_t>(0x6u)
static ::System::Security::AccessControl::AceType const AccessDeniedObject;

/// @brief Field SystemAuditObject value: static_cast<uint8_t>(0x7u)
static ::System::Security::AccessControl::AceType const SystemAuditObject;

/// @brief Field SystemAlarmObject value: static_cast<uint8_t>(0x8u)
static ::System::Security::AccessControl::AceType const SystemAlarmObject;

/// @brief Field AccessAllowedCallback value: static_cast<uint8_t>(0x9u)
static ::System::Security::AccessControl::AceType const AccessAllowedCallback;

/// @brief Field AccessDeniedCallback value: static_cast<uint8_t>(0xau)
static ::System::Security::AccessControl::AceType const AccessDeniedCallback;

/// @brief Field AccessAllowedCallbackObject value: static_cast<uint8_t>(0xbu)
static ::System::Security::AccessControl::AceType const AccessAllowedCallbackObject;

/// @brief Field AccessDeniedCallbackObject value: static_cast<uint8_t>(0xcu)
static ::System::Security::AccessControl::AceType const AccessDeniedCallbackObject;

/// @brief Field SystemAuditCallback value: static_cast<uint8_t>(0xdu)
static ::System::Security::AccessControl::AceType const SystemAuditCallback;

/// @brief Field SystemAlarmCallback value: static_cast<uint8_t>(0xeu)
static ::System::Security::AccessControl::AceType const SystemAlarmCallback;

/// @brief Field SystemAuditCallbackObject value: static_cast<uint8_t>(0xfu)
static ::System::Security::AccessControl::AceType const SystemAuditCallbackObject;

/// @brief Field SystemAlarmCallbackObject value: static_cast<uint8_t>(0x10u)
static ::System::Security::AccessControl::AceType const SystemAlarmCallbackObject;

/// @brief Field MaxDefinedAceType value: static_cast<uint8_t>(0x10u)
static ::System::Security::AccessControl::AceType const MaxDefinedAceType;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AceType_Unwrapped () const noexcept {
return std::bit_cast<__AceType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr AceType(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AceType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AceType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AceType, 0x1>, "Size mismatch!");

} // namespace end def System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AceType, "System.Security.AccessControl", "AceType");
