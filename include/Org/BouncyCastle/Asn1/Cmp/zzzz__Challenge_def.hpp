#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(Challenge)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class Challenge;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::Challenge);
// Type: Org.BouncyCastle.Asn1.Cmp::Challenge
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(18))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::Challenge*
class CORDL_TYPE Challenge : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field owf offset 0x10
 __declspec(property(get=__get_owf, put=__set_owf)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  owf;

/// @brief Field witness offset 0x18
 __declspec(property(get=__get_witness, put=__set_witness)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  witness;

/// @brief Field challenge offset 0x20
 __declspec(property(get=__get_challenge, put=__set_challenge)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  challenge;

 __declspec(property(get=get_Owf)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  Owf;

constexpr void __set_owf(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_owf() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_owf() const;

constexpr void __set_witness(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* __get_witness() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> __get_witness() const;

constexpr void __set_challenge(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* __get_challenge() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> __get_challenge() const;

static inline ::Org::BouncyCastle::Asn1::Cmp::Challenge* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe660d0 size 0xb4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe66184 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cmp::Challenge* GetInstance(::System::Object*  obj) ;

/// @brief Method get_Owf addr 0xe6630c size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Owf() ;

/// @brief Method ToAsn1Object addr 0xe66314 size 0x180 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "Challenge", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Challenge(Challenge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Challenge", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Challenge(Challenge const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Challenge()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::Challenge, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::Challenge);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::Challenge*, "Org.BouncyCastle.Asn1.Cmp", "Challenge");
