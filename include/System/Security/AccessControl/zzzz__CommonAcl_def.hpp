#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__GenericAcl_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommonAcl)
namespace System::Security::Principal {
class SecurityIdentifier;
}
namespace System::Security::AccessControl {
class GenericAce;
}
namespace System::Security::AccessControl {
struct AuditFlags;
}
namespace System::Security::AccessControl {
class QualifiedAce;
}
namespace System::Security::AccessControl {
struct AceQualifier;
}
namespace System::Security::AccessControl {
class RawAcl;
}
namespace System::Security::AccessControl {
struct AceFlags;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System::Security::AccessControl {
class ObjectAce;
}
namespace System {
struct Guid;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
namespace System::Security::AccessControl {
template<typename T>
class __CommonAcl__RemoveAcesCallback_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::AccessControl {
template<typename T>
class __CommonAcl__RemoveAcesCallback_1;
}
namespace System::Security::AccessControl {
class CommonAcl;
}
namespace System::Security::AccessControl {
template<::il2cpp_utils::il2cpp_reference_type T>
class __CommonAcl__RemoveAcesCallback_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Security::AccessControl::__CommonAcl__RemoveAcesCallback_1);
MARK_REF_PTR_T(::System::Security::AccessControl::CommonAcl);
// Type: ::RemoveAcesCallback`1
// Type: System.Security.AccessControl::CommonAcl
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3036))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3025))
// CS Name: ::System.Security.AccessControl::CommonAcl*
class CORDL_TYPE CommonAcl : public ::System::Security::AccessControl::GenericAcl {
public:
// Declarations
template<typename T>
using RemoveAcesCallback_1 = ::System::Security::AccessControl::__CommonAcl__RemoveAcesCallback_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Security::AccessControl::GenericAcl)]{};

/// @brief Field is_aefa offset 0x10
 __declspec(property(get=__get_is_aefa, put=__set_is_aefa)) bool  is_aefa;

/// @brief Field is_canonical offset 0x11
 __declspec(property(get=__get_is_canonical, put=__set_is_canonical)) bool  is_canonical;

/// @brief Field is_container offset 0x12
 __declspec(property(get=__get_is_container, put=__set_is_container)) bool  is_container;

/// @brief Field is_ds offset 0x13
 __declspec(property(get=__get_is_ds, put=__set_is_ds)) bool  is_ds;

/// @brief Field raw_acl offset 0x18
 __declspec(property(get=__get_raw_acl, put=__set_raw_acl)) ::System::Security::AccessControl::RawAcl*  raw_acl;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsCanonical)) bool  IsCanonical;

 __declspec(property(get=get_IsContainer)) bool  IsContainer;

 __declspec(property(get=get_IsDS)) bool  IsDS;

 __declspec(property(put=set_IsAefa)) bool  IsAefa;

 __declspec(property(get=get_Item, put=set_Item)) ::System::Security::AccessControl::GenericAce*  Item[];

constexpr void __set_is_aefa(bool  value) ;

constexpr bool& __get_is_aefa() ;

constexpr bool const& __get_is_aefa() const;

constexpr void __set_is_canonical(bool  value) ;

constexpr bool& __get_is_canonical() ;

constexpr bool const& __get_is_canonical() const;

constexpr void __set_is_container(bool  value) ;

constexpr bool& __get_is_container() ;

constexpr bool const& __get_is_container() const;

constexpr void __set_is_ds(bool  value) ;

constexpr bool& __get_is_ds() ;

constexpr bool const& __get_is_ds() const;

constexpr void __set_raw_acl(::System::Security::AccessControl::RawAcl*  value) ;

constexpr ::System::Security::AccessControl::RawAcl* __get_raw_acl() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::AccessControl::RawAcl*> __get_raw_acl() const;

static inline ::System::Security::AccessControl::CommonAcl* New_ctor(bool  isContainer, bool  isDS, uint8_t  revision, int32_t  capacity) ;

/// @brief Method .ctor addr 0x2481188 size 0xc8 virtual false final false
inline void _ctor(bool  isContainer, bool  isDS, uint8_t  revision, int32_t  capacity) ;

static inline ::System::Security::AccessControl::CommonAcl* New_ctor(bool  isContainer, bool  isDS, int32_t  capacity) ;

/// @brief Method .ctor addr 0x248132c size 0x8c virtual false final false
inline void _ctor(bool  isContainer, bool  isDS, int32_t  capacity) ;

/// @brief Method Init addr 0x2481314 size 0x18 virtual false final false
inline void Init(bool  isContainer, bool  isDS, ::System::Security::AccessControl::RawAcl*  rawAcl) ;

/// @brief Method get_Count addr 0x248147c size 0x20 virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_IsCanonical addr 0x248149c size 0x8 virtual false final false
inline bool get_IsCanonical() ;

/// @brief Method get_IsContainer addr 0x24814a4 size 0x8 virtual false final false
inline bool get_IsContainer() ;

/// @brief Method get_IsDS addr 0x24814ac size 0x8 virtual false final false
inline bool get_IsDS() ;

/// @brief Method set_IsAefa addr 0x24814b4 size 0xc virtual false final false
inline void set_IsAefa(bool  value) ;

/// @brief Method get_Item addr 0x24814c0 size 0x24 virtual true final true
inline ::System::Security::AccessControl::GenericAce* get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x2481570 size 0x40 virtual true final true
inline void set_Item(int32_t  index, ::System::Security::AccessControl::GenericAce*  value) ;

/// @brief Method RequireCanonicity addr 0x24815b0 size 0x60 virtual false final false
inline void RequireCanonicity() ;

/// @brief Method CanonicalizeAndClearAefa addr 0x24813b8 size 0xc4 virtual false final false
inline void CanonicalizeAndClearAefa() ;

/// @brief Method IsAceMeaningless addr 0x24818f4 size 0x100 virtual true final false
inline bool IsAceMeaningless(::System::Security::AccessControl::GenericAce*  ace) ;

/// @brief Method TestCanonicity addr 0x2481610 size 0x1cc virtual false final false
inline bool TestCanonicity() ;

/// @brief Method GetCanonicalExplicitDenyAceCount addr 0x2481c70 size 0x144 virtual false final false
inline int32_t GetCanonicalExplicitDenyAceCount() ;

/// @brief Method GetCanonicalExplicitAceCount addr 0x2481efc size 0x80 virtual false final false
inline int32_t GetCanonicalExplicitAceCount() ;

/// @brief Method MergeExplicitAces addr 0x24817dc size 0x118 virtual false final false
inline void MergeExplicitAces() ;

/// @brief Method MergeExplicitAcePair addr 0x2481f7c size 0x404 virtual false final false
inline ::System::Security::AccessControl::GenericAce* MergeExplicitAcePair(::System::Security::AccessControl::GenericAce*  ace1, ::System::Security::AccessControl::GenericAce*  ace2) ;

/// @brief Method GetObjectAceTypeGuids addr 0x2482414 size 0x98 virtual false final false
static inline void GetObjectAceTypeGuids(::System::Security::AccessControl::ObjectAce*  ace, ByRef<::System::Guid>  type, ByRef<::System::Guid>  inheritedType) ;

/// @brief Method ApplyCanonicalSortToExplicitAces addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ApplyCanonicalSortToExplicitAces() ;

/// @brief Method ApplyCanonicalSortToExplicitAces addr 0x2482544 size 0x1c4 virtual false final false
inline void ApplyCanonicalSortToExplicitAces(int32_t  start, int32_t  count) ;

/// @brief Method RemoveAces addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void RemoveAces(::System::Security::AccessControl::__CommonAcl__RemoveAcesCallback_1<T>*  callback) ;

/// @brief Method AddAce addr 0x2482708 size 0x1c virtual false final false
inline void AddAce(::System::Security::AccessControl::AceQualifier  aceQualifier, ::System::Security::Principal::SecurityIdentifier*  sid, int32_t  accessMask, ::System::Security::AccessControl::InheritanceFlags  inheritanceFlags, ::System::Security::AccessControl::PropagationFlags  propagationFlags, ::System::Security::AccessControl::AuditFlags  auditFlags) ;

/// @brief Method AddAceGetQualifiedAce addr 0x2482724 size 0xc0 virtual false final false
inline ::System::Security::AccessControl::QualifiedAce* AddAceGetQualifiedAce(::System::Security::AccessControl::AceQualifier  aceQualifier, ::System::Security::Principal::SecurityIdentifier*  sid, int32_t  accessMask, ::System::Security::AccessControl::InheritanceFlags  inheritanceFlags, ::System::Security::AccessControl::PropagationFlags  propagationFlags, ::System::Security::AccessControl::AuditFlags  auditFlags) ;

/// @brief Method AddAce addr 0x24827e4 size 0x78 virtual false final false
inline void AddAce(::System::Security::AccessControl::QualifiedAce*  newAce) ;

/// @brief Method CopyAce addr 0x24814e4 size 0x8c virtual false final false
static inline ::System::Security::AccessControl::GenericAce* CopyAce(::System::Security::AccessControl::GenericAce*  ace) ;

/// @brief Method GetAceInsertPosition addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetAceInsertPosition(::System::Security::AccessControl::AceQualifier  aceQualifier) ;

/// @brief Method GetAceFlags addr 0x248285c size 0xd8 virtual false final false
inline ::System::Security::AccessControl::AceFlags GetAceFlags(::System::Security::AccessControl::InheritanceFlags  inheritanceFlags, ::System::Security::AccessControl::PropagationFlags  propagationFlags, ::System::Security::AccessControl::AuditFlags  auditFlags) ;

// Ctor Parameters [CppParam { name: "", ty: "CommonAcl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommonAcl(CommonAcl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommonAcl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommonAcl(CommonAcl const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CommonAcl()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::CommonAcl, 0x20>, "Size mismatch!");

} // namespace end def System::Security::AccessControl
// Type: ::RemoveAcesCallback`1
namespace System::Security::AccessControl {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3024)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3024), inst: 2 })
// CS Name: ::CommonAcl::RemoveAcesCallback`1<T>*
class CORDL_TYPE __CommonAcl__RemoveAcesCallback_1<T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Security::AccessControl::__CommonAcl__RemoveAcesCallback_1<T>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(T  ace) ;

// Ctor Parameters [CppParam { name: "", ty: "__CommonAcl__RemoveAcesCallback_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CommonAcl__RemoveAcesCallback_1(__CommonAcl__RemoveAcesCallback_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CommonAcl__RemoveAcesCallback_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CommonAcl__RemoveAcesCallback_1(__CommonAcl__RemoveAcesCallback_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CommonAcl__RemoveAcesCallback_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Security::AccessControl::__CommonAcl__RemoveAcesCallback_1, "System.Security.AccessControl", "CommonAcl/RemoveAcesCallback`1");
NEED_NO_BOX(::System::Security::AccessControl::CommonAcl);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::CommonAcl*, "System.Security.AccessControl", "CommonAcl");
