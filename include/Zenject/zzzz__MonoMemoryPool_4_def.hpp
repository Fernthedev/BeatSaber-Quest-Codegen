#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MemoryPool_4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MonoMemoryPool_4)
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
class MonoMemoryPool_4;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TValue>
class MonoMemoryPool_4<TParam1,TParam2,TParam3,TValue>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TValue>
class MonoMemoryPool_4<TParam1,TParam2,float_t,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MonoMemoryPool_4);
// Type: Zenject::MonoMemoryPool`4
// Type: Zenject::MonoMemoryPool`4
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11053)), TypeDefinitionIndex(TypeDefinitionIndex(11041)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11041), inst: 3508 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11053), inst: 7730 })
// CS Name: ::Zenject::MonoMemoryPool`4<TParam1,TParam2,TParam3,TValue>*
class CORDL_TYPE MonoMemoryPool_4<TParam1,TParam2,float_t,TValue> : public ::Zenject::MemoryPool_4<TParam1,TParam2,float_t,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::MemoryPool_4<TParam1,TParam2,float_t,TValue>)]{};

/// @brief Field _originalParent offset 0x38
 __declspec(property(get=__get__originalParent, put=__set__originalParent)) ::UnityEngine::Transform*  _originalParent;

constexpr void __set__originalParent(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__originalParent() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__originalParent() const;

static inline ::Zenject::MonoMemoryPool_4<TParam1,TParam2,float_t,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method OnCreated addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnCreated(TValue  item) ;

/// @brief Method OnDestroyed addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDestroyed(TValue  item) ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnSpawned(TValue  item) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDespawned(TValue  item) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoMemoryPool_4(MonoMemoryPool_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoMemoryPool_4(MonoMemoryPool_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoMemoryPool_4()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::MonoMemoryPool`4
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11053)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11041), inst: 3508 }), TypeDefinitionIndex(TypeDefinitionIndex(11041))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11053), inst: 6124 })
// CS Name: ::Zenject::MonoMemoryPool`4<TParam1,TParam2,TParam3,TValue>*
class CORDL_TYPE MonoMemoryPool_4<TParam1,TParam2,TParam3,TValue> : public ::Zenject::MemoryPool_4<TParam1,TParam2,TParam3,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::MemoryPool_4<TParam1,TParam2,TParam3,TValue>)]{};

/// @brief Field _originalParent offset 0x38
 __declspec(property(get=__get__originalParent, put=__set__originalParent)) ::UnityEngine::Transform*  _originalParent;

constexpr void __set__originalParent(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__originalParent() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__originalParent() const;

static inline ::Zenject::MonoMemoryPool_4<TParam1,TParam2,TParam3,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method OnCreated addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnCreated(TValue  item) ;

/// @brief Method OnDestroyed addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDestroyed(TValue  item) ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnSpawned(TValue  item) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDespawned(TValue  item) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoMemoryPool_4(MonoMemoryPool_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoMemoryPool_4(MonoMemoryPool_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoMemoryPool_4()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MonoMemoryPool_4, "Zenject", "MonoMemoryPool`4");
