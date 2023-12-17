#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NetDebug)
namespace System {
class Object;
}
namespace LiteNetLib {
struct NetLogLevel;
}
namespace LiteNetLib {
class INetLogger;
}
// Forward declare root types
namespace LiteNetLib {
class NetDebug;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NetDebug);
// Type: LiteNetLib::NetDebug
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14159))
// CS Name: ::LiteNetLib::NetDebug*
class CORDL_TYPE NetDebug : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Logger(::LiteNetLib::INetLogger*  value) ;

static inline ::LiteNetLib::INetLogger* getStaticF_Logger() ;

static inline void setStaticF_DebugLogLock(::System::Object*  value) ;

static inline ::System::Object* getStaticF_DebugLogLock() ;

/// @brief Method WriteLogic addr 0x21fbee4 size 0x220 virtual false final false
static inline void WriteLogic(::LiteNetLib::NetLogLevel  logLevel, ::StringW  str, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Write addr 0x21fc104 size 0x68 virtual false final false
static inline void Write(::StringW  str, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Write addr 0x21fc16c size 0x6c virtual false final false
static inline void Write(::LiteNetLib::NetLogLevel  level, ::StringW  str, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method WriteForce addr 0x21fc1d8 size 0x68 virtual false final false
static inline void WriteForce(::StringW  str, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method WriteForce addr 0x21fc240 size 0x6c virtual false final false
static inline void WriteForce(::LiteNetLib::NetLogLevel  level, ::StringW  str, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method WriteError addr 0x21f84d4 size 0x68 virtual false final false
static inline void WriteError(::StringW  str, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

// Ctor Parameters [CppParam { name: "", ty: "NetDebug", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetDebug(NetDebug && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetDebug", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetDebug(NetDebug const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NetDebug()  = default;
public:


// Fields

// Static field Logger

// Static field DebugLogLock


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetDebug, 0x10>, "Size mismatch!");

} // namespace end def LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetDebug);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetDebug*, "LiteNetLib", "NetDebug");
