#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncStateMachine)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::IAsyncStateMachine);
// Type: System.Runtime.CompilerServices::IAsyncStateMachine
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3372))
// CS Name: ::System.Runtime.CompilerServices::IAsyncStateMachine*
class CORDL_TYPE IAsyncStateMachine {
public:
// Declarations
/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final false
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "", ty: "IAsyncStateMachine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IAsyncStateMachine(IAsyncStateMachine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAsyncStateMachine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAsyncStateMachine(IAsyncStateMachine const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::IAsyncStateMachine);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IAsyncStateMachine*, "System.Runtime.CompilerServices", "IAsyncStateMachine");
