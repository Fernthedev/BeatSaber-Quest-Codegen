#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleMemoryPool_1)
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class SimpleMemoryPool_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class SimpleMemoryPool_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::SimpleMemoryPool_1);
// Type: ::SimpleMemoryPool`1
// Type: ::SimpleMemoryPool`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14340))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14340), inst: 2 })
// CS Name: ::SimpleMemoryPool`1<T>*
class CORDL_TYPE SimpleMemoryPool_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _activeElements offset 0x10
 __declspec(property(get=__get__activeElements, put=__set__activeElements)) ::GlobalNamespace::LazyCopyHashSet_1<T>*  _activeElements;

/// @brief Field _inactiveElements offset 0x18
 __declspec(property(get=__get__inactiveElements, put=__set__inactiveElements)) ::System::Collections::Generic::List_1<T>*  _inactiveElements;

/// @brief Field _createNewItemFunc offset 0x20
 __declspec(property(get=__get__createNewItemFunc, put=__set__createNewItemFunc)) ::System::Func_1<T>*  _createNewItemFunc;

 __declspec(property(get=get_items)) ::System::Collections::Generic::List_1<T>*  items;

constexpr void __set__activeElements(::GlobalNamespace::LazyCopyHashSet_1<T>*  value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<T>* __get__activeElements() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<T>*> __get__activeElements() const;

constexpr void __set__inactiveElements(::System::Collections::Generic::List_1<T>*  value) ;

constexpr ::System::Collections::Generic::List_1<T>* __get__inactiveElements() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> __get__inactiveElements() const;

constexpr void __set__createNewItemFunc(::System::Func_1<T>*  value) ;

constexpr ::System::Func_1<T>* __get__createNewItemFunc() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> __get__createNewItemFunc() const;

/// @brief Method get_items addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::List_1<T>* get_items() ;

static inline ::GlobalNamespace::SimpleMemoryPool_1<T>* New_ctor(int32_t  startCapacity, ::System::Func_1<T>*  createNewItemFunc) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  startCapacity, ::System::Func_1<T>*  createNewItemFunc) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Spawn() ;

/// @brief Method Despawn addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Despawn(T  item) ;

// Ctor Parameters [CppParam { name: "", ty: "SimpleMemoryPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleMemoryPool_1(SimpleMemoryPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleMemoryPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleMemoryPool_1(SimpleMemoryPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SimpleMemoryPool_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SimpleMemoryPool_1, "", "SimpleMemoryPool`1");
