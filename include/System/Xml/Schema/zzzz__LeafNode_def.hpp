#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeafNode)
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class InteriorNode;
}
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class BitSet;
}
// Forward declare root types
namespace System::Xml::Schema {
class LeafNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::LeafNode);
// Type: System.Xml.Schema::LeafNode
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11599))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11600))
// CS Name: ::System.Xml.Schema::LeafNode*
class CORDL_TYPE LeafNode : public ::System::Xml::Schema::SyntaxTreeNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Xml::Schema::SyntaxTreeNode)]{};

/// @brief Field pos offset 0x10
 __declspec(property(get=__get_pos, put=__set_pos)) int32_t  pos;

 __declspec(property(get=get_Pos, put=set_Pos)) int32_t  Pos;

 __declspec(property(get=get_IsNullable)) bool  IsNullable;

constexpr void __set_pos(int32_t  value) ;

constexpr int32_t& __get_pos() ;

constexpr int32_t const& __get_pos() const;

static inline ::System::Xml::Schema::LeafNode* New_ctor(int32_t  pos) ;

/// @brief Method .ctor addr 0x28adbdc size 0x28 virtual false final false
inline void _ctor(int32_t  pos) ;

/// @brief Method get_Pos addr 0x28adc04 size 0x8 virtual false final false
inline int32_t get_Pos() ;

/// @brief Method set_Pos addr 0x28adc0c size 0x8 virtual false final false
inline void set_Pos(int32_t  value) ;

/// @brief Method ExpandTree addr 0x28adc14 size 0x4 virtual true final false
inline void ExpandTree(::System::Xml::Schema::InteriorNode*  parent, ::System::Xml::Schema::SymbolsDictionary*  symbols, ::System::Xml::Schema::Positions*  positions) ;

/// @brief Method ConstructPos addr 0x28adc18 size 0x40 virtual true final false
inline void ConstructPos(::System::Xml::Schema::BitSet*  firstpos, ::System::Xml::Schema::BitSet*  lastpos, ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>  followpos) ;

/// @brief Method get_IsNullable addr 0x28adc58 size 0x8 virtual true final false
inline bool get_IsNullable() ;

// Ctor Parameters [CppParam { name: "", ty: "LeafNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LeafNode(LeafNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LeafNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LeafNode(LeafNode const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LeafNode()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::LeafNode, 0x18>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::LeafNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::LeafNode*, "System.Xml.Schema", "LeafNode");
