#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MemoryPoolContainer_1)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
namespace Zenject {
template<typename TValue>
class IMemoryPool_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class MemoryPoolContainer_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::MemoryPoolContainer_1);
// Type: ::MemoryPoolContainer`1
// Type: ::MemoryPoolContainer`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14373))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14373), inst: 2 })
// CS Name: ::MemoryPoolContainer`1<T>*
class CORDL_TYPE MemoryPoolContainer_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _activeItems offset 0x10
 __declspec(property(get=__get__activeItems, put=__set__activeItems)) ::GlobalNamespace::LazyCopyHashSet_1<T>*  _activeItems;

/// @brief Field _memoryPool offset 0x18
 __declspec(property(get=__get__memoryPool, put=__set__memoryPool)) ::Zenject::IMemoryPool_1<T>*  _memoryPool;

 __declspec(property(get=get_activeItems)) ::System::Collections::Generic::List_1<T>*  activeItems;

constexpr void __set__activeItems(::GlobalNamespace::LazyCopyHashSet_1<T>*  value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<T>* __get__activeItems() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<T>*> __get__activeItems() const;

constexpr void __set__memoryPool(::Zenject::IMemoryPool_1<T>*  value) ;

constexpr ::Zenject::IMemoryPool_1<T>* __get__memoryPool() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::IMemoryPool_1<T>*> __get__memoryPool() const;

/// @brief Method get_activeItems addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::List_1<T>* get_activeItems() ;

static inline ::GlobalNamespace::MemoryPoolContainer_1<T>* New_ctor(::Zenject::IMemoryPool_1<T>*  memoryPool) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::IMemoryPool_1<T>*  memoryPool) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Spawn() ;

/// @brief Method Despawn addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Despawn(T  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolContainer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryPoolContainer_1(MemoryPoolContainer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolContainer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryPoolContainer_1(MemoryPoolContainer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MemoryPoolContainer_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MemoryPoolContainer_1, "", "MemoryPoolContainer`1");
