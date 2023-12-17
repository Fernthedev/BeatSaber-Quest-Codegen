#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LinkedListNode_1)
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine::ResourceManagement::Util {
struct __DelayedActionManager__DelegateInfo;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__DeviceToFree;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
class LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T3_cordlgen_2>
class LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>;
}
namespace System::Collections::Generic {
template<>
class LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>;
}
namespace System::Collections::Generic {
template<>
class LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
class LinkedListNode_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::LinkedListNode_1);
// Type: System.Collections.Generic::LinkedListNode`1
// Type: System.Collections.Generic::LinkedListNode`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1,::il2cpp_utils::il2cpp_reference_type T3_cordlgen_2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9535)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9535), inst: 7239 })
// CS Name: ::System.Collections.Generic::LinkedListNode`1<T>*
class CORDL_TYPE LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field list offset 0x10
 __declspec(property(get=__get_list, put=__set_list)) ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  list;

/// @brief Field next offset 0x18
 __declspec(property(get=__get_next, put=__set_next)) ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  next;

/// @brief Field prev offset 0x20
 __declspec(property(get=__get_prev, put=__set_prev)) ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  prev;

/// @brief Field item offset 0x28
 __declspec(property(get=__get_item, put=__set_item)) ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  item;

 __declspec(property(get=get_List)) ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  List;

 __declspec(property(get=get_Next)) ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  Next;

 __declspec(property(get=get_Previous)) ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  Previous;

 __declspec(property(get=get_Value, put=set_Value)) ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  Value;

constexpr void __set_list(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  value) ;

constexpr ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* __get_list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*> __get_list() const;

constexpr void __set_next(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*> __get_next() const;

constexpr void __set_prev(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* __get_prev() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*> __get_prev() const;

constexpr void __set_item(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value) ;

constexpr ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>& __get_item() ;

constexpr ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2> const& __get_item() const;

static inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* New_ctor(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value) ;

static inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* New_ctor(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  list, ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>*  list, ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value) ;

/// @brief Method get_List addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* get_List() ;

/// @brief Method get_Next addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* get_Next() ;

/// @brief Method get_Previous addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>>* get_Previous() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2> get_Value() ;

/// @brief Method set_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Value(::System::ValueTuple_3<T1_cordlgen_0,T2_cordlgen_1,T3_cordlgen_2>  value) ;

/// @brief Method Invalidate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invalidate() ;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkedListNode_1(LinkedListNode_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkedListNode_1(LinkedListNode_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LinkedListNode_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedListNode`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0,::il2cpp_utils::il2cpp_reference_type T2_cordlgen_1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9535))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9535), inst: 5059 })
// CS Name: ::System.Collections.Generic::LinkedListNode`1<T>*
class CORDL_TYPE LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field list offset 0x10
 __declspec(property(get=__get_list, put=__set_list)) ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  list;

/// @brief Field next offset 0x18
 __declspec(property(get=__get_next, put=__set_next)) ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  next;

/// @brief Field prev offset 0x20
 __declspec(property(get=__get_prev, put=__set_prev)) ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  prev;

/// @brief Field item offset 0x28
 __declspec(property(get=__get_item, put=__set_item)) ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  item;

 __declspec(property(get=get_List)) ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  List;

 __declspec(property(get=get_Next)) ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  Next;

 __declspec(property(get=get_Previous)) ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  Previous;

 __declspec(property(get=get_Value, put=set_Value)) ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  Value;

constexpr void __set_list(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  value) ;

constexpr ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* __get_list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*> __get_list() const;

constexpr void __set_next(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*> __get_next() const;

constexpr void __set_prev(::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* __get_prev() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*> __get_prev() const;

constexpr void __set_item(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

constexpr ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>& __get_item() ;

constexpr ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> const& __get_item() const;

static inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

static inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* New_ctor(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  list, ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>*  list, ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

/// @brief Method get_List addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* get_List() ;

/// @brief Method get_Next addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* get_Next() ;

/// @brief Method get_Previous addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>>* get_Previous() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1> get_Value() ;

/// @brief Method set_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Value(::System::ValueTuple_2<T1_cordlgen_0,T2_cordlgen_1>  value) ;

/// @brief Method Invalidate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invalidate() ;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkedListNode_1(LinkedListNode_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkedListNode_1(LinkedListNode_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LinkedListNode_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedListNode`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9535))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9535), inst: 3977 })
// CS Name: ::System.Collections.Generic::LinkedListNode`1<T>*
class CORDL_TYPE LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field list offset 0x10
 __declspec(property(get=__get_list, put=__set_list)) ::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  list;

/// @brief Field next offset 0x18
 __declspec(property(get=__get_next, put=__set_next)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  next;

/// @brief Field prev offset 0x20
 __declspec(property(get=__get_prev, put=__set_prev)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  prev;

/// @brief Field item offset 0x28
 __declspec(property(get=__get_item, put=__set_item)) ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  item;

 __declspec(property(get=get_List)) ::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  List;

 __declspec(property(get=get_Next)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  Next;

 __declspec(property(get=get_Previous)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  Previous;

 __declspec(property(get=get_Value, put=set_Value)) ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  Value;

constexpr void __set_list(::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  value) ;

constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* __get_list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*> __get_list() const;

constexpr void __set_next(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*> __get_next() const;

constexpr void __set_prev(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* __get_prev() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*> __get_prev() const;

constexpr void __set_item(::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  value) ;

constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree& __get_item() ;

constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree const& __get_item() const;

static inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* New_ctor(::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  value) ;

static inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* New_ctor(::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  list, ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>*  list, ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  value) ;

/// @brief Method get_List addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* get_List() ;

/// @brief Method get_Next addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* get_Next() ;

/// @brief Method get_Previous addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* get_Previous() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree get_Value() ;

/// @brief Method set_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Value(::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree  value) ;

/// @brief Method Invalidate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invalidate() ;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkedListNode_1(LinkedListNode_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkedListNode_1(LinkedListNode_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LinkedListNode_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedListNode`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9535))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9535), inst: 3970 })
// CS Name: ::System.Collections.Generic::LinkedListNode`1<T>*
class CORDL_TYPE LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field list offset 0x10
 __declspec(property(get=__get_list, put=__set_list)) ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  list;

/// @brief Field next offset 0x18
 __declspec(property(get=__get_next, put=__set_next)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  next;

/// @brief Field prev offset 0x20
 __declspec(property(get=__get_prev, put=__set_prev)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  prev;

/// @brief Field item offset 0x28
 __declspec(property(get=__get_item, put=__set_item)) ::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  item;

 __declspec(property(get=get_List)) ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  List;

 __declspec(property(get=get_Next)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  Next;

 __declspec(property(get=get_Previous)) ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  Previous;

 __declspec(property(get=get_Value, put=set_Value)) ::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  Value;

constexpr void __set_list(::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  value) ;

constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* __get_list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*> __get_list() const;

constexpr void __set_next(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*> __get_next() const;

constexpr void __set_prev(::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* __get_prev() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*> __get_prev() const;

constexpr void __set_item(::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  value) ;

constexpr ::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo& __get_item() ;

constexpr ::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo const& __get_item() const;

static inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* New_ctor(::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  value) ;

static inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* New_ctor(::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  list, ::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>*  list, ::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  value) ;

/// @brief Method get_List addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* get_List() ;

/// @brief Method get_Next addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* get_Next() ;

/// @brief Method get_Previous addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo>* get_Previous() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo get_Value() ;

/// @brief Method set_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Value(::UnityEngine::ResourceManagement::Util::__DelayedActionManager__DelegateInfo  value) ;

/// @brief Method Invalidate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invalidate() ;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkedListNode_1(LinkedListNode_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkedListNode_1(LinkedListNode_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LinkedListNode_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::LinkedListNode`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9535)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9535), inst: 2 })
// CS Name: ::System.Collections.Generic::LinkedListNode`1<T>*
class CORDL_TYPE LinkedListNode_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field list offset 0x10
 __declspec(property(get=__get_list, put=__set_list)) ::System::Collections::Generic::LinkedList_1<T>*  list;

/// @brief Field next offset 0x18
 __declspec(property(get=__get_next, put=__set_next)) ::System::Collections::Generic::LinkedListNode_1<T>*  next;

/// @brief Field prev offset 0x20
 __declspec(property(get=__get_prev, put=__set_prev)) ::System::Collections::Generic::LinkedListNode_1<T>*  prev;

/// @brief Field item offset 0x28
 __declspec(property(get=__get_item, put=__set_item)) T  item;

 __declspec(property(get=get_List)) ::System::Collections::Generic::LinkedList_1<T>*  List;

 __declspec(property(get=get_Next)) ::System::Collections::Generic::LinkedListNode_1<T>*  Next;

 __declspec(property(get=get_Previous)) ::System::Collections::Generic::LinkedListNode_1<T>*  Previous;

 __declspec(property(get=get_Value, put=set_Value)) T  Value;

constexpr void __set_list(::System::Collections::Generic::LinkedList_1<T>*  value) ;

constexpr ::System::Collections::Generic::LinkedList_1<T>* __get_list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<T>*> __get_list() const;

constexpr void __set_next(::System::Collections::Generic::LinkedListNode_1<T>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<T>* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<T>*> __get_next() const;

constexpr void __set_prev(::System::Collections::Generic::LinkedListNode_1<T>*  value) ;

constexpr ::System::Collections::Generic::LinkedListNode_1<T>* __get_prev() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedListNode_1<T>*> __get_prev() const;

constexpr void __set_item(T  value) ;

constexpr T& __get_item() ;

constexpr T const& __get_item() const;

static inline ::System::Collections::Generic::LinkedListNode_1<T>* New_ctor(T  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T  value) ;

static inline ::System::Collections::Generic::LinkedListNode_1<T>* New_ctor(::System::Collections::Generic::LinkedList_1<T>*  list, T  value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::LinkedList_1<T>*  list, T  value) ;

/// @brief Method get_List addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedList_1<T>* get_List() ;

/// @brief Method get_Next addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<T>* get_Next() ;

/// @brief Method get_Previous addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<T>* get_Previous() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_Value() ;

/// @brief Method set_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Value(T  value) ;

/// @brief Method Invalidate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invalidate() ;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkedListNode_1(LinkedListNode_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNode_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkedListNode_1(LinkedListNode_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LinkedListNode_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::LinkedListNode_1, "System.Collections.Generic", "LinkedListNode`1");
