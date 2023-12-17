#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XPathNodeInfoAtom)
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
namespace MS::Internal::Xml::Cache {
class XPathNodePageInfo;
}
namespace System::Xml::XPath {
class XPathDocument;
}
// Forward declare root types
namespace MS::Internal::Xml::Cache {
class XPathNodeInfoAtom;
}
// Write type traits
MARK_REF_PTR_T(::MS::Internal::Xml::Cache::XPathNodeInfoAtom);
// Type: MS.Internal.Xml.Cache::XPathNodeInfoAtom
namespace MS::Internal::Xml::Cache {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11772))
// CS Name: ::MS.Internal.Xml.Cache::XPathNodeInfoAtom*
class CORDL_TYPE XPathNodeInfoAtom : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field _localName offset 0x10
 __declspec(property(get=__get__localName, put=__set__localName)) ::StringW  _localName;

/// @brief Field _namespaceUri offset 0x18
 __declspec(property(get=__get__namespaceUri, put=__set__namespaceUri)) ::StringW  _namespaceUri;

/// @brief Field _prefix offset 0x20
 __declspec(property(get=__get__prefix, put=__set__prefix)) ::StringW  _prefix;

/// @brief Field _pageParent offset 0x28
 __declspec(property(get=__get__pageParent, put=__set__pageParent)) ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>  _pageParent;

/// @brief Field _pageSibling offset 0x30
 __declspec(property(get=__get__pageSibling, put=__set__pageSibling)) ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>  _pageSibling;

/// @brief Field _doc offset 0x38
 __declspec(property(get=__get__doc, put=__set__doc)) ::System::Xml::XPath::XPathDocument*  _doc;

/// @brief Field _pageInfo offset 0x40
 __declspec(property(get=__get__pageInfo, put=__set__pageInfo)) ::MS::Internal::Xml::Cache::XPathNodePageInfo*  _pageInfo;

 __declspec(property(get=get_PageInfo)) ::MS::Internal::Xml::Cache::XPathNodePageInfo*  PageInfo;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_NamespaceUri)) ::StringW  NamespaceUri;

 __declspec(property(get=get_Prefix)) ::StringW  Prefix;

 __declspec(property(get=get_SiblingPage)) ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>  SiblingPage;

 __declspec(property(get=get_ParentPage)) ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>  ParentPage;

 __declspec(property(get=get_Document)) ::System::Xml::XPath::XPathDocument*  Document;

constexpr void __set__localName(::StringW  value) ;

constexpr ::StringW& __get__localName() ;

constexpr ::StringW const& __get__localName() const;

constexpr void __set__namespaceUri(::StringW  value) ;

constexpr ::StringW& __get__namespaceUri() ;

constexpr ::StringW const& __get__namespaceUri() const;

constexpr void __set__prefix(::StringW  value) ;

constexpr ::StringW& __get__prefix() ;

constexpr ::StringW const& __get__prefix() const;

constexpr void __set__pageParent(::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>  value) ;

constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>& __get__pageParent() ;

constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& __get__pageParent() const;

constexpr void __set__pageSibling(::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>  value) ;

constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>& __get__pageSibling() ;

constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& __get__pageSibling() const;

constexpr void __set__doc(::System::Xml::XPath::XPathDocument*  value) ;

constexpr ::System::Xml::XPath::XPathDocument* __get__doc() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XPath::XPathDocument*> __get__doc() const;

constexpr void __set__pageInfo(::MS::Internal::Xml::Cache::XPathNodePageInfo*  value) ;

constexpr ::MS::Internal::Xml::Cache::XPathNodePageInfo* __get__pageInfo() ;

constexpr ::cordl_internals::to_const_pointer<::MS::Internal::Xml::Cache::XPathNodePageInfo*> __get__pageInfo() const;

/// @brief Method get_PageInfo addr 0x28eb820 size 0x8 virtual false final false
inline ::MS::Internal::Xml::Cache::XPathNodePageInfo* get_PageInfo() ;

/// @brief Method get_LocalName addr 0x28eb828 size 0x8 virtual false final false
inline ::StringW get_LocalName() ;

/// @brief Method get_NamespaceUri addr 0x28eb830 size 0x8 virtual false final false
inline ::StringW get_NamespaceUri() ;

/// @brief Method get_Prefix addr 0x28eb838 size 0x8 virtual false final false
inline ::StringW get_Prefix() ;

/// @brief Method get_SiblingPage addr 0x28eb840 size 0x8 virtual false final false
inline ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*> get_SiblingPage() ;

/// @brief Method get_ParentPage addr 0x28eb848 size 0x8 virtual false final false
inline ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*> get_ParentPage() ;

/// @brief Method get_Document addr 0x28eb850 size 0x8 virtual false final false
inline ::System::Xml::XPath::XPathDocument* get_Document() ;

// Ctor Parameters [CppParam { name: "", ty: "XPathNodeInfoAtom", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XPathNodeInfoAtom(XPathNodeInfoAtom && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XPathNodeInfoAtom", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XPathNodeInfoAtom(XPathNodeInfoAtom const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XPathNodeInfoAtom()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::Cache::XPathNodeInfoAtom, 0x48>, "Size mismatch!");

} // namespace end def MS::Internal::Xml::Cache
NEED_NO_BOX(::MS::Internal::Xml::Cache::XPathNodeInfoAtom);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathNodeInfoAtom*, "MS.Internal.Xml.Cache", "XPathNodeInfoAtom");
