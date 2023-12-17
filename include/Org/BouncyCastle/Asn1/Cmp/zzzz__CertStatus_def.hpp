#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertStatus)
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CertStatus;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CertStatus);
// Type: Org.BouncyCastle.Asn1.Cmp::CertStatus
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(17))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::CertStatus*
class CORDL_TYPE CertStatus : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field certHash offset 0x10
 __declspec(property(get=__get_certHash, put=__set_certHash)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  certHash;

/// @brief Field certReqId offset 0x18
 __declspec(property(get=__get_certReqId, put=__set_certReqId)) ::Org::BouncyCastle::Asn1::DerInteger*  certReqId;

/// @brief Field statusInfo offset 0x20
 __declspec(property(get=__get_statusInfo, put=__set_statusInfo)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*  statusInfo;

 __declspec(property(get=get_CertHash)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  CertHash;

 __declspec(property(get=get_CertReqID)) ::Org::BouncyCastle::Asn1::DerInteger*  CertReqID;

 __declspec(property(get=get_StatusInfo)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*  StatusInfo;

constexpr void __set_certHash(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* __get_certHash() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> __get_certHash() const;

constexpr void __set_certReqId(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_certReqId() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_certReqId() const;

constexpr void __set_statusInfo(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* __get_statusInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*> __get_statusInfo() const;

static inline ::Org::BouncyCastle::Asn1::Cmp::CertStatus* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe65d2c size 0xa4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::CertStatus* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  certHash, ::Org::BouncyCastle::Math::BigInteger*  certReqId) ;

/// @brief Method .ctor addr 0xe65dd0 size 0xb4 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  certHash, ::Org::BouncyCastle::Math::BigInteger*  certReqId) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::CertStatus* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  certHash, ::Org::BouncyCastle::Math::BigInteger*  certReqId, ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*  statusInfo) ;

/// @brief Method .ctor addr 0xe65e84 size 0xc0 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  certHash, ::Org::BouncyCastle::Math::BigInteger*  certReqId, ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*  statusInfo) ;

/// @brief Method GetInstance addr 0xe64640 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cmp::CertStatus* GetInstance(::System::Object*  obj) ;

/// @brief Method get_CertHash addr 0xe65f44 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_CertHash() ;

/// @brief Method get_CertReqID addr 0xe65f4c size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_CertReqID() ;

/// @brief Method get_StatusInfo addr 0xe65f54 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* get_StatusInfo() ;

/// @brief Method ToAsn1Object addr 0xe65f5c size 0x174 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "CertStatus", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertStatus(CertStatus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertStatus", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertStatus(CertStatus const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CertStatus()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CertStatus, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CertStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CertStatus*, "Org.BouncyCastle.Asn1.Cmp", "CertStatus");
