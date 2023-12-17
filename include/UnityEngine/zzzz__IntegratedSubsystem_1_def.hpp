#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__IntegratedSubsystem_def.hpp"
CORDL_MODULE_EXPORT(IntegratedSubsystem_1)
// Forward declare root types
namespace UnityEngine {
template<typename TSubsystemDescriptor>
class IntegratedSubsystem_1;
}
namespace UnityEngine {
template<::il2cpp_utils::il2cpp_reference_type TSubsystemDescriptor>
class IntegratedSubsystem_1<TSubsystemDescriptor>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::IntegratedSubsystem_1);
// Type: UnityEngine::IntegratedSubsystem`1
// Type: UnityEngine::IntegratedSubsystem`1
namespace UnityEngine {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TSubsystemDescriptor>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15964)), TypeDefinitionIndex(TypeDefinitionIndex(15965))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15965), inst: 2 })
// CS Name: ::UnityEngine::IntegratedSubsystem`1<TSubsystemDescriptor>*
class CORDL_TYPE IntegratedSubsystem_1<TSubsystemDescriptor> : public ::UnityEngine::IntegratedSubsystem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::IntegratedSubsystem)]{};

 __declspec(property(get=get_subsystemDescriptor)) TSubsystemDescriptor  subsystemDescriptor;

 __declspec(property(get=get_SubsystemDescriptor)) TSubsystemDescriptor  SubsystemDescriptor;

/// @brief Method get_subsystemDescriptor addr 0x0 size 0xffffffffffffffff virtual false final false
inline TSubsystemDescriptor get_subsystemDescriptor() ;

/// @brief Method get_SubsystemDescriptor addr 0x0 size 0xffffffffffffffff virtual false final false
inline TSubsystemDescriptor get_SubsystemDescriptor() ;

static inline ::UnityEngine::IntegratedSubsystem_1<TSubsystemDescriptor>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystem_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntegratedSubsystem_1(IntegratedSubsystem_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystem_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntegratedSubsystem_1(IntegratedSubsystem_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IntegratedSubsystem_1()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::IntegratedSubsystem_1, "UnityEngine", "IntegratedSubsystem`1");
