#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SequenceNode)
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
struct __SequenceNode__SequenceConstructPosContext;
}
namespace System::Xml::Schema {
class InteriorNode;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
// Forward declare root types
namespace System::Xml::Schema {
class SequenceNode;
}
namespace System::Xml::Schema {
struct __SequenceNode__SequenceConstructPosContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::SequenceNode);
MARK_VAL_T(::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext);
// Type: ::SequenceConstructPosContext
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11603))
// CS Name: ::SequenceNode::SequenceConstructPosContext
struct CORDL_TYPE __SequenceNode__SequenceConstructPosContext : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field this_ offset 0x0
 __declspec(property(get=__get_this_, put=__set_this_)) ::System::Xml::Schema::SequenceNode*  this_;

/// @brief Field firstpos offset 0x8
 __declspec(property(get=__get_firstpos, put=__set_firstpos)) ::System::Xml::Schema::BitSet*  firstpos;

/// @brief Field lastpos offset 0x10
 __declspec(property(get=__get_lastpos, put=__set_lastpos)) ::System::Xml::Schema::BitSet*  lastpos;

/// @brief Field lastposLeft offset 0x18
 __declspec(property(get=__get_lastposLeft, put=__set_lastposLeft)) ::System::Xml::Schema::BitSet*  lastposLeft;

/// @brief Field firstposRight offset 0x20
 __declspec(property(get=__get_firstposRight, put=__set_firstposRight)) ::System::Xml::Schema::BitSet*  firstposRight;

constexpr void __set_this_(::System::Xml::Schema::SequenceNode*  value) ;

constexpr ::System::Xml::Schema::SequenceNode* __get_this_() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SequenceNode*> __get_this_() const;

constexpr void __set_firstpos(::System::Xml::Schema::BitSet*  value) ;

constexpr ::System::Xml::Schema::BitSet* __get_firstpos() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::BitSet*> __get_firstpos() const;

constexpr void __set_lastpos(::System::Xml::Schema::BitSet*  value) ;

constexpr ::System::Xml::Schema::BitSet* __get_lastpos() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::BitSet*> __get_lastpos() const;

constexpr void __set_lastposLeft(::System::Xml::Schema::BitSet*  value) ;

constexpr ::System::Xml::Schema::BitSet* __get_lastposLeft() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::BitSet*> __get_lastposLeft() const;

constexpr void __set_firstposRight(::System::Xml::Schema::BitSet*  value) ;

constexpr ::System::Xml::Schema::BitSet* __get_firstposRight() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::BitSet*> __get_firstposRight() const;

/// @brief Method .ctor addr 0x28ae760 size 0x10 virtual false final false
inline void _ctor(::System::Xml::Schema::SequenceNode*  node, ::System::Xml::Schema::BitSet*  firstpos, ::System::Xml::Schema::BitSet*  lastpos) ;

// Ctor Parameters [CppParam { name: "this_", ty: "::System::Xml::Schema::SequenceNode*", modifiers: "", def_value: None }, CppParam { name: "firstpos", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: None }, CppParam { name: "lastpos", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: None }, CppParam { name: "lastposLeft", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: None }, CppParam { name: "firstposRight", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: None }]
constexpr __SequenceNode__SequenceConstructPosContext(::System::Xml::Schema::SequenceNode*  this_, ::System::Xml::Schema::BitSet*  firstpos, ::System::Xml::Schema::BitSet*  lastpos, ::System::Xml::Schema::BitSet*  lastposLeft, ::System::Xml::Schema::BitSet*  firstposRight) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SequenceNode__SequenceConstructPosContext(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SequenceNode__SequenceConstructPosContext()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext, 0x28>, "Size mismatch!");

} // namespace end def System::Xml::Schema
// Type: System.Xml.Schema::SequenceNode
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11602))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11604))
// CS Name: ::System.Xml.Schema::SequenceNode*
class CORDL_TYPE SequenceNode : public ::System::Xml::Schema::InteriorNode {
public:
// Declarations
using SequenceConstructPosContext = ::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Xml::Schema::InteriorNode)]{};

 __declspec(property(get=get_IsNullable)) bool  IsNullable;

/// @brief Method ConstructPos addr 0x28ae418 size 0x348 virtual true final false
inline void ConstructPos(::System::Xml::Schema::BitSet*  firstpos, ::System::Xml::Schema::BitSet*  lastpos, ::ArrayW<::System::Xml::Schema::BitSet*,::Array<::System::Xml::Schema::BitSet*>*>  followpos) ;

/// @brief Method get_IsNullable addr 0x28ae770 size 0x15c virtual true final false
inline bool get_IsNullable() ;

/// @brief Method ExpandTree addr 0x28ae8cc size 0x4 virtual true final false
inline void ExpandTree(::System::Xml::Schema::InteriorNode*  parent, ::System::Xml::Schema::SymbolsDictionary*  symbols, ::System::Xml::Schema::Positions*  positions) ;

static inline ::System::Xml::Schema::SequenceNode* New_ctor() ;

/// @brief Method .ctor addr 0x28ae8d0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SequenceNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SequenceNode(SequenceNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SequenceNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SequenceNode(SequenceNode const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SequenceNode()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SequenceNode, 0x20>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SequenceNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SequenceNode*, "System.Xml.Schema", "SequenceNode");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext, "System.Xml.Schema", "SequenceNode/SequenceConstructPosContext");
