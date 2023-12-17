#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs12PbeParams)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class Pkcs12PbeParams;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams);
// Type: Org.BouncyCastle.Asn1.Pkcs::Pkcs12PbeParams
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(244))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::Pkcs12PbeParams*
class CORDL_TYPE Pkcs12PbeParams : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field iterations offset 0x10
 __declspec(property(get=__get_iterations, put=__set_iterations)) ::Org::BouncyCastle::Asn1::DerInteger*  iterations;

/// @brief Field iv offset 0x18
 __declspec(property(get=__get_iv, put=__set_iv)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  iv;

 __declspec(property(get=get_Iterations)) ::Org::BouncyCastle::Math::BigInteger*  Iterations;

constexpr void __set_iterations(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_iterations() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_iterations() const;

constexpr void __set_iv(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* __get_iv() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> __get_iv() const;

static inline ::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  salt, int32_t  iterations) ;

/// @brief Method .ctor addr 0xf8ab80 size 0xb4 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  salt, int32_t  iterations) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xf8ac34 size 0xe8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xf8ad1c size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams* GetInstance(::System::Object*  obj) ;

/// @brief Method get_Iterations addr 0xf8aea4 size 0x1c virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Iterations() ;

/// @brief Method GetIV addr 0xf8aec0 size 0x20 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetIV() ;

/// @brief Method ToAsn1Object addr 0xf8aee0 size 0xf0 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12PbeParams", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Pkcs12PbeParams(Pkcs12PbeParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12PbeParams", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pkcs12PbeParams(Pkcs12PbeParams const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Pkcs12PbeParams()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams*, "Org.BouncyCastle.Asn1.Pkcs", "Pkcs12PbeParams");
