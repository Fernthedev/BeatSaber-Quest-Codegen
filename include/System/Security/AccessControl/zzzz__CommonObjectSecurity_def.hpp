#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__ObjectSecurity_def.hpp"
CORDL_MODULE_EXPORT(CommonObjectSecurity)
namespace System {
class Type;
}
namespace System::Security::AccessControl {
class AuthorizationRuleCollection;
}
// Forward declare root types
namespace System::Security::AccessControl {
class CommonObjectSecurity;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::CommonObjectSecurity);
// Type: System.Security.AccessControl::CommonObjectSecurity
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3044))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3026))
// CS Name: ::System.Security.AccessControl::CommonObjectSecurity*
class CORDL_TYPE CommonObjectSecurity : public ::System::Security::AccessControl::ObjectSecurity {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Security::AccessControl::ObjectSecurity)]{};

static inline ::System::Security::AccessControl::CommonObjectSecurity* New_ctor(bool  isContainer) ;

/// @brief Method .ctor addr 0x2482bd4 size 0xc virtual false final false
inline void _ctor(bool  isContainer) ;

/// @brief Method GetAccessRules addr 0x2482cdc size 0xc virtual false final false
inline ::System::Security::AccessControl::AuthorizationRuleCollection* GetAccessRules(bool  includeExplicit, bool  includeInherited, ::System::Type*  targetType) ;

// Ctor Parameters [CppParam { name: "", ty: "CommonObjectSecurity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommonObjectSecurity(CommonObjectSecurity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommonObjectSecurity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommonObjectSecurity(CommonObjectSecurity const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CommonObjectSecurity()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::CommonObjectSecurity, 0x28>, "Size mismatch!");

} // namespace end def System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::CommonObjectSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::CommonObjectSecurity*, "System.Security.AccessControl", "CommonObjectSecurity");
