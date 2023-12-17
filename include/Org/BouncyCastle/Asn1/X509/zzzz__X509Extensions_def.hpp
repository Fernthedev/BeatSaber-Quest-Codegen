#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(X509Extensions)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ArrayList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class IEnumerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extension;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509Extensions);
// Type: Org.BouncyCastle.Asn1.X509::X509Extensions
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(406))
// CS Name: ::Org.BouncyCastle.Asn1.X509::X509Extensions*
class CORDL_TYPE X509Extensions : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field extensions offset 0x10
 __declspec(property(get=__get_extensions, put=__set_extensions)) ::System::Collections::IDictionary*  extensions;

/// @brief Field ordering offset 0x18
 __declspec(property(get=__get_ordering, put=__set_ordering)) ::System::Collections::IList*  ordering;

 __declspec(property(get=get_ExtensionOids)) ::System::Collections::IEnumerable*  ExtensionOids;

static inline void setStaticF_SubjectDirectoryAttributes(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SubjectDirectoryAttributes() ;

static inline void setStaticF_SubjectKeyIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SubjectKeyIdentifier() ;

static inline void setStaticF_KeyUsage(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_KeyUsage() ;

static inline void setStaticF_PrivateKeyUsagePeriod(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PrivateKeyUsagePeriod() ;

static inline void setStaticF_SubjectAlternativeName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SubjectAlternativeName() ;

static inline void setStaticF_IssuerAlternativeName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IssuerAlternativeName() ;

static inline void setStaticF_BasicConstraints(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BasicConstraints() ;

static inline void setStaticF_CrlNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CrlNumber() ;

static inline void setStaticF_ReasonCode(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ReasonCode() ;

static inline void setStaticF_InstructionCode(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_InstructionCode() ;

static inline void setStaticF_InvalidityDate(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_InvalidityDate() ;

static inline void setStaticF_DeltaCrlIndicator(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DeltaCrlIndicator() ;

static inline void setStaticF_IssuingDistributionPoint(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IssuingDistributionPoint() ;

static inline void setStaticF_CertificateIssuer(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CertificateIssuer() ;

static inline void setStaticF_NameConstraints(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NameConstraints() ;

static inline void setStaticF_CrlDistributionPoints(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CrlDistributionPoints() ;

static inline void setStaticF_CertificatePolicies(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CertificatePolicies() ;

static inline void setStaticF_PolicyMappings(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PolicyMappings() ;

static inline void setStaticF_AuthorityKeyIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_AuthorityKeyIdentifier() ;

static inline void setStaticF_PolicyConstraints(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PolicyConstraints() ;

static inline void setStaticF_ExtendedKeyUsage(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ExtendedKeyUsage() ;

static inline void setStaticF_FreshestCrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_FreshestCrl() ;

static inline void setStaticF_InhibitAnyPolicy(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_InhibitAnyPolicy() ;

static inline void setStaticF_AuthorityInfoAccess(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_AuthorityInfoAccess() ;

static inline void setStaticF_SubjectInfoAccess(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SubjectInfoAccess() ;

static inline void setStaticF_LogoType(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_LogoType() ;

static inline void setStaticF_BiometricInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BiometricInfo() ;

static inline void setStaticF_QCStatements(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_QCStatements() ;

static inline void setStaticF_AuditIdentity(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_AuditIdentity() ;

static inline void setStaticF_NoRevAvail(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NoRevAvail() ;

static inline void setStaticF_TargetInformation(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_TargetInformation() ;

static inline void setStaticF_ExpiredCertsOnCrl(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ExpiredCertsOnCrl() ;

constexpr void __set_extensions(::System::Collections::IDictionary*  value) ;

constexpr ::System::Collections::IDictionary* __get_extensions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> __get_extensions() const;

constexpr void __set_ordering(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_ordering() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_ordering() const;

/// @brief Method GetExtension addr 0x119ddec size 0xc virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::X509Extension* GetExtension(::Org::BouncyCastle::Asn1::X509::X509Extensions*  extensions, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method GetExtensionParsedValue addr 0x118ab94 size 0xc virtual false final false
static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetExtensionParsedValue(::Org::BouncyCastle::Asn1::X509::X509Extensions*  extensions, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method GetInstance addr 0x119de14 size 0x78 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  explicitly) ;

/// @brief Method GetInstance addr 0x1198e28 size 0x1ec virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x119de8c size 0x7f0 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::IDictionary*  extensions) ;

/// @brief Method .ctor addr 0x119e67c size 0xc virtual false final false
inline void _ctor(::System::Collections::IDictionary*  extensions) ;

static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::IList*  ordering, ::System::Collections::IDictionary*  extensions) ;

/// @brief Method .ctor addr 0x119e688 size 0x564 virtual false final false
inline void _ctor(::System::Collections::IList*  ordering, ::System::Collections::IDictionary*  extensions) ;

static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::IList*  oids, ::System::Collections::IList*  values) ;

/// @brief Method .ctor addr 0x119c044 size 0x4fc virtual false final false
inline void _ctor(::System::Collections::IList*  oids, ::System::Collections::IList*  values) ;

static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::Hashtable*  extensions) ;

/// @brief Method .ctor addr 0x119ebec size 0xc virtual false final false
inline void _ctor(::System::Collections::Hashtable*  extensions) ;

static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::ArrayList*  ordering, ::System::Collections::Hashtable*  extensions) ;

/// @brief Method .ctor addr 0x119ebf8 size 0x4d8 virtual false final false
inline void _ctor(::System::Collections::ArrayList*  ordering, ::System::Collections::Hashtable*  extensions) ;

static inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* New_ctor(::System::Collections::ArrayList*  oids, ::System::Collections::ArrayList*  values) ;

/// @brief Method .ctor addr 0x119f0d0 size 0x4a4 virtual false final false
inline void _ctor(::System::Collections::ArrayList*  oids, ::System::Collections::ArrayList*  values) ;

/// @brief Method Oids addr 0x119f574 size 0xa8 virtual false final false
inline ::System::Collections::IEnumerator* Oids() ;

/// @brief Method get_ExtensionOids addr 0x119f61c size 0x68 virtual false final false
inline ::System::Collections::IEnumerable* get_ExtensionOids() ;

/// @brief Method GetExtension addr 0x119cdc0 size 0xf4 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::X509Extension* GetExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method GetExtensionParsedValue addr 0x119ddf8 size 0x1c virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetExtensionParsedValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method ToAsn1Object addr 0x119f684 size 0x5d8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

/// @brief Method Equivalent addr 0x119fc5c size 0x5d0 virtual false final false
inline bool Equivalent(::Org::BouncyCastle::Asn1::X509::X509Extensions*  other) ;

/// @brief Method GetExtensionOids addr 0x11a022c size 0x58 virtual false final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*,::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> GetExtensionOids() ;

/// @brief Method GetNonCriticalExtensionOids addr 0x11a03b4 size 0x8 virtual false final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*,::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> GetNonCriticalExtensionOids() ;

/// @brief Method GetCriticalExtensionOids addr 0x11a08cc size 0x8 virtual false final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*,::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> GetCriticalExtensionOids() ;

/// @brief Method GetExtensionOids addr 0x11a03bc size 0x510 virtual false final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*,::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> GetExtensionOids(bool  isCritical) ;

/// @brief Method ToOidArray addr 0x11a0284 size 0x130 virtual false final false
static inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*,::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> ToOidArray(::System::Collections::IList*  oids) ;

// Ctor Parameters [CppParam { name: "", ty: "X509Extensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509Extensions(X509Extensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509Extensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509Extensions(X509Extensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509Extensions()  = default;
public:


// Fields

// Static field SubjectDirectoryAttributes

// Static field SubjectKeyIdentifier

// Static field KeyUsage

// Static field PrivateKeyUsagePeriod

// Static field SubjectAlternativeName

// Static field IssuerAlternativeName

// Static field BasicConstraints

// Static field CrlNumber

// Static field ReasonCode

// Static field InstructionCode

// Static field InvalidityDate

// Static field DeltaCrlIndicator

// Static field IssuingDistributionPoint

// Static field CertificateIssuer

// Static field NameConstraints

// Static field CrlDistributionPoints

// Static field CertificatePolicies

// Static field PolicyMappings

// Static field AuthorityKeyIdentifier

// Static field PolicyConstraints

// Static field ExtendedKeyUsage

// Static field FreshestCrl

// Static field InhibitAnyPolicy

// Static field AuthorityInfoAccess

// Static field SubjectInfoAccess

// Static field LogoType

// Static field BiometricInfo

// Static field QCStatements

// Static field AuditIdentity

// Static field NoRevAvail

// Static field TargetInformation

// Static field ExpiredCertsOnCrl


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509Extensions, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509Extensions*, "Org.BouncyCastle.Asn1.X509", "X509Extensions");
