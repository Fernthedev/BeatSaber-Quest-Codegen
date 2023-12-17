#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlDocumentType)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNamedNodeMap;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml {
struct XmlNodeType;
}
// Forward declare root types
namespace System::Xml {
class XmlDocumentType;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlDocumentType);
// Type: System.Xml::XmlDocumentType
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11513))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11507))
// CS Name: ::System.Xml::XmlDocumentType*
class CORDL_TYPE XmlDocumentType : public ::System::Xml::XmlLinkedNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Xml::XmlLinkedNode)]{};

/// @brief Field name offset 0x20
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field publicId offset 0x28
 __declspec(property(get=__get_publicId, put=__set_publicId)) ::StringW  publicId;

/// @brief Field systemId offset 0x30
 __declspec(property(get=__get_systemId, put=__set_systemId)) ::StringW  systemId;

/// @brief Field internalSubset offset 0x38
 __declspec(property(get=__get_internalSubset, put=__set_internalSubset)) ::StringW  internalSubset;

/// @brief Field namespaces offset 0x40
 __declspec(property(get=__get_namespaces, put=__set_namespaces)) bool  namespaces;

/// @brief Field entities offset 0x48
 __declspec(property(get=__get_entities, put=__set_entities)) ::System::Xml::XmlNamedNodeMap*  entities;

/// @brief Field notations offset 0x50
 __declspec(property(get=__get_notations, put=__set_notations)) ::System::Xml::XmlNamedNodeMap*  notations;

/// @brief Field schemaInfo offset 0x58
 __declspec(property(get=__get_schemaInfo, put=__set_schemaInfo)) ::System::Xml::Schema::SchemaInfo*  schemaInfo;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Entities)) ::System::Xml::XmlNamedNodeMap*  Entities;

 __declspec(property(get=get_Notations)) ::System::Xml::XmlNamedNodeMap*  Notations;

 __declspec(property(get=get_PublicId)) ::StringW  PublicId;

 __declspec(property(get=get_SystemId)) ::StringW  SystemId;

 __declspec(property(get=get_InternalSubset)) ::StringW  InternalSubset;

 __declspec(property(get=get_ParseWithNamespaces)) bool  ParseWithNamespaces;

 __declspec(property(get=get_DtdSchemaInfo, put=set_DtdSchemaInfo)) ::System::Xml::Schema::SchemaInfo*  DtdSchemaInfo;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_publicId(::StringW  value) ;

constexpr ::StringW& __get_publicId() ;

constexpr ::StringW const& __get_publicId() const;

constexpr void __set_systemId(::StringW  value) ;

constexpr ::StringW& __get_systemId() ;

constexpr ::StringW const& __get_systemId() const;

constexpr void __set_internalSubset(::StringW  value) ;

constexpr ::StringW& __get_internalSubset() ;

constexpr ::StringW const& __get_internalSubset() const;

constexpr void __set_namespaces(bool  value) ;

constexpr bool& __get_namespaces() ;

constexpr bool const& __get_namespaces() const;

constexpr void __set_entities(::System::Xml::XmlNamedNodeMap*  value) ;

constexpr ::System::Xml::XmlNamedNodeMap* __get_entities() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNamedNodeMap*> __get_entities() const;

constexpr void __set_notations(::System::Xml::XmlNamedNodeMap*  value) ;

constexpr ::System::Xml::XmlNamedNodeMap* __get_notations() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNamedNodeMap*> __get_notations() const;

constexpr void __set_schemaInfo(::System::Xml::Schema::SchemaInfo*  value) ;

constexpr ::System::Xml::Schema::SchemaInfo* __get_schemaInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaInfo*> __get_schemaInfo() const;

static inline ::System::Xml::XmlDocumentType* New_ctor(::StringW  name, ::StringW  publicId, ::StringW  systemId, ::StringW  internalSubset, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method .ctor addr 0x2887f44 size 0xc4 virtual false final false
inline void _ctor(::StringW  name, ::StringW  publicId, ::StringW  systemId, ::StringW  internalSubset, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method get_Name addr 0x2888088 size 0x8 virtual true final false
inline ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x2888090 size 0x8 virtual true final false
inline ::StringW get_LocalName() ;

/// @brief Method get_NodeType addr 0x2888098 size 0x8 virtual true final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method CloneNode addr 0x28880a0 size 0x3c virtual true final false
inline ::System::Xml::XmlNode* CloneNode(bool  deep) ;

/// @brief Method get_IsReadOnly addr 0x28880dc size 0x8 virtual true final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Entities addr 0x28880e4 size 0x70 virtual false final false
inline ::System::Xml::XmlNamedNodeMap* get_Entities() ;

/// @brief Method get_Notations addr 0x288817c size 0x70 virtual false final false
inline ::System::Xml::XmlNamedNodeMap* get_Notations() ;

/// @brief Method get_PublicId addr 0x28881ec size 0x8 virtual false final false
inline ::StringW get_PublicId() ;

/// @brief Method get_SystemId addr 0x28881f4 size 0x8 virtual false final false
inline ::StringW get_SystemId() ;

/// @brief Method get_InternalSubset addr 0x28881fc size 0x8 virtual false final false
inline ::StringW get_InternalSubset() ;

/// @brief Method get_ParseWithNamespaces addr 0x2888204 size 0x8 virtual false final false
inline bool get_ParseWithNamespaces() ;

/// @brief Method get_DtdSchemaInfo addr 0x288820c size 0x8 virtual false final false
inline ::System::Xml::Schema::SchemaInfo* get_DtdSchemaInfo() ;

/// @brief Method set_DtdSchemaInfo addr 0x2888214 size 0x8 virtual false final false
inline void set_DtdSchemaInfo(::System::Xml::Schema::SchemaInfo*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlDocumentType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlDocumentType(XmlDocumentType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlDocumentType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlDocumentType(XmlDocumentType const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlDocumentType()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDocumentType, 0x60>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlDocumentType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDocumentType*, "System.Xml", "XmlDocumentType");
