#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GameplayServerFiniteStateMachineFactory)
namespace GlobalNamespace {
struct __GameplayServerFiniteStateMachine__InitParams;
}
namespace GlobalNamespace {
class GameplayServerFiniteStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayServerFiniteStateMachineFactory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayServerFiniteStateMachineFactory);
// Type: ::GameplayServerFiniteStateMachineFactory
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12763))
// CS Name: ::GameplayServerFiniteStateMachineFactory*
class CORDL_TYPE GameplayServerFiniteStateMachineFactory : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Create addr 0xe3c020 size 0x1ac virtual false final false
static inline ::GlobalNamespace::GameplayServerFiniteStateMachine* Create(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams  initParams) ;

// Ctor Parameters [CppParam { name: "", ty: "GameplayServerFiniteStateMachineFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameplayServerFiniteStateMachineFactory(GameplayServerFiniteStateMachineFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameplayServerFiniteStateMachineFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameplayServerFiniteStateMachineFactory(GameplayServerFiniteStateMachineFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameplayServerFiniteStateMachineFactory()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayServerFiniteStateMachineFactory, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayServerFiniteStateMachineFactory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayServerFiniteStateMachineFactory*, "", "GameplayServerFiniteStateMachineFactory");
