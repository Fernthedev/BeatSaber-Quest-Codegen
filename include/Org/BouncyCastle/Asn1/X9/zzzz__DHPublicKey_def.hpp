#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(DHPublicKey)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class DHPublicKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::DHPublicKey);
// Type: Org.BouncyCastle.Asn1.X9::DHPublicKey
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(412))
// CS Name: ::Org.BouncyCastle.Asn1.X9::DHPublicKey*
class CORDL_TYPE DHPublicKey : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field y offset 0x10
 __declspec(property(get=__get_y, put=__set_y)) ::Org::BouncyCastle::Asn1::DerInteger*  y;

 __declspec(property(get=get_Y)) ::Org::BouncyCastle::Asn1::DerInteger*  Y;

constexpr void __set_y(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_y() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_y() const;

/// @brief Method GetInstance addr 0x11a864c size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X9::DHPublicKey* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

/// @brief Method GetInstance addr 0x11a8664 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X9::DHPublicKey* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::X9::DHPublicKey* New_ctor(::Org::BouncyCastle::Asn1::DerInteger*  y) ;

/// @brief Method .ctor addr 0x11a87ec size 0x78 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger*  y) ;

/// @brief Method get_Y addr 0x11a8864 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_Y() ;

/// @brief Method ToAsn1Object addr 0x11a886c size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "DHPublicKey", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DHPublicKey(DHPublicKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DHPublicKey", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DHPublicKey(DHPublicKey const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DHPublicKey()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::DHPublicKey, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::DHPublicKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::DHPublicKey*, "Org.BouncyCastle.Asn1.X9", "DHPublicKey");
