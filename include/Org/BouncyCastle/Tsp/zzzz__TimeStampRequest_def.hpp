#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeStampRequest)
namespace Org::BouncyCastle::Asn1::Tsp {
class TimeStampReq;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace System::IO {
class Stream;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extension;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampRequest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TimeStampRequest);
// Type: Org.BouncyCastle.Tsp::TimeStampRequest
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1764))
// CS Name: ::Org.BouncyCastle.Tsp::TimeStampRequest*
class CORDL_TYPE TimeStampRequest : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::X509::X509ExtensionBase)]{};

/// @brief Field req offset 0x10
 __declspec(property(get=__get_req, put=__set_req)) ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*  req;

/// @brief Field extensions offset 0x18
 __declspec(property(get=__get_extensions, put=__set_extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions*  extensions;

 __declspec(property(get=get_Version)) int32_t  Version;

 __declspec(property(get=get_MessageImprintAlgOid)) ::StringW  MessageImprintAlgOid;

 __declspec(property(get=get_ReqPolicy)) ::StringW  ReqPolicy;

 __declspec(property(get=get_Nonce)) ::Org::BouncyCastle::Math::BigInteger*  Nonce;

 __declspec(property(get=get_CertReq)) bool  CertReq;

 __declspec(property(get=get_Extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions*  Extensions;

 __declspec(property(get=get_HasExtensions)) bool  HasExtensions;

constexpr void __set_req(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* __get_req() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*> __get_req() const;

constexpr void __set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* __get_extensions() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> __get_extensions() const;

static inline ::Org::BouncyCastle::Tsp::TimeStampRequest* New_ctor(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*  req) ;

/// @brief Method .ctor addr 0x114f1dc size 0x38 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*  req) ;

static inline ::Org::BouncyCastle::Tsp::TimeStampRequest* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  req) ;

/// @brief Method .ctor addr 0x114f214 size 0x74 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  req) ;

static inline ::Org::BouncyCastle::Tsp::TimeStampRequest* New_ctor(::System::IO::Stream*  input) ;

/// @brief Method .ctor addr 0x114f3bc size 0x74 virtual false final false
inline void _ctor(::System::IO::Stream*  input) ;

static inline ::Org::BouncyCastle::Tsp::TimeStampRequest* New_ctor(::Org::BouncyCastle::Asn1::Asn1InputStream*  str) ;

/// @brief Method .ctor addr 0x114f288 size 0x134 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1InputStream*  str) ;

/// @brief Method get_Version addr 0x114f430 size 0x24 virtual false final false
inline int32_t get_Version() ;

/// @brief Method get_MessageImprintAlgOid addr 0x114f454 size 0x3c virtual false final false
inline ::StringW get_MessageImprintAlgOid() ;

/// @brief Method GetMessageImprintDigest addr 0x114f490 size 0x24 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetMessageImprintDigest() ;

/// @brief Method get_ReqPolicy addr 0x114f4b4 size 0x2c virtual false final false
inline ::StringW get_ReqPolicy() ;

/// @brief Method get_Nonce addr 0x114f4e0 size 0x2c virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Nonce() ;

/// @brief Method get_CertReq addr 0x114f50c size 0x2c virtual false final false
inline bool get_CertReq() ;

/// @brief Method Validate addr 0x114f538 size 0x628 virtual false final false
inline void Validate(::System::Collections::IList*  algorithms, ::System::Collections::IList*  policies, ::System::Collections::IList*  extensions) ;

/// @brief Method GetEncoded addr 0x114fd84 size 0x1c virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetEncoded() ;

/// @brief Method get_Extensions addr 0x114fb84 size 0x1c virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions() ;

/// @brief Method get_HasExtensions addr 0x114fda0 size 0x10 virtual true final false
inline bool get_HasExtensions() ;

/// @brief Method GetExtension addr 0x114fdb0 size 0x14 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::X509Extension* GetExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method GetExtensionOids addr 0x114fdc4 size 0x58 virtual true final false
inline ::System::Collections::IList* GetExtensionOids() ;

/// @brief Method GetX509Extensions addr 0x114fecc size 0x1c virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions() ;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeStampRequest(TimeStampRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeStampRequest(TimeStampRequest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimeStampRequest()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TimeStampRequest, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampRequest*, "Org.BouncyCastle.Tsp", "TimeStampRequest");
