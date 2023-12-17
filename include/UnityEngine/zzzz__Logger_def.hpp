#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Logger)
namespace UnityEngine {
struct LogType;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ILogger;
}
namespace UnityEngine {
class ILogHandler;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine {
class Logger;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Logger);
// Type: UnityEngine::Logger
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10056))
// CS Name: ::UnityEngine::Logger*
class CORDL_TYPE Logger : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <logHandler>k__BackingField offset 0x10
 __declspec(property(get=__get__logHandler_k__BackingField, put=__set__logHandler_k__BackingField)) ::UnityEngine::ILogHandler*  _logHandler_k__BackingField;

/// @brief Field <logEnabled>k__BackingField offset 0x18
 __declspec(property(get=__get__logEnabled_k__BackingField, put=__set__logEnabled_k__BackingField)) bool  _logEnabled_k__BackingField;

/// @brief Field <filterLogType>k__BackingField offset 0x1c
 __declspec(property(get=__get__filterLogType_k__BackingField, put=__set__filterLogType_k__BackingField)) ::UnityEngine::LogType  _filterLogType_k__BackingField;

 __declspec(property(get=get_logHandler, put=set_logHandler)) ::UnityEngine::ILogHandler*  logHandler;

 __declspec(property(get=get_logEnabled, put=set_logEnabled)) bool  logEnabled;

 __declspec(property(get=get_filterLogType, put=set_filterLogType)) ::UnityEngine::LogType  filterLogType;

/// @brief Convert operator to "::UnityEngine::ILogger"
constexpr operator  ::UnityEngine::ILogger*() noexcept;

/// @brief Convert operator to "::UnityEngine::ILogHandler"
constexpr operator  ::UnityEngine::ILogHandler*() noexcept;

constexpr void __set__logHandler_k__BackingField(::UnityEngine::ILogHandler*  value) ;

constexpr ::UnityEngine::ILogHandler* __get__logHandler_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ILogHandler*> __get__logHandler_k__BackingField() const;

constexpr void __set__logEnabled_k__BackingField(bool  value) ;

constexpr bool& __get__logEnabled_k__BackingField() ;

constexpr bool const& __get__logEnabled_k__BackingField() const;

constexpr void __set__filterLogType_k__BackingField(::UnityEngine::LogType  value) ;

constexpr ::UnityEngine::LogType& __get__filterLogType_k__BackingField() ;

constexpr ::UnityEngine::LogType const& __get__filterLogType_k__BackingField() const;

static inline ::UnityEngine::Logger* New_ctor(::UnityEngine::ILogHandler*  logHandler) ;

/// @brief Method .ctor addr 0x2ca1114 size 0x38 virtual false final false
inline void _ctor(::UnityEngine::ILogHandler*  logHandler) ;

/// @brief Method get_logHandler addr 0x2ca139c size 0x8 virtual true final true
inline ::UnityEngine::ILogHandler* get_logHandler() ;

/// @brief Method set_logHandler addr 0x2ca13a4 size 0x8 virtual true final true
inline void set_logHandler(::UnityEngine::ILogHandler*  value) ;

/// @brief Method get_logEnabled addr 0x2ca13ac size 0x8 virtual true final true
inline bool get_logEnabled() ;

/// @brief Method set_logEnabled addr 0x2ca13b4 size 0xc virtual true final true
inline void set_logEnabled(bool  value) ;

/// @brief Method get_filterLogType addr 0x2ca13c0 size 0x8 virtual true final true
inline ::UnityEngine::LogType get_filterLogType() ;

/// @brief Method set_filterLogType addr 0x2ca13c8 size 0x8 virtual true final true
inline void set_filterLogType(::UnityEngine::LogType  value) ;

/// @brief Method IsLogTypeAllowed addr 0x2ca13d0 size 0x3c virtual true final true
inline bool IsLogTypeAllowed(::UnityEngine::LogType  logType) ;

/// @brief Method GetString addr 0x2ca140c size 0x120 virtual false final false
static inline ::StringW GetString(::System::Object*  message) ;

/// @brief Method Log addr 0x2ca152c size 0x174 virtual true final true
inline void Log(::UnityEngine::LogType  logType, ::System::Object*  message) ;

/// @brief Method Log addr 0x2ca16a0 size 0x178 virtual true final true
inline void Log(::UnityEngine::LogType  logType, ::System::Object*  message, ::UnityEngine::Object*  context) ;

/// @brief Method LogError addr 0x2ca1818 size 0x190 virtual true final true
inline void LogError(::StringW  tag, ::System::Object*  message) ;

/// @brief Method LogException addr 0x2ca19a8 size 0xd4 virtual true final true
inline void LogException(::System::Exception*  exception, ::UnityEngine::Object*  context) ;

/// @brief Method LogFormat addr 0x2ca1a7c size 0xf8 virtual true final true
inline void LogFormat(::UnityEngine::LogType  logType, ::StringW  format, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method LogFormat addr 0x2ca1b74 size 0x108 virtual true final true
inline void LogFormat(::UnityEngine::LogType  logType, ::UnityEngine::Object*  context, ::StringW  format, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

// Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Logger(Logger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Logger(Logger const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Logger()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Logger, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Logger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Logger*, "UnityEngine", "Logger");
