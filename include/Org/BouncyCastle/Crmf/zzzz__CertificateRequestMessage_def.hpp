#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateRequestMessage)
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoSigningKey;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class Controls;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertReqMsg;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplate;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class AttributeTypeAndValue;
}
namespace Org::BouncyCastle::Crmf {
class IControl;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactoryProvider;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class CertificateRequestMessage;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::CertificateRequestMessage);
// Type: Org.BouncyCastle.Crmf::CertificateRequestMessage
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(696))
// CS Name: ::Org.BouncyCastle.Crmf::CertificateRequestMessage*
class CORDL_TYPE CertificateRequestMessage : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field certReqMsg offset 0x10
 __declspec(property(get=__get_certReqMsg, put=__set_certReqMsg)) ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*  certReqMsg;

/// @brief Field controls offset 0x18
 __declspec(property(get=__get_controls, put=__set_controls)) ::Org::BouncyCastle::Asn1::Crmf::Controls*  controls;

 __declspec(property(get=get_HasControls)) bool  HasControls;

 __declspec(property(get=get_HasProofOfPossession)) bool  HasProofOfPossession;

 __declspec(property(get=get_ProofOfPossession)) int32_t  ProofOfPossession;

 __declspec(property(get=get_HasSigningKeyProofOfPossessionWithPkMac)) bool  HasSigningKeyProofOfPossessionWithPkMac;

static inline void setStaticF_popRaVerified(int32_t  value) ;

static inline int32_t getStaticF_popRaVerified() ;

static inline void setStaticF_popSigningKey(int32_t  value) ;

static inline int32_t getStaticF_popSigningKey() ;

static inline void setStaticF_popKeyEncipherment(int32_t  value) ;

static inline int32_t getStaticF_popKeyEncipherment() ;

static inline void setStaticF_popKeyAgreement(int32_t  value) ;

static inline int32_t getStaticF_popKeyAgreement() ;

constexpr void __set_certReqMsg(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* __get_certReqMsg() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*> __get_certReqMsg() const;

constexpr void __set_controls(::Org::BouncyCastle::Asn1::Crmf::Controls*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::Controls* __get_controls() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::Controls*> __get_controls() const;

/// @brief Method ParseBytes addr 0x120df00 size 0x8 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* ParseBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  encoding) ;

static inline ::Org::BouncyCastle::Crmf::CertificateRequestMessage* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  encoded) ;

/// @brief Method .ctor addr 0x120df08 size 0x24 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  encoded) ;

static inline ::Org::BouncyCastle::Crmf::CertificateRequestMessage* New_ctor(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*  certReqMsg) ;

/// @brief Method .ctor addr 0x120df2c size 0x54 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*  certReqMsg) ;

/// @brief Method ToAsn1Structure addr 0x120df80 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* ToAsn1Structure() ;

/// @brief Method GetCertTemplate addr 0x120df88 size 0x30 virtual false final false
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* GetCertTemplate() ;

/// @brief Method get_HasControls addr 0x120dfb8 size 0x10 virtual false final false
inline bool get_HasControls() ;

/// @brief Method HasControl addr 0x120dfc8 size 0x18 virtual false final false
inline bool HasControl(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  objectIdentifier) ;

/// @brief Method GetControl addr 0x120e090 size 0x1d8 virtual false final false
inline ::Org::BouncyCastle::Crmf::IControl* GetControl(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  type) ;

/// @brief Method FindControl addr 0x120dfe0 size 0xb0 virtual false final false
inline ::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue* FindControl(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  type) ;

/// @brief Method get_HasProofOfPossession addr 0x120e2b8 size 0x2c virtual false final false
inline bool get_HasProofOfPossession() ;

/// @brief Method get_ProofOfPossession addr 0x120e2e4 size 0x30 virtual false final false
inline int32_t get_ProofOfPossession() ;

/// @brief Method get_HasSigningKeyProofOfPossessionWithPkMac addr 0x120e314 size 0xe0 virtual false final false
inline bool get_HasSigningKeyProofOfPossessionWithPkMac() ;

/// @brief Method IsValidSigningKeyPop addr 0x120e3f4 size 0x174 virtual false final false
inline bool IsValidSigningKeyPop(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*  verifierProvider) ;

/// @brief Method verifySignature addr 0x120e568 size 0x440 virtual false final false
inline bool verifySignature(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*  verifierFactoryProvider, ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey*  signKey) ;

/// @brief Method GetEncoded addr 0x120ea18 size 0x1c virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetEncoded() ;

// Ctor Parameters [CppParam { name: "", ty: "CertificateRequestMessage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertificateRequestMessage(CertificateRequestMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertificateRequestMessage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertificateRequestMessage(CertificateRequestMessage const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CertificateRequestMessage()  = default;
public:


// Fields

// Static field popRaVerified

// Static field popSigningKey

// Static field popKeyEncipherment

// Static field popKeyAgreement


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::CertificateRequestMessage, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::CertificateRequestMessage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::CertificateRequestMessage*, "Org.BouncyCastle.Crmf", "CertificateRequestMessage");
