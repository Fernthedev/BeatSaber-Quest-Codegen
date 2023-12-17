#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(DHDomainParameters)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X9 {
class DHValidationParms;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class DHDomainParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::DHDomainParameters);
// Type: Org.BouncyCastle.Asn1.X9::DHDomainParameters
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(411))
// CS Name: ::Org.BouncyCastle.Asn1.X9::DHDomainParameters*
class CORDL_TYPE DHDomainParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field p offset 0x10
 __declspec(property(get=__get_p, put=__set_p)) ::Org::BouncyCastle::Asn1::DerInteger*  p;

/// @brief Field g offset 0x18
 __declspec(property(get=__get_g, put=__set_g)) ::Org::BouncyCastle::Asn1::DerInteger*  g;

/// @brief Field q offset 0x20
 __declspec(property(get=__get_q, put=__set_q)) ::Org::BouncyCastle::Asn1::DerInteger*  q;

/// @brief Field j offset 0x28
 __declspec(property(get=__get_j, put=__set_j)) ::Org::BouncyCastle::Asn1::DerInteger*  j;

/// @brief Field validationParms offset 0x30
 __declspec(property(get=__get_validationParms, put=__set_validationParms)) ::Org::BouncyCastle::Asn1::X9::DHValidationParms*  validationParms;

 __declspec(property(get=get_P)) ::Org::BouncyCastle::Asn1::DerInteger*  P;

 __declspec(property(get=get_G)) ::Org::BouncyCastle::Asn1::DerInteger*  G;

 __declspec(property(get=get_Q)) ::Org::BouncyCastle::Asn1::DerInteger*  Q;

 __declspec(property(get=get_J)) ::Org::BouncyCastle::Asn1::DerInteger*  J;

 __declspec(property(get=get_ValidationParms)) ::Org::BouncyCastle::Asn1::X9::DHValidationParms*  ValidationParms;

constexpr void __set_p(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_p() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_p() const;

constexpr void __set_g(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_g() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_g() const;

constexpr void __set_q(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_q() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_q() const;

constexpr void __set_j(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_j() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_j() const;

constexpr void __set_validationParms(::Org::BouncyCastle::Asn1::X9::DHValidationParms*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X9::DHValidationParms* __get_validationParms() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X9::DHValidationParms*> __get_validationParms() const;

/// @brief Method GetInstance addr 0x11a7d04 size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X9::DHDomainParameters* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

/// @brief Method GetInstance addr 0x11a7d1c size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X9::DHDomainParameters* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::X9::DHDomainParameters* New_ctor(::Org::BouncyCastle::Asn1::DerInteger*  p, ::Org::BouncyCastle::Asn1::DerInteger*  g, ::Org::BouncyCastle::Asn1::DerInteger*  q, ::Org::BouncyCastle::Asn1::DerInteger*  j, ::Org::BouncyCastle::Asn1::X9::DHValidationParms*  validationParms) ;

/// @brief Method .ctor addr 0x11a8090 size 0xf0 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger*  p, ::Org::BouncyCastle::Asn1::DerInteger*  g, ::Org::BouncyCastle::Asn1::DerInteger*  q, ::Org::BouncyCastle::Asn1::DerInteger*  j, ::Org::BouncyCastle::Asn1::X9::DHValidationParms*  validationParms) ;

static inline ::Org::BouncyCastle::Asn1::X9::DHDomainParameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x11a7ea4 size 0x1ec virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetNext addr 0x11a8180 size 0x150 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetNext(::System::Collections::IEnumerator*  e) ;

/// @brief Method get_P addr 0x11a8458 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_P() ;

/// @brief Method get_G addr 0x11a8460 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_G() ;

/// @brief Method get_Q addr 0x11a8468 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_Q() ;

/// @brief Method get_J addr 0x11a8470 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_J() ;

/// @brief Method get_ValidationParms addr 0x11a8478 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::X9::DHValidationParms* get_ValidationParms() ;

/// @brief Method ToAsn1Object addr 0x11a8480 size 0x1cc virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "DHDomainParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DHDomainParameters(DHDomainParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DHDomainParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DHDomainParameters(DHDomainParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DHDomainParameters()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::DHDomainParameters, 0x38>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::DHDomainParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::DHDomainParameters*, "Org.BouncyCastle.Asn1.X9", "DHDomainParameters");
