#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__StaticMemoryPool_6_def.hpp"
CORDL_MODULE_EXPORT(PoolableStaticMemoryPool_6)
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TValue>
class PoolableStaticMemoryPool_6;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
class PoolableStaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PoolableStaticMemoryPool_6);
// Type: Zenject::PoolableStaticMemoryPool`6
// Type: Zenject::PoolableStaticMemoryPool`6
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11091)), TypeDefinitionIndex(TypeDefinitionIndex(11081)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11091), inst: 3633 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11081), inst: 6126 })
// CS Name: ::Zenject::PoolableStaticMemoryPool`6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>*
class CORDL_TYPE PoolableStaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> : public ::Zenject::StaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::StaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>)]{};

static inline ::Zenject::PoolableStaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void OnSpawned(TParam1  p1, TParam2  p2, TParam3  p3, TParam4  p4, TParam5  p5, TValue  value) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void OnDespawned(TValue  value) ;

// Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_6", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PoolableStaticMemoryPool_6(PoolableStaticMemoryPool_6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoolableStaticMemoryPool_6", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoolableStaticMemoryPool_6(PoolableStaticMemoryPool_6 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PoolableStaticMemoryPool_6()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableStaticMemoryPool_6, "Zenject", "PoolableStaticMemoryPool`6");
