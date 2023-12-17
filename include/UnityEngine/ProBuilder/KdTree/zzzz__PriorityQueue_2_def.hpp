#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PriorityQueue_2)
namespace UnityEngine::ProBuilder::KdTree {
template<typename T>
class ITypeMath_1;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TPriority>
struct ItemPriority_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TPriority>
class IPriorityQueue_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TPriority>
class PriorityQueue_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
class PriorityQueue_2<TItem,TPriority>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::il2cpp_utils::il2cpp_reference_type TItem>
class PriorityQueue_2<TItem,float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::PriorityQueue_2);
// Type: UnityEngine.ProBuilder.KdTree::PriorityQueue`2
// Type: UnityEngine.ProBuilder.KdTree::PriorityQueue`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15924))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15924), inst: 1634 })
// CS Name: ::UnityEngine.ProBuilder.KdTree::PriorityQueue`2<TItem,TPriority>*
class CORDL_TYPE PriorityQueue_2<TItem,float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field priorityMath offset 0x10
 __declspec(property(get=__get_priorityMath, put=__set_priorityMath)) ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  priorityMath;

/// @brief Field queue offset 0x18
 __declspec(property(get=__get_queue, put=__set_queue)) ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>>*>  queue;

/// @brief Field capacity offset 0x20
 __declspec(property(get=__get_capacity, put=__set_capacity)) int32_t  capacity;

/// @brief Field count offset 0x24
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,float_t>"
constexpr operator  ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,float_t>*() noexcept;

constexpr void __set_priorityMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>* __get_priorityMath() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*> __get_priorityMath() const;

constexpr void __set_queue(::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>>*>  value) ;

constexpr ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>>*>& __get_queue() ;

constexpr ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>>*> const& __get_queue() const;

constexpr void __set_capacity(int32_t  value) ;

constexpr int32_t& __get_capacity() ;

constexpr int32_t const& __get_capacity() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

static inline ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>* New_ctor(int32_t  capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  priorityMath) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  priorityMath) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method ExpandCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ExpandCapacity() ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Enqueue(TItem  item, float_t  priority) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final true
inline TItem Dequeue() ;

/// @brief Method ReorderItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ReorderItem(int32_t  index, int32_t  direction) ;

/// @brief Method GetHighest addr 0x0 size 0xffffffffffffffff virtual false final false
inline TItem GetHighest() ;

/// @brief Method GetHighestPriority addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t GetHighestPriority() ;

// Ctor Parameters [CppParam { name: "", ty: "PriorityQueue_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PriorityQueue_2(PriorityQueue_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PriorityQueue_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PriorityQueue_2(PriorityQueue_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PriorityQueue_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: UnityEngine.ProBuilder.KdTree::PriorityQueue`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15924))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15924), inst: 81 })
// CS Name: ::UnityEngine.ProBuilder.KdTree::PriorityQueue`2<TItem,TPriority>*
class CORDL_TYPE PriorityQueue_2<TItem,TPriority> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field priorityMath offset 0x10
 __declspec(property(get=__get_priorityMath, put=__set_priorityMath)) ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*  priorityMath;

/// @brief Field queue offset 0x18
 __declspec(property(get=__get_queue, put=__set_queue)) ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>>*>  queue;

/// @brief Field capacity offset 0x20
 __declspec(property(get=__get_capacity, put=__set_capacity)) int32_t  capacity;

/// @brief Field count offset 0x24
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>"
constexpr operator  ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>*() noexcept;

constexpr void __set_priorityMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* __get_priorityMath() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*> __get_priorityMath() const;

constexpr void __set_queue(::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>>*>  value) ;

constexpr ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>>*>& __get_queue() ;

constexpr ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>>*> const& __get_queue() const;

constexpr void __set_capacity(int32_t  value) ;

constexpr int32_t& __get_capacity() ;

constexpr int32_t const& __get_capacity() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

static inline ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>* New_ctor(int32_t  capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*  priorityMath) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*  priorityMath) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method ExpandCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ExpandCapacity() ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Enqueue(TItem  item, TPriority  priority) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final true
inline TItem Dequeue() ;

/// @brief Method ReorderItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ReorderItem(int32_t  index, int32_t  direction) ;

/// @brief Method GetHighest addr 0x0 size 0xffffffffffffffff virtual false final false
inline TItem GetHighest() ;

/// @brief Method GetHighestPriority addr 0x0 size 0xffffffffffffffff virtual false final false
inline TPriority GetHighestPriority() ;

// Ctor Parameters [CppParam { name: "", ty: "PriorityQueue_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PriorityQueue_2(PriorityQueue_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PriorityQueue_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PriorityQueue_2(PriorityQueue_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PriorityQueue_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::PriorityQueue_2, "UnityEngine.ProBuilder.KdTree", "PriorityQueue`2");
