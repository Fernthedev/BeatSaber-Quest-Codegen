#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XPathDocument)
namespace System::Xml {
class XmlNameTable;
}
namespace MS::Internal::Xml::Cache {
struct XPathNodeRef;
}
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace System::Xml::XPath {
class XPathDocument;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XPath::XPathDocument);
// Type: System.Xml.XPath::XPathDocument
namespace System::Xml::XPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11579))
// CS Name: ::System.Xml.XPath::XPathDocument*
class CORDL_TYPE XPathDocument : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field pageXmlNmsp offset 0x10
 __declspec(property(get=__get_pageXmlNmsp, put=__set_pageXmlNmsp)) ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>  pageXmlNmsp;

/// @brief Field idxXmlNmsp offset 0x18
 __declspec(property(get=__get_idxXmlNmsp, put=__set_idxXmlNmsp)) int32_t  idxXmlNmsp;

/// @brief Field nameTable offset 0x20
 __declspec(property(get=__get_nameTable, put=__set_nameTable)) ::System::Xml::XmlNameTable*  nameTable;

/// @brief Field mapNmsp offset 0x28
 __declspec(property(get=__get_mapNmsp, put=__set_mapNmsp)) ::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>*  mapNmsp;

 __declspec(property(get=get_NameTable)) ::System::Xml::XmlNameTable*  NameTable;

constexpr void __set_pageXmlNmsp(::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>  value) ;

constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>& __get_pageXmlNmsp() ;

constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& __get_pageXmlNmsp() const;

constexpr void __set_idxXmlNmsp(int32_t  value) ;

constexpr int32_t& __get_idxXmlNmsp() ;

constexpr int32_t const& __get_idxXmlNmsp() const;

constexpr void __set_nameTable(::System::Xml::XmlNameTable*  value) ;

constexpr ::System::Xml::XmlNameTable* __get_nameTable() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> __get_nameTable() const;

constexpr void __set_mapNmsp(::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>* __get_mapNmsp() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef,::MS::Internal::Xml::Cache::XPathNodeRef>*> __get_mapNmsp() const;

/// @brief Method get_NameTable addr 0x28a9d78 size 0x8 virtual false final false
inline ::System::Xml::XmlNameTable* get_NameTable() ;

/// @brief Method GetXmlNamespaceNode addr 0x28a9d80 size 0x10 virtual false final false
inline int32_t GetXmlNamespaceNode(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>>  pageXmlNmsp) ;

/// @brief Method LookupNamespaces addr 0x28a9d90 size 0xd4 virtual false final false
inline int32_t LookupNamespaces(::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>  pageElem, int32_t  idxElem, ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>>  pageNmsp) ;

// Ctor Parameters [CppParam { name: "", ty: "XPathDocument", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XPathDocument(XPathDocument && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XPathDocument", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XPathDocument(XPathDocument const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XPathDocument()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XPath::XPathDocument, 0x30>, "Size mismatch!");

} // namespace end def System::Xml::XPath
NEED_NO_BOX(::System::Xml::XPath::XPathDocument);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathDocument*, "System.Xml.XPath", "XPathDocument");
