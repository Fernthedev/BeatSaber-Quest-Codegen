#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_SessionData)
namespace HoudiniEngineUnity {
struct HAPI_SessionType;
}
namespace HoudiniEngineUnity {
struct HAPI_Session;
}
namespace HoudiniEngineUnity {
struct SessionMode;
}
namespace System {
class Type;
}
namespace HoudiniEngineUnity {
struct SessionConnectionState;
}
namespace HoudiniEngineUnity {
class HEU_SessionSyncData;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_SessionData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_SessionData);
// Type: HoudiniEngineUnity::HEU_SessionData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9784))
// CS Name: ::HoudiniEngineUnity::HEU_SessionData*
class CORDL_TYPE HEU_SessionData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Object)]{};

/// @brief Field _HAPISession offset 0x10
 __declspec(property(get=__get__HAPISession, put=__set__HAPISession)) ::HoudiniEngineUnity::HAPI_Session  _HAPISession;

/// @brief Field _serverProcessID offset 0x20
 __declspec(property(get=__get__serverProcessID, put=__set__serverProcessID)) int32_t  _serverProcessID;

/// @brief Field _initialized offset 0x24
 __declspec(property(get=__get__initialized, put=__set__initialized)) bool  _initialized;

/// @brief Field _pipeName offset 0x28
 __declspec(property(get=__get__pipeName, put=__set__pipeName)) ::StringW  _pipeName;

/// @brief Field _port offset 0x30
 __declspec(property(get=__get__port, put=__set__port)) int32_t  _port;

/// @brief Field _sessionClassType offset 0x38
 __declspec(property(get=__get__sessionClassType, put=__set__sessionClassType)) ::StringW  _sessionClassType;

/// @brief Field _isDefaultSession offset 0x40
 __declspec(property(get=__get__isDefaultSession, put=__set__isDefaultSession)) bool  _isDefaultSession;

/// @brief Field _sessionSync offset 0x48
 __declspec(property(get=__get__sessionSync, put=__set__sessionSync)) ::HoudiniEngineUnity::HEU_SessionSyncData*  _sessionSync;

/// @brief Field _connectionState offset 0x50
 __declspec(property(get=__get__connectionState, put=__set__connectionState)) ::HoudiniEngineUnity::SessionConnectionState  _connectionState;

/// @brief Field _sessionMode offset 0x54
 __declspec(property(get=__get__sessionMode, put=__set__sessionMode)) ::HoudiniEngineUnity::SessionMode  _sessionMode;

 __declspec(property(get=get_SessionID, put=set_SessionID)) int64_t  SessionID;

 __declspec(property(get=get_ProcessID, put=set_ProcessID)) int32_t  ProcessID;

 __declspec(property(get=get_SessionType, put=set_SessionType)) ::HoudiniEngineUnity::HAPI_SessionType  SessionType;

 __declspec(property(get=get_IsInitialized, put=set_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_IsValidSessionID)) bool  IsValidSessionID;

 __declspec(property(get=get_PipeName, put=set_PipeName)) ::StringW  PipeName;

 __declspec(property(get=get_Port, put=set_Port)) int32_t  Port;

 __declspec(property(get=get_SessionClassType, put=set_SessionClassType)) ::System::Type*  SessionClassType;

 __declspec(property(get=get_IsDefaultSession, put=set_IsDefaultSession)) bool  IsDefaultSession;

 __declspec(property(get=get_IsSessionSync)) bool  IsSessionSync;

 __declspec(property(get=get_ThisConnectionMode, put=set_ThisConnectionMode)) ::HoudiniEngineUnity::SessionConnectionState  ThisConnectionMode;

 __declspec(property(get=get_ThisSessionMode, put=set_ThisSessionMode)) ::HoudiniEngineUnity::SessionMode  ThisSessionMode;

static inline void setStaticF_INVALID_SESSION_ID(int64_t  value) ;

static inline int64_t getStaticF_INVALID_SESSION_ID() ;

constexpr void __set__HAPISession(::HoudiniEngineUnity::HAPI_Session  value) ;

constexpr ::HoudiniEngineUnity::HAPI_Session& __get__HAPISession() ;

constexpr ::HoudiniEngineUnity::HAPI_Session const& __get__HAPISession() const;

constexpr void __set__serverProcessID(int32_t  value) ;

constexpr int32_t& __get__serverProcessID() ;

constexpr int32_t const& __get__serverProcessID() const;

constexpr void __set__initialized(bool  value) ;

constexpr bool& __get__initialized() ;

constexpr bool const& __get__initialized() const;

constexpr void __set__pipeName(::StringW  value) ;

constexpr ::StringW& __get__pipeName() ;

constexpr ::StringW const& __get__pipeName() const;

constexpr void __set__port(int32_t  value) ;

constexpr int32_t& __get__port() ;

constexpr int32_t const& __get__port() const;

constexpr void __set__sessionClassType(::StringW  value) ;

constexpr ::StringW& __get__sessionClassType() ;

constexpr ::StringW const& __get__sessionClassType() const;

constexpr void __set__isDefaultSession(bool  value) ;

constexpr bool& __get__isDefaultSession() ;

constexpr bool const& __get__isDefaultSession() const;

constexpr void __set__sessionSync(::HoudiniEngineUnity::HEU_SessionSyncData*  value) ;

constexpr ::HoudiniEngineUnity::HEU_SessionSyncData* __get__sessionSync() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_SessionSyncData*> __get__sessionSync() const;

constexpr void __set__connectionState(::HoudiniEngineUnity::SessionConnectionState  value) ;

constexpr ::HoudiniEngineUnity::SessionConnectionState& __get__connectionState() ;

constexpr ::HoudiniEngineUnity::SessionConnectionState const& __get__connectionState() const;

constexpr void __set__sessionMode(::HoudiniEngineUnity::SessionMode  value) ;

constexpr ::HoudiniEngineUnity::SessionMode& __get__sessionMode() ;

constexpr ::HoudiniEngineUnity::SessionMode const& __get__sessionMode() const;

/// @brief Method GetOrCreateSessionSync addr 0x21a26fc size 0x68 virtual false final false
inline ::HoudiniEngineUnity::HEU_SessionSyncData* GetOrCreateSessionSync() ;

/// @brief Method GetSessionSync addr 0x21a2810 size 0x8 virtual false final false
inline ::HoudiniEngineUnity::HEU_SessionSyncData* GetSessionSync() ;

/// @brief Method SetSessionSync addr 0x21a2818 size 0x8 virtual false final false
inline void SetSessionSync(::HoudiniEngineUnity::HEU_SessionSyncData*  syncData) ;

/// @brief Method get_SessionID addr 0x21a2820 size 0x58 virtual false final false
inline int64_t get_SessionID() ;

/// @brief Method set_SessionID addr 0x21a1f04 size 0x8 virtual false final false
inline void set_SessionID(int64_t  value) ;

/// @brief Method get_ProcessID addr 0x21a2878 size 0x8 virtual false final false
inline int32_t get_ProcessID() ;

/// @brief Method set_ProcessID addr 0x21a2880 size 0x8 virtual false final false
inline void set_ProcessID(int32_t  value) ;

/// @brief Method get_SessionType addr 0x21a2888 size 0x8 virtual false final false
inline ::HoudiniEngineUnity::HAPI_SessionType get_SessionType() ;

/// @brief Method set_SessionType addr 0x21a2890 size 0x8 virtual false final false
inline void set_SessionType(::HoudiniEngineUnity::HAPI_SessionType  value) ;

/// @brief Method get_IsInitialized addr 0x21a2898 size 0x8 virtual false final false
inline bool get_IsInitialized() ;

/// @brief Method set_IsInitialized addr 0x21a28a0 size 0xc virtual false final false
inline void set_IsInitialized(bool  value) ;

/// @brief Method get_IsValidSessionID addr 0x21a28ac size 0x8 virtual false final false
inline bool get_IsValidSessionID() ;

/// @brief Method get_PipeName addr 0x21a28b4 size 0x40 virtual false final false
inline ::StringW get_PipeName() ;

/// @brief Method set_PipeName addr 0x21a28f4 size 0x8 virtual false final false
inline void set_PipeName(::StringW  value) ;

/// @brief Method get_Port addr 0x21a28fc size 0x8 virtual false final false
inline int32_t get_Port() ;

/// @brief Method set_Port addr 0x21a2904 size 0x8 virtual false final false
inline void set_Port(int32_t  value) ;

/// @brief Method get_SessionClassType addr 0x21a290c size 0xa8 virtual false final false
inline ::System::Type* get_SessionClassType() ;

/// @brief Method set_SessionClassType addr 0x21a29b4 size 0x30 virtual false final false
inline void set_SessionClassType(::System::Type*  value) ;

/// @brief Method get_IsDefaultSession addr 0x21a29e4 size 0x8 virtual false final false
inline bool get_IsDefaultSession() ;

/// @brief Method set_IsDefaultSession addr 0x21a29ec size 0xc virtual false final false
inline void set_IsDefaultSession(bool  value) ;

/// @brief Method get_IsSessionSync addr 0x21a1ac4 size 0x10 virtual false final false
inline bool get_IsSessionSync() ;

/// @brief Method get_ThisConnectionMode addr 0x21a29f8 size 0x8 virtual false final false
inline ::HoudiniEngineUnity::SessionConnectionState get_ThisConnectionMode() ;

/// @brief Method set_ThisConnectionMode addr 0x21a2a00 size 0x8 virtual false final false
inline void set_ThisConnectionMode(::HoudiniEngineUnity::SessionConnectionState  value) ;

/// @brief Method get_ThisSessionMode addr 0x21a2a08 size 0x8 virtual false final false
inline ::HoudiniEngineUnity::SessionMode get_ThisSessionMode() ;

/// @brief Method set_ThisSessionMode addr 0x21a2a10 size 0x8 virtual false final false
inline void set_ThisSessionMode(::HoudiniEngineUnity::SessionMode  value) ;

static inline ::HoudiniEngineUnity::HEU_SessionData* New_ctor() ;

/// @brief Method .ctor addr 0x21a2a18 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_SessionData(HEU_SessionData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_SessionData(HEU_SessionData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_SessionData()  = default;
public:


// Fields

// Static field INVALID_SESSION_ID


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_SessionData, 0x58>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_SessionData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionData*, "HoudiniEngineUnity", "HEU_SessionData");
