#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(RevokedInfo)
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CrlReason;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class RevokedInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo);
// Type: Org.BouncyCastle.Asn1.Ocsp::RevokedInfo
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(219))
// CS Name: ::Org.BouncyCastle.Asn1.Ocsp::RevokedInfo*
class CORDL_TYPE RevokedInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field revocationTime offset 0x10
 __declspec(property(get=__get_revocationTime, put=__set_revocationTime)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  revocationTime;

/// @brief Field revocationReason offset 0x18
 __declspec(property(get=__get_revocationReason, put=__set_revocationReason)) ::Org::BouncyCastle::Asn1::X509::CrlReason*  revocationReason;

 __declspec(property(get=get_RevocationTime)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime*  RevocationTime;

 __declspec(property(get=get_RevocationReason)) ::Org::BouncyCastle::Asn1::X509::CrlReason*  RevocationReason;

constexpr void __set_revocationTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* __get_revocationTime() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> __get_revocationTime() const;

constexpr void __set_revocationReason(::Org::BouncyCastle::Asn1::X509::CrlReason*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::CrlReason* __get_revocationReason() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::CrlReason*> __get_revocationReason() const;

/// @brief Method GetInstance addr 0xf8010c size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  explicitly) ;

/// @brief Method GetInstance addr 0xf83570 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* New_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime*  revocationTime) ;

/// @brief Method .ctor addr 0xf838b8 size 0x8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime*  revocationTime) ;

static inline ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* New_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime*  revocationTime, ::Org::BouncyCastle::Asn1::X509::CrlReason*  revocationReason) ;

/// @brief Method .ctor addr 0xf838c0 size 0x7c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime*  revocationTime, ::Org::BouncyCastle::Asn1::X509::CrlReason*  revocationReason) ;

static inline ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xf836f8 size 0x1c0 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method get_RevocationTime addr 0xf8393c size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_RevocationTime() ;

/// @brief Method get_RevocationReason addr 0xf83944 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::CrlReason* get_RevocationReason() ;

/// @brief Method ToAsn1Object addr 0xf8394c size 0x114 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "RevokedInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RevokedInfo(RevokedInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RevokedInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RevokedInfo(RevokedInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RevokedInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*, "Org.BouncyCastle.Asn1.Ocsp", "RevokedInfo");
