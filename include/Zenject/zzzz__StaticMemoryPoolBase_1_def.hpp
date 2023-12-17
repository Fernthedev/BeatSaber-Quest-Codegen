#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__StaticMemoryPoolBaseBase_1_def.hpp"
CORDL_MODULE_EXPORT(StaticMemoryPoolBase_1)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Zenject {
template<typename TValue>
class StaticMemoryPoolBase_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TValue>
class StaticMemoryPoolBase_1<TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::StaticMemoryPoolBase_1);
// Type: Zenject::StaticMemoryPoolBase`1
// Type: Zenject::StaticMemoryPoolBase`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11084), inst: 159 }), TypeDefinitionIndex(TypeDefinitionIndex(11085)), TypeDefinitionIndex(TypeDefinitionIndex(11084))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11085), inst: 2 })
// CS Name: ::Zenject::StaticMemoryPoolBase`1<TValue>*
class CORDL_TYPE StaticMemoryPoolBase_1<TValue> : public ::Zenject::StaticMemoryPoolBaseBase_1<TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::StaticMemoryPoolBaseBase_1<TValue>)]{};

static inline ::Zenject::StaticMemoryPoolBase_1<TValue>* New_ctor(::System::Action_1<TValue>*  onDespawnedMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Action_1<TValue>*  onDespawnedMethod) ;

/// @brief Method Alloc addr 0x0 size 0xffffffffffffffff virtual true final false
inline TValue Alloc() ;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPoolBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticMemoryPoolBase_1(StaticMemoryPoolBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPoolBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticMemoryPoolBase_1(StaticMemoryPoolBase_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StaticMemoryPoolBase_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::StaticMemoryPoolBase_1, "Zenject", "StaticMemoryPoolBase`1");
