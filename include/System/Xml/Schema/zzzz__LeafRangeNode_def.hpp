#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__LeafNode_def.hpp"
CORDL_MODULE_EXPORT(LeafRangeNode)
namespace System::Xml::Schema {
class BitSet;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Xml::Schema {
class LeafRangeNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::LeafRangeNode);
// Type: System.Xml.Schema::LeafRangeNode
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11600))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11609))
// CS Name: ::System.Xml.Schema::LeafRangeNode*
class CORDL_TYPE LeafRangeNode : public ::System::Xml::Schema::LeafNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Xml::Schema::LeafNode)]{};

/// @brief Field min offset 0x18
 __declspec(property(get=__get_min, put=__set_min)) ::System::Decimal  min;

/// @brief Field max offset 0x28
 __declspec(property(get=__get_max, put=__set_max)) ::System::Decimal  max;

/// @brief Field nextIteration offset 0x38
 __declspec(property(get=__get_nextIteration, put=__set_nextIteration)) ::System::Xml::Schema::BitSet*  nextIteration;

 __declspec(property(get=get_Max)) ::System::Decimal  Max;

 __declspec(property(get=get_Min)) ::System::Decimal  Min;

 __declspec(property(get=get_NextIteration, put=set_NextIteration)) ::System::Xml::Schema::BitSet*  NextIteration;

constexpr void __set_min(::System::Decimal  value) ;

constexpr ::System::Decimal& __get_min() ;

constexpr ::System::Decimal const& __get_min() const;

constexpr void __set_max(::System::Decimal  value) ;

constexpr ::System::Decimal& __get_max() ;

constexpr ::System::Decimal const& __get_max() const;

constexpr void __set_nextIteration(::System::Xml::Schema::BitSet*  value) ;

constexpr ::System::Xml::Schema::BitSet* __get_nextIteration() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::BitSet*> __get_nextIteration() const;

/// @brief Method get_Max addr 0x28aed00 size 0xc virtual false final false
inline ::System::Decimal get_Max() ;

/// @brief Method get_Min addr 0x28aed0c size 0xc virtual false final false
inline ::System::Decimal get_Min() ;

/// @brief Method get_NextIteration addr 0x28aed18 size 0x8 virtual false final false
inline ::System::Xml::Schema::BitSet* get_NextIteration() ;

/// @brief Method set_NextIteration addr 0x28aed20 size 0x8 virtual false final false
inline void set_NextIteration(::System::Xml::Schema::BitSet*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "LeafRangeNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LeafRangeNode(LeafRangeNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LeafRangeNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LeafRangeNode(LeafRangeNode const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LeafRangeNode()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::LeafRangeNode, 0x40>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::LeafRangeNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::LeafRangeNode*, "System.Xml.Schema", "LeafRangeNode");
