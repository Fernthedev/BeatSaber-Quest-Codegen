#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Log)
namespace UnityEngine {
struct LogType;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine::ProBuilder {
struct LogOutput;
}
namespace UnityEngine::ProBuilder {
struct LogLevel;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Log;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Log);
// Type: UnityEngine.ProBuilder::Log
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12137))
// CS Name: ::UnityEngine.ProBuilder::Log*
class CORDL_TYPE Log : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field k_ProBuilderLogFileName offset 0x0
static constexpr ::ConstString  k_ProBuilderLogFileName{u"ProBuilderLog.txt"};

static inline void setStaticF_s_logStack(::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>*  value) ;

static inline ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>* getStaticF_s_logStack() ;

static inline void setStaticF_s_LogLevel(::UnityEngine::ProBuilder::LogLevel  value) ;

static inline ::UnityEngine::ProBuilder::LogLevel getStaticF_s_LogLevel() ;

static inline void setStaticF_s_Output(::UnityEngine::ProBuilder::LogOutput  value) ;

static inline ::UnityEngine::ProBuilder::LogOutput getStaticF_s_Output() ;

static inline void setStaticF_s_LogFilePath(::StringW  value) ;

static inline ::StringW getStaticF_s_LogFilePath() ;

/// @brief Method PushLogLevel addr 0x2b47318 size 0x90 virtual false final false
static inline void PushLogLevel(::UnityEngine::ProBuilder::LogLevel  level) ;

/// @brief Method PopLogLevel addr 0x2b473a8 size 0x88 virtual false final false
static inline void PopLogLevel() ;

/// @brief Method SetLogLevel addr 0x2b47430 size 0x5c virtual false final false
static inline void SetLogLevel(::UnityEngine::ProBuilder::LogLevel  level) ;

/// @brief Method SetOutput addr 0x2b4748c size 0x5c virtual false final false
static inline void SetOutput(::UnityEngine::ProBuilder::LogOutput  output) ;

/// @brief Method SetLogFile addr 0x2b474e8 size 0x5c virtual false final false
static inline void SetLogFile(::StringW  path) ;

/// @brief Method Debug addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void Debug(T  value) ;

/// @brief Method Debug addr 0x2b47544 size 0x58 virtual false final false
static inline void Debug(::StringW  message) ;

/// @brief Method Debug addr 0x2b4766c size 0x4 virtual false final false
static inline void Debug(::StringW  format, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method Info addr 0x2b47670 size 0x78 virtual false final false
static inline void Info(::StringW  format, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method Info addr 0x2b476e8 size 0x80 virtual false final false
static inline void Info(::StringW  message) ;

/// @brief Method Warning addr 0x2b47768 size 0x78 virtual false final false
static inline void Warning(::StringW  format, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method Warning addr 0x2b477e0 size 0x80 virtual false final false
static inline void Warning(::StringW  message) ;

/// @brief Method Error addr 0x2b47860 size 0x78 virtual false final false
static inline void Error(::StringW  format, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  values) ;

/// @brief Method Error addr 0x2b3b24c size 0x80 virtual false final false
static inline void Error(::StringW  message) ;

/// @brief Method Watch addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T,typename K>
static inline void Watch(T  key, K  value) ;

/// @brief Method DoPrint addr 0x2b4759c size 0xd0 virtual false final false
static inline void DoPrint(::StringW  message, ::UnityEngine::LogType  type) ;

/// @brief Method PrintToFile addr 0x2b479ac size 0x3d8 virtual false final false
static inline void PrintToFile(::StringW  message, ::StringW  path) ;

/// @brief Method ClearLogFile addr 0x2b47d84 size 0x90 virtual false final false
static inline void ClearLogFile() ;

/// @brief Method PrintToConsole addr 0x2b478d8 size 0xd4 virtual false final false
static inline void PrintToConsole(::StringW  message, ::UnityEngine::LogType  type) ;

/// @brief Method NotNull addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void NotNull(T  obj, ::StringW  message) ;

// Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Log(Log && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Log(Log const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Log()  = default;
public:


// Fields

// Static field s_logStack

// Static field s_LogLevel

// Static field s_Output

// Static field s_LogFilePath


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Log, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Log);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Log*, "UnityEngine.ProBuilder", "Log");
