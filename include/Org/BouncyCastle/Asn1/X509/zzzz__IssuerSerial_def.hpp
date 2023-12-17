#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(IssuerSerial)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::IssuerSerial);
// Type: Org.BouncyCastle.Asn1.X509::IssuerSerial
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(366))
// CS Name: ::Org.BouncyCastle.Asn1.X509::IssuerSerial*
class CORDL_TYPE IssuerSerial : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field issuer offset 0x10
 __declspec(property(get=__get_issuer, put=__set_issuer)) ::Org::BouncyCastle::Asn1::X509::GeneralNames*  issuer;

/// @brief Field serial offset 0x18
 __declspec(property(get=__get_serial, put=__set_serial)) ::Org::BouncyCastle::Asn1::DerInteger*  serial;

/// @brief Field issuerUid offset 0x20
 __declspec(property(get=__get_issuerUid, put=__set_issuerUid)) ::Org::BouncyCastle::Asn1::DerBitString*  issuerUid;

 __declspec(property(get=get_Issuer)) ::Org::BouncyCastle::Asn1::X509::GeneralNames*  Issuer;

 __declspec(property(get=get_Serial)) ::Org::BouncyCastle::Asn1::DerInteger*  Serial;

 __declspec(property(get=get_IssuerUid)) ::Org::BouncyCastle::Asn1::DerBitString*  IssuerUid;

constexpr void __set_issuer(::Org::BouncyCastle::Asn1::X509::GeneralNames*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames* __get_issuer() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralNames*> __get_issuer() const;

constexpr void __set_serial(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_serial() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_serial() const;

constexpr void __set_issuerUid(::Org::BouncyCastle::Asn1::DerBitString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerBitString* __get_issuerUid() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> __get_issuerUid() const;

/// @brief Method GetInstance addr 0x1190f3c size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* GetInstance(::System::Object*  obj) ;

/// @brief Method GetInstance addr 0x1190200 size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  explicitly) ;

static inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x11910c4 size 0x1c0 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames*  issuer, ::Org::BouncyCastle::Asn1::DerInteger*  serial) ;

/// @brief Method .ctor addr 0x1191284 size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames*  issuer, ::Org::BouncyCastle::Asn1::DerInteger*  serial) ;

/// @brief Method get_Issuer addr 0x11912b0 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* get_Issuer() ;

/// @brief Method get_Serial addr 0x11912b8 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_Serial() ;

/// @brief Method get_IssuerUid addr 0x11912c0 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerBitString* get_IssuerUid() ;

/// @brief Method ToAsn1Object addr 0x11912c8 size 0x174 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "IssuerSerial", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IssuerSerial(IssuerSerial && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IssuerSerial", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IssuerSerial(IssuerSerial const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IssuerSerial()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::IssuerSerial, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::IssuerSerial);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::IssuerSerial*, "Org.BouncyCastle.Asn1.X509", "IssuerSerial");
