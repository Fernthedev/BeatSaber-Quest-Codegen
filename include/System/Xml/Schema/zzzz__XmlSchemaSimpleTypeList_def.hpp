#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeContent_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSimpleTypeList)
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleTypeList;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSimpleTypeList);
// Type: System.Xml.Schema::XmlSchemaSimpleTypeList
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11738))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11739))
// CS Name: ::System.Xml.Schema::XmlSchemaSimpleTypeList*
class CORDL_TYPE XmlSchemaSimpleTypeList : public ::System::Xml::Schema::XmlSchemaSimpleTypeContent {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Xml::Schema::XmlSchemaSimpleTypeContent)]{};

/// @brief Field itemTypeName offset 0x10
 __declspec(property(get=__get_itemTypeName, put=__set_itemTypeName)) ::System::Xml::XmlQualifiedName*  itemTypeName;

/// @brief Field itemType offset 0x18
 __declspec(property(get=__get_itemType, put=__set_itemType)) ::System::Xml::Schema::XmlSchemaSimpleType*  itemType;

/// @brief Field baseItemType offset 0x20
 __declspec(property(get=__get_baseItemType, put=__set_baseItemType)) ::System::Xml::Schema::XmlSchemaSimpleType*  baseItemType;

 __declspec(property(put=set_ItemType)) ::System::Xml::Schema::XmlSchemaSimpleType*  ItemType;

 __declspec(property(get=get_BaseItemType, put=set_BaseItemType)) ::System::Xml::Schema::XmlSchemaSimpleType*  BaseItemType;

constexpr void __set_itemTypeName(::System::Xml::XmlQualifiedName*  value) ;

constexpr ::System::Xml::XmlQualifiedName* __get_itemTypeName() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> __get_itemTypeName() const;

constexpr void __set_itemType(::System::Xml::Schema::XmlSchemaSimpleType*  value) ;

constexpr ::System::Xml::Schema::XmlSchemaSimpleType* __get_itemType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleType*> __get_itemType() const;

constexpr void __set_baseItemType(::System::Xml::Schema::XmlSchemaSimpleType*  value) ;

constexpr ::System::Xml::Schema::XmlSchemaSimpleType* __get_baseItemType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleType*> __get_baseItemType() const;

/// @brief Method set_ItemType addr 0x28c90fc size 0x8 virtual false final false
inline void set_ItemType(::System::Xml::Schema::XmlSchemaSimpleType*  value) ;

/// @brief Method get_BaseItemType addr 0x28c9104 size 0x8 virtual false final false
inline ::System::Xml::Schema::XmlSchemaSimpleType* get_BaseItemType() ;

/// @brief Method set_BaseItemType addr 0x28c910c size 0x8 virtual false final false
inline void set_BaseItemType(::System::Xml::Schema::XmlSchemaSimpleType*  value) ;

static inline ::System::Xml::Schema::XmlSchemaSimpleTypeList* New_ctor() ;

/// @brief Method .ctor addr 0x28c9114 size 0x68 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaSimpleTypeList(XmlSchemaSimpleTypeList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaSimpleTypeList(XmlSchemaSimpleTypeList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlSchemaSimpleTypeList()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSimpleTypeList, 0x28>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleTypeList);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleTypeList*, "System.Xml.Schema", "XmlSchemaSimpleTypeList");
