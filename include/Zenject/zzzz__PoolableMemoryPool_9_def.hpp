#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MemoryPool_9_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PoolableMemoryPool_9)
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TParam8,typename TValue>
class PoolableMemoryPool_9;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TParam7,::il2cpp_utils::il2cpp_reference_type TParam8,::il2cpp_utils::il2cpp_reference_type TValue>
class PoolableMemoryPool_9<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PoolableMemoryPool_9);
// Type: Zenject::PoolableMemoryPool`9
// Type: Zenject::PoolableMemoryPool`9
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TParam7,::il2cpp_utils::il2cpp_reference_type TParam8,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11073)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11046), inst: 3545 }), TypeDefinitionIndex(TypeDefinitionIndex(11046))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11073), inst: 7751 })
// CS Name: ::Zenject::PoolableMemoryPool`9<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TValue>*
class CORDL_TYPE PoolableMemoryPool_9<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TValue> : public ::Zenject::MemoryPool_9<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::MemoryPool_9<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TValue>)]{};

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDespawned(TValue  item) ;

/// @brief Method Reinitialize addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Reinitialize(TParam1  p1, TParam2  p2, TParam3  p3, TParam4  p4, TParam5  p5, TParam6  p6, TParam7  p7, TParam8  p8, TValue  item) ;

static inline ::Zenject::PoolableMemoryPool_9<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPool_9", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PoolableMemoryPool_9(PoolableMemoryPool_9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPool_9", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoolableMemoryPool_9(PoolableMemoryPool_9 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PoolableMemoryPool_9()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableMemoryPool_9, "Zenject", "PoolableMemoryPool`9");
