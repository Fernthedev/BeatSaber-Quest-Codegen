#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsConsoleDriver)
namespace System {
class IConsoleDriver;
}
namespace System {
struct ConsoleKeyInfo;
}
namespace System {
struct InputRecord;
}
namespace System {
struct Handles;
}
namespace System {
struct ConsoleScreenBufferInfo;
}
// Forward declare root types
namespace System {
class WindowsConsoleDriver;
}
// Write type traits
MARK_REF_PTR_T(::System::WindowsConsoleDriver);
// Type: System::WindowsConsoleDriver
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2649))
// CS Name: ::System::WindowsConsoleDriver*
class CORDL_TYPE WindowsConsoleDriver : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field inputHandle offset 0x10
 __declspec(property(get=__get_inputHandle, put=__set_inputHandle)) ::cordl_internals::intptr_t  inputHandle;

/// @brief Field outputHandle offset 0x18
 __declspec(property(get=__get_outputHandle, put=__set_outputHandle)) ::cordl_internals::intptr_t  outputHandle;

/// @brief Field defaultAttribute offset 0x20
 __declspec(property(get=__get_defaultAttribute, put=__set_defaultAttribute)) int16_t  defaultAttribute;

/// @brief Convert operator to "::System::IConsoleDriver"
constexpr operator  ::System::IConsoleDriver*() noexcept;

constexpr void __set_inputHandle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_inputHandle() ;

constexpr ::cordl_internals::intptr_t const& __get_inputHandle() const;

constexpr void __set_outputHandle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_outputHandle() ;

constexpr ::cordl_internals::intptr_t const& __get_outputHandle() const;

constexpr void __set_defaultAttribute(int16_t  value) ;

constexpr int16_t& __get_defaultAttribute() ;

constexpr int16_t const& __get_defaultAttribute() const;

static inline ::System::WindowsConsoleDriver* New_ctor() ;

/// @brief Method .ctor addr 0x2609554 size 0x54 virtual false final false
inline void _ctor() ;

/// @brief Method ReadKey addr 0x26096c0 size 0x140 virtual true final true
inline ::System::ConsoleKeyInfo ReadKey(bool  intercept) ;

/// @brief Method IsModifierKey addr 0x2609908 size 0x34 virtual false final false
static inline bool IsModifierKey(int16_t  virtualKeyCode) ;

/// @brief Method GetStdHandle addr 0x26095a8 size 0x84 virtual false final false
static inline ::cordl_internals::intptr_t GetStdHandle(::System::Handles  handle) ;

/// @brief Method GetConsoleScreenBufferInfo addr 0x260962c size 0x94 virtual false final false
static inline bool GetConsoleScreenBufferInfo(::cordl_internals::intptr_t  handle, ByRef<::System::ConsoleScreenBufferInfo>  info) ;

/// @brief Method ReadConsoleInput addr 0x2609800 size 0x108 virtual false final false
static inline bool ReadConsoleInput(::cordl_internals::intptr_t  handle, ByRef<::System::InputRecord>  record, int32_t  length, ByRef<int32_t>  nread) ;

// Ctor Parameters [CppParam { name: "", ty: "WindowsConsoleDriver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowsConsoleDriver(WindowsConsoleDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowsConsoleDriver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowsConsoleDriver(WindowsConsoleDriver const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WindowsConsoleDriver()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::WindowsConsoleDriver, 0x28>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::WindowsConsoleDriver);
DEFINE_IL2CPP_ARG_TYPE(::System::WindowsConsoleDriver*, "System", "WindowsConsoleDriver");
