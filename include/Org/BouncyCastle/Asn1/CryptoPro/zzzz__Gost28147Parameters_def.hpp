#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(Gost28147Parameters)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::CryptoPro {
class Gost28147Parameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters);
// Type: Org.BouncyCastle.Asn1.CryptoPro::Gost28147Parameters
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(128))
// CS Name: ::Org.BouncyCastle.Asn1.CryptoPro::Gost28147Parameters*
class CORDL_TYPE Gost28147Parameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field iv offset 0x10
 __declspec(property(get=__get_iv, put=__set_iv)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  iv;

/// @brief Field paramSet offset 0x18
 __declspec(property(get=__get_paramSet, put=__set_paramSet)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  paramSet;

constexpr void __set_iv(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* __get_iv() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> __get_iv() const;

constexpr void __set_paramSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_paramSet() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_paramSet() const;

/// @brief Method GetInstance addr 0xe8c960 size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  explicitly) ;

/// @brief Method GetInstance addr 0xe8c978 size 0x178 virtual false final false
static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe8caf0 size 0x130 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method ToAsn1Object addr 0xe8cc20 size 0xf0 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "Gost28147Parameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Gost28147Parameters(Gost28147Parameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gost28147Parameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gost28147Parameters(Gost28147Parameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Gost28147Parameters()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::CryptoPro
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters*, "Org.BouncyCastle.Asn1.CryptoPro", "Gost28147Parameters");
