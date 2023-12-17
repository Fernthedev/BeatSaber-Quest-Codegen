#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CrlEntry)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CrlEntry;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::CrlEntry);
// Type: Org.BouncyCastle.Asn1.X509::CrlEntry
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(390))
// CS Name: ::Org.BouncyCastle.Asn1.X509::CrlEntry*
class CORDL_TYPE CrlEntry : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field seq offset 0x10
 __declspec(property(get=__get_seq, put=__set_seq)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  seq;

/// @brief Field userCertificate offset 0x18
 __declspec(property(get=__get_userCertificate, put=__set_userCertificate)) ::Org::BouncyCastle::Asn1::DerInteger*  userCertificate;

/// @brief Field revocationDate offset 0x20
 __declspec(property(get=__get_revocationDate, put=__set_revocationDate)) ::Org::BouncyCastle::Asn1::X509::Time*  revocationDate;

/// @brief Field crlEntryExtensions offset 0x28
 __declspec(property(get=__get_crlEntryExtensions, put=__set_crlEntryExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions*  crlEntryExtensions;

 __declspec(property(get=get_UserCertificate)) ::Org::BouncyCastle::Asn1::DerInteger*  UserCertificate;

 __declspec(property(get=get_RevocationDate)) ::Org::BouncyCastle::Asn1::X509::Time*  RevocationDate;

 __declspec(property(get=get_Extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions*  Extensions;

constexpr void __set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* __get_seq() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> __get_seq() const;

constexpr void __set_userCertificate(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_userCertificate() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_userCertificate() const;

constexpr void __set_revocationDate(::Org::BouncyCastle::Asn1::X509::Time*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::Time* __get_revocationDate() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Time*> __get_revocationDate() const;

constexpr void __set_crlEntryExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* __get_crlEntryExtensions() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> __get_crlEntryExtensions() const;

static inline ::Org::BouncyCastle::Asn1::X509::CrlEntry* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x1199098 size 0x138 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method get_UserCertificate addr 0x11991d0 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_UserCertificate() ;

/// @brief Method get_RevocationDate addr 0x11991d8 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::Time* get_RevocationDate() ;

/// @brief Method get_Extensions addr 0x11991e0 size 0xb0 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions() ;

/// @brief Method ToAsn1Object addr 0x1199290 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "CrlEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CrlEntry(CrlEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrlEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrlEntry(CrlEntry const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CrlEntry()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::CrlEntry, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CrlEntry);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CrlEntry*, "Org.BouncyCastle.Asn1.X509", "CrlEntry");
