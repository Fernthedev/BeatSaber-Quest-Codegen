#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GameState)
namespace GlobalNamespace {
class GameplayServerFiniteStateMachine;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class GameState;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameState);
// Type: ::GameState
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12764))
// CS Name: ::GameState*
class CORDL_TYPE GameState : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field fsm offset 0x10
 __declspec(property(get=__get_fsm, put=__set_fsm)) ::GlobalNamespace::GameplayServerFiniteStateMachine*  fsm;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_fsm(::GlobalNamespace::GameplayServerFiniteStateMachine*  value) ;

constexpr ::GlobalNamespace::GameplayServerFiniteStateMachine* __get_fsm() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayServerFiniteStateMachine*> __get_fsm() const;

static inline ::GlobalNamespace::GameState* New_ctor(::GlobalNamespace::GameplayServerFiniteStateMachine*  fsm) ;

/// @brief Method .ctor addr 0xe3c22c size 0x28 virtual false final false
inline void _ctor(::GlobalNamespace::GameplayServerFiniteStateMachine*  fsm) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Dispose() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init() ;

// Ctor Parameters [CppParam { name: "", ty: "GameState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameState(GameState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameState(GameState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameState()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameState, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameState*, "", "GameState");
