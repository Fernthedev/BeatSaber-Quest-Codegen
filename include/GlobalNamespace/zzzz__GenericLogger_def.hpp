#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GenericLogger)
namespace GlobalNamespace {
class __GenericLogger__ScopedStopwatch;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace System {
class IDisposable;
}
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace GlobalNamespace {
class GenericLogger;
}
namespace GlobalNamespace {
class __GenericLogger__ScopedStopwatch;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GenericLogger);
MARK_REF_PTR_T(::GlobalNamespace::__GenericLogger__ScopedStopwatch);
// Type: ::ScopedStopwatch
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14336))
// CS Name: ::GenericLogger::ScopedStopwatch*
class CORDL_TYPE __GenericLogger__ScopedStopwatch : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _processName offset 0x10
 __declspec(property(get=__get__processName, put=__set__processName)) ::StringW  _processName;

/// @brief Field _stopwatch offset 0x18
 __declspec(property(get=__get__stopwatch, put=__set__stopwatch)) ::System::Diagnostics::Stopwatch*  _stopwatch;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set__processName(::StringW  value) ;

constexpr ::StringW& __get__processName() ;

constexpr ::StringW const& __get__processName() const;

constexpr void __set__stopwatch(::System::Diagnostics::Stopwatch*  value) ;

constexpr ::System::Diagnostics::Stopwatch* __get__stopwatch() ;

constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> __get__stopwatch() const;

static inline ::GlobalNamespace::__GenericLogger__ScopedStopwatch* New_ctor(::StringW  processName) ;

/// @brief Method .ctor addr 0x20ef90c size 0xb8 virtual false final false
inline void _ctor(::StringW  processName) ;

/// @brief Method Dispose addr 0x20ef9c4 size 0xc8 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "", ty: "__GenericLogger__ScopedStopwatch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GenericLogger__ScopedStopwatch(__GenericLogger__ScopedStopwatch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GenericLogger__ScopedStopwatch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GenericLogger__ScopedStopwatch(__GenericLogger__ScopedStopwatch const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GenericLogger__ScopedStopwatch()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GenericLogger__ScopedStopwatch, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GenericLogger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14337))
// CS Name: ::GenericLogger*
class CORDL_TYPE GenericLogger : public ::System::Object {
public:
// Declarations
using ScopedStopwatch = ::GlobalNamespace::__GenericLogger__ScopedStopwatch;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kVerboseLogDefineSymbol offset 0x0
static constexpr ::ConstString  kVerboseLogDefineSymbol{u"VERBOSE_LOGGING"};

/// @brief Method Format addr 0x20ef664 size 0xec virtual false final false
static inline ::StringW Format(::GlobalNamespace::IVerboseLogger*  logger, ::StringW  message) ;

/// @brief Method Log addr 0x20ef750 size 0x78 virtual false final false
static inline void Log(::GlobalNamespace::IVerboseLogger*  logger, ::StringW  message) ;

/// @brief Method Log addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void Log(T  logger, ::StringW  message) ;

/// @brief Method LogWithTimestamp addr 0x20ef7c8 size 0x144 virtual false final false
static inline void LogWithTimestamp(::StringW  message) ;

// Ctor Parameters [CppParam { name: "", ty: "GenericLogger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericLogger(GenericLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericLogger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericLogger(GenericLogger const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericLogger()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GenericLogger, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GenericLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GenericLogger*, "", "GenericLogger");
NEED_NO_BOX(::GlobalNamespace::__GenericLogger__ScopedStopwatch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GenericLogger__ScopedStopwatch*, "", "GenericLogger/ScopedStopwatch");
