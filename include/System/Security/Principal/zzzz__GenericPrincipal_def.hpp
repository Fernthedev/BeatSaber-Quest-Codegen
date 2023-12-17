#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Claims/zzzz__ClaimsPrincipal_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GenericPrincipal)
namespace System::Security::Principal {
class IIdentity;
}
// Forward declare root types
namespace System::Security::Principal {
class GenericPrincipal;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Principal::GenericPrincipal);
// Type: System.Security.Principal::GenericPrincipal
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3011))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2998))
// CS Name: ::System.Security.Principal::GenericPrincipal*
class CORDL_TYPE GenericPrincipal : public ::System::Security::Claims::ClaimsPrincipal {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Security::Claims::ClaimsPrincipal)]{};

/// @brief Field m_identity offset 0x28
 __declspec(property(get=__get_m_identity, put=__set_m_identity)) ::System::Security::Principal::IIdentity*  m_identity;

/// @brief Field m_roles offset 0x30
 __declspec(property(get=__get_m_roles, put=__set_m_roles)) ::ArrayW<::StringW,::Array<::StringW>*>  m_roles;

constexpr void __set_m_identity(::System::Security::Principal::IIdentity*  value) ;

constexpr ::System::Security::Principal::IIdentity* __get_m_identity() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::IIdentity*> __get_m_identity() const;

constexpr void __set_m_roles(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_m_roles() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_m_roles() const;

static inline ::System::Security::Principal::GenericPrincipal* New_ctor(::System::Security::Principal::IIdentity*  identity, ::ArrayW<::StringW,::Array<::StringW>*>  roles) ;

/// @brief Method .ctor addr 0x2476bb8 size 0x168 virtual false final false
inline void _ctor(::System::Security::Principal::IIdentity*  identity, ::ArrayW<::StringW,::Array<::StringW>*>  roles) ;

// Ctor Parameters [CppParam { name: "", ty: "GenericPrincipal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericPrincipal(GenericPrincipal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericPrincipal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericPrincipal(GenericPrincipal const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericPrincipal()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::GenericPrincipal, 0x38>, "Size mismatch!");

} // namespace end def System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::GenericPrincipal);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::GenericPrincipal*, "System.Security.Principal", "GenericPrincipal");
