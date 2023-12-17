#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BasicOcspRespGenerator)
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Ocsp {
class BasicOcspResp;
}
namespace Org::BouncyCastle::Ocsp {
class RespID;
}
namespace Org::BouncyCastle::Ocsp {
class __BasicOcspRespGenerator__ResponseObject;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Ocsp {
class CertificateID;
}
namespace Org::BouncyCastle::Ocsp {
class CertificateStatus;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class SingleResponse;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class CertStatus;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class BasicOcspRespGenerator;
}
namespace Org::BouncyCastle::Ocsp {
class __BasicOcspRespGenerator__ResponseObject;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::__BasicOcspRespGenerator__ResponseObject);
// Type: ::ResponseObject
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1608))
// CS Name: ::BasicOcspRespGenerator::ResponseObject*
class CORDL_TYPE __BasicOcspRespGenerator__ResponseObject : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field certId offset 0x10
 __declspec(property(get=__get_certId, put=__set_certId)) ::Org::BouncyCastle::Ocsp::CertificateID*  certId;

/// @brief Field certStatus offset 0x18
 __declspec(property(get=__get_certStatus, put=__set_certStatus)) ::Org::BouncyCastle::Asn1::Ocsp::CertStatus*  certStatus;

/// @brief Field thisUpdate offset 0x20
 __declspec(property(get=__get_thisUpdate, put=__set_thisUpdate)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  thisUpdate;

/// @brief Field nextUpdate offset 0x28
 __declspec(property(get=__get_nextUpdate, put=__set_nextUpdate)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  nextUpdate;

/// @brief Field extensions offset 0x30
 __declspec(property(get=__get_extensions, put=__set_extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions*  extensions;

constexpr void __set_certId(::Org::BouncyCastle::Ocsp::CertificateID*  value) ;

constexpr ::Org::BouncyCastle::Ocsp::CertificateID* __get_certId() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Ocsp::CertificateID*> __get_certId() const;

constexpr void __set_certStatus(::Org::BouncyCastle::Asn1::Ocsp::CertStatus*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* __get_certStatus() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*> __get_certStatus() const;

constexpr void __set_thisUpdate(::Org::BouncyCastle::Asn1::DerGeneralizedTime*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* __get_thisUpdate() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> __get_thisUpdate() const;

constexpr void __set_nextUpdate(::Org::BouncyCastle::Asn1::DerGeneralizedTime*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* __get_nextUpdate() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> __get_nextUpdate() const;

constexpr void __set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* __get_extensions() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> __get_extensions() const;

static inline ::Org::BouncyCastle::Ocsp::__BasicOcspRespGenerator__ResponseObject* New_ctor(::Org::BouncyCastle::Ocsp::CertificateID*  certId, ::Org::BouncyCastle::Ocsp::CertificateStatus*  certStatus, ::System::DateTime  thisUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions*  extensions) ;

/// @brief Method .ctor addr 0x109d540 size 0x98 virtual false final false
inline void _ctor(::Org::BouncyCastle::Ocsp::CertificateID*  certId, ::Org::BouncyCastle::Ocsp::CertificateStatus*  certStatus, ::System::DateTime  thisUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions*  extensions) ;

static inline ::Org::BouncyCastle::Ocsp::__BasicOcspRespGenerator__ResponseObject* New_ctor(::Org::BouncyCastle::Ocsp::CertificateID*  certId, ::Org::BouncyCastle::Ocsp::CertificateStatus*  certStatus, ::System::DateTime  thisUpdate, ::System::DateTime  nextUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions*  extensions) ;

/// @brief Method .ctor addr 0x109d840 size 0xc0 virtual false final false
inline void _ctor(::Org::BouncyCastle::Ocsp::CertificateID*  certId, ::Org::BouncyCastle::Ocsp::CertificateStatus*  certStatus, ::System::DateTime  thisUpdate, ::System::DateTime  nextUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions*  extensions) ;

static inline ::Org::BouncyCastle::Ocsp::__BasicOcspRespGenerator__ResponseObject* New_ctor(::Org::BouncyCastle::Ocsp::CertificateID*  certId, ::Org::BouncyCastle::Ocsp::CertificateStatus*  certStatus, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  thisUpdate, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  nextUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions*  extensions) ;

/// @brief Method .ctor addr 0x109eacc size 0x264 virtual false final false
inline void _ctor(::Org::BouncyCastle::Ocsp::CertificateID*  certId, ::Org::BouncyCastle::Ocsp::CertificateStatus*  certStatus, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  thisUpdate, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  nextUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions*  extensions) ;

/// @brief Method ToResponse addr 0x109e624 size 0x98 virtual false final false
inline ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* ToResponse() ;

// Ctor Parameters [CppParam { name: "", ty: "__BasicOcspRespGenerator__ResponseObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BasicOcspRespGenerator__ResponseObject(__BasicOcspRespGenerator__ResponseObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BasicOcspRespGenerator__ResponseObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BasicOcspRespGenerator__ResponseObject(__BasicOcspRespGenerator__ResponseObject const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BasicOcspRespGenerator__ResponseObject()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::__BasicOcspRespGenerator__ResponseObject, 0x38>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Ocsp
// Type: Org.BouncyCastle.Ocsp::BasicOcspRespGenerator
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1609))
// CS Name: ::Org.BouncyCastle.Ocsp::BasicOcspRespGenerator*
class CORDL_TYPE BasicOcspRespGenerator : public ::System::Object {
public:
// Declarations
using ResponseObject = ::Org::BouncyCastle::Ocsp::__BasicOcspRespGenerator__ResponseObject;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field list offset 0x10
 __declspec(property(get=__get_list, put=__set_list)) ::System::Collections::IList*  list;

/// @brief Field responseExtensions offset 0x18
 __declspec(property(get=__get_responseExtensions, put=__set_responseExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions*  responseExtensions;

/// @brief Field responderID offset 0x20
 __declspec(property(get=__get_responderID, put=__set_responderID)) ::Org::BouncyCastle::Ocsp::RespID*  responderID;

 __declspec(property(get=get_SignatureAlgNames)) ::System::Collections::IEnumerable*  SignatureAlgNames;

constexpr void __set_list(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_list() const;

constexpr void __set_responseExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* __get_responseExtensions() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> __get_responseExtensions() const;

constexpr void __set_responderID(::Org::BouncyCastle::Ocsp::RespID*  value) ;

constexpr ::Org::BouncyCastle::Ocsp::RespID* __get_responderID() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Ocsp::RespID*> __get_responderID() const;

static inline ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator* New_ctor(::Org::BouncyCastle::Ocsp::RespID*  responderID) ;

/// @brief Method .ctor addr 0x109d0ec size 0x78 virtual false final false
inline void _ctor(::Org::BouncyCastle::Ocsp::RespID*  responderID) ;

static inline ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  publicKey) ;

/// @brief Method .ctor addr 0x109d164 size 0xa8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  publicKey) ;

/// @brief Method AddResponse addr 0x109d41c size 0x124 virtual false final false
inline void AddResponse(::Org::BouncyCastle::Ocsp::CertificateID*  certID, ::Org::BouncyCastle::Ocsp::CertificateStatus*  certStatus) ;

/// @brief Method AddResponse addr 0x109d5d8 size 0x130 virtual false final false
inline void AddResponse(::Org::BouncyCastle::Ocsp::CertificateID*  certID, ::Org::BouncyCastle::Ocsp::CertificateStatus*  certStatus, ::Org::BouncyCastle::Asn1::X509::X509Extensions*  singleExtensions) ;

/// @brief Method AddResponse addr 0x109d708 size 0x138 virtual false final false
inline void AddResponse(::Org::BouncyCastle::Ocsp::CertificateID*  certID, ::Org::BouncyCastle::Ocsp::CertificateStatus*  certStatus, ::System::DateTime  nextUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions*  singleExtensions) ;

/// @brief Method AddResponse addr 0x109d900 size 0x110 virtual false final false
inline void AddResponse(::Org::BouncyCastle::Ocsp::CertificateID*  certID, ::Org::BouncyCastle::Ocsp::CertificateStatus*  certStatus, ::System::DateTime  thisUpdate, ::System::DateTime  nextUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions*  singleExtensions) ;

/// @brief Method SetResponseExtensions addr 0x109da10 size 0x8 virtual false final false
inline void SetResponseExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions*  responseExtensions) ;

/// @brief Method GenerateResponse addr 0x109da18 size 0xc0c virtual false final false
inline ::Org::BouncyCastle::Ocsp::BasicOcspResp* GenerateResponse(::Org::BouncyCastle::Crypto::ISignatureFactory*  signatureCalculator, ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*,::Array<::Org::BouncyCastle::X509::X509Certificate*>*>  chain, ::System::DateTime  producedAt) ;

/// @brief Method Generate addr 0x109e828 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Ocsp::BasicOcspResp* Generate(::StringW  signingAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  privateKey, ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*,::Array<::Org::BouncyCastle::X509::X509Certificate*>*>  chain, ::System::DateTime  thisUpdate) ;

/// @brief Method Generate addr 0x109e830 size 0xec virtual false final false
inline ::Org::BouncyCastle::Ocsp::BasicOcspResp* Generate(::StringW  signingAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  privateKey, ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*,::Array<::Org::BouncyCastle::X509::X509Certificate*>*>  chain, ::System::DateTime  producedAt, ::Org::BouncyCastle::Security::SecureRandom*  random) ;

/// @brief Method Generate addr 0x109e91c size 0x58 virtual false final false
inline ::Org::BouncyCastle::Ocsp::BasicOcspResp* Generate(::Org::BouncyCastle::Crypto::ISignatureFactory*  signatureCalculatorFactory, ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*,::Array<::Org::BouncyCastle::X509::X509Certificate*>*>  chain, ::System::DateTime  producedAt) ;

/// @brief Method get_SignatureAlgNames addr 0x109e974 size 0x4c virtual false final false
inline ::System::Collections::IEnumerable* get_SignatureAlgNames() ;

// Ctor Parameters [CppParam { name: "", ty: "BasicOcspRespGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicOcspRespGenerator(BasicOcspRespGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicOcspRespGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicOcspRespGenerator(BasicOcspRespGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BasicOcspRespGenerator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*, "Org.BouncyCastle.Ocsp", "BasicOcspRespGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::__BasicOcspRespGenerator__ResponseObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::__BasicOcspRespGenerator__ResponseObject*, "Org.BouncyCastle.Ocsp", "BasicOcspRespGenerator/ResponseObject");
