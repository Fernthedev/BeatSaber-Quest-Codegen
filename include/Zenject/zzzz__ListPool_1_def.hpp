#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_def.hpp"
CORDL_MODULE_EXPORT(ListPool_1)
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct __DisposeBlock__SpawnedObjectPoolPair;
}
// Forward declare root types
namespace Zenject {
template<typename T>
class ListPool_1;
}
namespace Zenject {
template<>
class ListPool_1<::Zenject::TypeValuePair>;
}
namespace Zenject {
template<>
class ListPool_1<::Zenject::__DisposeBlock__SpawnedObjectPoolPair>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type T>
class ListPool_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::ListPool_1);
// Type: Zenject::ListPool`1
// Type: Zenject::ListPool`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11097)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3843), inst: 3989 }), TypeDefinitionIndex(TypeDefinitionIndex(11086)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11086), inst: 2804 }), TypeDefinitionIndex(TypeDefinitionIndex(3843))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11097), inst: 4358 })
// CS Name: ::Zenject::ListPool`1<T>*
class CORDL_TYPE ListPool_1<::Zenject::__DisposeBlock__SpawnedObjectPoolPair> : public ::Zenject::StaticMemoryPool_1<::System::Collections::Generic::List_1<::Zenject::__DisposeBlock__SpawnedObjectPoolPair>*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::StaticMemoryPool_1<::System::Collections::Generic::List_1<::Zenject::__DisposeBlock__SpawnedObjectPoolPair>*>)]{};

static inline void setStaticF__instance(::Zenject::ListPool_1<::Zenject::__DisposeBlock__SpawnedObjectPoolPair>*  value) ;

static inline ::Zenject::ListPool_1<::Zenject::__DisposeBlock__SpawnedObjectPoolPair>* getStaticF__instance() ;

static inline ::Zenject::ListPool_1<::Zenject::__DisposeBlock__SpawnedObjectPoolPair>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method get_Instance addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::ListPool_1<::Zenject::__DisposeBlock__SpawnedObjectPoolPair>* get_Instance() ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnDespawned(::System::Collections::Generic::List_1<::Zenject::__DisposeBlock__SpawnedObjectPoolPair>*  list) ;

// Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ListPool_1(ListPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListPool_1(ListPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ListPool_1()  = default;
public:


// Fields

// Static field _instance


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ListPool`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11086), inst: 2804 }), TypeDefinitionIndex(TypeDefinitionIndex(11086)), TypeDefinitionIndex(TypeDefinitionIndex(3843)), TypeDefinitionIndex(TypeDefinitionIndex(11097)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3843), inst: 3989 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11097), inst: 3131 })
// CS Name: ::Zenject::ListPool`1<T>*
class CORDL_TYPE ListPool_1<::Zenject::TypeValuePair> : public ::Zenject::StaticMemoryPool_1<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::StaticMemoryPool_1<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>)]{};

static inline void setStaticF__instance(::Zenject::ListPool_1<::Zenject::TypeValuePair>*  value) ;

static inline ::Zenject::ListPool_1<::Zenject::TypeValuePair>* getStaticF__instance() ;

static inline ::Zenject::ListPool_1<::Zenject::TypeValuePair>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method get_Instance addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::ListPool_1<::Zenject::TypeValuePair>* get_Instance() ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnDespawned(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  list) ;

// Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ListPool_1(ListPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListPool_1(ListPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ListPool_1()  = default;
public:


// Fields

// Static field _instance


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ListPool`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11086)), TypeDefinitionIndex(TypeDefinitionIndex(11097)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11086), inst: 2804 }), TypeDefinitionIndex(TypeDefinitionIndex(3843)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3843), inst: 3989 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11097), inst: 2 })
// CS Name: ::Zenject::ListPool`1<T>*
class CORDL_TYPE ListPool_1<T> : public ::Zenject::StaticMemoryPool_1<::System::Collections::Generic::List_1<T>*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::StaticMemoryPool_1<::System::Collections::Generic::List_1<T>*>)]{};

static inline void setStaticF__instance(::Zenject::ListPool_1<T>*  value) ;

static inline ::Zenject::ListPool_1<T>* getStaticF__instance() ;

static inline ::Zenject::ListPool_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method get_Instance addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::ListPool_1<T>* get_Instance() ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnDespawned(::System::Collections::Generic::List_1<T>*  list) ;

// Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ListPool_1(ListPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListPool_1(ListPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ListPool_1()  = default;
public:


// Fields

// Static field _instance


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ListPool_1, "Zenject", "ListPool`1");
