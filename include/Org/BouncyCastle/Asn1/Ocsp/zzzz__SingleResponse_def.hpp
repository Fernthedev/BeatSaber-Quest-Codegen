#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SingleResponse)
namespace Org::BouncyCastle::Asn1::Ocsp {
class CertID;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class CertStatus;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class SingleResponse;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::SingleResponse);
// Type: Org.BouncyCastle.Asn1.Ocsp::SingleResponse
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(222))
// CS Name: ::Org.BouncyCastle.Asn1.Ocsp::SingleResponse*
class CORDL_TYPE SingleResponse : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field certID offset 0x10
 __declspec(property(get=__get_certID, put=__set_certID)) ::Org::BouncyCastle::Asn1::Ocsp::CertID*  certID;

/// @brief Field certStatus offset 0x18
 __declspec(property(get=__get_certStatus, put=__set_certStatus)) ::Org::BouncyCastle::Asn1::Ocsp::CertStatus*  certStatus;

/// @brief Field thisUpdate offset 0x20
 __declspec(property(get=__get_thisUpdate, put=__set_thisUpdate)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  thisUpdate;

/// @brief Field nextUpdate offset 0x28
 __declspec(property(get=__get_nextUpdate, put=__set_nextUpdate)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  nextUpdate;

/// @brief Field singleExtensions offset 0x30
 __declspec(property(get=__get_singleExtensions, put=__set_singleExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions*  singleExtensions;

 __declspec(property(get=get_CertId)) ::Org::BouncyCastle::Asn1::Ocsp::CertID*  CertId;

 __declspec(property(get=get_CertStatus)) ::Org::BouncyCastle::Asn1::Ocsp::CertStatus*  CertStatus;

 __declspec(property(get=get_ThisUpdate)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  ThisUpdate;

 __declspec(property(get=get_NextUpdate)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  NextUpdate;

 __declspec(property(get=get_SingleExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions*  SingleExtensions;

constexpr void __set_certID(::Org::BouncyCastle::Asn1::Ocsp::CertID*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertID* __get_certID() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::CertID*> __get_certID() const;

constexpr void __set_certStatus(::Org::BouncyCastle::Asn1::Ocsp::CertStatus*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* __get_certStatus() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*> __get_certStatus() const;

constexpr void __set_thisUpdate(::Org::BouncyCastle::Asn1::DerGeneralizedTime*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* __get_thisUpdate() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> __get_thisUpdate() const;

constexpr void __set_nextUpdate(::Org::BouncyCastle::Asn1::DerGeneralizedTime*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* __get_nextUpdate() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> __get_nextUpdate() const;

constexpr void __set_singleExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* __get_singleExtensions() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> __get_singleExtensions() const;

static inline ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::CertID*  certID, ::Org::BouncyCastle::Asn1::Ocsp::CertStatus*  certStatus, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  thisUpdate, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  nextUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions*  singleExtensions) ;

/// @brief Method .ctor addr 0xf843dc size 0x50 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::CertID*  certID, ::Org::BouncyCastle::Asn1::Ocsp::CertStatus*  certStatus, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  thisUpdate, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  nextUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions*  singleExtensions) ;

static inline ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xf8442c size 0x2b8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xf846e4 size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  explicitly) ;

/// @brief Method GetInstance addr 0xf846fc size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* GetInstance(::System::Object*  obj) ;

/// @brief Method get_CertId addr 0xf84884 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* get_CertId() ;

/// @brief Method get_CertStatus addr 0xf8488c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* get_CertStatus() ;

/// @brief Method get_ThisUpdate addr 0xf84894 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_ThisUpdate() ;

/// @brief Method get_NextUpdate addr 0xf8489c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_NextUpdate() ;

/// @brief Method get_SingleExtensions addr 0xf848a4 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_SingleExtensions() ;

/// @brief Method ToAsn1Object addr 0xf848ac size 0x184 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "SingleResponse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SingleResponse(SingleResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingleResponse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingleResponse(SingleResponse const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SingleResponse()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse, 0x38>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::SingleResponse);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*, "Org.BouncyCastle.Asn1.Ocsp", "SingleResponse");
