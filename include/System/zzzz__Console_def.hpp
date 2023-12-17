#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Console)
namespace System {
class Object;
}
namespace System::Text {
class Encoding;
}
namespace System {
class ConsoleCancelEventHandler;
}
namespace System::IO {
struct FileAccess;
}
namespace System {
struct ConsoleKeyInfo;
}
namespace System::IO {
class TextWriter;
}
namespace System::IO {
class TextReader;
}
namespace System {
class __Console__WindowsConsole;
}
namespace System::IO {
class Stream;
}
namespace GlobalNamespace {
class __Console__WindowsConsole__WindowsCancelHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class __Console__WindowsConsole__WindowsCancelHandler;
}
namespace System {
class Console;
}
namespace System {
class __Console__WindowsConsole;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler);
MARK_REF_PTR_T(::System::Console);
MARK_REF_PTR_T(::System::__Console__WindowsConsole);
// Type: ::WindowsCancelHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2584))
// CS Name: ::Console::WindowsConsole::WindowsCancelHandler*
class CORDL_TYPE __Console__WindowsConsole__WindowsCancelHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x25f75ec size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x25f76b0 size 0x14 virtual true final false
inline bool Invoke(int32_t  keyCode) ;

// Ctor Parameters [CppParam { name: "", ty: "__Console__WindowsConsole__WindowsCancelHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Console__WindowsConsole__WindowsCancelHandler(__Console__WindowsConsole__WindowsCancelHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Console__WindowsConsole__WindowsCancelHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Console__WindowsConsole__WindowsCancelHandler(__Console__WindowsConsole__WindowsCancelHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Console__WindowsConsole__WindowsCancelHandler()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::WindowsConsole
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2585))
// CS Name: ::Console::WindowsConsole*
class CORDL_TYPE __Console__WindowsConsole : public ::System::Object {
public:
// Declarations
using WindowsCancelHandler = ::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_ctrlHandlerAdded(bool  value) ;

static inline bool getStaticF_ctrlHandlerAdded() ;

static inline void setStaticF_cancelHandler(::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler*  value) ;

static inline ::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler* getStaticF_cancelHandler() ;

/// @brief Method GetConsoleCP addr 0x25f741c size 0x68 virtual false final false
static inline int32_t GetConsoleCP() ;

/// @brief Method GetConsoleOutputCP addr 0x25f7484 size 0x6c virtual false final false
static inline int32_t GetConsoleOutputCP() ;

/// @brief Method DoWindowsConsoleCancelEvent addr 0x25f74f0 size 0x60 virtual false final false
static inline bool DoWindowsConsoleCancelEvent(int32_t  keyCode) ;

/// @brief Method GetInputCodePage addr 0x25f6504 size 0x4c virtual false final false
static inline int32_t GetInputCodePage() ;

/// @brief Method GetOutputCodePage addr 0x25f6550 size 0x4c virtual false final false
static inline int32_t GetOutputCodePage() ;

// Ctor Parameters [CppParam { name: "", ty: "__Console__WindowsConsole", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Console__WindowsConsole(__Console__WindowsConsole && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Console__WindowsConsole", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Console__WindowsConsole(__Console__WindowsConsole const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Console__WindowsConsole()  = default;
public:


// Fields

// Static field ctrlHandlerAdded

// Static field cancelHandler


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Console__WindowsConsole, 0x10>, "Size mismatch!");

} // namespace end def System
// Type: System::Console
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2586))
// CS Name: ::System::Console*
class CORDL_TYPE Console : public ::System::Object {
public:
// Declarations
using WindowsConsole = ::System::__Console__WindowsConsole;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_stdout(::System::IO::TextWriter*  value) ;

static inline ::System::IO::TextWriter* getStaticF_stdout() ;

static inline void setStaticF_stderr(::System::IO::TextWriter*  value) ;

static inline ::System::IO::TextWriter* getStaticF_stderr() ;

static inline void setStaticF_stdin(::System::IO::TextReader*  value) ;

static inline ::System::IO::TextReader* getStaticF_stdin() ;

static inline void setStaticF_inputEncoding(::System::Text::Encoding*  value) ;

static inline ::System::Text::Encoding* getStaticF_inputEncoding() ;

static inline void setStaticF_outputEncoding(::System::Text::Encoding*  value) ;

static inline ::System::Text::Encoding* getStaticF_outputEncoding() ;

static inline void setStaticF_cancel_event(::System::ConsoleCancelEventHandler*  value) ;

static inline ::System::ConsoleCancelEventHandler* getStaticF_cancel_event() ;

/// @brief Method SetupStreams addr 0x25f659c size 0x3b0 virtual false final false
static inline void SetupStreams(::System::Text::Encoding*  inputEncoding, ::System::Text::Encoding*  outputEncoding) ;

/// @brief Method get_Error addr 0x25f6c34 size 0x58 virtual false final false
static inline ::System::IO::TextWriter* get_Error() ;

/// @brief Method get_Out addr 0x25f6c8c size 0x58 virtual false final false
static inline ::System::IO::TextWriter* get_Out() ;

/// @brief Method Open addr 0x25f6ce4 size 0x15c virtual false final false
static inline ::System::IO::Stream* Open(::cordl_internals::intptr_t  handle, ::System::IO::FileAccess  access, int32_t  bufferSize) ;

/// @brief Method OpenStandardError addr 0x25f6ba4 size 0x90 virtual false final false
static inline ::System::IO::Stream* OpenStandardError(int32_t  bufferSize) ;

/// @brief Method OpenStandardInput addr 0x25f6e40 size 0x50 virtual false final false
static inline ::System::IO::Stream* OpenStandardInput() ;

/// @brief Method OpenStandardInput addr 0x25f6a84 size 0x90 virtual false final false
static inline ::System::IO::Stream* OpenStandardInput(int32_t  bufferSize) ;

/// @brief Method OpenStandardOutput addr 0x25f6b14 size 0x90 virtual false final false
static inline ::System::IO::Stream* OpenStandardOutput(int32_t  bufferSize) ;

/// @brief Method SetOut addr 0x25f6e90 size 0xe4 virtual false final false
static inline void SetOut(::System::IO::TextWriter*  newOut) ;

/// @brief Method WriteLine addr 0x25f6f74 size 0x74 virtual false final false
static inline void WriteLine(::StringW  value) ;

/// @brief Method get_InputEncoding addr 0x25f6fe8 size 0x58 virtual false final false
static inline ::System::Text::Encoding* get_InputEncoding() ;

/// @brief Method get_OutputEncoding addr 0x25f7040 size 0x58 virtual false final false
static inline ::System::Text::Encoding* get_OutputEncoding() ;

/// @brief Method ReadKey addr 0x25f7098 size 0x58 virtual false final false
static inline ::System::ConsoleKeyInfo ReadKey() ;

/// @brief Method ReadKey addr 0x25f70f0 size 0x5c virtual false final false
static inline ::System::ConsoleKeyInfo ReadKey(bool  intercept) ;

/// @brief Method DoConsoleCancelEvent addr 0x25f7224 size 0x1f8 virtual false final false
static inline void DoConsoleCancelEvent() ;

// Ctor Parameters [CppParam { name: "", ty: "Console", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Console(Console && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Console", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Console(Console const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Console()  = default;
public:


// Fields

// Static field stdout

// Static field stderr

// Static field stdin

// Static field inputEncoding

// Static field outputEncoding

// Static field cancel_event


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Console, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Console__WindowsConsole__WindowsCancelHandler*, "System", "Console/WindowsConsole/WindowsCancelHandler");
NEED_NO_BOX(::System::Console);
DEFINE_IL2CPP_ARG_TYPE(::System::Console*, "System", "Console");
NEED_NO_BOX(::System::__Console__WindowsConsole);
DEFINE_IL2CPP_ARG_TYPE(::System::__Console__WindowsConsole*, "System", "Console/WindowsConsole");
