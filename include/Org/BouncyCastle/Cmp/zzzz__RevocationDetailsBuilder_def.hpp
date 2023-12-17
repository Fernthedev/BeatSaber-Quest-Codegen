#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RevocationDetailsBuilder)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplateBuilder;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Cmp {
class RevocationDetails;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class RevocationDetailsBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cmp::RevocationDetailsBuilder);
// Type: Org.BouncyCastle.Cmp::RevocationDetailsBuilder
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(609))
// CS Name: ::Org.BouncyCastle.Cmp::RevocationDetailsBuilder*
class CORDL_TYPE RevocationDetailsBuilder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _templateBuilder offset 0x10
 __declspec(property(get=__get__templateBuilder, put=__set__templateBuilder)) ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*  _templateBuilder;

constexpr void __set__templateBuilder(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* __get__templateBuilder() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder*> __get__templateBuilder() const;

/// @brief Method SetPublicKey addr 0x11d7f70 size 0x30 virtual false final false
inline ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* SetPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*  publicKey) ;

/// @brief Method SetIssuer addr 0x11d7fa0 size 0x30 virtual false final false
inline ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* SetIssuer(::Org::BouncyCastle::Asn1::X509::X509Name*  issuer) ;

/// @brief Method SetSerialNumber addr 0x11d7fd0 size 0x90 virtual false final false
inline ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* SetSerialNumber(::Org::BouncyCastle::Math::BigInteger*  serialNumber) ;

/// @brief Method SetSubject addr 0x11d8060 size 0x30 virtual false final false
inline ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* SetSubject(::Org::BouncyCastle::Asn1::X509::X509Name*  subject) ;

/// @brief Method Build addr 0x11d8090 size 0xb4 virtual false final false
inline ::Org::BouncyCastle::Cmp::RevocationDetails* Build() ;

static inline ::Org::BouncyCastle::Cmp::RevocationDetailsBuilder* New_ctor() ;

/// @brief Method .ctor addr 0x11d8144 size 0x68 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RevocationDetailsBuilder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RevocationDetailsBuilder(RevocationDetailsBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RevocationDetailsBuilder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RevocationDetailsBuilder(RevocationDetailsBuilder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RevocationDetailsBuilder()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cmp::RevocationDetailsBuilder, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::RevocationDetailsBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::RevocationDetailsBuilder*, "Org.BouncyCastle.Cmp", "RevocationDetailsBuilder");
