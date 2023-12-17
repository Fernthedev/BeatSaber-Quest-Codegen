#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_def.hpp"
CORDL_MODULE_EXPORT(InteriorNode)
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class SyntaxTreeNode;
}
// Forward declare root types
namespace System::Xml::Schema {
class InteriorNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::InteriorNode);
// Type: System.Xml.Schema::InteriorNode
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11599))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11602))
// CS Name: ::System.Xml.Schema::InteriorNode*
class CORDL_TYPE InteriorNode : public ::System::Xml::Schema::SyntaxTreeNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Xml::Schema::SyntaxTreeNode)]{};

/// @brief Field leftChild offset 0x10
 __declspec(property(get=__get_leftChild, put=__set_leftChild)) ::System::Xml::Schema::SyntaxTreeNode*  leftChild;

/// @brief Field rightChild offset 0x18
 __declspec(property(get=__get_rightChild, put=__set_rightChild)) ::System::Xml::Schema::SyntaxTreeNode*  rightChild;

 __declspec(property(get=get_LeftChild, put=set_LeftChild)) ::System::Xml::Schema::SyntaxTreeNode*  LeftChild;

 __declspec(property(get=get_RightChild, put=set_RightChild)) ::System::Xml::Schema::SyntaxTreeNode*  RightChild;

constexpr void __set_leftChild(::System::Xml::Schema::SyntaxTreeNode*  value) ;

constexpr ::System::Xml::Schema::SyntaxTreeNode* __get_leftChild() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SyntaxTreeNode*> __get_leftChild() const;

constexpr void __set_rightChild(::System::Xml::Schema::SyntaxTreeNode*  value) ;

constexpr ::System::Xml::Schema::SyntaxTreeNode* __get_rightChild() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SyntaxTreeNode*> __get_rightChild() const;

/// @brief Method get_LeftChild addr 0x28ae1ac size 0x8 virtual false final false
inline ::System::Xml::Schema::SyntaxTreeNode* get_LeftChild() ;

/// @brief Method set_LeftChild addr 0x28ae1b4 size 0x8 virtual false final false
inline void set_LeftChild(::System::Xml::Schema::SyntaxTreeNode*  value) ;

/// @brief Method get_RightChild addr 0x28ae1bc size 0x8 virtual false final false
inline ::System::Xml::Schema::SyntaxTreeNode* get_RightChild() ;

/// @brief Method set_RightChild addr 0x28ae1c4 size 0x8 virtual false final false
inline void set_RightChild(::System::Xml::Schema::SyntaxTreeNode*  value) ;

/// @brief Method ExpandTreeNoRecursive addr 0x28ae1cc size 0x1e0 virtual false final false
inline void ExpandTreeNoRecursive(::System::Xml::Schema::InteriorNode*  parent, ::System::Xml::Schema::SymbolsDictionary*  symbols, ::System::Xml::Schema::Positions*  positions) ;

/// @brief Method ExpandTree addr 0x28ae3ac size 0x64 virtual true final false
inline void ExpandTree(::System::Xml::Schema::InteriorNode*  parent, ::System::Xml::Schema::SymbolsDictionary*  symbols, ::System::Xml::Schema::Positions*  positions) ;

static inline ::System::Xml::Schema::InteriorNode* New_ctor() ;

/// @brief Method .ctor addr 0x28ae410 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InteriorNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InteriorNode(InteriorNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteriorNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteriorNode(InteriorNode const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InteriorNode()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::InteriorNode, 0x20>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::InteriorNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::InteriorNode*, "System.Xml.Schema", "InteriorNode");
