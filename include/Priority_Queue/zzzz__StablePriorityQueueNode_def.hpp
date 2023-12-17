#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Priority_Queue/zzzz__FastPriorityQueueNode_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StablePriorityQueueNode)
// Forward declare root types
namespace Priority_Queue {
class StablePriorityQueueNode;
}
// Write type traits
MARK_REF_PTR_T(::Priority_Queue::StablePriorityQueueNode);
// Type: Priority_Queue::StablePriorityQueueNode
namespace Priority_Queue {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6093))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6104))
// CS Name: ::Priority_Queue::StablePriorityQueueNode*
class CORDL_TYPE StablePriorityQueueNode : public ::Priority_Queue::FastPriorityQueueNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Priority_Queue::FastPriorityQueueNode)]{};

/// @brief Field <InsertionIndex>k__BackingField offset 0x18
 __declspec(property(get=__get__InsertionIndex_k__BackingField, put=__set__InsertionIndex_k__BackingField)) int64_t  _InsertionIndex_k__BackingField;

 __declspec(property(get=get_InsertionIndex, put=set_InsertionIndex)) int64_t  InsertionIndex;

constexpr void __set__InsertionIndex_k__BackingField(int64_t  value) ;

constexpr int64_t& __get__InsertionIndex_k__BackingField() ;

constexpr int64_t const& __get__InsertionIndex_k__BackingField() const;

/// @brief Method get_InsertionIndex addr 0x2321e30 size 0x8 virtual false final false
inline int64_t get_InsertionIndex() ;

/// @brief Method set_InsertionIndex addr 0x2321e38 size 0x8 virtual false final false
inline void set_InsertionIndex(int64_t  value) ;

static inline ::Priority_Queue::StablePriorityQueueNode* New_ctor() ;

/// @brief Method .ctor addr 0x2321e40 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StablePriorityQueueNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StablePriorityQueueNode(StablePriorityQueueNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StablePriorityQueueNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StablePriorityQueueNode(StablePriorityQueueNode const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StablePriorityQueueNode()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Priority_Queue::StablePriorityQueueNode, 0x20>, "Size mismatch!");

} // namespace end def Priority_Queue
NEED_NO_BOX(::Priority_Queue::StablePriorityQueueNode);
DEFINE_IL2CPP_ARG_TYPE(::Priority_Queue::StablePriorityQueueNode*, "Priority_Queue", "StablePriorityQueueNode");
