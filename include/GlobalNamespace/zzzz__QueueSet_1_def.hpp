#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QueueSet_1)
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class QueueSet_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class QueueSet_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::QueueSet_1);
// Type: ::QueueSet`1
// Type: ::QueueSet`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15822)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15822), inst: 2 })
// CS Name: ::QueueSet`1<T>*
class CORDL_TYPE QueueSet_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _linkedList offset 0x10
 __declspec(property(get=__get__linkedList, put=__set__linkedList)) ::System::Collections::Generic::LinkedList_1<T>*  _linkedList;

/// @brief Field _set offset 0x18
 __declspec(property(get=__get__set, put=__set__set)) ::System::Collections::Generic::HashSet_1<T>*  _set;

 __declspec(property(get=get_Count)) int32_t  Count;

constexpr void __set__linkedList(::System::Collections::Generic::LinkedList_1<T>*  value) ;

constexpr ::System::Collections::Generic::LinkedList_1<T>* __get__linkedList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<T>*> __get__linkedList() const;

constexpr void __set__set(::System::Collections::Generic::HashSet_1<T>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<T>* __get__set() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> __get__set() const;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Count() ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(T  item) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Dequeue() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

static inline ::GlobalNamespace::QueueSet_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "QueueSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QueueSet_1(QueueSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QueueSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QueueSet_1(QueueSet_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 QueueSet_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::QueueSet_1, "", "QueueSet`1");
