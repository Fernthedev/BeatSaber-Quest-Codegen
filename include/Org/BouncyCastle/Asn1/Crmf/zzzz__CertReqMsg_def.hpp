#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(CertReqMsg)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class ProofOfPossession;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertRequest;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class AttributeTypeAndValue;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class CertReqMsg;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg);
// Type: Org.BouncyCastle.Asn1.Crmf::CertReqMsg
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(105))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::CertReqMsg*
class CORDL_TYPE CertReqMsg : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field certReq offset 0x10
 __declspec(property(get=__get_certReq, put=__set_certReq)) ::Org::BouncyCastle::Asn1::Crmf::CertRequest*  certReq;

/// @brief Field popo offset 0x18
 __declspec(property(get=__get_popo, put=__set_popo)) ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession*  popo;

/// @brief Field regInfo offset 0x20
 __declspec(property(get=__get_regInfo, put=__set_regInfo)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  regInfo;

 __declspec(property(get=get_CertReq)) ::Org::BouncyCastle::Asn1::Crmf::CertRequest*  CertReq;

 __declspec(property(get=get_Popo)) ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession*  Popo;

constexpr void __set_certReq(::Org::BouncyCastle::Asn1::Crmf::CertRequest*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::CertRequest* __get_certReq() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::CertRequest*> __get_certReq() const;

constexpr void __set_popo(::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* __get_popo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession*> __get_popo() const;

constexpr void __set_regInfo(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* __get_regInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> __get_regInfo() const;

static inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe84098 size 0x150 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe83fec size 0xa4 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* GetInstance(::System::Object*  obj) ;

/// @brief Method GetInstance addr 0xe84414 size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

static inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* New_ctor(::Org::BouncyCastle::Asn1::Crmf::CertRequest*  certReq, ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession*  popo, ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*,::Array<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>*>  regInfo) ;

/// @brief Method .ctor addr 0xe8442c size 0xdc virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::CertRequest*  certReq, ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession*  popo, ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*,::Array<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>*>  regInfo) ;

/// @brief Method get_CertReq addr 0xe84508 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Crmf::CertRequest* get_CertReq() ;

/// @brief Method get_Popo addr 0xe84510 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* get_Popo() ;

/// @brief Method GetRegInfo addr 0xe84518 size 0xfc virtual true final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*,::Array<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>*> GetRegInfo() ;

/// @brief Method ToAsn1Object addr 0xe84614 size 0x174 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "CertReqMsg", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertReqMsg(CertReqMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertReqMsg", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertReqMsg(CertReqMsg const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CertReqMsg()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*, "Org.BouncyCastle.Asn1.Crmf", "CertReqMsg");
