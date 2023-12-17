#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntervalTreeNode_2)
namespace IntervalTree {
template<typename TKey,typename TValue>
struct RangeValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace IntervalTree {
template<typename TKey,typename TValue>
class __IntervalTreeNode_2____c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace IntervalTree {
template<typename TKey,typename TValue>
class IntervalTreeNode_2;
}
namespace IntervalTree {
template<typename TKey,typename TValue>
class __IntervalTreeNode_2____c;
}
namespace IntervalTree {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class IntervalTreeNode_2<TKey,TValue>;
}
namespace IntervalTree {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class __IntervalTreeNode_2____c<TKey,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::IntervalTree::IntervalTreeNode_2);
MARK_GEN_REF_PTR_T(::IntervalTree::__IntervalTreeNode_2____c);
// Type: ::<>c
// Type: IntervalTree::IntervalTreeNode`2
// Type: ::<>c
namespace IntervalTree {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(16133))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(16133), inst: 81 })
// CS Name: ::IntervalTreeNode`2::<>c<TKey,TValue>*
class CORDL_TYPE __IntervalTreeNode_2____c<TKey,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::IntervalTree::__IntervalTreeNode_2____c<TKey,TValue>*  value) ;

static inline ::IntervalTree::__IntervalTreeNode_2____c<TKey,TValue>* getStaticF___9() ;

static inline void setStaticF___9__13_0(::System::Func_2<::IntervalTree::RangeValuePair_2<TKey,TValue>,TKey>*  value) ;

static inline ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey,TValue>,TKey>* getStaticF___9__13_0() ;

static inline void setStaticF___9__15_0(::System::Func_2<::IntervalTree::RangeValuePair_2<TKey,TValue>,TKey>*  value) ;

static inline ::System::Func_2<::IntervalTree::RangeValuePair_2<TKey,TValue>,TKey>* getStaticF___9__15_0() ;

static inline ::IntervalTree::__IntervalTreeNode_2____c<TKey,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <get_Max>b__13_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey _get_Max_b__13_0(::IntervalTree::RangeValuePair_2<TKey,TValue>  i) ;

/// @brief Method <get_Min>b__15_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey _get_Min_b__15_0(::IntervalTree::RangeValuePair_2<TKey,TValue>  i) ;

// Ctor Parameters [CppParam { name: "", ty: "__IntervalTreeNode_2____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IntervalTreeNode_2____c(__IntervalTreeNode_2____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IntervalTreeNode_2____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IntervalTreeNode_2____c(__IntervalTreeNode_2____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IntervalTreeNode_2____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__13_0

// Static field <>9__15_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IntervalTree
// Type: IntervalTree::IntervalTreeNode`2
namespace IntervalTree {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(16134))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(16134), inst: 81 })
// CS Name: ::IntervalTree::IntervalTreeNode`2<TKey,TValue>*
class CORDL_TYPE IntervalTreeNode_2<TKey,TValue> : public ::System::Object {
public:
// Declarations
using __c = ::IntervalTree::__IntervalTreeNode_2____c<TKey, TValue>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field center offset 0x10
 __declspec(property(get=__get_center, put=__set_center)) TKey  center;

/// @brief Field leftNode offset 0x18
 __declspec(property(get=__get_leftNode, put=__set_leftNode)) ::IntervalTree::IntervalTreeNode_2<TKey,TValue>*  leftNode;

/// @brief Field rightNode offset 0x20
 __declspec(property(get=__get_rightNode, put=__set_rightNode)) ::IntervalTree::IntervalTreeNode_2<TKey,TValue>*  rightNode;

/// @brief Field items offset 0x28
 __declspec(property(get=__get_items, put=__set_items)) ::ArrayW<::IntervalTree::RangeValuePair_2<TKey,TValue>,::Array<::IntervalTree::RangeValuePair_2<TKey,TValue>>*>  items;

/// @brief Field comparer offset 0x30
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<TKey>*  comparer;

 __declspec(property(get=get_Max)) TKey  Max;

 __declspec(property(get=get_Min)) TKey  Min;

/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>*() noexcept;

constexpr void __set_center(TKey  value) ;

constexpr TKey& __get_center() ;

constexpr TKey const& __get_center() const;

constexpr void __set_leftNode(::IntervalTree::IntervalTreeNode_2<TKey,TValue>*  value) ;

constexpr ::IntervalTree::IntervalTreeNode_2<TKey,TValue>* __get_leftNode() ;

constexpr ::cordl_internals::to_const_pointer<::IntervalTree::IntervalTreeNode_2<TKey,TValue>*> __get_leftNode() const;

constexpr void __set_rightNode(::IntervalTree::IntervalTreeNode_2<TKey,TValue>*  value) ;

constexpr ::IntervalTree::IntervalTreeNode_2<TKey,TValue>* __get_rightNode() ;

constexpr ::cordl_internals::to_const_pointer<::IntervalTree::IntervalTreeNode_2<TKey,TValue>*> __get_rightNode() const;

constexpr void __set_items(::ArrayW<::IntervalTree::RangeValuePair_2<TKey,TValue>,::Array<::IntervalTree::RangeValuePair_2<TKey,TValue>>*>  value) ;

constexpr ::ArrayW<::IntervalTree::RangeValuePair_2<TKey,TValue>,::Array<::IntervalTree::RangeValuePair_2<TKey,TValue>>*>& __get_items() ;

constexpr ::ArrayW<::IntervalTree::RangeValuePair_2<TKey,TValue>,::Array<::IntervalTree::RangeValuePair_2<TKey,TValue>>*> const& __get_items() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<TKey>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<TKey>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<TKey>*> __get_comparer() const;

static inline ::IntervalTree::IntervalTreeNode_2<TKey,TValue>* New_ctor(::System::Collections::Generic::IComparer_1<TKey>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IComparer_1<TKey>*  comparer) ;

static inline ::IntervalTree::IntervalTreeNode_2<TKey,TValue>* New_ctor(::System::Collections::Generic::IList_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>*  items, ::System::Collections::Generic::IComparer_1<TKey>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IList_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>*  items, ::System::Collections::Generic::IComparer_1<TKey>*  comparer) ;

/// @brief Method Query addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<TValue>* Query(TKey  value) ;

/// @brief Method Query addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::List_1<TValue>* Query(TKey  from, TKey  to) ;

/// @brief Method QueryClosestPrev addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<TValue>* QueryClosestPrev(TKey  value) ;

/// @brief Method GetClosestNodeTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::IntervalTree::IntervalTreeNode_2<TKey,TValue>* GetClosestNodeTo(TKey  key) ;

/// @brief Method System.Collections.Generic.IComparer<IntervalTree.RangeValuePair<TKey,TValue>>.Compare addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t System_Collections_Generic_IComparer_IntervalTree_RangeValuePair_TKey_TValue___Compare(::IntervalTree::RangeValuePair_2<TKey,TValue>  x, ::IntervalTree::RangeValuePair_2<TKey,TValue>  y) ;

/// @brief Method get_Max addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Max() ;

/// @brief Method get_Min addr 0x0 size 0xffffffffffffffff virtual false final false
inline TKey get_Min() ;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTreeNode_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntervalTreeNode_2(IntervalTreeNode_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntervalTreeNode_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntervalTreeNode_2(IntervalTreeNode_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IntervalTreeNode_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IntervalTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IntervalTree::IntervalTreeNode_2, "IntervalTree", "IntervalTreeNode`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IntervalTree::__IntervalTreeNode_2____c, "IntervalTree", "IntervalTreeNode`2/<>c");
