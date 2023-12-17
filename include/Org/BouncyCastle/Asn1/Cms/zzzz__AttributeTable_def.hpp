#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeTable)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class Attribute;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1::Cms {
class Attributes;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::AttributeTable);
// Type: Org.BouncyCastle.Asn1.Cms::AttributeTable
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(57))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::AttributeTable*
class CORDL_TYPE AttributeTable : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field attributes offset 0x10
 __declspec(property(get=__get_attributes, put=__set_attributes)) ::System::Collections::IDictionary*  attributes;

 __declspec(property(get=get_Item)) ::Org::BouncyCastle::Asn1::Cms::Attribute*  Item[];

 __declspec(property(get=get_Count)) int32_t  Count;

constexpr void __set_attributes(::System::Collections::IDictionary*  value) ;

constexpr ::System::Collections::IDictionary* __get_attributes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> __get_attributes() const;

static inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* New_ctor(::System::Collections::Hashtable*  attrs) ;

/// @brief Method .ctor addr 0xe70198 size 0x78 virtual false final false
inline void _ctor(::System::Collections::Hashtable*  attrs) ;

static inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* New_ctor(::System::Collections::IDictionary*  attrs) ;

/// @brief Method .ctor addr 0xe70210 size 0x78 virtual false final false
inline void _ctor(::System::Collections::IDictionary*  attrs) ;

static inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector*  v) ;

/// @brief Method .ctor addr 0xe70288 size 0x31c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector*  v) ;

static inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* New_ctor(::Org::BouncyCastle::Asn1::Asn1Set*  s) ;

/// @brief Method .ctor addr 0xe708ec size 0xe8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Set*  s) ;

static inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* New_ctor(::Org::BouncyCastle::Asn1::Cms::Attributes*  attrs) ;

/// @brief Method .ctor addr 0xe709d4 size 0x3c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cms::Attributes*  attrs) ;

/// @brief Method AddAttribute addr 0xe705a4 size 0x348 virtual false final false
inline void AddAttribute(::Org::BouncyCastle::Asn1::Cms::Attribute*  a) ;

/// @brief Method get_Item addr 0xe70a10 size 0x1d8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::Attribute* get_Item(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method Get addr 0xe70be8 size 0x4 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::Attribute* Get(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method GetAll addr 0xe70bec size 0x4b0 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* GetAll(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method get_Count addr 0xe7109c size 0x46c virtual false final false
inline int32_t get_Count() ;

/// @brief Method ToDictionary addr 0xe71508 size 0x5c virtual false final false
inline ::System::Collections::IDictionary* ToDictionary() ;

/// @brief Method ToHashtable addr 0xe71564 size 0x68 virtual false final false
inline ::System::Collections::Hashtable* ToHashtable() ;

/// @brief Method ToAsn1EncodableVector addr 0xe715cc size 0x6b8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ToAsn1EncodableVector() ;

/// @brief Method ToAttributes addr 0xe71c84 size 0x70 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::Attributes* ToAttributes() ;

/// @brief Method Add addr 0xe71cf4 size 0xe0 virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Add(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  attrType, ::Org::BouncyCastle::Asn1::Asn1Encodable*  attrValue) ;

/// @brief Method Remove addr 0xe71dd4 size 0xec virtual false final false
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Remove(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  attrType) ;

// Ctor Parameters [CppParam { name: "", ty: "AttributeTable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AttributeTable(AttributeTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttributeTable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttributeTable(AttributeTable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AttributeTable()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::AttributeTable, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::AttributeTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::AttributeTable*, "Org.BouncyCastle.Asn1.Cms", "AttributeTable");
