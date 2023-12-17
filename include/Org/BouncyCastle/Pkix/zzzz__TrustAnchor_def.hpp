#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TrustAnchor)
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::X509 {
class NameConstraints;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class TrustAnchor;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::TrustAnchor);
// Type: Org.BouncyCastle.Pkix::TrustAnchor
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1732))
// CS Name: ::Org.BouncyCastle.Pkix::TrustAnchor*
class CORDL_TYPE TrustAnchor : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field pubKey offset 0x10
 __declspec(property(get=__get_pubKey, put=__set_pubKey)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  pubKey;

/// @brief Field caName offset 0x18
 __declspec(property(get=__get_caName, put=__set_caName)) ::StringW  caName;

/// @brief Field caPrincipal offset 0x20
 __declspec(property(get=__get_caPrincipal, put=__set_caPrincipal)) ::Org::BouncyCastle::Asn1::X509::X509Name*  caPrincipal;

/// @brief Field trustedCert offset 0x28
 __declspec(property(get=__get_trustedCert, put=__set_trustedCert)) ::Org::BouncyCastle::X509::X509Certificate*  trustedCert;

/// @brief Field ncBytes offset 0x30
 __declspec(property(get=__get_ncBytes, put=__set_ncBytes)) ::ArrayW<uint8_t,::Array<uint8_t>*>  ncBytes;

/// @brief Field nc offset 0x38
 __declspec(property(get=__get_nc, put=__set_nc)) ::Org::BouncyCastle::Asn1::X509::NameConstraints*  nc;

 __declspec(property(get=get_TrustedCert)) ::Org::BouncyCastle::X509::X509Certificate*  TrustedCert;

 __declspec(property(get=get_CA)) ::Org::BouncyCastle::Asn1::X509::X509Name*  CA;

 __declspec(property(get=get_CAName)) ::StringW  CAName;

 __declspec(property(get=get_CAPublicKey)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  CAPublicKey;

 __declspec(property(get=get_GetNameConstraints)) ::ArrayW<uint8_t,::Array<uint8_t>*>  GetNameConstraints;

constexpr void __set_pubKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  value) ;

constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* __get_pubKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> __get_pubKey() const;

constexpr void __set_caName(::StringW  value) ;

constexpr ::StringW& __get_caName() ;

constexpr ::StringW const& __get_caName() const;

constexpr void __set_caPrincipal(::Org::BouncyCastle::Asn1::X509::X509Name*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Name* __get_caPrincipal() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> __get_caPrincipal() const;

constexpr void __set_trustedCert(::Org::BouncyCastle::X509::X509Certificate*  value) ;

constexpr ::Org::BouncyCastle::X509::X509Certificate* __get_trustedCert() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509Certificate*> __get_trustedCert() const;

constexpr void __set_ncBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_ncBytes() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_ncBytes() const;

constexpr void __set_nc(::Org::BouncyCastle::Asn1::X509::NameConstraints*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::NameConstraints* __get_nc() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::NameConstraints*> __get_nc() const;

static inline ::Org::BouncyCastle::Pkix::TrustAnchor* New_ctor(::Org::BouncyCastle::X509::X509Certificate*  trustedCert, ::ArrayW<uint8_t,::Array<uint8_t>*>  nameConstraints) ;

/// @brief Method .ctor addr 0x111d3d8 size 0x88 virtual false final false
inline void _ctor(::Org::BouncyCastle::X509::X509Certificate*  trustedCert, ::ArrayW<uint8_t,::Array<uint8_t>*>  nameConstraints) ;

static inline ::Org::BouncyCastle::Pkix::TrustAnchor* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name*  caPrincipal, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  pubKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  nameConstraints) ;

/// @brief Method .ctor addr 0x111d51c size 0xcc virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name*  caPrincipal, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  pubKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  nameConstraints) ;

static inline ::Org::BouncyCastle::Pkix::TrustAnchor* New_ctor(::StringW  caName, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  pubKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  nameConstraints) ;

/// @brief Method .ctor addr 0x111d5e8 size 0x148 virtual false final false
inline void _ctor(::StringW  caName, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  pubKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  nameConstraints) ;

/// @brief Method get_TrustedCert addr 0x111d730 size 0x8 virtual false final false
inline ::Org::BouncyCastle::X509::X509Certificate* get_TrustedCert() ;

/// @brief Method get_CA addr 0x111d738 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_CA() ;

/// @brief Method get_CAName addr 0x111d740 size 0x8 virtual false final false
inline ::StringW get_CAName() ;

/// @brief Method get_CAPublicKey addr 0x111d748 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* get_CAPublicKey() ;

/// @brief Method setNameConstraints addr 0x111d460 size 0xbc virtual false final false
inline void setNameConstraints(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method get_GetNameConstraints addr 0x111d750 size 0x5c virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_GetNameConstraints() ;

/// @brief Method ToString addr 0x111d7ac size 0x1e8 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "TrustAnchor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrustAnchor(TrustAnchor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrustAnchor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrustAnchor(TrustAnchor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TrustAnchor()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::TrustAnchor, 0x40>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::TrustAnchor);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::TrustAnchor*, "Org.BouncyCastle.Pkix", "TrustAnchor");
