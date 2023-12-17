#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNode_def.hpp"
CORDL_MODULE_EXPORT(XmlLinkedNode)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace System::Xml {
class XmlLinkedNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlLinkedNode);
// Type: System.Xml::XmlLinkedNode
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11520))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11513))
// CS Name: ::System.Xml::XmlLinkedNode*
class CORDL_TYPE XmlLinkedNode : public ::System::Xml::XmlNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Xml::XmlNode)]{};

/// @brief Field next offset 0x18
 __declspec(property(get=__get_next, put=__set_next)) ::System::Xml::XmlLinkedNode*  next;

 __declspec(property(get=get_PreviousSibling)) ::System::Xml::XmlNode*  PreviousSibling;

 __declspec(property(get=get_NextSibling)) ::System::Xml::XmlNode*  NextSibling;

constexpr void __set_next(::System::Xml::XmlLinkedNode*  value) ;

constexpr ::System::Xml::XmlLinkedNode* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlLinkedNode*> __get_next() const;

static inline ::System::Xml::XmlLinkedNode* New_ctor(::System::Xml::XmlDocument*  doc) ;

/// @brief Method .ctor addr 0x2888008 size 0x18 virtual false final false
inline void _ctor(::System::Xml::XmlDocument*  doc) ;

/// @brief Method get_PreviousSibling addr 0x288a39c size 0x68 virtual true final false
inline ::System::Xml::XmlNode* get_PreviousSibling() ;

/// @brief Method get_NextSibling addr 0x288a404 size 0x50 virtual true final false
inline ::System::Xml::XmlNode* get_NextSibling() ;

// Ctor Parameters [CppParam { name: "", ty: "XmlLinkedNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlLinkedNode(XmlLinkedNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlLinkedNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlLinkedNode(XmlLinkedNode const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlLinkedNode()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlLinkedNode, 0x20>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlLinkedNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlLinkedNode*, "System.Xml", "XmlLinkedNode");
