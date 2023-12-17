#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExceptionHelpers)
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class ExceptionHelpers;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::ExceptionHelpers);
// Type: UnityEngine.InputSystem.Utilities::ExceptionHelpers
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6666))
// CS Name: ::UnityEngine.InputSystem.Utilities::ExceptionHelpers*
class CORDL_TYPE ExceptionHelpers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method IsExceptionIndicatingBugInCode addr 0x2b0fa04 size 0xd8 virtual false final false
static inline bool IsExceptionIndicatingBugInCode(::System::Exception*  exception) ;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExceptionHelpers(ExceptionHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExceptionHelpers(ExceptionHelpers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ExceptionHelpers()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::ExceptionHelpers, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::ExceptionHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::ExceptionHelpers*, "UnityEngine.InputSystem.Utilities", "ExceptionHelpers");
