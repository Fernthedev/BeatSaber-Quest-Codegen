#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceConnectionManager)
namespace System::Threading::Tasks {
class Task;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager__ConnectToServerParams;
}
namespace IgnoranceCore {
class IgnoranceClient;
}
namespace IgnoranceCore {
class IgnoranceServer;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager____c__DisplayClass77_0;
}
namespace IgnoranceCore {
struct IgnoranceChannelTypes;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager____c__DisplayClass77_1;
}
namespace GlobalNamespace {
struct __IgnoranceConnectionManager___DisposeAsync_d__77;
}
namespace GlobalNamespace {
struct __IgnoranceConnectionManager__ConnectionState;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager__StartServerParams;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
template<typename T>
class IConnectionInitParams_1;
}
namespace GlobalNamespace {
class IPollable;
}
namespace BGNet::Core {
struct DeliveryMethod;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace GlobalNamespace {
class IConnection;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class IConnectionRequestHandler;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager__IgnoranceConnection;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct __IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager__IgnoranceConnectionParamsBase;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
struct __IgnoranceConnectionManager__ConnectionState;
}
namespace GlobalNamespace {
class IgnoranceConnectionManager;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager__ConnectToServerParams;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager__IgnoranceConnection;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager__IgnoranceConnectionParamsBase;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager__StartServerParams;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager____c__DisplayClass77_0;
}
namespace GlobalNamespace {
class __IgnoranceConnectionManager____c__DisplayClass77_1;
}
namespace GlobalNamespace {
struct __IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99;
}
namespace GlobalNamespace {
struct __IgnoranceConnectionManager___DisposeAsync_d__77;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState);
MARK_REF_PTR_T(::GlobalNamespace::IgnoranceConnectionManager);
MARK_REF_PTR_T(::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams);
MARK_REF_PTR_T(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection);
MARK_REF_PTR_T(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase);
MARK_REF_PTR_T(::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams);
MARK_REF_PTR_T(::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0);
MARK_REF_PTR_T(::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1);
MARK_VAL_T(::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99);
MARK_VAL_T(::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77);
// Type: ::ConnectionState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12787))
// CS Name: ::IgnoranceConnectionManager::ConnectionState
struct CORDL_TYPE __IgnoranceConnectionManager__ConnectionState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____IgnoranceConnectionManager__ConnectionState_Unwrapped
enum struct ____IgnoranceConnectionManager__ConnectionState_Unwrapped : int32_t {
__E_Connecting = static_cast<int32_t>(0x0),
__E_Connected = static_cast<int32_t>(0x1),
__E_Disconnecting = static_cast<int32_t>(0x2),
__E_Disconnected = static_cast<int32_t>(0x3),
__E_Disposed = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Connecting value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState const Connecting;

/// @brief Field Connected value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState const Connected;

/// @brief Field Disconnecting value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState const Disconnecting;

/// @brief Field Disconnected value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState const Disconnected;

/// @brief Field Disposed value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState const Disposed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____IgnoranceConnectionManager__ConnectionState_Unwrapped () const noexcept {
return std::bit_cast<____IgnoranceConnectionManager__ConnectionState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __IgnoranceConnectionManager__ConnectionState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IgnoranceConnectionManager__ConnectionState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IgnoranceConnectionManager__ConnectionState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::IgnoranceConnectionParamsBase
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12788))
// CS Name: ::IgnoranceConnectionManager::IgnoranceConnectionParamsBase*
class CORDL_TYPE __IgnoranceConnectionManager__IgnoranceConnectionParamsBase : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field connectionRequestHandler offset 0x10
 __declspec(property(get=__get_connectionRequestHandler, put=__set_connectionRequestHandler)) ::GlobalNamespace::IConnectionRequestHandler*  connectionRequestHandler;

/// @brief Field useSsl offset 0x18
 __declspec(property(get=__get_useSsl, put=__set_useSsl)) bool  useSsl;

/// @brief Field userId offset 0x20
 __declspec(property(get=__get_userId, put=__set_userId)) ::StringW  userId;

/// @brief Field userName offset 0x28
 __declspec(property(get=__get_userName, put=__set_userName)) ::StringW  userName;

/// @brief Field enableBackgroundSentry offset 0x30
 __declspec(property(get=__get_enableBackgroundSentry, put=__set_enableBackgroundSentry)) bool  enableBackgroundSentry;

/// @brief Convert operator to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::IgnoranceConnectionManager*>"
constexpr operator  ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::IgnoranceConnectionManager*>*() noexcept;

constexpr void __set_connectionRequestHandler(::GlobalNamespace::IConnectionRequestHandler*  value) ;

constexpr ::GlobalNamespace::IConnectionRequestHandler* __get_connectionRequestHandler() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionRequestHandler*> __get_connectionRequestHandler() const;

constexpr void __set_useSsl(bool  value) ;

constexpr bool& __get_useSsl() ;

constexpr bool const& __get_useSsl() const;

constexpr void __set_userId(::StringW  value) ;

constexpr ::StringW& __get_userId() ;

constexpr ::StringW const& __get_userId() const;

constexpr void __set_userName(::StringW  value) ;

constexpr ::StringW& __get_userName() ;

constexpr ::StringW const& __get_userName() const;

constexpr void __set_enableBackgroundSentry(bool  value) ;

constexpr bool& __get_enableBackgroundSentry() ;

constexpr bool const& __get_enableBackgroundSentry() const;

static inline ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase* New_ctor() ;

/// @brief Method .ctor addr 0xe3ec48 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager__IgnoranceConnectionParamsBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IgnoranceConnectionManager__IgnoranceConnectionParamsBase(__IgnoranceConnectionManager__IgnoranceConnectionParamsBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager__IgnoranceConnectionParamsBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IgnoranceConnectionManager__IgnoranceConnectionParamsBase(__IgnoranceConnectionManager__IgnoranceConnectionParamsBase const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IgnoranceConnectionManager__IgnoranceConnectionParamsBase()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::StartServerParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12788))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12789))
// CS Name: ::IgnoranceConnectionManager::StartServerParams*
class CORDL_TYPE __IgnoranceConnectionManager__StartServerParams : public ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase)]{};

/// @brief Field port offset 0x34
 __declspec(property(get=__get_port, put=__set_port)) int32_t  port;

/// @brief Field certificatePath offset 0x38
 __declspec(property(get=__get_certificatePath, put=__set_certificatePath)) ::StringW  certificatePath;

/// @brief Field certificate offset 0x40
 __declspec(property(get=__get_certificate, put=__set_certificate)) ::StringW  certificate;

/// @brief Field privateKeyPath offset 0x48
 __declspec(property(get=__get_privateKeyPath, put=__set_privateKeyPath)) ::StringW  privateKeyPath;

/// @brief Field privateKey offset 0x50
 __declspec(property(get=__get_privateKey, put=__set_privateKey)) ::StringW  privateKey;

constexpr void __set_port(int32_t  value) ;

constexpr int32_t& __get_port() ;

constexpr int32_t const& __get_port() const;

constexpr void __set_certificatePath(::StringW  value) ;

constexpr ::StringW& __get_certificatePath() ;

constexpr ::StringW const& __get_certificatePath() const;

constexpr void __set_certificate(::StringW  value) ;

constexpr ::StringW& __get_certificate() ;

constexpr ::StringW const& __get_certificate() const;

constexpr void __set_privateKeyPath(::StringW  value) ;

constexpr ::StringW& __get_privateKeyPath() ;

constexpr ::StringW const& __get_privateKeyPath() const;

constexpr void __set_privateKey(::StringW  value) ;

constexpr ::StringW& __get_privateKey() ;

constexpr ::StringW const& __get_privateKey() const;

static inline ::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams* New_ctor() ;

/// @brief Method .ctor addr 0xe3ec58 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager__StartServerParams", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IgnoranceConnectionManager__StartServerParams(__IgnoranceConnectionManager__StartServerParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager__StartServerParams", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IgnoranceConnectionManager__StartServerParams(__IgnoranceConnectionManager__StartServerParams const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IgnoranceConnectionManager__StartServerParams()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ConnectToServerParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12788))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12790))
// CS Name: ::IgnoranceConnectionManager::ConnectToServerParams*
class CORDL_TYPE __IgnoranceConnectionManager__ConnectToServerParams : public ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase)]{};

/// @brief Field hostName offset 0x38
 __declspec(property(get=__get_hostName, put=__set_hostName)) ::StringW  hostName;

/// @brief Field port offset 0x40
 __declspec(property(get=__get_port, put=__set_port)) int32_t  port;

/// @brief Field serverUserId offset 0x48
 __declspec(property(get=__get_serverUserId, put=__set_serverUserId)) ::StringW  serverUserId;

/// @brief Field serverUserName offset 0x50
 __declspec(property(get=__get_serverUserName, put=__set_serverUserName)) ::StringW  serverUserName;

/// @brief Field validateCertificate offset 0x58
 __declspec(property(get=__get_validateCertificate, put=__set_validateCertificate)) bool  validateCertificate;

/// @brief Field rootCertificatePath offset 0x60
 __declspec(property(get=__get_rootCertificatePath, put=__set_rootCertificatePath)) ::StringW  rootCertificatePath;

/// @brief Field rootCertificate offset 0x68
 __declspec(property(get=__get_rootCertificate, put=__set_rootCertificate)) ::StringW  rootCertificate;

constexpr void __set_hostName(::StringW  value) ;

constexpr ::StringW& __get_hostName() ;

constexpr ::StringW const& __get_hostName() const;

constexpr void __set_port(int32_t  value) ;

constexpr int32_t& __get_port() ;

constexpr int32_t const& __get_port() const;

constexpr void __set_serverUserId(::StringW  value) ;

constexpr ::StringW& __get_serverUserId() ;

constexpr ::StringW const& __get_serverUserId() const;

constexpr void __set_serverUserName(::StringW  value) ;

constexpr ::StringW& __get_serverUserName() ;

constexpr ::StringW const& __get_serverUserName() const;

constexpr void __set_validateCertificate(bool  value) ;

constexpr bool& __get_validateCertificate() ;

constexpr bool const& __get_validateCertificate() const;

constexpr void __set_rootCertificatePath(::StringW  value) ;

constexpr ::StringW& __get_rootCertificatePath() ;

constexpr ::StringW const& __get_rootCertificatePath() const;

constexpr void __set_rootCertificate(::StringW  value) ;

constexpr ::StringW& __get_rootCertificate() ;

constexpr ::StringW const& __get_rootCertificate() const;

static inline ::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams* New_ctor() ;

/// @brief Method .ctor addr 0xe38bc0 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager__ConnectToServerParams", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IgnoranceConnectionManager__ConnectToServerParams(__IgnoranceConnectionManager__ConnectToServerParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager__ConnectToServerParams", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IgnoranceConnectionManager__ConnectToServerParams(__IgnoranceConnectionManager__ConnectToServerParams const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IgnoranceConnectionManager__ConnectToServerParams()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::IgnoranceConnection
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12791))
// CS Name: ::IgnoranceConnectionManager::IgnoranceConnection*
class CORDL_TYPE __IgnoranceConnectionManager__IgnoranceConnection : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field _connectionManager offset 0x10
 __declspec(property(get=__get__connectionManager, put=__set__connectionManager)) ::GlobalNamespace::IgnoranceConnectionManager*  _connectionManager;

/// @brief Field peerId offset 0x18
 __declspec(property(get=__get_peerId, put=__set_peerId)) uint32_t  peerId;

/// @brief Field <userId>k__BackingField offset 0x20
 __declspec(property(get=__get__userId_k__BackingField, put=__set__userId_k__BackingField)) ::StringW  _userId_k__BackingField;

/// @brief Field <userName>k__BackingField offset 0x28
 __declspec(property(get=__get__userName_k__BackingField, put=__set__userName_k__BackingField)) ::StringW  _userName_k__BackingField;

/// @brief Field <isConnectionOwner>k__BackingField offset 0x30
 __declspec(property(get=__get__isConnectionOwner_k__BackingField, put=__set__isConnectionOwner_k__BackingField)) bool  _isConnectionOwner_k__BackingField;

 __declspec(property(get=get_userId, put=set_userId)) ::StringW  userId;

 __declspec(property(get=get_userName, put=set_userName)) ::StringW  userName;

 __declspec(property(get=get_isConnectionOwner, put=set_isConnectionOwner)) bool  isConnectionOwner;

/// @brief Convert operator to "::GlobalNamespace::IConnection"
constexpr operator  ::GlobalNamespace::IConnection*() noexcept;

constexpr void __set__connectionManager(::GlobalNamespace::IgnoranceConnectionManager*  value) ;

constexpr ::GlobalNamespace::IgnoranceConnectionManager* __get__connectionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IgnoranceConnectionManager*> __get__connectionManager() const;

constexpr void __set_peerId(uint32_t  value) ;

constexpr uint32_t& __get_peerId() ;

constexpr uint32_t const& __get_peerId() const;

constexpr void __set__userId_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__userId_k__BackingField() ;

constexpr ::StringW const& __get__userId_k__BackingField() const;

constexpr void __set__userName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__userName_k__BackingField() ;

constexpr ::StringW const& __get__userName_k__BackingField() const;

constexpr void __set__isConnectionOwner_k__BackingField(bool  value) ;

constexpr bool& __get__isConnectionOwner_k__BackingField() ;

constexpr bool const& __get__isConnectionOwner_k__BackingField() const;

/// @brief Method get_userId addr 0xe3ec68 size 0x8 virtual true final true
inline ::StringW get_userId() ;

/// @brief Method set_userId addr 0xe3ec70 size 0x8 virtual false final false
inline void set_userId(::StringW  value) ;

/// @brief Method get_userName addr 0xe3ec78 size 0x8 virtual true final true
inline ::StringW get_userName() ;

/// @brief Method set_userName addr 0xe3ec80 size 0x8 virtual false final false
inline void set_userName(::StringW  value) ;

/// @brief Method get_isConnectionOwner addr 0xe3ec88 size 0x8 virtual true final true
inline bool get_isConnectionOwner() ;

/// @brief Method set_isConnectionOwner addr 0xe3ec90 size 0xc virtual false final false
inline void set_isConnectionOwner(bool  value) ;

static inline ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection* New_ctor(::GlobalNamespace::IgnoranceConnectionManager*  connectionManager, uint32_t  peerId, ::StringW  userId, ::StringW  userName, bool  isConnectionOwner) ;

/// @brief Method .ctor addr 0xe3e34c size 0x58 virtual false final false
inline void _ctor(::GlobalNamespace::IgnoranceConnectionManager*  connectionManager, uint32_t  peerId, ::StringW  userId, ::StringW  userName, bool  isConnectionOwner) ;

/// @brief Method Send addr 0xe3ec9c size 0x28 virtual true final true
inline void Send(::LiteNetLib::Utils::NetDataWriter*  writer, ::BGNet::Core::DeliveryMethod  deliveryMethod) ;

/// @brief Method Disconnect addr 0xe3ecc4 size 0x24 virtual true final true
inline void Disconnect() ;

// Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager__IgnoranceConnection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IgnoranceConnectionManager__IgnoranceConnection(__IgnoranceConnectionManager__IgnoranceConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager__IgnoranceConnection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IgnoranceConnectionManager__IgnoranceConnection(__IgnoranceConnectionManager__IgnoranceConnection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IgnoranceConnectionManager__IgnoranceConnection()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass77_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12792))
// CS Name: ::IgnoranceConnectionManager::<>c__DisplayClass77_0*
class CORDL_TYPE __IgnoranceConnectionManager____c__DisplayClass77_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field client offset 0x10
 __declspec(property(get=__get_client, put=__set_client)) ::IgnoranceCore::IgnoranceClient*  client;

constexpr void __set_client(::IgnoranceCore::IgnoranceClient*  value) ;

constexpr ::IgnoranceCore::IgnoranceClient* __get_client() ;

constexpr ::cordl_internals::to_const_pointer<::IgnoranceCore::IgnoranceClient*> __get_client() const;

static inline ::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0* New_ctor() ;

/// @brief Method .ctor addr 0xe3ece8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DisposeAsync>b__0 addr 0xe3ecf0 size 0x8 virtual false final false
inline void _DisposeAsync_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager____c__DisplayClass77_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IgnoranceConnectionManager____c__DisplayClass77_0(__IgnoranceConnectionManager____c__DisplayClass77_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager____c__DisplayClass77_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IgnoranceConnectionManager____c__DisplayClass77_0(__IgnoranceConnectionManager____c__DisplayClass77_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IgnoranceConnectionManager____c__DisplayClass77_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass77_1
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12793))
// CS Name: ::IgnoranceConnectionManager::<>c__DisplayClass77_1*
class CORDL_TYPE __IgnoranceConnectionManager____c__DisplayClass77_1 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field server offset 0x10
 __declspec(property(get=__get_server, put=__set_server)) ::IgnoranceCore::IgnoranceServer*  server;

constexpr void __set_server(::IgnoranceCore::IgnoranceServer*  value) ;

constexpr ::IgnoranceCore::IgnoranceServer* __get_server() ;

constexpr ::cordl_internals::to_const_pointer<::IgnoranceCore::IgnoranceServer*> __get_server() const;

static inline ::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1* New_ctor() ;

/// @brief Method .ctor addr 0xe3ecf8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DisposeAsync>b__1 addr 0xe3ed00 size 0x8 virtual false final false
inline void _DisposeAsync_b__1() ;

// Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager____c__DisplayClass77_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IgnoranceConnectionManager____c__DisplayClass77_1(__IgnoranceConnectionManager____c__DisplayClass77_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IgnoranceConnectionManager____c__DisplayClass77_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IgnoranceConnectionManager____c__DisplayClass77_1(__IgnoranceConnectionManager____c__DisplayClass77_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IgnoranceConnectionManager____c__DisplayClass77_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<DisposeAsync>d__77
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12794))
// CS Name: ::IgnoranceConnectionManager::<DisposeAsync>d__77
struct CORDL_TYPE __IgnoranceConnectionManager___DisposeAsync_d__77 : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::IgnoranceConnectionManager*  __4__this;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::IgnoranceConnectionManager*  value) ;

constexpr ::GlobalNamespace::IgnoranceConnectionManager* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IgnoranceConnectionManager*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0xe3ed08 size 0x3dc virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0xe3f0e4 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::IgnoranceConnectionManager*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __IgnoranceConnectionManager___DisposeAsync_d__77(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::IgnoranceConnectionManager*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IgnoranceConnectionManager___DisposeAsync_d__77(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IgnoranceConnectionManager___DisposeAsync_d__77()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<BackgroundDisconnectSentry>d__99
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12795))
// CS Name: ::IgnoranceConnectionManager::<BackgroundDisconnectSentry>d__99
struct CORDL_TYPE __IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::IgnoranceConnectionManager*  __4__this;

/// @brief Field <cancellationToken>5__2 offset 0x28
 __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2)) ::System::Threading::CancellationToken  _cancellationToken_5__2;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::IgnoranceConnectionManager*  value) ;

constexpr ::GlobalNamespace::IgnoranceConnectionManager* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IgnoranceConnectionManager*> __get___4__this() const;

constexpr void __set__cancellationToken_5__2(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get__cancellationToken_5__2() ;

constexpr ::System::Threading::CancellationToken const& __get__cancellationToken_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0xe3f0f0 size 0x3e0 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0xe3f4d0 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::IgnoranceConnectionManager*", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::IgnoranceConnectionManager*  __4__this, ::System::Threading::CancellationToken  _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::IgnoranceConnectionManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12796))
// CS Name: ::IgnoranceConnectionManager*
class CORDL_TYPE IgnoranceConnectionManager : public ::System::Object {
public:
// Declarations
using _BackgroundDisconnectSentry_d__99 = ::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99;

using _DisposeAsync_d__77 = ::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77;

using __c__DisplayClass77_1 = ::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1;

using __c__DisplayClass77_0 = ::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0;

using IgnoranceConnection = ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection;

using ConnectToServerParams = ::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams;

using StartServerParams = ::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams;

using IgnoranceConnectionParamsBase = ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase;

using ConnectionState = ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xe0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xe0 - sizeof(::System::Object)]{};

/// @brief Field kIgnoranceConnectHeader offset 0x0
static constexpr ::ConstString  kIgnoranceConnectHeader{u"IgnCon"};

/// @brief Field kBackgroundDisconnectTimeoutMs offset 0x0
static constexpr int64_t  kBackgroundDisconnectTimeoutMs{static_cast<int64_t>(0x1d4c0)};

/// @brief Field kMaxServerShutdownTimeMs offset 0x0
static constexpr int32_t  kMaxServerShutdownTimeMs{static_cast<int32_t>(0x12c)};

/// @brief Field kMaxClientShutdownTimeMs offset 0x0
static constexpr int32_t  kMaxClientShutdownTimeMs{static_cast<int32_t>(0x1e)};

/// @brief Field onInitializedEvent offset 0x10
 __declspec(property(get=__get_onInitializedEvent, put=__set_onInitializedEvent)) ::System::Action*  onInitializedEvent;

/// @brief Field onConnectedEvent offset 0x18
 __declspec(property(get=__get_onConnectedEvent, put=__set_onConnectedEvent)) ::System::Action*  onConnectedEvent;

/// @brief Field onDisconnectedEvent offset 0x20
 __declspec(property(get=__get_onDisconnectedEvent, put=__set_onDisconnectedEvent)) ::System::Action_1<::GlobalNamespace::DisconnectedReason>*  onDisconnectedEvent;

/// @brief Field onConnectionFailedEvent offset 0x28
 __declspec(property(get=__get_onConnectionFailedEvent, put=__set_onConnectionFailedEvent)) ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*  onConnectionFailedEvent;

/// @brief Field onConnectionConnectedEvent offset 0x30
 __declspec(property(get=__get_onConnectionConnectedEvent, put=__set_onConnectionConnectedEvent)) ::System::Action_1<::GlobalNamespace::IConnection*>*  onConnectionConnectedEvent;

/// @brief Field onConnectionDisconnectedEvent offset 0x38
 __declspec(property(get=__get_onConnectionDisconnectedEvent, put=__set_onConnectionDisconnectedEvent)) ::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*  onConnectionDisconnectedEvent;

/// @brief Field onReceivedDataEvent offset 0x40
 __declspec(property(get=__get_onReceivedDataEvent, put=__set_onReceivedDataEvent)) ::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*  onReceivedDataEvent;

/// @brief Field <userId>k__BackingField offset 0x48
 __declspec(property(get=__get__userId_k__BackingField, put=__set__userId_k__BackingField)) ::StringW  _userId_k__BackingField;

/// @brief Field <userName>k__BackingField offset 0x50
 __declspec(property(get=__get__userName_k__BackingField, put=__set__userName_k__BackingField)) ::StringW  _userName_k__BackingField;

/// @brief Field _channels offset 0x58
 __declspec(property(get=__get__channels, put=__set__channels)) ::ArrayW<::IgnoranceCore::IgnoranceChannelTypes,::Array<::IgnoranceCore::IgnoranceChannelTypes>*>  _channels;

/// @brief Field _state offset 0x60
 __declspec(property(get=__get__state, put=__set__state)) ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState  _state;

/// @brief Field _client offset 0x68
 __declspec(property(get=__get__client, put=__set__client)) ::IgnoranceCore::IgnoranceClient*  _client;

/// @brief Field _server offset 0x70
 __declspec(property(get=__get__server, put=__set__server)) ::IgnoranceCore::IgnoranceServer*  _server;

/// @brief Field _connectionRequestHandler offset 0x78
 __declspec(property(get=__get__connectionRequestHandler, put=__set__connectionRequestHandler)) ::GlobalNamespace::IConnectionRequestHandler*  _connectionRequestHandler;

/// @brief Field _pendingConnections offset 0x80
 __declspec(property(get=__get__pendingConnections, put=__set__pendingConnections)) ::System::Collections::Generic::List_1<uint32_t>*  _pendingConnections;

/// @brief Field _connections offset 0x88
 __declspec(property(get=__get__connections, put=__set__connections)) ::System::Collections::Generic::List_1<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>*  _connections;

/// @brief Field _incomingDataWriter offset 0x90
 __declspec(property(get=__get__incomingDataWriter, put=__set__incomingDataWriter)) ::LiteNetLib::Utils::NetDataWriter*  _incomingDataWriter;

/// @brief Field _incomingDataReader offset 0x98
 __declspec(property(get=__get__incomingDataReader, put=__set__incomingDataReader)) ::LiteNetLib::Utils::NetDataReader*  _incomingDataReader;

/// @brief Field _connectionRequestWriter offset 0xa0
 __declspec(property(get=__get__connectionRequestWriter, put=__set__connectionRequestWriter)) ::LiteNetLib::Utils::NetDataWriter*  _connectionRequestWriter;

/// @brief Field _backgroundSentryDisconnectCts offset 0xa8
 __declspec(property(get=__get__backgroundSentryDisconnectCts, put=__set__backgroundSentryDisconnectCts)) ::System::Threading::CancellationTokenSource*  _backgroundSentryDisconnectCts;

/// @brief Field _sentryDisconnected offset 0xb0
 __declspec(property(get=__get__sentryDisconnected, put=__set__sentryDisconnected)) bool  _sentryDisconnected;

/// @brief Field _lastPollUpdateTime offset 0xb8
 __declspec(property(get=__get__lastPollUpdateTime, put=__set__lastPollUpdateTime)) int64_t  _lastPollUpdateTime;

/// @brief Field _timeProvider offset 0xc0
 __declspec(property(get=__get__timeProvider, put=__set__timeProvider)) ::BGNet::Core::ITimeProvider*  _timeProvider;

/// @brief Field _taskUtility offset 0xc8
 __declspec(property(get=__get__taskUtility, put=__set__taskUtility)) ::BGNet::Core::ITaskUtility*  _taskUtility;

/// @brief Field <serverUserId>k__BackingField offset 0xd0
 __declspec(property(get=__get__serverUserId_k__BackingField, put=__set__serverUserId_k__BackingField)) ::StringW  _serverUserId_k__BackingField;

/// @brief Field <serverUserName>k__BackingField offset 0xd8
 __declspec(property(get=__get__serverUserName_k__BackingField, put=__set__serverUserName_k__BackingField)) ::StringW  _serverUserName_k__BackingField;

 __declspec(property(get=get_userId, put=set_userId)) ::StringW  userId;

 __declspec(property(get=get_userName, put=set_userName)) ::StringW  userName;

 __declspec(property(get=get_isConnected)) bool  isConnected;

 __declspec(property(get=get_isConnecting)) bool  isConnecting;

 __declspec(property(get=get_isDisconnecting)) bool  isDisconnecting;

 __declspec(property(get=get_connectionCount)) int32_t  connectionCount;

 __declspec(property(get=get_isConnectionOwner)) bool  isConnectionOwner;

 __declspec(property(get=get_isDisposed)) bool  isDisposed;

 __declspec(property(get=get_serverUserId, put=set_serverUserId)) ::StringW  serverUserId;

 __declspec(property(get=get_serverUserName, put=set_serverUserName)) ::StringW  serverUserName;

/// @brief Convert operator to "::GlobalNamespace::IConnectionManager"
constexpr operator  ::GlobalNamespace::IConnectionManager*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr operator  ::GlobalNamespace::IPollable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_onInitializedEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_onInitializedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_onInitializedEvent() const;

constexpr void __set_onConnectedEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_onConnectedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_onConnectedEvent() const;

constexpr void __set_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* __get_onDisconnectedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> __get_onDisconnectedEvent() const;

constexpr void __set_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* __get_onConnectionFailedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*> __get_onConnectionFailedEvent() const;

constexpr void __set_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::IConnection*>* __get_onConnectionConnectedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnection*>*> __get_onConnectionConnectedEvent() const;

constexpr void __set_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>* __get_onConnectionDisconnectedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*> __get_onConnectionDisconnectedEvent() const;

constexpr void __set_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*  value) ;

constexpr ::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>* __get_onReceivedDataEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*> __get_onReceivedDataEvent() const;

constexpr void __set__userId_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__userId_k__BackingField() ;

constexpr ::StringW const& __get__userId_k__BackingField() const;

constexpr void __set__userName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__userName_k__BackingField() ;

constexpr ::StringW const& __get__userName_k__BackingField() const;

constexpr void __set__channels(::ArrayW<::IgnoranceCore::IgnoranceChannelTypes,::Array<::IgnoranceCore::IgnoranceChannelTypes>*>  value) ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceChannelTypes,::Array<::IgnoranceCore::IgnoranceChannelTypes>*>& __get__channels() ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceChannelTypes,::Array<::IgnoranceCore::IgnoranceChannelTypes>*> const& __get__channels() const;

constexpr void __set__state(::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState  value) ;

constexpr ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState& __get__state() ;

constexpr ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState const& __get__state() const;

constexpr void __set__client(::IgnoranceCore::IgnoranceClient*  value) ;

constexpr ::IgnoranceCore::IgnoranceClient* __get__client() ;

constexpr ::cordl_internals::to_const_pointer<::IgnoranceCore::IgnoranceClient*> __get__client() const;

constexpr void __set__server(::IgnoranceCore::IgnoranceServer*  value) ;

constexpr ::IgnoranceCore::IgnoranceServer* __get__server() ;

constexpr ::cordl_internals::to_const_pointer<::IgnoranceCore::IgnoranceServer*> __get__server() const;

constexpr void __set__connectionRequestHandler(::GlobalNamespace::IConnectionRequestHandler*  value) ;

constexpr ::GlobalNamespace::IConnectionRequestHandler* __get__connectionRequestHandler() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionRequestHandler*> __get__connectionRequestHandler() const;

constexpr void __set__pendingConnections(::System::Collections::Generic::List_1<uint32_t>*  value) ;

constexpr ::System::Collections::Generic::List_1<uint32_t>* __get__pendingConnections() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint32_t>*> __get__pendingConnections() const;

constexpr void __set__connections(::System::Collections::Generic::List_1<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>* __get__connections() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>*> __get__connections() const;

constexpr void __set__incomingDataWriter(::LiteNetLib::Utils::NetDataWriter*  value) ;

constexpr ::LiteNetLib::Utils::NetDataWriter* __get__incomingDataWriter() ;

constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> __get__incomingDataWriter() const;

constexpr void __set__incomingDataReader(::LiteNetLib::Utils::NetDataReader*  value) ;

constexpr ::LiteNetLib::Utils::NetDataReader* __get__incomingDataReader() ;

constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataReader*> __get__incomingDataReader() const;

constexpr void __set__connectionRequestWriter(::LiteNetLib::Utils::NetDataWriter*  value) ;

constexpr ::LiteNetLib::Utils::NetDataWriter* __get__connectionRequestWriter() ;

constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> __get__connectionRequestWriter() const;

constexpr void __set__backgroundSentryDisconnectCts(::System::Threading::CancellationTokenSource*  value) ;

constexpr ::System::Threading::CancellationTokenSource* __get__backgroundSentryDisconnectCts() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> __get__backgroundSentryDisconnectCts() const;

constexpr void __set__sentryDisconnected(bool  value) ;

constexpr bool& __get__sentryDisconnected() ;

constexpr bool const& __get__sentryDisconnected() const;

constexpr void __set__lastPollUpdateTime(int64_t  value) ;

constexpr int64_t& __get__lastPollUpdateTime() ;

constexpr int64_t const& __get__lastPollUpdateTime() const;

constexpr void __set__timeProvider(::BGNet::Core::ITimeProvider*  value) ;

constexpr ::BGNet::Core::ITimeProvider* __get__timeProvider() ;

constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITimeProvider*> __get__timeProvider() const;

constexpr void __set__taskUtility(::BGNet::Core::ITaskUtility*  value) ;

constexpr ::BGNet::Core::ITaskUtility* __get__taskUtility() ;

constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> __get__taskUtility() const;

constexpr void __set__serverUserId_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__serverUserId_k__BackingField() ;

constexpr ::StringW const& __get__serverUserId_k__BackingField() const;

constexpr void __set__serverUserName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__serverUserName_k__BackingField() ;

constexpr ::StringW const& __get__serverUserName_k__BackingField() const;

/// @brief Method add_onInitializedEvent addr 0xe3ca3c size 0x9c virtual true final true
inline void add_onInitializedEvent(::System::Action*  value) ;

/// @brief Method remove_onInitializedEvent addr 0xe3cad8 size 0x9c virtual true final true
inline void remove_onInitializedEvent(::System::Action*  value) ;

/// @brief Method add_onConnectedEvent addr 0xe3cb74 size 0x9c virtual true final true
inline void add_onConnectedEvent(::System::Action*  value) ;

/// @brief Method remove_onConnectedEvent addr 0xe3cc10 size 0x9c virtual true final true
inline void remove_onConnectedEvent(::System::Action*  value) ;

/// @brief Method add_onDisconnectedEvent addr 0xe3ccac size 0xb0 virtual true final true
inline void add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>*  value) ;

/// @brief Method remove_onDisconnectedEvent addr 0xe3cd5c size 0xb0 virtual true final true
inline void remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>*  value) ;

/// @brief Method add_onConnectionFailedEvent addr 0xe3ce0c size 0xb0 virtual true final true
inline void add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*  value) ;

/// @brief Method remove_onConnectionFailedEvent addr 0xe3cebc size 0xb0 virtual true final true
inline void remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*  value) ;

/// @brief Method add_onConnectionConnectedEvent addr 0xe3cf6c size 0xb0 virtual true final true
inline void add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>*  value) ;

/// @brief Method remove_onConnectionConnectedEvent addr 0xe3d01c size 0xb0 virtual true final true
inline void remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>*  value) ;

/// @brief Method add_onConnectionDisconnectedEvent addr 0xe3d0cc size 0xb0 virtual true final true
inline void add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*  value) ;

/// @brief Method remove_onConnectionDisconnectedEvent addr 0xe3d17c size 0xb0 virtual true final true
inline void remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*  value) ;

/// @brief Method add_onReceivedDataEvent addr 0xe3d22c size 0xb0 virtual true final true
inline void add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*  value) ;

/// @brief Method remove_onReceivedDataEvent addr 0xe3d2dc size 0xb0 virtual true final true
inline void remove_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*  value) ;

/// @brief Method get_userId addr 0xe3d38c size 0x8 virtual true final true
inline ::StringW get_userId() ;

/// @brief Method set_userId addr 0xe3d394 size 0x8 virtual false final false
inline void set_userId(::StringW  value) ;

/// @brief Method get_userName addr 0xe3d39c size 0x8 virtual true final true
inline ::StringW get_userName() ;

/// @brief Method set_userName addr 0xe3d3a4 size 0x8 virtual false final false
inline void set_userName(::StringW  value) ;

/// @brief Method get_isConnected addr 0xe3d3ac size 0x10 virtual true final true
inline bool get_isConnected() ;

/// @brief Method get_isConnecting addr 0xe3d3bc size 0x10 virtual true final true
inline bool get_isConnecting() ;

/// @brief Method get_isDisconnecting addr 0xe3d3cc size 0x10 virtual true final true
inline bool get_isDisconnecting() ;

/// @brief Method get_connectionCount addr 0xe3d3dc size 0x48 virtual true final true
inline int32_t get_connectionCount() ;

/// @brief Method get_isConnectionOwner addr 0xe3d424 size 0x10 virtual true final true
inline bool get_isConnectionOwner() ;

/// @brief Method get_isDisposed addr 0xe3d434 size 0x10 virtual true final true
inline bool get_isDisposed() ;

/// @brief Method get_serverUserId addr 0xe3d444 size 0x8 virtual false final false
inline ::StringW get_serverUserId() ;

/// @brief Method set_serverUserId addr 0xe3d44c size 0x8 virtual false final false
inline void set_serverUserId(::StringW  value) ;

/// @brief Method get_serverUserName addr 0xe3d454 size 0x8 virtual false final false
inline ::StringW get_serverUserName() ;

/// @brief Method set_serverUserName addr 0xe3d45c size 0x8 virtual false final false
inline void set_serverUserName(::StringW  value) ;

static inline ::GlobalNamespace::IgnoranceConnectionManager* New_ctor() ;

/// @brief Method .ctor addr 0xe37cf0 size 0xac virtual false final false
inline void _ctor() ;

static inline ::GlobalNamespace::IgnoranceConnectionManager* New_ctor(::BGNet::Core::ITimeProvider*  timeProvider, ::BGNet::Core::ITaskUtility*  taskUtility) ;

/// @brief Method .ctor addr 0xe3d464 size 0x1b0 virtual false final false
inline void _ctor(::BGNet::Core::ITimeProvider*  timeProvider, ::BGNet::Core::ITaskUtility*  taskUtility) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
inline bool Init(::GlobalNamespace::IConnectionInitParams_1<T>*  initParams) ;

/// @brief Method PollUpdate addr 0xe3d614 size 0xf0 virtual true final true
inline void PollUpdate() ;

/// @brief Method DisposeAsync addr 0xe3dd3c size 0xc8 virtual true final true
inline ::System::Threading::Tasks::Task* DisposeAsync() ;

/// @brief Method Dispose addr 0xe3de04 size 0x34 virtual true final true
inline void Dispose() ;

/// @brief Method HandleConnectionEvents addr 0xe3d728 size 0x278 virtual false final false
inline void HandleConnectionEvents() ;

/// @brief Method HandleIncomingEvents addr 0xe3d9a0 size 0x2d8 virtual false final false
inline void HandleIncomingEvents() ;

/// @brief Method HandleDisconnectionEvents addr 0xe3dc78 size 0xc4 virtual false final false
inline void HandleDisconnectionEvents() ;

/// @brief Method GetConnectionMessage addr 0xe3e154 size 0x110 virtual false final false
inline ::LiteNetLib::Utils::NetDataWriter* GetConnectionMessage() ;

/// @brief Method TryParseConnectionMessage addr 0xe3e3a4 size 0x134 virtual false final false
inline bool TryParseConnectionMessage(::LiteNetLib::Utils::NetDataReader*  reader, ByRef<::StringW>  userId, ByRef<::StringW>  userName, ByRef<bool>  isConnectionOwner) ;

/// @brief Method Send addr 0xe3e264 size 0xe8 virtual false final false
inline void Send(uint32_t  peerId, ::LiteNetLib::Utils::NetDataWriter*  writer, ::BGNet::Core::DeliveryMethod  deliveryMethod) ;

/// @brief Method DisconnectPeer addr 0xe3e4d8 size 0xf0 virtual false final false
inline void DisconnectPeer(uint32_t  peerId, ::GlobalNamespace::DisconnectedReason  disconnectedReason) ;

/// @brief Method TryGetConnection addr 0xe3e5c8 size 0xdc virtual false final false
inline bool TryGetConnection(uint32_t  peerId, ByRef<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>  connection) ;

/// @brief Method SendToAll addr 0xe3e6c0 size 0xb8 virtual true final true
inline void SendToAll(::LiteNetLib::Utils::NetDataWriter*  writer, ::BGNet::Core::DeliveryMethod  deliveryMethod) ;

/// @brief Method SendToAll addr 0xe3e778 size 0xe0 virtual true final true
inline void SendToAll(::LiteNetLib::Utils::NetDataWriter*  writer, ::BGNet::Core::DeliveryMethod  deliveryMethod, ::GlobalNamespace::IConnection*  excludingConnection) ;

/// @brief Method Disconnect addr 0xe3de38 size 0x1b4 virtual true final true
inline void Disconnect(::GlobalNamespace::DisconnectedReason  disconnectedReason) ;

/// @brief Method GetConnection addr 0xe3e858 size 0x58 virtual true final true
inline ::GlobalNamespace::IConnection* GetConnection(int32_t  index) ;

/// @brief Method ToDeliveryMethod addr 0xe3e6a4 size 0xc virtual false final false
static inline ::BGNet::Core::DeliveryMethod ToDeliveryMethod(uint8_t  channel) ;

/// @brief Method ToChannel addr 0xe3e6b0 size 0x10 virtual false final false
static inline uint8_t ToChannel(::BGNet::Core::DeliveryMethod  deliveryMethod) ;

/// @brief Method WaitForClientShutdown addr 0xe3dfec size 0xb4 virtual false final false
static inline void WaitForClientShutdown(::IgnoranceCore::IgnoranceClient*  client) ;

/// @brief Method WaitForServerShutdown addr 0xe3e0a0 size 0xb4 virtual false final false
static inline void WaitForServerShutdown(::IgnoranceCore::IgnoranceServer*  server) ;

/// @brief Method Log addr 0xe3e93c size 0x8c virtual false final false
static inline void Log(::StringW  msg) ;

/// @brief Method LogError addr 0xe3e8b0 size 0x8c virtual false final false
static inline void LogError(::StringW  msg) ;

/// @brief Method StartBackgroundSentry addr 0xe3e9c8 size 0x1b4 virtual false final false
inline void StartBackgroundSentry() ;

/// @brief Method CheckSentryState addr 0xe3d704 size 0x24 virtual false final false
inline void CheckSentryState() ;

/// @brief Method BackgroundDisconnectSentry addr 0xe3eb7c size 0xcc virtual false final false
inline ::System::Threading::Tasks::Task* BackgroundDisconnectSentry() ;

// Ctor Parameters [CppParam { name: "", ty: "IgnoranceConnectionManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IgnoranceConnectionManager(IgnoranceConnectionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IgnoranceConnectionManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IgnoranceConnectionManager(IgnoranceConnectionManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IgnoranceConnectionManager()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IgnoranceConnectionManager, 0xe0>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState, "", "IgnoranceConnectionManager/ConnectionState");
NEED_NO_BOX(::GlobalNamespace::IgnoranceConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IgnoranceConnectionManager*, "", "IgnoranceConnectionManager");
NEED_NO_BOX(::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams*, "", "IgnoranceConnectionManager/ConnectToServerParams");
NEED_NO_BOX(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*, "", "IgnoranceConnectionManager/IgnoranceConnection");
NEED_NO_BOX(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase*, "", "IgnoranceConnectionManager/IgnoranceConnectionParamsBase");
NEED_NO_BOX(::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams*, "", "IgnoranceConnectionManager/StartServerParams");
NEED_NO_BOX(::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0*, "", "IgnoranceConnectionManager/<>c__DisplayClass77_0");
NEED_NO_BOX(::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1*, "", "IgnoranceConnectionManager/<>c__DisplayClass77_1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99, "", "IgnoranceConnectionManager/<BackgroundDisconnectSentry>d__99");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77, "", "IgnoranceConnectionManager/<DisposeAsync>d__77");
