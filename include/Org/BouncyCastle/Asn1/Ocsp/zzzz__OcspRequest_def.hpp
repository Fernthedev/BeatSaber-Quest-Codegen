#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OcspRequest)
namespace Org::BouncyCastle::Asn1::Ocsp {
class TbsRequest;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class Signature;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class OcspRequest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest);
// Type: Org.BouncyCastle.Asn1.Ocsp::OcspRequest
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(211))
// CS Name: ::Org.BouncyCastle.Asn1.Ocsp::OcspRequest*
class CORDL_TYPE OcspRequest : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field tbsRequest offset 0x10
 __declspec(property(get=__get_tbsRequest, put=__set_tbsRequest)) ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*  tbsRequest;

/// @brief Field optionalSignature offset 0x18
 __declspec(property(get=__get_optionalSignature, put=__set_optionalSignature)) ::Org::BouncyCastle::Asn1::Ocsp::Signature*  optionalSignature;

 __declspec(property(get=get_TbsRequest)) ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*  TbsRequest;

 __declspec(property(get=get_OptionalSignature)) ::Org::BouncyCastle::Asn1::Ocsp::Signature*  OptionalSignature;

constexpr void __set_tbsRequest(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* __get_tbsRequest() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*> __get_tbsRequest() const;

constexpr void __set_optionalSignature(::Org::BouncyCastle::Asn1::Ocsp::Signature*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Ocsp::Signature* __get_optionalSignature() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::Signature*> __get_optionalSignature() const;

/// @brief Method GetInstance addr 0xf80ab4 size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  explicitly) ;

/// @brief Method GetInstance addr 0xf80acc size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*  tbsRequest, ::Org::BouncyCastle::Asn1::Ocsp::Signature*  optionalSignature) ;

/// @brief Method .ctor addr 0xf80d70 size 0x7c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest*  tbsRequest, ::Org::BouncyCastle::Asn1::Ocsp::Signature*  optionalSignature) ;

static inline ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xf80c54 size 0x11c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method get_TbsRequest addr 0xf80f8c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest* get_TbsRequest() ;

/// @brief Method get_OptionalSignature addr 0xf80f94 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Ocsp::Signature* get_OptionalSignature() ;

/// @brief Method ToAsn1Object addr 0xf80f9c size 0x114 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "OcspRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OcspRequest(OcspRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OcspRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OcspRequest(OcspRequest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OcspRequest()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::OcspRequest, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest*, "Org.BouncyCastle.Asn1.Ocsp", "OcspRequest");
