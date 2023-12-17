#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsoleCommandBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HelpConsoleCommand)
namespace GlobalNamespace {
class DebugConsoleController;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class ArgumentBase;
}
namespace GlobalNamespace {
template<typename T>
class OptionalArgument_1;
}
namespace GlobalNamespace {
struct __DebugConsoleController__ConsoleMessage;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class HelpConsoleCommand;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HelpConsoleCommand);
// Type: ::HelpConsoleCommand
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5983))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5984))
// CS Name: ::HelpConsoleCommand*
class CORDL_TYPE HelpConsoleCommand : public ::GlobalNamespace::ConsoleCommandBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::ConsoleCommandBase)]{};

/// @brief Field _console offset 0x18
 __declspec(property(get=__get__console, put=__set__console)) ::GlobalNamespace::DebugConsoleController*  _console;

/// @brief Field _commandName offset 0x20
 __declspec(property(get=__get__commandName, put=__set__commandName)) ::GlobalNamespace::OptionalArgument_1<::StringW>*  _commandName;

 __declspec(property(get=get_isAsyncCommand)) bool  isAsyncCommand;

constexpr void __set__console(::GlobalNamespace::DebugConsoleController*  value) ;

constexpr ::GlobalNamespace::DebugConsoleController* __get__console() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DebugConsoleController*> __get__console() const;

constexpr void __set__commandName(::GlobalNamespace::OptionalArgument_1<::StringW>*  value) ;

constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* __get__commandName() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionalArgument_1<::StringW>*> __get__commandName() const;

/// @brief Method get_isAsyncCommand addr 0x230f2f8 size 0x8 virtual true final false
inline bool get_isAsyncCommand() ;

/// @brief Method GetArguments addr 0x230f300 size 0x94 virtual true final false
inline ::ArrayW<::GlobalNamespace::ArgumentBase*,::Array<::GlobalNamespace::ArgumentBase*>*> GetArguments() ;

/// @brief Method GetShortHelpText addr 0x230f394 size 0x44 virtual true final false
inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GetShortHelpText() ;

/// @brief Method GetLongUsageHelp addr 0x230f3d8 size 0x44 virtual true final false
inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GetLongUsageHelp() ;

/// @brief Method GetCommandName addr 0x230f41c size 0x40 virtual true final false
inline ::StringW GetCommandName() ;

/// @brief Method Execute addr 0x230f45c size 0x7c virtual true final false
inline void Execute(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*  messages) ;

/// @brief Method ExecuteAsync addr 0x230f9b0 size 0x88 virtual true final false
inline ::System::Threading::Tasks::Task* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*  messages) ;

/// @brief Method GetCommandUsage addr 0x230f7cc size 0x1e4 virtual false final false
inline void GetCommandUsage(::StringW  commandName, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*  messages) ;

/// @brief Method GetListOfCommands addr 0x230f4d8 size 0x2f4 virtual false final false
inline void GetListOfCommands(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>*  messages) ;

static inline ::GlobalNamespace::HelpConsoleCommand* New_ctor() ;

/// @brief Method .ctor addr 0x230fab0 size 0xac virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HelpConsoleCommand", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelpConsoleCommand(HelpConsoleCommand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelpConsoleCommand", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelpConsoleCommand(HelpConsoleCommand const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HelpConsoleCommand()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HelpConsoleCommand, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HelpConsoleCommand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HelpConsoleCommand*, "", "HelpConsoleCommand");
