#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerConnection)
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerConnection____c__DisplayClass13_0;
}
namespace System {
struct Guid;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Networking::PlayerConnection {
class IEditorPlayerConnection;
}
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerConnection____c__DisplayClass12_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerConnection____c__DisplayClass20_0;
}
namespace UnityEngine {
class IPlayerEditorConnectionNative;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerEditorConnectionEvents__MessageTypeSubscribers;
}
// Forward declare root types
namespace UnityEngine::Networking::PlayerConnection {
class PlayerConnection;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerConnection____c__DisplayClass12_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerConnection____c__DisplayClass13_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class __PlayerConnection____c__DisplayClass20_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::PlayerConnection);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass12_0);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass13_0);
MARK_REF_PTR_T(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass20_0);
// Type: ::<>c__DisplayClass12_0
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10308))
// CS Name: ::PlayerConnection::<>c__DisplayClass12_0*
class CORDL_TYPE __PlayerConnection____c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field messageId offset 0x10
 __declspec(property(get=__get_messageId, put=__set_messageId)) ::System::Guid  messageId;

constexpr void __set_messageId(::System::Guid  value) ;

constexpr ::System::Guid& __get_messageId() ;

constexpr ::System::Guid const& __get_messageId() const;

static inline ::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass12_0* New_ctor() ;

/// @brief Method .ctor addr 0x2ce8144 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Register>b__0 addr 0x2ce8e48 size 0x48 virtual false final false
inline bool _Register_b__0(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__PlayerConnection____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PlayerConnection____c__DisplayClass12_0(__PlayerConnection____c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PlayerConnection____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PlayerConnection____c__DisplayClass12_0(__PlayerConnection____c__DisplayClass12_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PlayerConnection____c__DisplayClass12_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass12_0, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::Networking::PlayerConnection
// Type: ::<>c__DisplayClass13_0
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10309))
// CS Name: ::PlayerConnection::<>c__DisplayClass13_0*
class CORDL_TYPE __PlayerConnection____c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field messageId offset 0x10
 __declspec(property(get=__get_messageId, put=__set_messageId)) ::System::Guid  messageId;

constexpr void __set_messageId(::System::Guid  value) ;

constexpr ::System::Guid& __get_messageId() ;

constexpr ::System::Guid const& __get_messageId() const;

static inline ::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass13_0* New_ctor() ;

/// @brief Method .ctor addr 0x2ce82f4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Unregister>b__0 addr 0x2ce8e90 size 0x48 virtual false final false
inline bool _Unregister_b__0(::UnityEngine::Networking::PlayerConnection::__PlayerEditorConnectionEvents__MessageTypeSubscribers*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__PlayerConnection____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PlayerConnection____c__DisplayClass13_0(__PlayerConnection____c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PlayerConnection____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PlayerConnection____c__DisplayClass13_0(__PlayerConnection____c__DisplayClass13_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PlayerConnection____c__DisplayClass13_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass13_0, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::Networking::PlayerConnection
// Type: ::<>c__DisplayClass20_0
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10310))
// CS Name: ::PlayerConnection::<>c__DisplayClass20_0*
class CORDL_TYPE __PlayerConnection____c__DisplayClass20_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field msgReceived offset 0x10
 __declspec(property(get=__get_msgReceived, put=__set_msgReceived)) bool  msgReceived;

constexpr void __set_msgReceived(bool  value) ;

constexpr bool& __get_msgReceived() ;

constexpr bool const& __get_msgReceived() const;

static inline ::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass20_0* New_ctor() ;

/// @brief Method .ctor addr 0x2ce8a74 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <BlockUntilRecvMsg>b__0 addr 0x2ce8ed8 size 0xc virtual false final false
inline void _BlockUntilRecvMsg_b__0(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

// Ctor Parameters [CppParam { name: "", ty: "__PlayerConnection____c__DisplayClass20_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PlayerConnection____c__DisplayClass20_0(__PlayerConnection____c__DisplayClass20_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PlayerConnection____c__DisplayClass20_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PlayerConnection____c__DisplayClass20_0(__PlayerConnection____c__DisplayClass20_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PlayerConnection____c__DisplayClass20_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass20_0, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Networking::PlayerConnection
// Type: UnityEngine.Networking.PlayerConnection::PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10311))
// CS Name: ::UnityEngine.Networking.PlayerConnection::PlayerConnection*
class CORDL_TYPE PlayerConnection : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using __c__DisplayClass20_0 = ::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass20_0;

using __c__DisplayClass13_0 = ::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass13_0;

using __c__DisplayClass12_0 = ::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass12_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field m_PlayerEditorConnectionEvents offset 0x18
 __declspec(property(get=__get_m_PlayerEditorConnectionEvents, put=__set_m_PlayerEditorConnectionEvents)) ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents*  m_PlayerEditorConnectionEvents;

/// @brief Field m_connectedPlayers offset 0x20
 __declspec(property(get=__get_m_connectedPlayers, put=__set_m_connectedPlayers)) ::System::Collections::Generic::List_1<int32_t>*  m_connectedPlayers;

/// @brief Field m_IsInitilized offset 0x28
 __declspec(property(get=__get_m_IsInitilized, put=__set_m_IsInitilized)) bool  m_IsInitilized;

 __declspec(property(get=get_isConnected)) bool  isConnected;

/// @brief Convert operator to "::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection"
constexpr operator  ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*() noexcept;

static inline void setStaticF_connectionNative(::UnityEngine::IPlayerEditorConnectionNative*  value) ;

static inline ::UnityEngine::IPlayerEditorConnectionNative* getStaticF_connectionNative() ;

constexpr void __set_m_PlayerEditorConnectionEvents(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents*  value) ;

constexpr ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents* __get_m_PlayerEditorConnectionEvents() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents*> __get_m_PlayerEditorConnectionEvents() const;

constexpr void __set_m_connectedPlayers(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::List_1<int32_t>* __get_m_connectedPlayers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> __get_m_connectedPlayers() const;

constexpr void __set_m_IsInitilized(bool  value) ;

constexpr bool& __get_m_IsInitilized() ;

constexpr bool const& __get_m_IsInitilized() const;

static inline void setStaticF_s_Instance(::UnityEngine::Networking::PlayerConnection::PlayerConnection*  value) ;

static inline ::UnityEngine::Networking::PlayerConnection::PlayerConnection* getStaticF_s_Instance() ;

/// @brief Method get_instance addr 0x2ce7c08 size 0x98 virtual false final false
static inline ::UnityEngine::Networking::PlayerConnection::PlayerConnection* get_instance() ;

/// @brief Method get_isConnected addr 0x2ce7d24 size 0x9c virtual false final false
inline bool get_isConnected() ;

/// @brief Method CreateInstance addr 0x2ce7ca0 size 0x84 virtual false final false
static inline ::UnityEngine::Networking::PlayerConnection::PlayerConnection* CreateInstance() ;

/// @brief Method OnEnable addr 0x2ce7e40 size 0xc0 virtual false final false
inline void OnEnable() ;

/// @brief Method GetConnectionNativeApi addr 0x2ce7dc0 size 0x80 virtual false final false
inline ::UnityEngine::IPlayerEditorConnectionNative* GetConnectionNativeApi() ;

/// @brief Method Register addr 0x2ce7f00 size 0x244 virtual true final true
inline void Register(::System::Guid  messageId, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*  callback) ;

/// @brief Method Unregister addr 0x2ce814c size 0x1a8 virtual true final true
inline void Unregister(::System::Guid  messageId, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*  callback) ;

/// @brief Method RegisterConnection addr 0x2ce82fc size 0x1a0 virtual true final true
inline void RegisterConnection(::UnityEngine::Events::UnityAction_1<int32_t>*  callback) ;

/// @brief Method RegisterDisconnection addr 0x2ce849c size 0x60 virtual true final true
inline void RegisterDisconnection(::UnityEngine::Events::UnityAction_1<int32_t>*  callback) ;

/// @brief Method UnregisterConnection addr 0x2ce84fc size 0x60 virtual true final true
inline void UnregisterConnection(::UnityEngine::Events::UnityAction_1<int32_t>*  callback) ;

/// @brief Method UnregisterDisconnection addr 0x2ce855c size 0x60 virtual true final true
inline void UnregisterDisconnection(::UnityEngine::Events::UnityAction_1<int32_t>*  callback) ;

/// @brief Method Send addr 0x2ce85bc size 0x15c virtual true final true
inline void Send(::System::Guid  messageId, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method TrySend addr 0x2ce8718 size 0x15c virtual true final true
inline bool TrySend(::System::Guid  messageId, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method BlockUntilRecvMsg addr 0x2ce8874 size 0x200 virtual false final false
inline bool BlockUntilRecvMsg(::System::Guid  messageId, int32_t  timeout) ;

/// @brief Method DisconnectAll addr 0x2ce8a7c size 0x9c virtual true final true
inline void DisconnectAll() ;

/// @brief Method MessageCallbackInternal addr 0x2ce8b18 size 0x118 virtual false final false
static inline void MessageCallbackInternal(::cordl_internals::intptr_t  data, uint64_t  size, uint64_t  guid, ::StringW  messageId) ;

/// @brief Method ConnectedCallbackInternal addr 0x2ce8c30 size 0xdc virtual false final false
static inline void ConnectedCallbackInternal(int32_t  playerId) ;

/// @brief Method DisconnectedCallback addr 0x2ce8d0c size 0x94 virtual false final false
static inline void DisconnectedCallback(int32_t  playerId) ;

static inline ::UnityEngine::Networking::PlayerConnection::PlayerConnection* New_ctor() ;

/// @brief Method .ctor addr 0x2ce8da0 size 0xa8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PlayerConnection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerConnection(PlayerConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerConnection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerConnection(PlayerConnection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlayerConnection()  = default;
public:


// Fields

// Static field connectionNative

// Static field s_Instance


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::PlayerConnection::PlayerConnection, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::Networking::PlayerConnection
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::PlayerConnection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::PlayerConnection*, "UnityEngine.Networking.PlayerConnection", "PlayerConnection");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass12_0*, "UnityEngine.Networking.PlayerConnection", "PlayerConnection/<>c__DisplayClass12_0");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass13_0*, "UnityEngine.Networking.PlayerConnection", "PlayerConnection/<>c__DisplayClass13_0");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::__PlayerConnection____c__DisplayClass20_0*, "UnityEngine.Networking.PlayerConnection", "PlayerConnection/<>c__DisplayClass20_0");
