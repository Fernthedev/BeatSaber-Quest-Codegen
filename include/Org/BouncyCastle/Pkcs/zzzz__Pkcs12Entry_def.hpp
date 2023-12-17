#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Pkcs12Entry)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs12Entry;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::Pkcs12Entry);
// Type: Org.BouncyCastle.Pkcs::Pkcs12Entry
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1693))
// CS Name: ::Org.BouncyCastle.Pkcs::Pkcs12Entry*
class CORDL_TYPE Pkcs12Entry : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field attributes offset 0x10
 __declspec(property(get=__get_attributes, put=__set_attributes)) ::System::Collections::IDictionary*  attributes;

 __declspec(property(get=get_Item)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  Item[];

 __declspec(property(get=get_Item)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  Item[];

 __declspec(property(get=get_BagAttributeKeys)) ::System::Collections::IEnumerable*  BagAttributeKeys;

constexpr void __set_attributes(::System::Collections::IDictionary*  value) ;

constexpr ::System::Collections::IDictionary* __get_attributes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> __get_attributes() const;

static inline ::Org::BouncyCastle::Pkcs::Pkcs12Entry* New_ctor(::System::Collections::IDictionary*  attributes) ;

/// @brief Method .ctor addr 0x10d53d0 size 0x54c virtual false final false
inline void _ctor(::System::Collections::IDictionary*  attributes) ;

/// @brief Method GetBagAttribute addr 0x10d591c size 0xfc virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetBagAttribute(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method GetBagAttribute addr 0x10d5a18 size 0xf4 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetBagAttribute(::StringW  oid) ;

/// @brief Method GetBagAttributeKeys addr 0x10d5b0c size 0x118 virtual false final false
inline ::System::Collections::IEnumerator* GetBagAttributeKeys() ;

/// @brief Method get_Item addr 0x10d5c24 size 0xfc virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method get_Item addr 0x10d5d20 size 0xf4 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(::StringW  oid) ;

/// @brief Method get_BagAttributeKeys addr 0x10d5e14 size 0xe4 virtual false final false
inline ::System::Collections::IEnumerable* get_BagAttributeKeys() ;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12Entry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Pkcs12Entry(Pkcs12Entry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12Entry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pkcs12Entry(Pkcs12Entry const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Pkcs12Entry()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::Pkcs12Entry, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::Pkcs12Entry);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::Pkcs12Entry*, "Org.BouncyCastle.Pkcs", "Pkcs12Entry");
