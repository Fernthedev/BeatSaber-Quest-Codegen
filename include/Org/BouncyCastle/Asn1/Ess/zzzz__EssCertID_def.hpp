#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EssCertID)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ess {
class EssCertID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ess::EssCertID);
// Type: Org.BouncyCastle.Asn1.Ess::EssCertID
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(162))
// CS Name: ::Org.BouncyCastle.Asn1.Ess::EssCertID*
class CORDL_TYPE EssCertID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field certHash offset 0x10
 __declspec(property(get=__get_certHash, put=__set_certHash)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  certHash;

/// @brief Field issuerSerial offset 0x18
 __declspec(property(get=__get_issuerSerial, put=__set_issuerSerial)) ::Org::BouncyCastle::Asn1::X509::IssuerSerial*  issuerSerial;

 __declspec(property(get=get_IssuerSerial)) ::Org::BouncyCastle::Asn1::X509::IssuerSerial*  IssuerSerial;

constexpr void __set_certHash(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* __get_certHash() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> __get_certHash() const;

constexpr void __set_issuerSerial(::Org::BouncyCastle::Asn1::X509::IssuerSerial*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial* __get_issuerSerial() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::IssuerSerial*> __get_issuerSerial() const;

/// @brief Method GetInstance addr 0xe99ea0 size 0x190 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Ess::EssCertID* GetInstance(::System::Object*  o) ;

static inline ::Org::BouncyCastle::Asn1::Ess::EssCertID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe9a030 size 0x154 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::Ess::EssCertID* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  hash) ;

/// @brief Method .ctor addr 0xe9a184 size 0x7c virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  hash) ;

static inline ::Org::BouncyCastle::Asn1::Ess::EssCertID* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  hash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial*  issuerSerial) ;

/// @brief Method .ctor addr 0xe9a200 size 0x80 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  hash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial*  issuerSerial) ;

/// @brief Method GetCertHash addr 0xe9a280 size 0x20 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetCertHash() ;

/// @brief Method get_IssuerSerial addr 0xe9a2a0 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* get_IssuerSerial() ;

/// @brief Method ToAsn1Object addr 0xe9a2a8 size 0x148 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "EssCertID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EssCertID(EssCertID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EssCertID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EssCertID(EssCertID const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EssCertID()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ess::EssCertID, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Ess
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ess::EssCertID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ess::EssCertID*, "Org.BouncyCastle.Asn1.Ess", "EssCertID");
