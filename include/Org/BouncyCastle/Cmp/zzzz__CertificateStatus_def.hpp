#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CertificateStatus)
namespace Org::BouncyCastle::Cms {
class DefaultDigestAlgorithmIdentifierFinder;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Cms {
class DefaultSignatureAlgorithmIdentifierFinder;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CertStatus;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class CertificateStatus;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cmp::CertificateStatus);
// Type: Org.BouncyCastle.Cmp::CertificateStatus
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(603))
// CS Name: ::Org.BouncyCastle.Cmp::CertificateStatus*
class CORDL_TYPE CertificateStatus : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field digestAlgFinder offset 0x10
 __declspec(property(get=__get_digestAlgFinder, put=__set_digestAlgFinder)) ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*  digestAlgFinder;

/// @brief Field certStatus offset 0x18
 __declspec(property(get=__get_certStatus, put=__set_certStatus)) ::Org::BouncyCastle::Asn1::Cmp::CertStatus*  certStatus;

 __declspec(property(get=get_PkiStatusInfo)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*  PkiStatusInfo;

 __declspec(property(get=get_CertRequestId)) ::Org::BouncyCastle::Math::BigInteger*  CertRequestId;

static inline void setStaticF_sigAlgFinder(::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*  value) ;

static inline ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* getStaticF_sigAlgFinder() ;

constexpr void __set_digestAlgFinder(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*  value) ;

constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* __get_digestAlgFinder() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*> __get_digestAlgFinder() const;

constexpr void __set_certStatus(::Org::BouncyCastle::Asn1::Cmp::CertStatus*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cmp::CertStatus* __get_certStatus() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::CertStatus*> __get_certStatus() const;

static inline ::Org::BouncyCastle::Cmp::CertificateStatus* New_ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*  digestAlgFinder, ::Org::BouncyCastle::Asn1::Cmp::CertStatus*  certStatus) ;

/// @brief Method .ctor addr 0x11d5510 size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*  digestAlgFinder, ::Org::BouncyCastle::Asn1::Cmp::CertStatus*  certStatus) ;

/// @brief Method get_PkiStatusInfo addr 0x11d5c9c size 0x20 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* get_PkiStatusInfo() ;

/// @brief Method get_CertRequestId addr 0x11d5cbc size 0x2c virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_CertRequestId() ;

/// @brief Method IsVerified addr 0x11d5ce8 size 0x1f0 virtual false final false
inline bool IsVerified(::Org::BouncyCastle::X509::X509Certificate*  cert) ;

// Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertificateStatus(CertificateStatus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertificateStatus(CertificateStatus const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CertificateStatus()  = default;
public:


// Fields

// Static field sigAlgFinder


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cmp::CertificateStatus, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::CertificateStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::CertificateStatus*, "Org.BouncyCastle.Cmp", "CertificateStatus");
