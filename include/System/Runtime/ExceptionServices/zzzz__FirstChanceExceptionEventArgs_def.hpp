#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(FirstChanceExceptionEventArgs)
// Forward declare root types
namespace System::Runtime::ExceptionServices {
class FirstChanceExceptionEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs);
// Type: System.Runtime.ExceptionServices::FirstChanceExceptionEventArgs
namespace System::Runtime::ExceptionServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3347))
// CS Name: ::System.Runtime.ExceptionServices::FirstChanceExceptionEventArgs*
class CORDL_TYPE FirstChanceExceptionEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::EventArgs)]{};

// Ctor Parameters [CppParam { name: "", ty: "FirstChanceExceptionEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirstChanceExceptionEventArgs(FirstChanceExceptionEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirstChanceExceptionEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirstChanceExceptionEventArgs(FirstChanceExceptionEventArgs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FirstChanceExceptionEventArgs()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::ExceptionServices
NEED_NO_BOX(::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*, "System.Runtime.ExceptionServices", "FirstChanceExceptionEventArgs");
