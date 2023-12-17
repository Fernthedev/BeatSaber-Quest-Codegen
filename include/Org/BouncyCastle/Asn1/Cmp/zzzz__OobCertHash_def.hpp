#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OobCertHash)
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertId;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class OobCertHash;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::OobCertHash);
// Type: Org.BouncyCastle.Asn1.Cmp::OobCertHash
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(27))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::OobCertHash*
class CORDL_TYPE OobCertHash : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field hashAlg offset 0x10
 __declspec(property(get=__get_hashAlg, put=__set_hashAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  hashAlg;

/// @brief Field certId offset 0x18
 __declspec(property(get=__get_certId, put=__set_certId)) ::Org::BouncyCastle::Asn1::Crmf::CertId*  certId;

/// @brief Field hashVal offset 0x20
 __declspec(property(get=__get_hashVal, put=__set_hashVal)) ::Org::BouncyCastle::Asn1::DerBitString*  hashVal;

 __declspec(property(get=get_HashAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  HashAlg;

 __declspec(property(get=get_CertID)) ::Org::BouncyCastle::Asn1::Crmf::CertId*  CertID;

constexpr void __set_hashAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_hashAlg() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_hashAlg() const;

constexpr void __set_certId(::Org::BouncyCastle::Asn1::Crmf::CertId*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::CertId* __get_certId() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::CertId*> __get_certId() const;

constexpr void __set_hashVal(::Org::BouncyCastle::Asn1::DerBitString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerBitString* __get_hashVal() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> __get_hashVal() const;

static inline ::Org::BouncyCastle::Asn1::Cmp::OobCertHash* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe6864c size 0x144 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe6899c size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cmp::OobCertHash* GetInstance(::System::Object*  obj) ;

/// @brief Method get_HashAlg addr 0xe68b24 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlg() ;

/// @brief Method get_CertID addr 0xe68b2c size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Crmf::CertId* get_CertID() ;

/// @brief Method ToAsn1Object addr 0xe68b34 size 0xd0 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "OobCertHash", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OobCertHash(OobCertHash && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OobCertHash", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OobCertHash(OobCertHash const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OobCertHash()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::OobCertHash, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::OobCertHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::OobCertHash*, "Org.BouncyCastle.Asn1.Cmp", "OobCertHash");
