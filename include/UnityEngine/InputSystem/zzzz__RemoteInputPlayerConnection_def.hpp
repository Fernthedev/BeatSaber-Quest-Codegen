#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteInputPlayerConnection)
namespace System {
template<typename T>
class IObserver_1;
}
namespace UnityEngine::Networking::PlayerConnection {
class IEditorPlayerConnection;
}
namespace UnityEngine::InputSystem {
class __RemoteInputPlayerConnection__Subscriber;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace System {
struct Guid;
}
namespace System {
class Exception;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__Message;
}
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__MessageType;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class RemoteInputPlayerConnection;
}
namespace UnityEngine::InputSystem {
class __RemoteInputPlayerConnection__Subscriber;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::RemoteInputPlayerConnection);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber);
// Type: ::Subscriber
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6272))
// CS Name: ::RemoteInputPlayerConnection::Subscriber*
class CORDL_TYPE __RemoteInputPlayerConnection__Subscriber : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field owner offset 0x10
 __declspec(property(get=__get_owner, put=__set_owner)) ::UnityEngine::InputSystem::RemoteInputPlayerConnection*  owner;

/// @brief Field observer offset 0x18
 __declspec(property(get=__get_observer, put=__set_observer)) ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*  observer;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_owner(::UnityEngine::InputSystem::RemoteInputPlayerConnection*  value) ;

constexpr ::UnityEngine::InputSystem::RemoteInputPlayerConnection* __get_owner() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::RemoteInputPlayerConnection*> __get_owner() const;

constexpr void __set_observer(::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*  value) ;

constexpr ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>* __get_observer() ;

constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*> __get_observer() const;

/// @brief Method Dispose addr 0x2aa79e0 size 0x58 virtual true final true
inline void Dispose() ;

static inline ::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber* New_ctor() ;

/// @brief Method .ctor addr 0x2aa7344 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteInputPlayerConnection__Subscriber", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RemoteInputPlayerConnection__Subscriber(__RemoteInputPlayerConnection__Subscriber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RemoteInputPlayerConnection__Subscriber", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RemoteInputPlayerConnection__Subscriber(__RemoteInputPlayerConnection__Subscriber const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RemoteInputPlayerConnection__Subscriber()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::RemoteInputPlayerConnection
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6273))
// CS Name: ::UnityEngine.InputSystem::RemoteInputPlayerConnection*
class CORDL_TYPE RemoteInputPlayerConnection : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Subscriber = ::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field m_Connection offset 0x18
 __declspec(property(get=__get_m_Connection, put=__set_m_Connection)) ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*  m_Connection;

/// @brief Field m_Subscribers offset 0x20
 __declspec(property(get=__get_m_Subscribers, put=__set_m_Subscribers)) ::ArrayW<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*,::Array<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*>*>  m_Subscribers;

/// @brief Field m_ConnectedIds offset 0x28
 __declspec(property(get=__get_m_ConnectedIds, put=__set_m_ConnectedIds)) ::ArrayW<int32_t,::Array<int32_t>*>  m_ConnectedIds;

/// @brief Convert operator to "::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>"
constexpr operator  ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*() noexcept;

/// @brief Convert operator to "::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>"
constexpr operator  ::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>*() noexcept;

static inline void setStaticF_kNewDeviceMsg(::System::Guid  value) ;

static inline ::System::Guid getStaticF_kNewDeviceMsg() ;

static inline void setStaticF_kNewLayoutMsg(::System::Guid  value) ;

static inline ::System::Guid getStaticF_kNewLayoutMsg() ;

static inline void setStaticF_kNewEventsMsg(::System::Guid  value) ;

static inline ::System::Guid getStaticF_kNewEventsMsg() ;

static inline void setStaticF_kRemoveDeviceMsg(::System::Guid  value) ;

static inline ::System::Guid getStaticF_kRemoveDeviceMsg() ;

static inline void setStaticF_kChangeUsagesMsg(::System::Guid  value) ;

static inline ::System::Guid getStaticF_kChangeUsagesMsg() ;

static inline void setStaticF_kStartSendingMsg(::System::Guid  value) ;

static inline ::System::Guid getStaticF_kStartSendingMsg() ;

static inline void setStaticF_kStopSendingMsg(::System::Guid  value) ;

static inline ::System::Guid getStaticF_kStopSendingMsg() ;

constexpr void __set_m_Connection(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*  value) ;

constexpr ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection* __get_m_Connection() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*> __get_m_Connection() const;

constexpr void __set_m_Subscribers(::ArrayW<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*,::Array<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*,::Array<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*>*>& __get_m_Subscribers() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*,::Array<::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*>*> const& __get_m_Subscribers() const;

constexpr void __set_m_ConnectedIds(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_m_ConnectedIds() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_m_ConnectedIds() const;

/// @brief Method Bind addr 0x2aa69ec size 0x6dc virtual false final false
inline void Bind(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*  connection, bool  isConnected) ;

/// @brief Method Subscribe addr 0x2aa71a4 size 0x1a0 virtual true final true
inline ::System::IDisposable* Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*  observer) ;

/// @brief Method OnConnected addr 0x2aa70c8 size 0xdc virtual false final false
inline void OnConnected(int32_t  id) ;

/// @brief Method OnDisconnected addr 0x2aa7458 size 0xdc virtual false final false
inline void OnDisconnected(int32_t  id) ;

/// @brief Method OnNewDevice addr 0x2aa7534 size 0xc virtual false final false
inline void OnNewDevice(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

/// @brief Method OnNewLayout addr 0x2aa7540 size 0xc virtual false final false
inline void OnNewLayout(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

/// @brief Method OnNewEvents addr 0x2aa754c size 0xc virtual false final false
inline void OnNewEvents(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

/// @brief Method OnRemoveDevice addr 0x2aa7558 size 0xc virtual false final false
inline void OnRemoveDevice(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

/// @brief Method OnChangeUsages addr 0x2aa7564 size 0xc virtual false final false
inline void OnChangeUsages(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

/// @brief Method OnStartSending addr 0x2aa7570 size 0xc virtual false final false
inline void OnStartSending(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

/// @brief Method OnStopSending addr 0x2aa757c size 0xc virtual false final false
inline void OnStopSending(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

/// @brief Method SendToSubscribers addr 0x2aa734c size 0x10c virtual false final false
inline void SendToSubscribers(::UnityEngine::InputSystem::__InputRemoting__MessageType  type, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext addr 0x2aa7588 size 0x264 virtual true final true
inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext(::UnityEngine::InputSystem::__InputRemoting__Message  msg) ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError addr 0x2aa77ec size 0x4 virtual true final true
inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError(::System::Exception*  error) ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted addr 0x2aa77f0 size 0x4 virtual true final true
inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted() ;

static inline ::UnityEngine::InputSystem::RemoteInputPlayerConnection* New_ctor() ;

/// @brief Method .ctor addr 0x2aa77f4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RemoteInputPlayerConnection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteInputPlayerConnection(RemoteInputPlayerConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteInputPlayerConnection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteInputPlayerConnection(RemoteInputPlayerConnection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RemoteInputPlayerConnection()  = default;
public:


// Fields

// Static field kNewDeviceMsg

// Static field kNewLayoutMsg

// Static field kNewEventsMsg

// Static field kRemoveDeviceMsg

// Static field kChangeUsagesMsg

// Static field kStartSendingMsg

// Static field kStopSendingMsg


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::RemoteInputPlayerConnection, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::RemoteInputPlayerConnection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::RemoteInputPlayerConnection*, "UnityEngine.InputSystem", "RemoteInputPlayerConnection");
NEED_NO_BOX(::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__RemoteInputPlayerConnection__Subscriber*, "UnityEngine.InputSystem", "RemoteInputPlayerConnection/Subscriber");
