#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__GenericSecurityDescriptor_def.hpp"
CORDL_MODULE_EXPORT(CommonSecurityDescriptor)
namespace System::Security::AccessControl {
class CommonAcl;
}
namespace System::Security::AccessControl {
class SystemAcl;
}
namespace System::Security::AccessControl {
struct ControlFlags;
}
namespace System::Security::AccessControl {
class DiscretionaryAcl;
}
namespace System::Security::Principal {
class SecurityIdentifier;
}
// Forward declare root types
namespace System::Security::AccessControl {
class CommonSecurityDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::CommonSecurityDescriptor);
// Type: System.Security.AccessControl::CommonSecurityDescriptor
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3037))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3027))
// CS Name: ::System.Security.AccessControl::CommonSecurityDescriptor*
class CORDL_TYPE CommonSecurityDescriptor : public ::System::Security::AccessControl::GenericSecurityDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Security::AccessControl::GenericSecurityDescriptor)]{};

/// @brief Field is_container offset 0x10
 __declspec(property(get=__get_is_container, put=__set_is_container)) bool  is_container;

/// @brief Field is_ds offset 0x11
 __declspec(property(get=__get_is_ds, put=__set_is_ds)) bool  is_ds;

/// @brief Field flags offset 0x14
 __declspec(property(get=__get_flags, put=__set_flags)) ::System::Security::AccessControl::ControlFlags  flags;

/// @brief Field owner offset 0x18
 __declspec(property(get=__get_owner, put=__set_owner)) ::System::Security::Principal::SecurityIdentifier*  owner;

/// @brief Field group offset 0x20
 __declspec(property(get=__get_group, put=__set_group)) ::System::Security::Principal::SecurityIdentifier*  group;

/// @brief Field system_acl offset 0x28
 __declspec(property(get=__get_system_acl, put=__set_system_acl)) ::System::Security::AccessControl::SystemAcl*  system_acl;

/// @brief Field discretionary_acl offset 0x30
 __declspec(property(get=__get_discretionary_acl, put=__set_discretionary_acl)) ::System::Security::AccessControl::DiscretionaryAcl*  discretionary_acl;

 __declspec(property(get=get_DiscretionaryAcl, put=set_DiscretionaryAcl)) ::System::Security::AccessControl::DiscretionaryAcl*  DiscretionaryAcl;

 __declspec(property(put=set_Group)) ::System::Security::Principal::SecurityIdentifier*  Group;

 __declspec(property(get=get_IsContainer)) bool  IsContainer;

 __declspec(property(get=get_IsDS)) bool  IsDS;

 __declspec(property(put=set_Owner)) ::System::Security::Principal::SecurityIdentifier*  Owner;

 __declspec(property(put=set_SystemAcl)) ::System::Security::AccessControl::SystemAcl*  SystemAcl;

constexpr void __set_is_container(bool  value) ;

constexpr bool& __get_is_container() ;

constexpr bool const& __get_is_container() const;

constexpr void __set_is_ds(bool  value) ;

constexpr bool& __get_is_ds() ;

constexpr bool const& __get_is_ds() const;

constexpr void __set_flags(::System::Security::AccessControl::ControlFlags  value) ;

constexpr ::System::Security::AccessControl::ControlFlags& __get_flags() ;

constexpr ::System::Security::AccessControl::ControlFlags const& __get_flags() const;

constexpr void __set_owner(::System::Security::Principal::SecurityIdentifier*  value) ;

constexpr ::System::Security::Principal::SecurityIdentifier* __get_owner() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::SecurityIdentifier*> __get_owner() const;

constexpr void __set_group(::System::Security::Principal::SecurityIdentifier*  value) ;

constexpr ::System::Security::Principal::SecurityIdentifier* __get_group() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::SecurityIdentifier*> __get_group() const;

constexpr void __set_system_acl(::System::Security::AccessControl::SystemAcl*  value) ;

constexpr ::System::Security::AccessControl::SystemAcl* __get_system_acl() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::AccessControl::SystemAcl*> __get_system_acl() const;

constexpr void __set_discretionary_acl(::System::Security::AccessControl::DiscretionaryAcl*  value) ;

constexpr ::System::Security::AccessControl::DiscretionaryAcl* __get_discretionary_acl() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::AccessControl::DiscretionaryAcl*> __get_discretionary_acl() const;

static inline ::System::Security::AccessControl::CommonSecurityDescriptor* New_ctor(bool  isContainer, bool  isDS, ::System::Security::AccessControl::ControlFlags  flags, ::System::Security::Principal::SecurityIdentifier*  owner, ::System::Security::Principal::SecurityIdentifier*  group, ::System::Security::AccessControl::SystemAcl*  systemAcl, ::System::Security::AccessControl::DiscretionaryAcl*  discretionaryAcl) ;

/// @brief Method .ctor addr 0x248300c size 0x74 virtual false final false
inline void _ctor(bool  isContainer, bool  isDS, ::System::Security::AccessControl::ControlFlags  flags, ::System::Security::Principal::SecurityIdentifier*  owner, ::System::Security::Principal::SecurityIdentifier*  group, ::System::Security::AccessControl::SystemAcl*  systemAcl, ::System::Security::AccessControl::DiscretionaryAcl*  discretionaryAcl) ;

/// @brief Method Init addr 0x2483088 size 0x84 virtual false final false
inline void Init(bool  isContainer, bool  isDS, ::System::Security::AccessControl::ControlFlags  flags, ::System::Security::Principal::SecurityIdentifier*  owner, ::System::Security::Principal::SecurityIdentifier*  group, ::System::Security::AccessControl::SystemAcl*  systemAcl, ::System::Security::AccessControl::DiscretionaryAcl*  discretionaryAcl) ;

/// @brief Method get_DiscretionaryAcl addr 0x2483240 size 0x8 virtual false final false
inline ::System::Security::AccessControl::DiscretionaryAcl* get_DiscretionaryAcl() ;

/// @brief Method set_DiscretionaryAcl addr 0x248313c size 0x104 virtual false final false
inline void set_DiscretionaryAcl(::System::Security::AccessControl::DiscretionaryAcl*  value) ;

/// @brief Method set_Group addr 0x2483378 size 0x8 virtual true final false
inline void set_Group(::System::Security::Principal::SecurityIdentifier*  value) ;

/// @brief Method get_IsContainer addr 0x2483380 size 0x8 virtual false final false
inline bool get_IsContainer() ;

/// @brief Method get_IsDS addr 0x2483388 size 0x8 virtual false final false
inline bool get_IsDS() ;

/// @brief Method set_Owner addr 0x2483390 size 0x8 virtual true final false
inline void set_Owner(::System::Security::Principal::SecurityIdentifier*  value) ;

/// @brief Method set_SystemAcl addr 0x248310c size 0x30 virtual false final false
inline void set_SystemAcl(::System::Security::AccessControl::SystemAcl*  value) ;

/// @brief Method CheckAclConsistency addr 0x24832b4 size 0xc4 virtual false final false
inline void CheckAclConsistency(::System::Security::AccessControl::CommonAcl*  acl) ;

// Ctor Parameters [CppParam { name: "", ty: "CommonSecurityDescriptor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommonSecurityDescriptor(CommonSecurityDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommonSecurityDescriptor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommonSecurityDescriptor(CommonSecurityDescriptor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CommonSecurityDescriptor()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::CommonSecurityDescriptor, 0x38>, "Size mismatch!");

} // namespace end def System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::CommonSecurityDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::CommonSecurityDescriptor*, "System.Security.AccessControl", "CommonSecurityDescriptor");
