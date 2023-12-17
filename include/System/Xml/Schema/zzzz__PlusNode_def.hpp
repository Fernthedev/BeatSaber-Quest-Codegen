#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PlusNode)
namespace System::Xml::Schema {
class BitSet;
}
// Forward declare root types
namespace System::Xml::Schema {
class PlusNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::PlusNode);
// Type: System.Xml.Schema::PlusNode
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11602))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11606))
// CS Name: ::System.Xml.Schema::PlusNode*
class CORDL_TYPE PlusNode : public ::System::Xml::Schema::InteriorNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Xml::Schema::InteriorNode)]{};

 __declspec(property(get=get_IsNullable)) bool  IsNullable;

/// @brief Method ConstructPos addr 0x28aeb60 size 0x9c virtual true final false
inline void ConstructPos(::System::Xml::Schema::BitSet*  firstpos, ::System::Xml::Schema::BitSet*  lastpos, ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>  followpos) ;

/// @brief Method get_IsNullable addr 0x28aebfc size 0x20 virtual true final false
inline bool get_IsNullable() ;

static inline ::System::Xml::Schema::PlusNode* New_ctor() ;

/// @brief Method .ctor addr 0x28aec1c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PlusNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlusNode(PlusNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlusNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlusNode(PlusNode const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlusNode()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::PlusNode, 0x20>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::PlusNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::PlusNode*, "System.Xml.Schema", "PlusNode");
