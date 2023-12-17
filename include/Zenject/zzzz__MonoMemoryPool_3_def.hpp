#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MemoryPool_3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MonoMemoryPool_3)
namespace Zenject {
class InjectTypeInfo;
}
namespace UnityEngine {
class Transform;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TValue>
class MonoMemoryPool_3;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TValue>
class MonoMemoryPool_3<TParam1,TParam2,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MonoMemoryPool_3);
// Type: Zenject::MonoMemoryPool`3
// Type: Zenject::MonoMemoryPool`3
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11040), inst: 3497 }), TypeDefinitionIndex(TypeDefinitionIndex(11052)), TypeDefinitionIndex(TypeDefinitionIndex(11040))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11052), inst: 5330 })
// CS Name: ::Zenject::MonoMemoryPool`3<TParam1,TParam2,TValue>*
class CORDL_TYPE MonoMemoryPool_3<TParam1,TParam2,TValue> : public ::Zenject::MemoryPool_3<TParam1,TParam2,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::MemoryPool_3<TParam1,TParam2,TValue>)]{};

/// @brief Field _originalParent offset 0x38
 __declspec(property(get=__get__originalParent, put=__set__originalParent)) ::UnityEngine::Transform*  _originalParent;

constexpr void __set__originalParent(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__originalParent() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__originalParent() const;

static inline ::Zenject::MonoMemoryPool_3<TParam1,TParam2,TValue>* New_ctor() ;

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

// Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoMemoryPool_3(MonoMemoryPool_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoMemoryPool_3(MonoMemoryPool_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoMemoryPool_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MonoMemoryPool_3, "Zenject", "MonoMemoryPool`3");
