#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeStampTokenGenerator)
namespace Org::BouncyCastle::Tsp {
class TimeStampToken;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampRequest;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampTokenGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator);
// Type: Org.BouncyCastle.Tsp::TimeStampTokenGenerator
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1771))
// CS Name: ::Org.BouncyCastle.Tsp::TimeStampTokenGenerator*
class CORDL_TYPE TimeStampTokenGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Object)]{};

/// @brief Field accuracySeconds offset 0x10
 __declspec(property(get=__get_accuracySeconds, put=__set_accuracySeconds)) int32_t  accuracySeconds;

/// @brief Field accuracyMillis offset 0x14
 __declspec(property(get=__get_accuracyMillis, put=__set_accuracyMillis)) int32_t  accuracyMillis;

/// @brief Field accuracyMicros offset 0x18
 __declspec(property(get=__get_accuracyMicros, put=__set_accuracyMicros)) int32_t  accuracyMicros;

/// @brief Field ordering offset 0x1c
 __declspec(property(get=__get_ordering, put=__set_ordering)) bool  ordering;

/// @brief Field tsa offset 0x20
 __declspec(property(get=__get_tsa, put=__set_tsa)) ::Org::BouncyCastle::Asn1::X509::GeneralName*  tsa;

/// @brief Field tsaPolicyOID offset 0x28
 __declspec(property(get=__get_tsaPolicyOID, put=__set_tsaPolicyOID)) ::StringW  tsaPolicyOID;

/// @brief Field key offset 0x30
 __declspec(property(get=__get_key, put=__set_key)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  key;

/// @brief Field cert offset 0x38
 __declspec(property(get=__get_cert, put=__set_cert)) ::Org::BouncyCastle::X509::X509Certificate*  cert;

/// @brief Field digestOID offset 0x40
 __declspec(property(get=__get_digestOID, put=__set_digestOID)) ::StringW  digestOID;

/// @brief Field signedAttr offset 0x48
 __declspec(property(get=__get_signedAttr, put=__set_signedAttr)) ::Org::BouncyCastle::Asn1::Cms::AttributeTable*  signedAttr;

/// @brief Field unsignedAttr offset 0x50
 __declspec(property(get=__get_unsignedAttr, put=__set_unsignedAttr)) ::Org::BouncyCastle::Asn1::Cms::AttributeTable*  unsignedAttr;

/// @brief Field x509Certs offset 0x58
 __declspec(property(get=__get_x509Certs, put=__set_x509Certs)) ::Org::BouncyCastle::X509::Store::IX509Store*  x509Certs;

/// @brief Field x509Crls offset 0x60
 __declspec(property(get=__get_x509Crls, put=__set_x509Crls)) ::Org::BouncyCastle::X509::Store::IX509Store*  x509Crls;

constexpr void __set_accuracySeconds(int32_t  value) ;

constexpr int32_t& __get_accuracySeconds() ;

constexpr int32_t const& __get_accuracySeconds() const;

constexpr void __set_accuracyMillis(int32_t  value) ;

constexpr int32_t& __get_accuracyMillis() ;

constexpr int32_t const& __get_accuracyMillis() const;

constexpr void __set_accuracyMicros(int32_t  value) ;

constexpr int32_t& __get_accuracyMicros() ;

constexpr int32_t const& __get_accuracyMicros() const;

constexpr void __set_ordering(bool  value) ;

constexpr bool& __get_ordering() ;

constexpr bool const& __get_ordering() const;

constexpr void __set_tsa(::Org::BouncyCastle::Asn1::X509::GeneralName*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* __get_tsa() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> __get_tsa() const;

constexpr void __set_tsaPolicyOID(::StringW  value) ;

constexpr ::StringW& __get_tsaPolicyOID() ;

constexpr ::StringW const& __get_tsaPolicyOID() const;

constexpr void __set_key(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  value) ;

constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* __get_key() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> __get_key() const;

constexpr void __set_cert(::Org::BouncyCastle::X509::X509Certificate*  value) ;

constexpr ::Org::BouncyCastle::X509::X509Certificate* __get_cert() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509Certificate*> __get_cert() const;

constexpr void __set_digestOID(::StringW  value) ;

constexpr ::StringW& __get_digestOID() ;

constexpr ::StringW const& __get_digestOID() const;

constexpr void __set_signedAttr(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* __get_signedAttr() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> __get_signedAttr() const;

constexpr void __set_unsignedAttr(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* __get_unsignedAttr() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> __get_unsignedAttr() const;

constexpr void __set_x509Certs(::Org::BouncyCastle::X509::Store::IX509Store*  value) ;

constexpr ::Org::BouncyCastle::X509::Store::IX509Store* __get_x509Certs() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Store*> __get_x509Certs() const;

constexpr void __set_x509Crls(::Org::BouncyCastle::X509::Store::IX509Store*  value) ;

constexpr ::Org::BouncyCastle::X509::Store::IX509Store* __get_x509Crls() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Store*> __get_x509Crls() const;

static inline ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  key, ::Org::BouncyCastle::X509::X509Certificate*  cert, ::StringW  digestOID, ::StringW  tsaPolicyOID) ;

/// @brief Method .ctor addr 0x11538a4 size 0xc virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  key, ::Org::BouncyCastle::X509::X509Certificate*  cert, ::StringW  digestOID, ::StringW  tsaPolicyOID) ;

static inline ::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  key, ::Org::BouncyCastle::X509::X509Certificate*  cert, ::StringW  digestOID, ::StringW  tsaPolicyOID, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*  signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*  unsignedAttr) ;

/// @brief Method .ctor addr 0x11538b0 size 0x448 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  key, ::Org::BouncyCastle::X509::X509Certificate*  cert, ::StringW  digestOID, ::StringW  tsaPolicyOID, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*  signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable*  unsignedAttr) ;

/// @brief Method SetCertificates addr 0x1153cf8 size 0x8 virtual false final false
inline void SetCertificates(::Org::BouncyCastle::X509::Store::IX509Store*  certificates) ;

/// @brief Method SetCrls addr 0x1153d00 size 0x8 virtual false final false
inline void SetCrls(::Org::BouncyCastle::X509::Store::IX509Store*  crls) ;

/// @brief Method SetAccuracySeconds addr 0x1153d08 size 0x8 virtual false final false
inline void SetAccuracySeconds(int32_t  accuracySeconds) ;

/// @brief Method SetAccuracyMillis addr 0x1153d10 size 0x8 virtual false final false
inline void SetAccuracyMillis(int32_t  accuracyMillis) ;

/// @brief Method SetAccuracyMicros addr 0x1153d18 size 0x8 virtual false final false
inline void SetAccuracyMicros(int32_t  accuracyMicros) ;

/// @brief Method SetOrdering addr 0x1153d20 size 0xc virtual false final false
inline void SetOrdering(bool  ordering) ;

/// @brief Method SetTsa addr 0x1153d2c size 0x8 virtual false final false
inline void SetTsa(::Org::BouncyCastle::Asn1::X509::GeneralName*  tsa) ;

/// @brief Method Generate addr 0x1151950 size 0x6a8 virtual false final false
inline ::Org::BouncyCastle::Tsp::TimeStampToken* Generate(::Org::BouncyCastle::Tsp::TimeStampRequest*  request, ::Org::BouncyCastle::Math::BigInteger*  serialNumber, ::System::DateTime  genTime) ;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeStampTokenGenerator(TimeStampTokenGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeStampTokenGenerator(TimeStampTokenGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimeStampTokenGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TimeStampTokenGenerator, 0x68>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampTokenGenerator*, "Org.BouncyCastle.Tsp", "TimeStampTokenGenerator");
