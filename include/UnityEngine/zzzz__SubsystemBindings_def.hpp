#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubsystemBindings)
// Forward declare root types
namespace UnityEngine {
class SubsystemBindings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SubsystemBindings);
// Type: UnityEngine::SubsystemBindings
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15966))
// CS Name: ::UnityEngine::SubsystemBindings*
class CORDL_TYPE SubsystemBindings : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method DestroySubsystem addr 0x2d1a5ac size 0x3c virtual false final false
static inline void DestroySubsystem(::cordl_internals::intptr_t  nativePtr) ;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemBindings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubsystemBindings(SubsystemBindings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemBindings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubsystemBindings(SubsystemBindings const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubsystemBindings()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SubsystemBindings, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::SubsystemBindings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemBindings*, "UnityEngine", "SubsystemBindings");
