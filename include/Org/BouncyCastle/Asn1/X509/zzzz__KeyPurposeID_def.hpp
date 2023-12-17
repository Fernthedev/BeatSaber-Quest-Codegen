#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyPurposeID)
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class KeyPurposeID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::KeyPurposeID);
// Type: Org.BouncyCastle.Asn1.X509::KeyPurposeID
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(350))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(368))
// CS Name: ::Org.BouncyCastle.Asn1.X509::KeyPurposeID*
class CORDL_TYPE KeyPurposeID : public ::Org::BouncyCastle::Asn1::DerObjectIdentifier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::DerObjectIdentifier)]{};

/// @brief Field IdKP offset 0x0
static constexpr ::ConstString  IdKP{u"1.3.6.1.5.5.7.3"};

static inline void setStaticF_AnyExtendedKeyUsage(::Org::BouncyCastle::Asn1::X509::KeyPurposeID*  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_AnyExtendedKeyUsage() ;

static inline void setStaticF_IdKPServerAuth(::Org::BouncyCastle::Asn1::X509::KeyPurposeID*  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPServerAuth() ;

static inline void setStaticF_IdKPClientAuth(::Org::BouncyCastle::Asn1::X509::KeyPurposeID*  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPClientAuth() ;

static inline void setStaticF_IdKPCodeSigning(::Org::BouncyCastle::Asn1::X509::KeyPurposeID*  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPCodeSigning() ;

static inline void setStaticF_IdKPEmailProtection(::Org::BouncyCastle::Asn1::X509::KeyPurposeID*  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPEmailProtection() ;

static inline void setStaticF_IdKPIpsecEndSystem(::Org::BouncyCastle::Asn1::X509::KeyPurposeID*  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPIpsecEndSystem() ;

static inline void setStaticF_IdKPIpsecTunnel(::Org::BouncyCastle::Asn1::X509::KeyPurposeID*  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPIpsecTunnel() ;

static inline void setStaticF_IdKPIpsecUser(::Org::BouncyCastle::Asn1::X509::KeyPurposeID*  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPIpsecUser() ;

static inline void setStaticF_IdKPTimeStamping(::Org::BouncyCastle::Asn1::X509::KeyPurposeID*  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPTimeStamping() ;

static inline void setStaticF_IdKPOcspSigning(::Org::BouncyCastle::Asn1::X509::KeyPurposeID*  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPOcspSigning() ;

static inline void setStaticF_IdKPSmartCardLogon(::Org::BouncyCastle::Asn1::X509::KeyPurposeID*  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPSmartCardLogon() ;

static inline void setStaticF_IdKPMacAddress(::Org::BouncyCastle::Asn1::X509::KeyPurposeID*  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* getStaticF_IdKPMacAddress() ;

static inline ::Org::BouncyCastle::Asn1::X509::KeyPurposeID* New_ctor(::StringW  id) ;

/// @brief Method .ctor addr 0x1191f2c size 0x68 virtual false final false
inline void _ctor(::StringW  id) ;

// Ctor Parameters [CppParam { name: "", ty: "KeyPurposeID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyPurposeID(KeyPurposeID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyPurposeID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyPurposeID(KeyPurposeID const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KeyPurposeID()  = default;
public:


// Fields

// Static field AnyExtendedKeyUsage

// Static field IdKPServerAuth

// Static field IdKPClientAuth

// Static field IdKPCodeSigning

// Static field IdKPEmailProtection

// Static field IdKPIpsecEndSystem

// Static field IdKPIpsecTunnel

// Static field IdKPIpsecUser

// Static field IdKPTimeStamping

// Static field IdKPOcspSigning

// Static field IdKPSmartCardLogon

// Static field IdKPMacAddress


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::KeyPurposeID, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::KeyPurposeID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, "Org.BouncyCastle.Asn1.X509", "KeyPurposeID");
