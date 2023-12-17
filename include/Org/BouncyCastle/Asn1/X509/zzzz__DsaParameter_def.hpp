#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(DsaParameter)
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class DsaParameter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::DsaParameter);
// Type: Org.BouncyCastle.Asn1.X509::DsaParameter
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(359))
// CS Name: ::Org.BouncyCastle.Asn1.X509::DsaParameter*
class CORDL_TYPE DsaParameter : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field p offset 0x10
 __declspec(property(get=__get_p, put=__set_p)) ::Org::BouncyCastle::Asn1::DerInteger*  p;

/// @brief Field q offset 0x18
 __declspec(property(get=__get_q, put=__set_q)) ::Org::BouncyCastle::Asn1::DerInteger*  q;

/// @brief Field g offset 0x20
 __declspec(property(get=__get_g, put=__set_g)) ::Org::BouncyCastle::Asn1::DerInteger*  g;

 __declspec(property(get=get_P)) ::Org::BouncyCastle::Math::BigInteger*  P;

 __declspec(property(get=get_Q)) ::Org::BouncyCastle::Math::BigInteger*  Q;

 __declspec(property(get=get_G)) ::Org::BouncyCastle::Math::BigInteger*  G;

constexpr void __set_p(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_p() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_p() const;

constexpr void __set_q(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_q() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_q() const;

constexpr void __set_g(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_g() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_g() const;

/// @brief Method GetInstance addr 0x118c95c size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::DsaParameter* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  explicitly) ;

/// @brief Method GetInstance addr 0x118c974 size 0x178 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::DsaParameter* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::X509::DsaParameter* New_ctor(::Org::BouncyCastle::Math::BigInteger*  p, ::Org::BouncyCastle::Math::BigInteger*  q, ::Org::BouncyCastle::Math::BigInteger*  g) ;

/// @brief Method .ctor addr 0x118cc2c size 0xcc virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  p, ::Org::BouncyCastle::Math::BigInteger*  q, ::Org::BouncyCastle::Math::BigInteger*  g) ;

static inline ::Org::BouncyCastle::Asn1::X509::DsaParameter* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x118caec size 0x140 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method get_P addr 0x118ccf8 size 0x1c virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_P() ;

/// @brief Method get_Q addr 0x118cd14 size 0x1c virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Q() ;

/// @brief Method get_G addr 0x118cd30 size 0x1c virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_G() ;

/// @brief Method ToAsn1Object addr 0x118cd4c size 0x11c virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "DsaParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DsaParameter(DsaParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DsaParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DsaParameter(DsaParameter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DsaParameter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::DsaParameter, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::DsaParameter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::DsaParameter*, "Org.BouncyCastle.Asn1.X509", "DsaParameter");
