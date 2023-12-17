#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PartyMessageHandler)
namespace GlobalNamespace {
class __PartyMessageHandler__ConnectToMasterServerMessage;
}
namespace GlobalNamespace {
class __PartyMessageHandler__ConnectToMasterServerDelegate;
}
namespace GlobalNamespace {
class __PartyMessageHandler__ServerStatusUpdatedDelegate;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace GlobalNamespace {
struct __PartyMessageHandler__MessageType;
}
namespace GlobalNamespace {
template<typename TType,typename TData>
class NetworkPacketSerializer_2;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
// Forward declare root types
namespace GlobalNamespace {
struct __PartyMessageHandler__MessageType;
}
namespace GlobalNamespace {
class PartyMessageHandler;
}
namespace GlobalNamespace {
class __PartyMessageHandler__ConnectToMasterServerDelegate;
}
namespace GlobalNamespace {
class __PartyMessageHandler__ConnectToMasterServerMessage;
}
namespace GlobalNamespace {
class __PartyMessageHandler__ServerStatusUpdatedDelegate;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__PartyMessageHandler__MessageType);
MARK_REF_PTR_T(::GlobalNamespace::PartyMessageHandler);
MARK_REF_PTR_T(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate);
MARK_REF_PTR_T(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage);
MARK_REF_PTR_T(::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate);
// Type: ::MessageType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12916))
// CS Name: ::PartyMessageHandler::MessageType
struct CORDL_TYPE __PartyMessageHandler__MessageType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____PartyMessageHandler__MessageType_Unwrapped
enum struct ____PartyMessageHandler__MessageType_Unwrapped : int32_t {
__E_ConnectToMasterServer = static_cast<int32_t>(0x0),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ConnectToMasterServer value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__PartyMessageHandler__MessageType const ConnectToMasterServer;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____PartyMessageHandler__MessageType_Unwrapped () const noexcept {
return std::bit_cast<____PartyMessageHandler__MessageType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __PartyMessageHandler__MessageType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PartyMessageHandler__MessageType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PartyMessageHandler__MessageType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyMessageHandler__MessageType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ServerStatusUpdatedDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12917))
// CS Name: ::PartyMessageHandler::ServerStatusUpdatedDelegate*
class CORDL_TYPE __PartyMessageHandler__ServerStatusUpdatedDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0xe51294 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0xe51358 size 0x50 virtual true final false
inline void Invoke(::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask, ::GlobalNamespace::GameplayServerConfiguration  configuration) ;

/// @brief Method BeginInvoke addr 0xe513a8 size 0xc0 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask, ::GlobalNamespace::GameplayServerConfiguration  configuration, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0xe51468 size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ServerStatusUpdatedDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PartyMessageHandler__ServerStatusUpdatedDelegate(__PartyMessageHandler__ServerStatusUpdatedDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ServerStatusUpdatedDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PartyMessageHandler__ServerStatusUpdatedDelegate(__PartyMessageHandler__ServerStatusUpdatedDelegate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PartyMessageHandler__ServerStatusUpdatedDelegate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ConnectToMasterServerDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12918))
// CS Name: ::PartyMessageHandler::ConnectToMasterServerDelegate*
class CORDL_TYPE __PartyMessageHandler__ConnectToMasterServerDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0xe51474 size 0xd4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0xe51548 size 0x14 virtual true final false
inline void Invoke(::StringW  secret) ;

/// @brief Method BeginInvoke addr 0xe5155c size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  secret, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0xe5157c size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ConnectToMasterServerDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PartyMessageHandler__ConnectToMasterServerDelegate(__PartyMessageHandler__ConnectToMasterServerDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ConnectToMasterServerDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PartyMessageHandler__ConnectToMasterServerDelegate(__PartyMessageHandler__ConnectToMasterServerDelegate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PartyMessageHandler__ConnectToMasterServerDelegate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ConnectToMasterServerMessage
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12919))
// CS Name: ::PartyMessageHandler::ConnectToMasterServerMessage*
class CORDL_TYPE __PartyMessageHandler__ConnectToMasterServerMessage : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field secret offset 0x10
 __declspec(property(get=__get_secret, put=__set_secret)) ::StringW  secret;

/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr operator  ::LiteNetLib::Utils::INetSerializable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr operator  ::GlobalNamespace::IPoolablePacket*() noexcept;

constexpr void __set_secret(::StringW  value) ;

constexpr ::StringW& __get_secret() ;

constexpr ::StringW const& __get_secret() const;

/// @brief Method get_pool addr 0xe50fd0 size 0x40 virtual false final false
static inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*>* get_pool() ;

/// @brief Method Init addr 0xe511f8 size 0x8 virtual false final false
inline ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage* Init(::StringW  secret) ;

/// @brief Method Serialize addr 0xe51588 size 0x24 virtual true final true
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0xe515ac size 0x28 virtual true final true
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method Release addr 0xe51240 size 0x54 virtual true final true
inline void Release() ;

static inline ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage* New_ctor() ;

/// @brief Method .ctor addr 0xe515d4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ConnectToMasterServerMessage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PartyMessageHandler__ConnectToMasterServerMessage(__PartyMessageHandler__ConnectToMasterServerMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PartyMessageHandler__ConnectToMasterServerMessage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PartyMessageHandler__ConnectToMasterServerMessage(__PartyMessageHandler__ConnectToMasterServerMessage const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PartyMessageHandler__ConnectToMasterServerMessage()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PartyMessageHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12920))
// CS Name: ::PartyMessageHandler*
class CORDL_TYPE PartyMessageHandler : public ::System::Object {
public:
// Declarations
using ConnectToMasterServerMessage = ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage;

using ConnectToMasterServerDelegate = ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate;

using ServerStatusUpdatedDelegate = ::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate;

using MessageType = ::GlobalNamespace::__PartyMessageHandler__MessageType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _serializer offset 0x10
 __declspec(property(get=__get__serializer, put=__set__serializer)) ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType,::GlobalNamespace::IConnectedPlayer*>*  _serializer;

/// @brief Field _connectedPlayerManager offset 0x18
 __declspec(property(get=__get__connectedPlayerManager, put=__set__connectedPlayerManager)) ::GlobalNamespace::ConnectedPlayerManager*  _connectedPlayerManager;

/// @brief Field connectToMasterServerEvent offset 0x20
 __declspec(property(get=__get_connectToMasterServerEvent, put=__set_connectToMasterServerEvent)) ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*  connectToMasterServerEvent;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set__serializer(::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType,::GlobalNamespace::IConnectedPlayer*>*  value) ;

constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType,::GlobalNamespace::IConnectedPlayer*>* __get__serializer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__PartyMessageHandler__MessageType,::GlobalNamespace::IConnectedPlayer*>*> __get__serializer() const;

constexpr void __set__connectedPlayerManager(::GlobalNamespace::ConnectedPlayerManager*  value) ;

constexpr ::GlobalNamespace::ConnectedPlayerManager* __get__connectedPlayerManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ConnectedPlayerManager*> __get__connectedPlayerManager() const;

constexpr void __set_connectToMasterServerEvent(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*  value) ;

constexpr ::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate* __get_connectToMasterServerEvent() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*> __get_connectToMasterServerEvent() const;

static inline ::GlobalNamespace::PartyMessageHandler* New_ctor(::GlobalNamespace::ConnectedPlayerManager*  connectedPlayerManager) ;

/// @brief Method .ctor addr 0xe50e68 size 0x168 virtual false final false
inline void _ctor(::GlobalNamespace::ConnectedPlayerManager*  connectedPlayerManager) ;

/// @brief Method Dispose addr 0xe51010 size 0x28 virtual true final true
inline void Dispose() ;

/// @brief Method add_connectToMasterServerEvent addr 0xe51038 size 0x9c virtual false final false
inline void add_connectToMasterServerEvent(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*  value) ;

/// @brief Method remove_connectToMasterServerEvent addr 0xe510d4 size 0x9c virtual false final false
inline void remove_connectToMasterServerEvent(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*  value) ;

/// @brief Method ConnectToMasterServer addr 0xe51170 size 0x88 virtual false final false
inline void ConnectToMasterServer(::StringW  secret) ;

/// @brief Method HandleConnectToMasterServer addr 0xe51200 size 0x40 virtual false final false
inline void HandleConnectToMasterServer(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*  packet) ;

// Ctor Parameters [CppParam { name: "", ty: "PartyMessageHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PartyMessageHandler(PartyMessageHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PartyMessageHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PartyMessageHandler(PartyMessageHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PartyMessageHandler()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PartyMessageHandler, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyMessageHandler__MessageType, "", "PartyMessageHandler/MessageType");
NEED_NO_BOX(::GlobalNamespace::PartyMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PartyMessageHandler*, "", "PartyMessageHandler");
NEED_NO_BOX(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerDelegate*, "", "PartyMessageHandler/ConnectToMasterServerDelegate");
NEED_NO_BOX(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyMessageHandler__ConnectToMasterServerMessage*, "", "PartyMessageHandler/ConnectToMasterServerMessage");
NEED_NO_BOX(::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyMessageHandler__ServerStatusUpdatedDelegate*, "", "PartyMessageHandler/ServerStatusUpdatedDelegate");
