#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleDriver)
namespace System {
struct ConsoleKeyInfo;
}
namespace System {
class IConsoleDriver;
}
// Forward declare root types
namespace System {
class ConsoleDriver;
}
// Write type traits
MARK_REF_PTR_T(::System::ConsoleDriver);
// Type: System::ConsoleDriver
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2587))
// CS Name: ::System::ConsoleDriver*
class CORDL_TYPE ConsoleDriver : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_driver(::System::IConsoleDriver*  value) ;

static inline ::System::IConsoleDriver* getStaticF_driver() ;

static inline void setStaticF_is_console(bool  value) ;

static inline bool getStaticF_is_console() ;

static inline void setStaticF_called_isatty(bool  value) ;

static inline bool getStaticF_called_isatty() ;

/// @brief Method CreateNullConsoleDriver addr 0x25f7788 size 0x4c virtual false final false
static inline ::System::IConsoleDriver* CreateNullConsoleDriver() ;

/// @brief Method CreateWindowsConsoleDriver addr 0x25f77d4 size 0x5c virtual false final false
static inline ::System::IConsoleDriver* CreateWindowsConsoleDriver() ;

/// @brief Method CreateTermInfoDriver addr 0x25f7830 size 0x60 virtual false final false
static inline ::System::IConsoleDriver* CreateTermInfoDriver(::StringW  term) ;

/// @brief Method ReadKey addr 0x25f714c size 0xd8 virtual false final false
static inline ::System::ConsoleKeyInfo ReadKey(bool  intercept) ;

/// @brief Method get_IsConsole addr 0x25f694c size 0x138 virtual false final false
static inline bool get_IsConsole() ;

/// @brief Method Isatty addr 0x25f7bdc size 0x4 virtual false final false
static inline bool Isatty(::cordl_internals::intptr_t  handle) ;

/// @brief Method InternalKeyAvailable addr 0x25f7be0 size 0x4 virtual false final false
static inline int32_t InternalKeyAvailable(int32_t  ms_timeout) ;

/// @brief Method TtySetup addr 0x25f7be4 size 0x4 virtual false final false
static inline bool TtySetup(::StringW  keypadXmit, ::StringW  teardown, ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  control_characters, ByRef<::cordl_internals::Ptr<int32_t>>  address) ;

/// @brief Method SetEcho addr 0x25f7be8 size 0x8 virtual false final false
static inline bool SetEcho(bool  wantEcho) ;

// Ctor Parameters [CppParam { name: "", ty: "ConsoleDriver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConsoleDriver(ConsoleDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConsoleDriver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConsoleDriver(ConsoleDriver const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConsoleDriver()  = default;
public:


// Fields

// Static field driver

// Static field is_console

// Static field called_isatty


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ConsoleDriver, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::ConsoleDriver);
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleDriver*, "System", "ConsoleDriver");
