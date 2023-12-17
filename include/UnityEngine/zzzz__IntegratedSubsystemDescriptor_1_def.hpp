#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_def.hpp"
CORDL_MODULE_EXPORT(IntegratedSubsystemDescriptor_1)
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine {
template<typename TSubsystem>
class IntegratedSubsystemDescriptor_1;
}
namespace UnityEngine {
template<::il2cpp_utils::il2cpp_reference_type TSubsystem>
class IntegratedSubsystemDescriptor_1<TSubsystem>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::IntegratedSubsystemDescriptor_1);
// Type: UnityEngine::IntegratedSubsystemDescriptor`1
// Type: UnityEngine::IntegratedSubsystemDescriptor`1
namespace UnityEngine {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TSubsystem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15960)), TypeDefinitionIndex(TypeDefinitionIndex(15959))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15960), inst: 2 })
// CS Name: ::UnityEngine::IntegratedSubsystemDescriptor`1<TSubsystem>*
class CORDL_TYPE IntegratedSubsystemDescriptor_1<TSubsystem> : public ::UnityEngine::IntegratedSubsystemDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::IntegratedSubsystemDescriptor)]{};

/// @brief Method CreateImpl addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::ISubsystem* CreateImpl() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
inline TSubsystem Create() ;

static inline ::UnityEngine::IntegratedSubsystemDescriptor_1<TSubsystem>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystemDescriptor_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntegratedSubsystemDescriptor_1(IntegratedSubsystemDescriptor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystemDescriptor_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntegratedSubsystemDescriptor_1(IntegratedSubsystemDescriptor_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IntegratedSubsystemDescriptor_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::IntegratedSubsystemDescriptor_1, "UnityEngine", "IntegratedSubsystemDescriptor`1");
