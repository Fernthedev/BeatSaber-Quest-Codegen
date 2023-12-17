#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GenericPriorityQueueNode_1)
// Forward declare root types
namespace Priority_Queue {
template<typename TPriority>
class GenericPriorityQueueNode_1;
}
namespace Priority_Queue {
template<::il2cpp_utils::il2cpp_reference_type TPriority>
class GenericPriorityQueueNode_1<TPriority>;
}
namespace Priority_Queue {
template<>
class GenericPriorityQueueNode_1<float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Priority_Queue::GenericPriorityQueueNode_1);
// Type: Priority_Queue::GenericPriorityQueueNode`1
// Type: Priority_Queue::GenericPriorityQueueNode`1
namespace Priority_Queue {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6096))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6096), inst: 391 })
// CS Name: ::Priority_Queue::GenericPriorityQueueNode`1<TPriority>*
class CORDL_TYPE GenericPriorityQueueNode_1<float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <Priority>k__BackingField offset 0x10
 __declspec(property(get=__get__Priority_k__BackingField, put=__set__Priority_k__BackingField)) float_t  _Priority_k__BackingField;

/// @brief Field <QueueIndex>k__BackingField offset 0x14
 __declspec(property(get=__get__QueueIndex_k__BackingField, put=__set__QueueIndex_k__BackingField)) int32_t  _QueueIndex_k__BackingField;

/// @brief Field <InsertionIndex>k__BackingField offset 0x18
 __declspec(property(get=__get__InsertionIndex_k__BackingField, put=__set__InsertionIndex_k__BackingField)) int64_t  _InsertionIndex_k__BackingField;

 __declspec(property(get=get_Priority, put=set_Priority)) float_t  Priority;

 __declspec(property(get=get_QueueIndex, put=set_QueueIndex)) int32_t  QueueIndex;

 __declspec(property(get=get_InsertionIndex, put=set_InsertionIndex)) int64_t  InsertionIndex;

constexpr void __set__Priority_k__BackingField(float_t  value) ;

constexpr float_t& __get__Priority_k__BackingField() ;

constexpr float_t const& __get__Priority_k__BackingField() const;

constexpr void __set__QueueIndex_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__QueueIndex_k__BackingField() ;

constexpr int32_t const& __get__QueueIndex_k__BackingField() const;

constexpr void __set__InsertionIndex_k__BackingField(int64_t  value) ;

constexpr int64_t& __get__InsertionIndex_k__BackingField() ;

constexpr int64_t const& __get__InsertionIndex_k__BackingField() const;

/// @brief Method get_Priority addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_Priority() ;

/// @brief Method set_Priority addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Priority(float_t  value) ;

/// @brief Method get_QueueIndex addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_QueueIndex() ;

/// @brief Method set_QueueIndex addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_QueueIndex(int32_t  value) ;

/// @brief Method get_InsertionIndex addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t get_InsertionIndex() ;

/// @brief Method set_InsertionIndex addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_InsertionIndex(int64_t  value) ;

static inline ::Priority_Queue::GenericPriorityQueueNode_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueueNode_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericPriorityQueueNode_1(GenericPriorityQueueNode_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueueNode_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericPriorityQueueNode_1(GenericPriorityQueueNode_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericPriorityQueueNode_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
// Type: Priority_Queue::GenericPriorityQueueNode`1
namespace Priority_Queue {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TPriority>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6096))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6096), inst: 2 })
// CS Name: ::Priority_Queue::GenericPriorityQueueNode`1<TPriority>*
class CORDL_TYPE GenericPriorityQueueNode_1<TPriority> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <Priority>k__BackingField offset 0x10
 __declspec(property(get=__get__Priority_k__BackingField, put=__set__Priority_k__BackingField)) TPriority  _Priority_k__BackingField;

/// @brief Field <QueueIndex>k__BackingField offset 0x18
 __declspec(property(get=__get__QueueIndex_k__BackingField, put=__set__QueueIndex_k__BackingField)) int32_t  _QueueIndex_k__BackingField;

/// @brief Field <InsertionIndex>k__BackingField offset 0x20
 __declspec(property(get=__get__InsertionIndex_k__BackingField, put=__set__InsertionIndex_k__BackingField)) int64_t  _InsertionIndex_k__BackingField;

 __declspec(property(get=get_Priority, put=set_Priority)) TPriority  Priority;

 __declspec(property(get=get_QueueIndex, put=set_QueueIndex)) int32_t  QueueIndex;

 __declspec(property(get=get_InsertionIndex, put=set_InsertionIndex)) int64_t  InsertionIndex;

constexpr void __set__Priority_k__BackingField(TPriority  value) ;

constexpr TPriority& __get__Priority_k__BackingField() ;

constexpr TPriority const& __get__Priority_k__BackingField() const;

constexpr void __set__QueueIndex_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__QueueIndex_k__BackingField() ;

constexpr int32_t const& __get__QueueIndex_k__BackingField() const;

constexpr void __set__InsertionIndex_k__BackingField(int64_t  value) ;

constexpr int64_t& __get__InsertionIndex_k__BackingField() ;

constexpr int64_t const& __get__InsertionIndex_k__BackingField() const;

/// @brief Method get_Priority addr 0x0 size 0xffffffffffffffff virtual false final false
inline TPriority get_Priority() ;

/// @brief Method set_Priority addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Priority(TPriority  value) ;

/// @brief Method get_QueueIndex addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_QueueIndex() ;

/// @brief Method set_QueueIndex addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_QueueIndex(int32_t  value) ;

/// @brief Method get_InsertionIndex addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t get_InsertionIndex() ;

/// @brief Method set_InsertionIndex addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_InsertionIndex(int64_t  value) ;

static inline ::Priority_Queue::GenericPriorityQueueNode_1<TPriority>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueueNode_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericPriorityQueueNode_1(GenericPriorityQueueNode_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueueNode_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericPriorityQueueNode_1(GenericPriorityQueueNode_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericPriorityQueueNode_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::GenericPriorityQueueNode_1, "Priority_Queue", "GenericPriorityQueueNode`1");
