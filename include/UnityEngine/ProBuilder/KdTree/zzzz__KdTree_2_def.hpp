#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(KdTree_2)
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TKey,typename TValue>
class __KdTree_2___GetEnumerator_d__33;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TKey,typename TValue>
class IKdTree_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TKey,typename TValue>
class __KdTree_2____c__DisplayClass33_0;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::ProBuilder::KdTree {
struct AddDuplicateBehavior;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TDistance>
class NearestNeighbourList_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename T>
struct HyperRect_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TKey,typename TValue>
class KdTreeNode_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename T>
class ITypeMath_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template<typename TKey,typename TValue>
class KdTree_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TKey,typename TValue>
class __KdTree_2___GetEnumerator_d__33;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TKey,typename TValue>
class __KdTree_2____c__DisplayClass33_0;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class KdTree_2<TKey,TValue>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<>
class KdTree_2<float_t,int32_t>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class __KdTree_2___GetEnumerator_d__33<TKey,TValue>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<>
class __KdTree_2___GetEnumerator_d__33<float_t,int32_t>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
class __KdTree_2____c__DisplayClass33_0<TKey,TValue>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<>
class __KdTree_2____c__DisplayClass33_0<float_t,int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::KdTree_2);
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::__KdTree_2___GetEnumerator_d__33);
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::__KdTree_2____c__DisplayClass33_0);
// Type: ::<>c__DisplayClass33_0
// Type: ::<GetEnumerator>d__33
// Type: UnityEngine.ProBuilder.KdTree::KdTree`2
// Type: ::<>c__DisplayClass33_0
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15916)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15916), inst: 5949 })
// CS Name: ::KdTree`2::<>c__DisplayClass33_0<TKey,TValue>*
class CORDL_TYPE __KdTree_2____c__DisplayClass33_0<float_t,int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field left offset 0x10
 __declspec(property(get=__get_left, put=__set_left)) ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*  left;

/// @brief Field right offset 0x18
 __declspec(property(get=__get_right, put=__set_right)) ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*  right;

constexpr void __set_left(::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>* __get_left() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*> __get_left() const;

constexpr void __set_right(::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>* __get_right() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*> __get_right() const;

static inline ::UnityEngine::ProBuilder::KdTree::__KdTree_2____c__DisplayClass33_0<float_t,int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <GetEnumerator>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _GetEnumerator_b__0(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  node) ;

/// @brief Method <GetEnumerator>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _GetEnumerator_b__1(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  node) ;

// Ctor Parameters [CppParam { name: "", ty: "__KdTree_2____c__DisplayClass33_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__KdTree_2____c__DisplayClass33_0(__KdTree_2____c__DisplayClass33_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__KdTree_2____c__DisplayClass33_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__KdTree_2____c__DisplayClass33_0(__KdTree_2____c__DisplayClass33_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __KdTree_2____c__DisplayClass33_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: ::<>c__DisplayClass33_0
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15916)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15916), inst: 81 })
// CS Name: ::KdTree`2::<>c__DisplayClass33_0<TKey,TValue>*
class CORDL_TYPE __KdTree_2____c__DisplayClass33_0<TKey,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field left offset 0x10
 __declspec(property(get=__get_left, put=__set_left)) ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*  left;

/// @brief Field right offset 0x18
 __declspec(property(get=__get_right, put=__set_right)) ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*  right;

constexpr void __set_left(::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>* __get_left() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*> __get_left() const;

constexpr void __set_right(::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>* __get_right() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*> __get_right() const;

static inline ::UnityEngine::ProBuilder::KdTree::__KdTree_2____c__DisplayClass33_0<TKey,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <GetEnumerator>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _GetEnumerator_b__0(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  node) ;

/// @brief Method <GetEnumerator>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _GetEnumerator_b__1(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  node) ;

// Ctor Parameters [CppParam { name: "", ty: "__KdTree_2____c__DisplayClass33_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__KdTree_2____c__DisplayClass33_0(__KdTree_2____c__DisplayClass33_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__KdTree_2____c__DisplayClass33_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__KdTree_2____c__DisplayClass33_0(__KdTree_2____c__DisplayClass33_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __KdTree_2____c__DisplayClass33_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: ::<GetEnumerator>d__33
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15917))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15917), inst: 5949 })
// CS Name: ::KdTree`2::<GetEnumerator>d__33<TKey,TValue>*
class CORDL_TYPE __KdTree_2___GetEnumerator_d__33<float_t,int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>*  __4__this;

/// @brief Field <>8__1 offset 0x28
 __declspec(property(get=__get___8__1, put=__set___8__1)) ::UnityEngine::ProBuilder::KdTree::__KdTree_2____c__DisplayClass33_0<float_t,int32_t>*  __8__1;

/// @brief Field <addLeft>5__2 offset 0x30
 __declspec(property(get=__get__addLeft_5__2, put=__set__addLeft_5__2)) ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*  _addLeft_5__2;

/// @brief Field <addRight>5__3 offset 0x38
 __declspec(property(get=__get__addRight_5__3, put=__set__addRight_5__3)) ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*  _addRight_5__3;

 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey_TValue___get_Current)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey_TValue___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*> __get___2__current() const;

constexpr void __set___4__this(::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>*> __get___4__this() const;

constexpr void __set___8__1(::UnityEngine::ProBuilder::KdTree::__KdTree_2____c__DisplayClass33_0<float_t,int32_t>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::__KdTree_2____c__DisplayClass33_0<float_t,int32_t>* __get___8__1() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::__KdTree_2____c__DisplayClass33_0<float_t,int32_t>*> __get___8__1() const;

constexpr void __set__addLeft_5__2(::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>* __get__addLeft_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*> __get__addLeft_5__2() const;

constexpr void __set__addRight_5__3(::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>* __get__addRight_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*> __get__addRight_5__3() const;

static inline ::UnityEngine::ProBuilder::KdTree::__KdTree_2___GetEnumerator_d__33<float_t,int32_t>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.ProBuilder.KdTree.KdTreeNode<TKey,TValue>>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>* System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey_TValue___get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__KdTree_2___GetEnumerator_d__33", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__KdTree_2___GetEnumerator_d__33(__KdTree_2___GetEnumerator_d__33 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__KdTree_2___GetEnumerator_d__33", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__KdTree_2___GetEnumerator_d__33(__KdTree_2___GetEnumerator_d__33 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __KdTree_2___GetEnumerator_d__33()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: ::<GetEnumerator>d__33
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15917))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15917), inst: 81 })
// CS Name: ::KdTree`2::<GetEnumerator>d__33<TKey,TValue>*
class CORDL_TYPE __KdTree_2___GetEnumerator_d__33<TKey,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue>*  __4__this;

/// @brief Field <>8__1 offset 0x28
 __declspec(property(get=__get___8__1, put=__set___8__1)) ::UnityEngine::ProBuilder::KdTree::__KdTree_2____c__DisplayClass33_0<TKey,TValue>*  __8__1;

/// @brief Field <addLeft>5__2 offset 0x30
 __declspec(property(get=__get__addLeft_5__2, put=__set__addLeft_5__2)) ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*  _addLeft_5__2;

/// @brief Field <addRight>5__3 offset 0x38
 __declspec(property(get=__get__addRight_5__3, put=__set__addRight_5__3)) ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*  _addRight_5__3;

 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey_TValue___get_Current)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey_TValue___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*> __get___2__current() const;

constexpr void __set___4__this(::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue>*> __get___4__this() const;

constexpr void __set___8__1(::UnityEngine::ProBuilder::KdTree::__KdTree_2____c__DisplayClass33_0<TKey,TValue>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::__KdTree_2____c__DisplayClass33_0<TKey,TValue>* __get___8__1() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::__KdTree_2____c__DisplayClass33_0<TKey,TValue>*> __get___8__1() const;

constexpr void __set__addLeft_5__2(::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>* __get__addLeft_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*> __get__addLeft_5__2() const;

constexpr void __set__addRight_5__3(::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>* __get__addRight_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*> __get__addRight_5__3() const;

static inline ::UnityEngine::ProBuilder::KdTree::__KdTree_2___GetEnumerator_d__33<TKey,TValue>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.ProBuilder.KdTree.KdTreeNode<TKey,TValue>>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>* System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey_TValue___get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__KdTree_2___GetEnumerator_d__33", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__KdTree_2___GetEnumerator_d__33(__KdTree_2___GetEnumerator_d__33 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__KdTree_2___GetEnumerator_d__33", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__KdTree_2___GetEnumerator_d__33(__KdTree_2___GetEnumerator_d__33 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __KdTree_2___GetEnumerator_d__33()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: UnityEngine.ProBuilder.KdTree::KdTree`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15918)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15918), inst: 5949 })
// CS Name: ::UnityEngine.ProBuilder.KdTree::KdTree`2<TKey,TValue>*
class CORDL_TYPE KdTree_2<float_t,int32_t> : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__33 = ::UnityEngine::ProBuilder::KdTree::__KdTree_2___GetEnumerator_d__33<float_t, int32_t>;

using __c__DisplayClass33_0 = ::UnityEngine::ProBuilder::KdTree::__KdTree_2____c__DisplayClass33_0<float_t, int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field dimensions offset 0x10
 __declspec(property(get=__get_dimensions, put=__set_dimensions)) int32_t  dimensions;

/// @brief Field typeMath offset 0x18
 __declspec(property(get=__get_typeMath, put=__set_typeMath)) ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  typeMath;

/// @brief Field root offset 0x20
 __declspec(property(get=__get_root, put=__set_root)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  root;

/// @brief Field <AddDuplicateBehavior>k__BackingField offset 0x28
 __declspec(property(get=__get__AddDuplicateBehavior_k__BackingField, put=__set__AddDuplicateBehavior_k__BackingField)) ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior  _AddDuplicateBehavior_k__BackingField;

/// @brief Field <Count>k__BackingField offset 0x2c
 __declspec(property(get=__get__Count_k__BackingField, put=__set__Count_k__BackingField)) int32_t  _Count_k__BackingField;

 __declspec(property(get=get_AddDuplicateBehavior, put=set_AddDuplicateBehavior)) ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior  AddDuplicateBehavior;

 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

/// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::IKdTree_2<float_t,int32_t>"
constexpr operator  ::UnityEngine::ProBuilder::KdTree::IKdTree_2<float_t,int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set_dimensions(int32_t  value) ;

constexpr int32_t& __get_dimensions() ;

constexpr int32_t const& __get_dimensions() const;

constexpr void __set_typeMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>* __get_typeMath() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*> __get_typeMath() const;

constexpr void __set_root(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>* __get_root() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*> __get_root() const;

constexpr void __set__AddDuplicateBehavior_k__BackingField(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior& __get__AddDuplicateBehavior_k__BackingField() ;

constexpr ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const& __get__AddDuplicateBehavior_k__BackingField() const;

constexpr void __set__Count_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__Count_k__BackingField() ;

constexpr int32_t const& __get__Count_k__BackingField() const;

static inline ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>* New_ctor(int32_t  dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  typeMath) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  typeMath) ;

static inline ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>* New_ctor(int32_t  dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  typeMath, ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior  addDuplicateBehavior) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  typeMath, ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior  addDuplicateBehavior) ;

/// @brief Method get_AddDuplicateBehavior addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior get_AddDuplicateBehavior() ;

/// @brief Method set_AddDuplicateBehavior addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_AddDuplicateBehavior(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior  value) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Add(::ArrayW<float_t,::Array<float_t>*>  point, int32_t  value) ;

/// @brief Method ReadChildNodes addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ReadChildNodes(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  removedNode) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
inline void RemoveAt(::ArrayW<float_t,::Array<float_t>*>  point) ;

/// @brief Method GetNearestNeighbours addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*,::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*> GetNearestNeighbours(::ArrayW<float_t,::Array<float_t>*>  point, int32_t  count) ;

/// @brief Method AddNearestNeighbours addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddNearestNeighbours(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  node, ::ArrayW<float_t,::Array<float_t>*>  target, ::UnityEngine::ProBuilder::KdTree::HyperRect_1<float_t>  rect, int32_t  depth, ::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*,float_t>*  nearestNeighbours, float_t  maxSearchRadiusSquared) ;

/// @brief Method RadialSearch addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*,::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*> RadialSearch(::ArrayW<float_t,::Array<float_t>*>  center, float_t  radius, int32_t  count) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method set_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Count(int32_t  value) ;

/// @brief Method TryFindValueAt addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool TryFindValueAt(::ArrayW<float_t,::Array<float_t>*>  point, ByRef<int32_t>  value) ;

/// @brief Method FindValueAt addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t FindValueAt(::ArrayW<float_t,::Array<float_t>*>  point) ;

/// @brief Method TryFindValue addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool TryFindValue(int32_t  value, ByRef<::ArrayW<float_t,::Array<float_t>*>>  point) ;

/// @brief Method FindValue addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::ArrayW<float_t,::Array<float_t>*> FindValue(int32_t  value) ;

/// @brief Method AddNodeToStringBuilder addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddNodeToStringBuilder(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  node, ::System::Text::StringBuilder*  sb, int32_t  depth) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method AddNodesToList addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddNodesToList(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  node, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*  nodes) ;

/// @brief Method SortNodesArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SortNodesArray(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*,::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*>  nodes, int32_t  byDimension, int32_t  fromIndex, int32_t  toIndex) ;

/// @brief Method AddNodesBalanced addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddNodesBalanced(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*,::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>*>  nodes, int32_t  byDimension, int32_t  fromIndex, int32_t  toIndex) ;

/// @brief Method Balance addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Balance() ;

/// @brief Method RemoveChildNodes addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveChildNodes(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*  node) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method SaveToFile addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SaveToFile(::StringW  filename) ;

/// @brief Method LoadFromFile addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>* LoadFromFile(::StringW  filename) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>*>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "KdTree_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KdTree_2(KdTree_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KdTree_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KdTree_2(KdTree_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KdTree_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: UnityEngine.ProBuilder.KdTree::KdTree`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15918)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15918), inst: 81 })
// CS Name: ::UnityEngine.ProBuilder.KdTree::KdTree`2<TKey,TValue>*
class CORDL_TYPE KdTree_2<TKey,TValue> : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__33 = ::UnityEngine::ProBuilder::KdTree::__KdTree_2___GetEnumerator_d__33<TKey, TValue>;

using __c__DisplayClass33_0 = ::UnityEngine::ProBuilder::KdTree::__KdTree_2____c__DisplayClass33_0<TKey, TValue>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field dimensions offset 0x10
 __declspec(property(get=__get_dimensions, put=__set_dimensions)) int32_t  dimensions;

/// @brief Field typeMath offset 0x18
 __declspec(property(get=__get_typeMath, put=__set_typeMath)) ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>*  typeMath;

/// @brief Field root offset 0x20
 __declspec(property(get=__get_root, put=__set_root)) ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  root;

/// @brief Field <AddDuplicateBehavior>k__BackingField offset 0x28
 __declspec(property(get=__get__AddDuplicateBehavior_k__BackingField, put=__set__AddDuplicateBehavior_k__BackingField)) ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior  _AddDuplicateBehavior_k__BackingField;

/// @brief Field <Count>k__BackingField offset 0x2c
 __declspec(property(get=__get__Count_k__BackingField, put=__set__Count_k__BackingField)) int32_t  _Count_k__BackingField;

 __declspec(property(get=get_AddDuplicateBehavior, put=set_AddDuplicateBehavior)) ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior  AddDuplicateBehavior;

 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

/// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>"
constexpr operator  ::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set_dimensions(int32_t  value) ;

constexpr int32_t& __get_dimensions() ;

constexpr int32_t const& __get_dimensions() const;

constexpr void __set_typeMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* __get_typeMath() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>*> __get_typeMath() const;

constexpr void __set_root(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>* __get_root() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*> __get_root() const;

constexpr void __set__AddDuplicateBehavior_k__BackingField(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior  value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior& __get__AddDuplicateBehavior_k__BackingField() ;

constexpr ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const& __get__AddDuplicateBehavior_k__BackingField() const;

constexpr void __set__Count_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__Count_k__BackingField() ;

constexpr int32_t const& __get__Count_k__BackingField() const;

static inline ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue>* New_ctor(int32_t  dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>*  typeMath) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>*  typeMath) ;

static inline ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue>* New_ctor(int32_t  dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>*  typeMath, ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior  addDuplicateBehavior) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>*  typeMath, ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior  addDuplicateBehavior) ;

/// @brief Method get_AddDuplicateBehavior addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior get_AddDuplicateBehavior() ;

/// @brief Method set_AddDuplicateBehavior addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_AddDuplicateBehavior(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior  value) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Add(::ArrayW<TKey,::Array<TKey>*>  point, TValue  value) ;

/// @brief Method ReadChildNodes addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ReadChildNodes(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  removedNode) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
inline void RemoveAt(::ArrayW<TKey,::Array<TKey>*>  point) ;

/// @brief Method GetNearestNeighbours addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*,::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*> GetNearestNeighbours(::ArrayW<TKey,::Array<TKey>*>  point, int32_t  count) ;

/// @brief Method AddNearestNeighbours addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddNearestNeighbours(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  node, ::ArrayW<TKey,::Array<TKey>*>  target, ::UnityEngine::ProBuilder::KdTree::HyperRect_1<TKey>  rect, int32_t  depth, ::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*,TKey>*  nearestNeighbours, TKey  maxSearchRadiusSquared) ;

/// @brief Method RadialSearch addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*,::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*> RadialSearch(::ArrayW<TKey,::Array<TKey>*>  center, TKey  radius, int32_t  count) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method set_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Count(int32_t  value) ;

/// @brief Method TryFindValueAt addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool TryFindValueAt(::ArrayW<TKey,::Array<TKey>*>  point, ByRef<TValue>  value) ;

/// @brief Method FindValueAt addr 0x0 size 0xffffffffffffffff virtual true final true
inline TValue FindValueAt(::ArrayW<TKey,::Array<TKey>*>  point) ;

/// @brief Method TryFindValue addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool TryFindValue(TValue  value, ByRef<::ArrayW<TKey,::Array<TKey>*>>  point) ;

/// @brief Method FindValue addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::ArrayW<TKey,::Array<TKey>*> FindValue(TValue  value) ;

/// @brief Method AddNodeToStringBuilder addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddNodeToStringBuilder(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  node, ::System::Text::StringBuilder*  sb, int32_t  depth) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method AddNodesToList addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddNodesToList(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  node, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*  nodes) ;

/// @brief Method SortNodesArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SortNodesArray(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*,::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*>  nodes, int32_t  byDimension, int32_t  fromIndex, int32_t  toIndex) ;

/// @brief Method AddNodesBalanced addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddNodesBalanced(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*,::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*>  nodes, int32_t  byDimension, int32_t  fromIndex, int32_t  toIndex) ;

/// @brief Method Balance addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Balance() ;

/// @brief Method RemoveChildNodes addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveChildNodes(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*  node) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method SaveToFile addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SaveToFile(::StringW  filename) ;

/// @brief Method LoadFromFile addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue>* LoadFromFile(::StringW  filename) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "KdTree_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KdTree_2(KdTree_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KdTree_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KdTree_2(KdTree_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KdTree_2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::KdTree_2, "UnityEngine.ProBuilder.KdTree", "KdTree`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::__KdTree_2___GetEnumerator_d__33, "UnityEngine.ProBuilder.KdTree", "KdTree`2/<GetEnumerator>d__33");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::__KdTree_2____c__DisplayClass33_0, "UnityEngine.ProBuilder.KdTree", "KdTree`2/<>c__DisplayClass33_0");
