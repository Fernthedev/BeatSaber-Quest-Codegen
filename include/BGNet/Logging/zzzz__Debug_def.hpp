#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Debug)
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace BGNet::Logging {
class __Debug__LoggerLinkedList;
}
namespace BGNet::Logging {
class __Debug__ILogger;
}
// Forward declare root types
namespace BGNet::Logging {
class Debug;
}
namespace BGNet::Logging {
class __Debug__ILogger;
}
namespace BGNet::Logging {
class __Debug__LoggerLinkedList;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Logging::Debug);
MARK_REF_PTR_T(::BGNet::Logging::__Debug__ILogger);
MARK_REF_PTR_T(::BGNet::Logging::__Debug__LoggerLinkedList);
// Type: ::LoggerLinkedList
namespace BGNet::Logging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16234))
// CS Name: ::Debug::LoggerLinkedList*
class CORDL_TYPE __Debug__LoggerLinkedList : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field logger offset 0x10
 __declspec(property(get=__get_logger, put=__set_logger)) ::BGNet::Logging::__Debug__ILogger*  logger;

/// @brief Field next offset 0x18
 __declspec(property(get=__get_next, put=__set_next)) ::BGNet::Logging::__Debug__LoggerLinkedList*  next;

constexpr void __set_logger(::BGNet::Logging::__Debug__ILogger*  value) ;

constexpr ::BGNet::Logging::__Debug__ILogger* __get_logger() ;

constexpr ::cordl_internals::to_const_pointer<::BGNet::Logging::__Debug__ILogger*> __get_logger() const;

constexpr void __set_next(::BGNet::Logging::__Debug__LoggerLinkedList*  value) ;

constexpr ::BGNet::Logging::__Debug__LoggerLinkedList* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::BGNet::Logging::__Debug__LoggerLinkedList*> __get_next() const;

static inline ::BGNet::Logging::__Debug__LoggerLinkedList* New_ctor(::BGNet::Logging::__Debug__ILogger*  logger) ;

/// @brief Method .ctor addr 0xe61608 size 0x28 virtual false final false
inline void _ctor(::BGNet::Logging::__Debug__ILogger*  logger) ;

// Ctor Parameters [CppParam { name: "", ty: "__Debug__LoggerLinkedList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Debug__LoggerLinkedList(__Debug__LoggerLinkedList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Debug__LoggerLinkedList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Debug__LoggerLinkedList(__Debug__LoggerLinkedList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Debug__LoggerLinkedList()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Logging::__Debug__LoggerLinkedList, 0x20>, "Size mismatch!");

} // namespace end def BGNet::Logging
// Type: ::ILogger
namespace BGNet::Logging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16235))
// CS Name: ::Debug::ILogger*
class CORDL_TYPE __Debug__ILogger {
public:
// Declarations
/// @brief Method LogInfo addr 0x0 size 0xffffffffffffffff virtual true final false
inline void LogInfo(::StringW  message) ;

/// @brief Method LogError addr 0x0 size 0xffffffffffffffff virtual true final false
inline void LogError(::StringW  message) ;

/// @brief Method LogException addr 0x0 size 0xffffffffffffffff virtual true final false
inline void LogException(::System::Exception*  exception, ::StringW  message) ;

/// @brief Method LogWarning addr 0x0 size 0xffffffffffffffff virtual true final false
inline void LogWarning(::StringW  message) ;

// Ctor Parameters [CppParam { name: "", ty: "__Debug__ILogger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Debug__ILogger(__Debug__ILogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Debug__ILogger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Debug__ILogger(__Debug__ILogger const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Logging
// Type: BGNet.Logging::Debug
namespace BGNet::Logging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16236))
// CS Name: ::BGNet.Logging::Debug*
class CORDL_TYPE Debug : public ::System::Object {
public:
// Declarations
using ILogger = ::BGNet::Logging::__Debug__ILogger;

using LoggerLinkedList = ::BGNet::Logging::__Debug__LoggerLinkedList;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__loggersMutex(::System::Object*  value) ;

static inline ::System::Object* getStaticF__loggersMutex() ;

static inline void setStaticF__loggers(::BGNet::Logging::__Debug__LoggerLinkedList*  value) ;

static inline ::BGNet::Logging::__Debug__LoggerLinkedList* getStaticF__loggers() ;

/// @brief Method NoDomainReloadInit addr 0xe61380 size 0x90 virtual false final false
static inline void NoDomainReloadInit() ;

/// @brief Method AddLogger addr 0xe61418 size 0x178 virtual false final false
static inline void AddLogger(::BGNet::Logging::__Debug__ILogger*  logger) ;

/// @brief Method RemoveLogger addr 0xe61630 size 0x24c virtual false final false
static inline void RemoveLogger(::BGNet::Logging::__Debug__ILogger*  logger) ;

/// @brief Method Log addr 0xe6187c size 0xf4 virtual false final false
static inline void Log(::StringW  message) ;

/// @brief Method LogError addr 0xe61970 size 0xf8 virtual false final false
static inline void LogError(::StringW  message) ;

/// @brief Method LogException addr 0xe61a68 size 0x100 virtual false final false
static inline void LogException(::System::Exception*  exception, ::StringW  message) ;

/// @brief Method LogWarning addr 0xe61b68 size 0xf8 virtual false final false
static inline void LogWarning(::StringW  message) ;

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Debug(Debug && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Debug(Debug const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Debug()  = default;
public:


// Fields

// Static field _loggersMutex

// Static field _loggers


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Logging::Debug, 0x10>, "Size mismatch!");

} // namespace end def BGNet::Logging
NEED_NO_BOX(::BGNet::Logging::Debug);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::Debug*, "BGNet.Logging", "Debug");
NEED_NO_BOX(::BGNet::Logging::__Debug__ILogger);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::__Debug__ILogger*, "BGNet.Logging", "Debug/ILogger");
NEED_NO_BOX(::BGNet::Logging::__Debug__LoggerLinkedList);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::__Debug__LoggerLinkedList*, "BGNet.Logging", "Debug/LoggerLinkedList");
