#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MemoryPool_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PoolableMemoryPool_2)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TValue>
class PoolableMemoryPool_2;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
class PoolableMemoryPool_2<TParam1,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PoolableMemoryPool_2);
// Type: Zenject::PoolableMemoryPool`2
// Type: Zenject::PoolableMemoryPool`2
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11039), inst: 3486 }), TypeDefinitionIndex(TypeDefinitionIndex(11066)), TypeDefinitionIndex(TypeDefinitionIndex(11039))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11066), inst: 81 })
// CS Name: ::Zenject::PoolableMemoryPool`2<TParam1,TValue>*
class CORDL_TYPE PoolableMemoryPool_2<TParam1,TValue> : public ::Zenject::MemoryPool_2<TParam1,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::MemoryPool_2<TParam1,TValue>)]{};

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDespawned(TValue  item) ;

/// @brief Method Reinitialize addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Reinitialize(TParam1  p1, TValue  item) ;

static inline ::Zenject::PoolableMemoryPool_2<TParam1,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPool_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PoolableMemoryPool_2(PoolableMemoryPool_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPool_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoolableMemoryPool_2(PoolableMemoryPool_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PoolableMemoryPool_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableMemoryPool_2, "Zenject", "PoolableMemoryPool`2");
