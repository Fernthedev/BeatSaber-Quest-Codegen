#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(KdTreeNode_2)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template<typename TKey,typename TValue>
class KdTreeNode_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class KdTreeNode_2<TKey,TValue>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<>
class KdTreeNode_2<float_t,int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2);
// Type: UnityEngine.ProBuilder.KdTree::KdTreeNode`2
// Type: UnityEngine.ProBuilder.KdTree::KdTreeNode`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15919))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15919), inst: 5949 })
// CS Name: ::UnityEngine.ProBuilder.KdTree::KdTreeNode`2<TKey,TValue>*
class CORDL_TYPE KdTreeNode_2<float_t,int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field Point offset 0x10
 __declspec(property(get=__get_Point, put=__set_Point)) ::ArrayW<float_t,::Array<float_t>*>  Point;

/// @brief Field Value offset 0x18
 __declspec(property(get=__get_Value, put=__set_Value)) int32_t  Value;

/// @brief Field Duplicates offset 0x20
 __declspec(property(get=__get_Duplicates, put=__set_Duplicates)) ::System::Collections::Generic::List_1<int32_t>*  Duplicates;

/// @brief Field LeftChild offset 0x28
 __declspec(property(get=__get_LeftChild, put=__set_LeftChild)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  LeftChild;

/// @brief Field RightChild offset 0x30
 __declspec(property(get=__get_RightChild, put=__set_RightChild)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  RightChild;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  Item[];

 __declspec(property(get=get_IsLeaf)) bool  IsLeaf;

constexpr void __set_Point(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_Point() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_Point() const;

constexpr void __set_Value(int32_t  value) ;

constexpr int32_t& __get_Value() ;

constexpr int32_t const& __get_Value() const;

constexpr void __set_Duplicates(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::List_1<int32_t>* __get_Duplicates() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> __get_Duplicates() const;

constexpr void __set_LeftChild(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>* __get_LeftChild() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*> __get_LeftChild() const;

constexpr void __set_RightChild(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>* __get_RightChild() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*> __get_RightChild() const;

static inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>* New_ctor(::ArrayW<float_t,::Array<float_t>*>  point, int32_t  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<float_t,::Array<float_t>*>  point, int32_t  value) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>* get_Item(int32_t  compare) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  compare, ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  value) ;

/// @brief Method get_IsLeaf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsLeaf() ;

/// @brief Method AddDuplicate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddDuplicate(int32_t  value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "KdTreeNode_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KdTreeNode_2(KdTreeNode_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KdTreeNode_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KdTreeNode_2(KdTreeNode_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KdTreeNode_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: UnityEngine.ProBuilder.KdTree::KdTreeNode`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15919)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15919), inst: 81 })
// CS Name: ::UnityEngine.ProBuilder.KdTree::KdTreeNode`2<TKey,TValue>*
class CORDL_TYPE KdTreeNode_2<TKey,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field Point offset 0x10
 __declspec(property(get=__get_Point, put=__set_Point)) ::ArrayW<TKey,::Array<TKey>*>  Point;

/// @brief Field Value offset 0x18
 __declspec(property(get=__get_Value, put=__set_Value)) TValue  Value;

/// @brief Field Duplicates offset 0x20
 __declspec(property(get=__get_Duplicates, put=__set_Duplicates)) ::System::Collections::Generic::List_1<TValue>*  Duplicates;

/// @brief Field LeftChild offset 0x28
 __declspec(property(get=__get_LeftChild, put=__set_LeftChild)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  LeftChild;

/// @brief Field RightChild offset 0x30
 __declspec(property(get=__get_RightChild, put=__set_RightChild)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  RightChild;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  Item[];

 __declspec(property(get=get_IsLeaf)) bool  IsLeaf;

constexpr void __set_Point(::ArrayW<TKey,::Array<TKey>*>  value) ;

constexpr ::ArrayW<TKey,::Array<TKey>*>& __get_Point() ;

constexpr ::ArrayW<TKey,::Array<TKey>*> const& __get_Point() const;

constexpr void __set_Value(TValue  value) ;

constexpr TValue& __get_Value() ;

constexpr TValue const& __get_Value() const;

constexpr void __set_Duplicates(::System::Collections::Generic::List_1<TValue>*  value) ;

constexpr ::System::Collections::Generic::List_1<TValue>* __get_Duplicates() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<TValue>*> __get_Duplicates() const;

constexpr void __set_LeftChild(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>* __get_LeftChild() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*> __get_LeftChild() const;

constexpr void __set_RightChild(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>* __get_RightChild() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*> __get_RightChild() const;

static inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>* New_ctor(::ArrayW<TKey,::Array<TKey>*>  point, TValue  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<TKey,::Array<TKey>*>  point, TValue  value) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>* get_Item(int32_t  compare) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  compare, ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  value) ;

/// @brief Method get_IsLeaf addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsLeaf() ;

/// @brief Method AddDuplicate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddDuplicate(TValue  value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "KdTreeNode_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KdTreeNode_2(KdTreeNode_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KdTreeNode_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KdTreeNode_2(KdTreeNode_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KdTreeNode_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2, "UnityEngine.ProBuilder.KdTree", "KdTreeNode`2");
