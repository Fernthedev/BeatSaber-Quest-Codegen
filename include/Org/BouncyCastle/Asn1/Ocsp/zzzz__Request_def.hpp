#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(Request)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class CertID;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class Request;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::Request);
// Type: Org.BouncyCastle.Asn1.Ocsp::Request
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(215))
// CS Name: ::Org.BouncyCastle.Asn1.Ocsp::Request*
class CORDL_TYPE Request : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field reqCert offset 0x10
 __declspec(property(get=__get_reqCert, put=__set_reqCert)) ::Org::BouncyCastle::Asn1::Ocsp::CertID*  reqCert;

/// @brief Field singleRequestExtensions offset 0x18
 __declspec(property(get=__get_singleRequestExtensions, put=__set_singleRequestExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions*  singleRequestExtensions;

 __declspec(property(get=get_ReqCert)) ::Org::BouncyCastle::Asn1::Ocsp::CertID*  ReqCert;

 __declspec(property(get=get_SingleRequestExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions*  SingleRequestExtensions;

constexpr void __set_reqCert(::Org::BouncyCastle::Asn1::Ocsp::CertID*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertID* __get_reqCert() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::CertID*> __get_reqCert() const;

constexpr void __set_singleRequestExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* __get_singleRequestExtensions() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> __get_singleRequestExtensions() const;

/// @brief Method GetInstance addr 0xf820cc size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Ocsp::Request* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  explicitly) ;

/// @brief Method GetInstance addr 0xf820e4 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Ocsp::Request* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Ocsp::Request* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::CertID*  reqCert, ::Org::BouncyCastle::Asn1::X509::X509Extensions*  singleRequestExtensions) ;

/// @brief Method .ctor addr 0xf82390 size 0x7c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::CertID*  reqCert, ::Org::BouncyCastle::Asn1::X509::X509Extensions*  singleRequestExtensions) ;

static inline ::Org::BouncyCastle::Asn1::Ocsp::Request* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xf8226c size 0x124 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method get_ReqCert addr 0xf8240c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* get_ReqCert() ;

/// @brief Method get_SingleRequestExtensions addr 0xf82414 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_SingleRequestExtensions() ;

/// @brief Method ToAsn1Object addr 0xf8241c size 0x114 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "Request", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Request(Request && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Request", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Request(Request const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Request()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::Request, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::Request);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::Request*, "Org.BouncyCastle.Asn1.Ocsp", "Request");
