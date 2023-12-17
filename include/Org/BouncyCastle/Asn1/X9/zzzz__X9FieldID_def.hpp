#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X9FieldID)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9FieldID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::X9FieldID);
// Type: Org.BouncyCastle.Asn1.X9::X9FieldID
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(446))
// CS Name: ::Org.BouncyCastle.Asn1.X9::X9FieldID*
class CORDL_TYPE X9FieldID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field id offset 0x10
 __declspec(property(get=__get_id, put=__set_id)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  id;

/// @brief Field parameters offset 0x18
 __declspec(property(get=__get_parameters, put=__set_parameters)) ::Org::BouncyCastle::Asn1::Asn1Object*  parameters;

 __declspec(property(get=get_Identifier)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  Identifier;

 __declspec(property(get=get_Parameters)) ::Org::BouncyCastle::Asn1::Asn1Object*  Parameters;

constexpr void __set_id(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_id() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_id() const;

constexpr void __set_parameters(::Org::BouncyCastle::Asn1::Asn1Object*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Object* __get_parameters() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> __get_parameters() const;

static inline ::Org::BouncyCastle::Asn1::X9::X9FieldID* New_ctor(::Org::BouncyCastle::Math::BigInteger*  primeP) ;

/// @brief Method .ctor addr 0x11b16b8 size 0xb0 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  primeP) ;

static inline ::Org::BouncyCastle::Asn1::X9::X9FieldID* New_ctor(int32_t  m, int32_t  k1) ;

/// @brief Method .ctor addr 0x11b1768 size 0xc virtual false final false
inline void _ctor(int32_t  m, int32_t  k1) ;

static inline ::Org::BouncyCastle::Asn1::X9::X9FieldID* New_ctor(int32_t  m, int32_t  k1, int32_t  k2, int32_t  k3) ;

/// @brief Method .ctor addr 0x11b1774 size 0x3e4 virtual false final false
inline void _ctor(int32_t  m, int32_t  k1, int32_t  k2, int32_t  k3) ;

static inline ::Org::BouncyCastle::Asn1::X9::X9FieldID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x11b2424 size 0xbc virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0x11b1518 size 0xa0 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X9::X9FieldID* GetInstance(::System::Object*  obj) ;

/// @brief Method get_Identifier addr 0x11b24e0 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Identifier() ;

/// @brief Method get_Parameters addr 0x11b24e8 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* get_Parameters() ;

/// @brief Method ToAsn1Object addr 0x11b24f0 size 0xec virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "X9FieldID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X9FieldID(X9FieldID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X9FieldID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X9FieldID(X9FieldID const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X9FieldID()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::X9FieldID, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9FieldID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9FieldID*, "Org.BouncyCastle.Asn1.X9", "X9FieldID");
