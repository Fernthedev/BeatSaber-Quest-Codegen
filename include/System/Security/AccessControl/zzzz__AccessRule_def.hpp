#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__AuthorizationRule_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AccessRule)
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
namespace System::Security::Principal {
class IdentityReference;
}
namespace System::Security::AccessControl {
struct AccessControlType;
}
// Forward declare root types
namespace System::Security::AccessControl {
class AccessRule;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::AccessRule);
// Type: System.Security.AccessControl::AccessRule
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3021))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3015))
// CS Name: ::System.Security.AccessControl::AccessRule*
class CORDL_TYPE AccessRule : public ::System::Security::AccessControl::AuthorizationRule {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Security::AccessControl::AuthorizationRule)]{};

/// @brief Field type offset 0x28
 __declspec(property(get=__get_type, put=__set_type)) ::System::Security::AccessControl::AccessControlType  type;

 __declspec(property(get=get_AccessControlType)) ::System::Security::AccessControl::AccessControlType  AccessControlType;

constexpr void __set_type(::System::Security::AccessControl::AccessControlType  value) ;

constexpr ::System::Security::AccessControl::AccessControlType& __get_type() ;

constexpr ::System::Security::AccessControl::AccessControlType const& __get_type() const;

static inline ::System::Security::AccessControl::AccessRule* New_ctor(::System::Security::Principal::IdentityReference*  identity, int32_t  accessMask, bool  isInherited, ::System::Security::AccessControl::InheritanceFlags  inheritanceFlags, ::System::Security::AccessControl::PropagationFlags  propagationFlags, ::System::Security::AccessControl::AccessControlType  type) ;

/// @brief Method .ctor addr 0x24806e0 size 0x90 virtual false final false
inline void _ctor(::System::Security::Principal::IdentityReference*  identity, int32_t  accessMask, bool  isInherited, ::System::Security::AccessControl::InheritanceFlags  inheritanceFlags, ::System::Security::AccessControl::PropagationFlags  propagationFlags, ::System::Security::AccessControl::AccessControlType  type) ;

/// @brief Method get_AccessControlType addr 0x248090c size 0x8 virtual false final false
inline ::System::Security::AccessControl::AccessControlType get_AccessControlType() ;

// Ctor Parameters [CppParam { name: "", ty: "AccessRule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessRule(AccessRule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessRule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessRule(AccessRule const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AccessRule()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AccessRule, 0x30>, "Size mismatch!");

} // namespace end def System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::AccessRule);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AccessRule*, "System.Security.AccessControl", "AccessRule");
