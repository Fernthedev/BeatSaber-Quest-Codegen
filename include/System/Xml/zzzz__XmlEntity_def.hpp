#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlEntity)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlLinkedNode;
}
namespace System::Xml {
struct XmlNodeType;
}
// Forward declare root types
namespace System::Xml {
class XmlEntity;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlEntity);
// Type: System.Xml::XmlEntity
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11520))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11509))
// CS Name: ::System.Xml::XmlEntity*
class CORDL_TYPE XmlEntity : public ::System::Xml::XmlNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Xml::XmlNode)]{};

/// @brief Field publicId offset 0x18
 __declspec(property(get=__get_publicId, put=__set_publicId)) ::StringW  publicId;

/// @brief Field systemId offset 0x20
 __declspec(property(get=__get_systemId, put=__set_systemId)) ::StringW  systemId;

/// @brief Field notationName offset 0x28
 __declspec(property(get=__get_notationName, put=__set_notationName)) ::StringW  notationName;

/// @brief Field name offset 0x30
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field unparsedReplacementStr offset 0x38
 __declspec(property(get=__get_unparsedReplacementStr, put=__set_unparsedReplacementStr)) ::StringW  unparsedReplacementStr;

/// @brief Field baseURI offset 0x40
 __declspec(property(get=__get_baseURI, put=__set_baseURI)) ::StringW  baseURI;

/// @brief Field lastChild offset 0x48
 __declspec(property(get=__get_lastChild, put=__set_lastChild)) ::System::Xml::XmlLinkedNode*  lastChild;

/// @brief Field childrenFoliating offset 0x50
 __declspec(property(get=__get_childrenFoliating, put=__set_childrenFoliating)) bool  childrenFoliating;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_InnerText, put=set_InnerText)) ::StringW  InnerText;

 __declspec(property(get=get_IsContainer)) bool  IsContainer;

 __declspec(property(get=get_LastNode, put=set_LastNode)) ::System::Xml::XmlLinkedNode*  LastNode;

 __declspec(property(get=get_NodeType)) ::System::Xml::XmlNodeType  NodeType;

 __declspec(property(get=get_SystemId)) ::StringW  SystemId;

 __declspec(property(put=set_InnerXml)) ::StringW  InnerXml;

 __declspec(property(get=get_BaseURI)) ::StringW  BaseURI;

constexpr void __set_publicId(::StringW  value) ;

constexpr ::StringW& __get_publicId() ;

constexpr ::StringW const& __get_publicId() const;

constexpr void __set_systemId(::StringW  value) ;

constexpr ::StringW& __get_systemId() ;

constexpr ::StringW const& __get_systemId() const;

constexpr void __set_notationName(::StringW  value) ;

constexpr ::StringW& __get_notationName() ;

constexpr ::StringW const& __get_notationName() const;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_unparsedReplacementStr(::StringW  value) ;

constexpr ::StringW& __get_unparsedReplacementStr() ;

constexpr ::StringW const& __get_unparsedReplacementStr() const;

constexpr void __set_baseURI(::StringW  value) ;

constexpr ::StringW& __get_baseURI() ;

constexpr ::StringW const& __get_baseURI() const;

constexpr void __set_lastChild(::System::Xml::XmlLinkedNode*  value) ;

constexpr ::System::Xml::XmlLinkedNode* __get_lastChild() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlLinkedNode*> __get_lastChild() const;

constexpr void __set_childrenFoliating(bool  value) ;

constexpr bool& __get_childrenFoliating() ;

constexpr bool const& __get_childrenFoliating() const;

static inline ::System::Xml::XmlEntity* New_ctor(::StringW  name, ::StringW  strdata, ::StringW  publicId, ::StringW  systemId, ::StringW  notationName, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method .ctor addr 0x28893b4 size 0x80 virtual false final false
inline void _ctor(::StringW  name, ::StringW  strdata, ::StringW  publicId, ::StringW  systemId, ::StringW  notationName, ::System::Xml::XmlDocument*  doc) ;

/// @brief Method CloneNode addr 0x28894b8 size 0x60 virtual true final false
inline ::System::Xml::XmlNode* CloneNode(bool  deep) ;

/// @brief Method get_IsReadOnly addr 0x2889518 size 0x8 virtual true final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name addr 0x2889520 size 0x8 virtual true final false
inline ::StringW get_Name() ;

/// @brief Method get_LocalName addr 0x2889528 size 0x8 virtual true final false
inline ::StringW get_LocalName() ;

/// @brief Method get_InnerText addr 0x2889530 size 0x4 virtual true final false
inline ::StringW get_InnerText() ;

/// @brief Method set_InnerText addr 0x2889534 size 0x60 virtual true final false
inline void set_InnerText(::StringW  value) ;

/// @brief Method get_IsContainer addr 0x2889594 size 0x8 virtual true final false
inline bool get_IsContainer() ;

/// @brief Method get_LastNode addr 0x288959c size 0x8c virtual true final false
inline ::System::Xml::XmlLinkedNode* get_LastNode() ;

/// @brief Method set_LastNode addr 0x2889674 size 0x8 virtual true final false
inline void set_LastNode(::System::Xml::XmlLinkedNode*  value) ;

/// @brief Method IsValidChildType addr 0x288967c size 0x3c virtual true final false
inline bool IsValidChildType(::System::Xml::XmlNodeType  type) ;

/// @brief Method get_NodeType addr 0x28896b8 size 0x8 virtual true final false
inline ::System::Xml::XmlNodeType get_NodeType() ;

/// @brief Method get_SystemId addr 0x28896c0 size 0x8 virtual false final false
inline ::StringW get_SystemId() ;

/// @brief Method set_InnerXml addr 0x28896c8 size 0x60 virtual true final false
inline void set_InnerXml(::StringW  value) ;

/// @brief Method get_BaseURI addr 0x2889728 size 0x8 virtual true final false
inline ::StringW get_BaseURI() ;

/// @brief Method SetBaseURI addr 0x2889730 size 0x8 virtual false final false
inline void SetBaseURI(::StringW  inBaseURI) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlEntity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlEntity(XmlEntity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlEntity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlEntity(XmlEntity const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlEntity()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlEntity, 0x58>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlEntity);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlEntity*, "System.Xml", "XmlEntity");
