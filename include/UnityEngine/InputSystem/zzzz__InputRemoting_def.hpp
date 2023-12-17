#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputRemoting)
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class InputManager;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__Flags;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__ChangeUsageMsg;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__MessageType;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__Subscriber;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__Message;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__ConnectMsg;
}
namespace System {
class Exception;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__NewEventsMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__NewDeviceMsg;
}
namespace System {
template<typename T>
class IObserver_1;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__RemoveDeviceMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__NewLayoutMsg;
}
namespace UnityEngine::InputSystem {
struct InputControlLayoutChange;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__RemoteSender;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__StartSendingMsg;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__StopSendingMsg;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__RemoteInputDevice;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__DisconnectMsg;
}
namespace GlobalNamespace {
struct __InputRemoting__ChangeUsageMsg__Data;
}
namespace GlobalNamespace {
class __InputRemoting__ChangeUsageMsg____c;
}
namespace GlobalNamespace {
struct __InputRemoting__NewDeviceMsg__Data;
}
namespace GlobalNamespace {
class __InputRemoting__NewDeviceMsg____c;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace GlobalNamespace {
struct __InputRemoting__NewLayoutMsg__Data;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct __InputRemoting__Flags;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__MessageType;
}
namespace GlobalNamespace {
class __InputRemoting__ChangeUsageMsg____c;
}
namespace GlobalNamespace {
class __InputRemoting__NewDeviceMsg____c;
}
namespace UnityEngine::InputSystem {
class InputRemoting;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__ChangeUsageMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__ConnectMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__DisconnectMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__NewDeviceMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__NewEventsMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__NewLayoutMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__RemoveDeviceMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__StartSendingMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__StopSendingMsg;
}
namespace UnityEngine::InputSystem {
class __InputRemoting__Subscriber;
}
namespace GlobalNamespace {
struct __InputRemoting__ChangeUsageMsg__Data;
}
namespace GlobalNamespace {
struct __InputRemoting__NewDeviceMsg__Data;
}
namespace GlobalNamespace {
struct __InputRemoting__NewLayoutMsg__Data;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__Message;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__RemoteInputDevice;
}
namespace UnityEngine::InputSystem {
struct __InputRemoting__RemoteSender;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::__InputRemoting__Flags);
MARK_VAL_T(::UnityEngine::InputSystem::__InputRemoting__MessageType);
MARK_REF_PTR_T(::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c);
MARK_REF_PTR_T(::GlobalNamespace::__InputRemoting__NewDeviceMsg____c);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputRemoting);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__ConnectMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__DisconnectMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__StartSendingMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__StopSendingMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputRemoting__Subscriber);
MARK_VAL_T(::GlobalNamespace::__InputRemoting__ChangeUsageMsg__Data);
MARK_VAL_T(::GlobalNamespace::__InputRemoting__NewDeviceMsg__Data);
MARK_VAL_T(::GlobalNamespace::__InputRemoting__NewLayoutMsg__Data);
MARK_VAL_T(::UnityEngine::InputSystem::__InputRemoting__Message);
MARK_VAL_T(::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice);
MARK_VAL_T(::UnityEngine::InputSystem::__InputRemoting__RemoteSender);
// Type: ::MessageType
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6251))
// CS Name: ::InputRemoting::MessageType
struct CORDL_TYPE __InputRemoting__MessageType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____InputRemoting__MessageType_Unwrapped
enum struct ____InputRemoting__MessageType_Unwrapped : int32_t {
__E_Connect = static_cast<int32_t>(0x0),
__E_Disconnect = static_cast<int32_t>(0x1),
__E_NewLayout = static_cast<int32_t>(0x2),
__E_NewDevice = static_cast<int32_t>(0x3),
__E_NewEvents = static_cast<int32_t>(0x4),
__E_RemoveDevice = static_cast<int32_t>(0x5),
__E_RemoveLayout = static_cast<int32_t>(0x6),
__E_ChangeUsages = static_cast<int32_t>(0x7),
__E_StartSending = static_cast<int32_t>(0x8),
__E_StopSending = static_cast<int32_t>(0x9),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Connect value: static_cast<int32_t>(0x0)
static ::UnityEngine::InputSystem::__InputRemoting__MessageType const Connect;

/// @brief Field Disconnect value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::__InputRemoting__MessageType const Disconnect;

/// @brief Field NewLayout value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::__InputRemoting__MessageType const NewLayout;

/// @brief Field NewDevice value: static_cast<int32_t>(0x3)
static ::UnityEngine::InputSystem::__InputRemoting__MessageType const NewDevice;

/// @brief Field NewEvents value: static_cast<int32_t>(0x4)
static ::UnityEngine::InputSystem::__InputRemoting__MessageType const NewEvents;

/// @brief Field RemoveDevice value: static_cast<int32_t>(0x5)
static ::UnityEngine::InputSystem::__InputRemoting__MessageType const RemoveDevice;

/// @brief Field RemoveLayout value: static_cast<int32_t>(0x6)
static ::UnityEngine::InputSystem::__InputRemoting__MessageType const RemoveLayout;

/// @brief Field ChangeUsages value: static_cast<int32_t>(0x7)
static ::UnityEngine::InputSystem::__InputRemoting__MessageType const ChangeUsages;

/// @brief Field StartSending value: static_cast<int32_t>(0x8)
static ::UnityEngine::InputSystem::__InputRemoting__MessageType const StartSending;

/// @brief Field StopSending value: static_cast<int32_t>(0x9)
static ::UnityEngine::InputSystem::__InputRemoting__MessageType const StopSending;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____InputRemoting__MessageType_Unwrapped () const noexcept {
return std::bit_cast<____InputRemoting__MessageType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputRemoting__MessageType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputRemoting__MessageType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputRemoting__MessageType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__MessageType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::Message
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6252))
// CS Name: ::InputRemoting::Message
struct CORDL_TYPE __InputRemoting__Message : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field participantId offset 0x0
 __declspec(property(get=__get_participantId, put=__set_participantId)) int32_t  participantId;

/// @brief Field type offset 0x4
 __declspec(property(get=__get_type, put=__set_type)) ::UnityEngine::InputSystem::__InputRemoting__MessageType  type;

/// @brief Field data offset 0x8
 __declspec(property(get=__get_data, put=__set_data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  data;

constexpr void __set_participantId(int32_t  value) ;

constexpr int32_t& __get_participantId() ;

constexpr int32_t const& __get_participantId() const;

constexpr void __set_type(::UnityEngine::InputSystem::__InputRemoting__MessageType  value) ;

constexpr ::UnityEngine::InputSystem::__InputRemoting__MessageType& __get_type() ;

constexpr ::UnityEngine::InputSystem::__InputRemoting__MessageType const& __get_type() const;

constexpr void __set_data(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_data() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_data() const;

// Ctor Parameters [CppParam { name: "participantId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::UnityEngine::InputSystem::__InputRemoting__MessageType", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
constexpr __InputRemoting__Message(int32_t  participantId, ::UnityEngine::InputSystem::__InputRemoting__MessageType  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputRemoting__Message(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputRemoting__Message()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__Message, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::Flags
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6253))
// CS Name: ::InputRemoting::Flags
struct CORDL_TYPE __InputRemoting__Flags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____InputRemoting__Flags_Unwrapped
enum struct ____InputRemoting__Flags_Unwrapped : int32_t {
__E_Sending = static_cast<int32_t>(0x1),
__E_StartSendingOnConnect = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Sending value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::__InputRemoting__Flags const Sending;

/// @brief Field StartSendingOnConnect value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::__InputRemoting__Flags const StartSendingOnConnect;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____InputRemoting__Flags_Unwrapped () const noexcept {
return std::bit_cast<____InputRemoting__Flags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputRemoting__Flags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputRemoting__Flags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputRemoting__Flags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__Flags, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::RemoteSender
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6254))
// CS Name: ::InputRemoting::RemoteSender
struct CORDL_TYPE __InputRemoting__RemoteSender : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field senderId offset 0x0
 __declspec(property(get=__get_senderId, put=__set_senderId)) int32_t  senderId;

/// @brief Field layouts offset 0x8
 __declspec(property(get=__get_layouts, put=__set_layouts)) ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  layouts;

/// @brief Field devices offset 0x10
 __declspec(property(get=__get_devices, put=__set_devices)) ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice,::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice>*>  devices;

constexpr void __set_senderId(int32_t  value) ;

constexpr int32_t& __get_senderId() ;

constexpr int32_t const& __get_senderId() const;

constexpr void __set_layouts(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>& __get_layouts() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> const& __get_layouts() const;

constexpr void __set_devices(::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice,::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice,::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice>*>& __get_devices() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice,::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice>*> const& __get_devices() const;

// Ctor Parameters [CppParam { name: "senderId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "layouts", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>", modifiers: "", def_value: None }, CppParam { name: "devices", ty: "::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice,::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice>*>", modifiers: "", def_value: None }]
constexpr __InputRemoting__RemoteSender(int32_t  senderId, ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>  layouts, ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice,::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice>*>  devices) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputRemoting__RemoteSender(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputRemoting__RemoteSender()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__RemoteSender, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::RemoteInputDevice
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6255))
// CS Name: ::InputRemoting::RemoteInputDevice
struct CORDL_TYPE __InputRemoting__RemoteInputDevice : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field remoteId offset 0x0
 __declspec(property(get=__get_remoteId, put=__set_remoteId)) int32_t  remoteId;

/// @brief Field localId offset 0x4
 __declspec(property(get=__get_localId, put=__set_localId)) int32_t  localId;

/// @brief Field description offset 0x8
 __declspec(property(get=__get_description, put=__set_description)) ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description;

constexpr void __set_remoteId(int32_t  value) ;

constexpr int32_t& __get_remoteId() ;

constexpr int32_t const& __get_remoteId() const;

constexpr void __set_localId(int32_t  value) ;

constexpr int32_t& __get_localId() ;

constexpr int32_t const& __get_localId() const;

constexpr void __set_description(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  value) ;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription& __get_description() ;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription const& __get_description() const;

// Ctor Parameters [CppParam { name: "remoteId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "localId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: None }]
constexpr __InputRemoting__RemoteInputDevice(int32_t  remoteId, int32_t  localId, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputRemoting__RemoteInputDevice(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputRemoting__RemoteInputDevice()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::Subscriber
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6256))
// CS Name: ::InputRemoting::Subscriber*
class CORDL_TYPE __InputRemoting__Subscriber : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field owner offset 0x10
 __declspec(property(get=__get_owner, put=__set_owner)) ::UnityEngine::InputSystem::InputRemoting*  owner;

/// @brief Field observer offset 0x18
 __declspec(property(get=__get_observer, put=__set_observer)) ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*  observer;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_owner(::UnityEngine::InputSystem::InputRemoting*  value) ;

constexpr ::UnityEngine::InputSystem::InputRemoting* __get_owner() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputRemoting*> __get_owner() const;

constexpr void __set_observer(::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*  value) ;

constexpr ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>* __get_observer() ;

constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*> __get_observer() const;

/// @brief Method Dispose addr 0x2aa5ff8 size 0x58 virtual true final true
inline void Dispose() ;

static inline ::UnityEngine::InputSystem::__InputRemoting__Subscriber* New_ctor() ;

/// @brief Method .ctor addr 0x2aa47fc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__Subscriber", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputRemoting__Subscriber(__InputRemoting__Subscriber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__Subscriber", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputRemoting__Subscriber(__InputRemoting__Subscriber const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputRemoting__Subscriber()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__Subscriber, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::ConnectMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6257))
// CS Name: ::InputRemoting::ConnectMsg*
class CORDL_TYPE __InputRemoting__ConnectMsg : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Process addr 0x2aa3b58 size 0x44 virtual false final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__ConnectMsg", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputRemoting__ConnectMsg(__InputRemoting__ConnectMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__ConnectMsg", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputRemoting__ConnectMsg(__InputRemoting__ConnectMsg const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputRemoting__ConnectMsg()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__ConnectMsg, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::StartSendingMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6258))
// CS Name: ::InputRemoting::StartSendingMsg*
class CORDL_TYPE __InputRemoting__StartSendingMsg : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Process addr 0x2aa46f0 size 0x10 virtual false final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__StartSendingMsg", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputRemoting__StartSendingMsg(__InputRemoting__StartSendingMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__StartSendingMsg", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputRemoting__StartSendingMsg(__InputRemoting__StartSendingMsg const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputRemoting__StartSendingMsg()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__StartSendingMsg, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::StopSendingMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6259))
// CS Name: ::InputRemoting::StopSendingMsg*
class CORDL_TYPE __InputRemoting__StopSendingMsg : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Process addr 0x2aa4700 size 0x10 virtual false final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__StopSendingMsg", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputRemoting__StopSendingMsg(__InputRemoting__StopSendingMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__StopSendingMsg", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputRemoting__StopSendingMsg(__InputRemoting__StopSendingMsg const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputRemoting__StopSendingMsg()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__StopSendingMsg, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::DisconnectMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6260))
// CS Name: ::InputRemoting::DisconnectMsg*
class CORDL_TYPE __InputRemoting__DisconnectMsg : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Process addr 0x2aa3b9c size 0x94 virtual false final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver, ::UnityEngine::InputSystem::__InputRemoting__Message  msg) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__DisconnectMsg", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputRemoting__DisconnectMsg(__InputRemoting__DisconnectMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__DisconnectMsg", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputRemoting__DisconnectMsg(__InputRemoting__DisconnectMsg const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputRemoting__DisconnectMsg()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__DisconnectMsg, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::Data
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6261))
// CS Name: ::InputRemoting::NewLayoutMsg::Data
struct CORDL_TYPE __InputRemoting__NewLayoutMsg__Data : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field name offset 0x0
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field layoutJson offset 0x8
 __declspec(property(get=__get_layoutJson, put=__set_layoutJson)) ::StringW  layoutJson;

/// @brief Field isOverride offset 0x10
 __declspec(property(get=__get_isOverride, put=__set_isOverride)) bool  isOverride;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_layoutJson(::StringW  value) ;

constexpr ::StringW& __get_layoutJson() ;

constexpr ::StringW const& __get_layoutJson() const;

constexpr void __set_isOverride(bool  value) ;

constexpr bool& __get_isOverride() ;

constexpr bool const& __get_isOverride() const;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "layoutJson", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isOverride", ty: "bool", modifiers: "", def_value: None }]
constexpr __InputRemoting__NewLayoutMsg__Data(::StringW  name, ::StringW  layoutJson, bool  isOverride) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputRemoting__NewLayoutMsg__Data(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputRemoting__NewLayoutMsg__Data()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputRemoting__NewLayoutMsg__Data, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::NewLayoutMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6262))
// CS Name: ::InputRemoting::NewLayoutMsg*
class CORDL_TYPE __InputRemoting__NewLayoutMsg : public ::System::Object {
public:
// Declarations
using Data = ::GlobalNamespace::__InputRemoting__NewLayoutMsg__Data;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Create addr 0x2aa4b74 size 0x24c virtual false final false
static inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputRemoting__Message> Create(::UnityEngine::InputSystem::InputRemoting*  sender, ::StringW  layoutName) ;

/// @brief Method Process addr 0x2aa3c30 size 0xf8 virtual false final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver, ::UnityEngine::InputSystem::__InputRemoting__Message  msg) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__NewLayoutMsg", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputRemoting__NewLayoutMsg(__InputRemoting__NewLayoutMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__NewLayoutMsg", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputRemoting__NewLayoutMsg(__InputRemoting__NewLayoutMsg const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputRemoting__NewLayoutMsg()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::Data
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6263))
// CS Name: ::InputRemoting::NewDeviceMsg::Data
struct CORDL_TYPE __InputRemoting__NewDeviceMsg__Data : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field name offset 0x0
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field layout offset 0x8
 __declspec(property(get=__get_layout, put=__set_layout)) ::StringW  layout;

/// @brief Field deviceId offset 0x10
 __declspec(property(get=__get_deviceId, put=__set_deviceId)) int32_t  deviceId;

/// @brief Field usages offset 0x18
 __declspec(property(get=__get_usages, put=__set_usages)) ::ArrayW<::StringW,::Array<::StringW>*>  usages;

/// @brief Field description offset 0x20
 __declspec(property(get=__get_description, put=__set_description)) ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_layout(::StringW  value) ;

constexpr ::StringW& __get_layout() ;

constexpr ::StringW const& __get_layout() const;

constexpr void __set_deviceId(int32_t  value) ;

constexpr int32_t& __get_deviceId() ;

constexpr int32_t const& __get_deviceId() const;

constexpr void __set_usages(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_usages() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_usages() const;

constexpr void __set_description(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  value) ;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription& __get_description() ;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription const& __get_description() const;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "layout", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usages", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: None }]
constexpr __InputRemoting__NewDeviceMsg__Data(::StringW  name, ::StringW  layout, int32_t  deviceId, ::ArrayW<::StringW,::Array<::StringW>*>  usages, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputRemoting__NewDeviceMsg__Data(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputRemoting__NewDeviceMsg__Data()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputRemoting__NewDeviceMsg__Data, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6264))
// CS Name: ::InputRemoting::NewDeviceMsg::<>c*
class CORDL_TYPE __InputRemoting__NewDeviceMsg____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__InputRemoting__NewDeviceMsg____c*  value) ;

static inline ::GlobalNamespace::__InputRemoting__NewDeviceMsg____c* getStaticF___9() ;

static inline void setStaticF___9__1_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  value) ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>* getStaticF___9__1_0() ;

static inline ::GlobalNamespace::__InputRemoting__NewDeviceMsg____c* New_ctor() ;

/// @brief Method .ctor addr 0x2aa67f8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Create>b__1_0 addr 0x2aa6800 size 0x24 virtual false final false
inline ::StringW _Create_b__1_0(::UnityEngine::InputSystem::Utilities::InternedString  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__NewDeviceMsg____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputRemoting__NewDeviceMsg____c(__InputRemoting__NewDeviceMsg____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__NewDeviceMsg____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputRemoting__NewDeviceMsg____c(__InputRemoting__NewDeviceMsg____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputRemoting__NewDeviceMsg____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__1_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputRemoting__NewDeviceMsg____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::NewDeviceMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6265))
// CS Name: ::InputRemoting::NewDeviceMsg*
class CORDL_TYPE __InputRemoting__NewDeviceMsg : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__InputRemoting__NewDeviceMsg____c;

using Data = ::GlobalNamespace::__InputRemoting__NewDeviceMsg__Data;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Create addr 0x2aa4fb0 size 0x200 virtual false final false
static inline ::UnityEngine::InputSystem::__InputRemoting__Message Create(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method Process addr 0x2aa3d28 size 0x538 virtual false final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver, ::UnityEngine::InputSystem::__InputRemoting__Message  msg) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__NewDeviceMsg", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputRemoting__NewDeviceMsg(__InputRemoting__NewDeviceMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__NewDeviceMsg", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputRemoting__NewDeviceMsg(__InputRemoting__NewDeviceMsg const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputRemoting__NewDeviceMsg()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::NewEventsMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6266))
// CS Name: ::InputRemoting::NewEventsMsg*
class CORDL_TYPE __InputRemoting__NewEventsMsg : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method CreateResetEvent addr 0x2aa56bc size 0x78 virtual false final false
static inline ::UnityEngine::InputSystem::__InputRemoting__Message CreateResetEvent(::UnityEngine::InputSystem::InputDevice*  device, bool  isHardReset) ;

/// @brief Method CreateStateEvent addr 0x2aa51b0 size 0xfc virtual false final false
static inline ::UnityEngine::InputSystem::__InputRemoting__Message CreateStateEvent(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method Create addr 0x2aa5310 size 0xd8 virtual false final false
static inline ::UnityEngine::InputSystem::__InputRemoting__Message Create(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  events, int32_t  eventCount) ;

/// @brief Method Process addr 0x2aa4260 size 0xc0 virtual false final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver, ::UnityEngine::InputSystem::__InputRemoting__Message  msg) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__NewEventsMsg", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputRemoting__NewEventsMsg(__InputRemoting__NewEventsMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__NewEventsMsg", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputRemoting__NewEventsMsg(__InputRemoting__NewEventsMsg const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputRemoting__NewEventsMsg()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::Data
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6267))
// CS Name: ::InputRemoting::ChangeUsageMsg::Data
struct CORDL_TYPE __InputRemoting__ChangeUsageMsg__Data : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field deviceId offset 0x0
 __declspec(property(get=__get_deviceId, put=__set_deviceId)) int32_t  deviceId;

/// @brief Field usages offset 0x8
 __declspec(property(get=__get_usages, put=__set_usages)) ::ArrayW<::StringW,::Array<::StringW>*>  usages;

constexpr void __set_deviceId(int32_t  value) ;

constexpr int32_t& __get_deviceId() ;

constexpr int32_t const& __get_deviceId() const;

constexpr void __set_usages(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_usages() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_usages() const;

// Ctor Parameters [CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usages", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
constexpr __InputRemoting__ChangeUsageMsg__Data(int32_t  deviceId, ::ArrayW<::StringW,::Array<::StringW>*>  usages) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputRemoting__ChangeUsageMsg__Data(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputRemoting__ChangeUsageMsg__Data()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputRemoting__ChangeUsageMsg__Data, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6268))
// CS Name: ::InputRemoting::ChangeUsageMsg::<>c*
class CORDL_TYPE __InputRemoting__ChangeUsageMsg____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c*  value) ;

static inline ::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c* getStaticF___9() ;

static inline void setStaticF___9__1_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  value) ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>* getStaticF___9__1_0() ;

static inline ::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c* New_ctor() ;

/// @brief Method .ctor addr 0x2aa69c0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Create>b__1_0 addr 0x2aa69c8 size 0x24 virtual false final false
inline ::StringW _Create_b__1_0(::UnityEngine::InputSystem::Utilities::InternedString  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__ChangeUsageMsg____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputRemoting__ChangeUsageMsg____c(__InputRemoting__ChangeUsageMsg____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__ChangeUsageMsg____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputRemoting__ChangeUsageMsg____c(__InputRemoting__ChangeUsageMsg____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputRemoting__ChangeUsageMsg____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__1_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ChangeUsageMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6269))
// CS Name: ::InputRemoting::ChangeUsageMsg*
class CORDL_TYPE __InputRemoting__ChangeUsageMsg : public ::System::Object {
public:
// Declarations
using __c = ::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c;

using Data = ::GlobalNamespace::__InputRemoting__ChangeUsageMsg__Data;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Create addr 0x2aa5518 size 0x1a4 virtual false final false
static inline ::UnityEngine::InputSystem::__InputRemoting__Message Create(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method Process addr 0x2aa4320 size 0x310 virtual false final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver, ::UnityEngine::InputSystem::__InputRemoting__Message  msg) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__ChangeUsageMsg", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputRemoting__ChangeUsageMsg(__InputRemoting__ChangeUsageMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__ChangeUsageMsg", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputRemoting__ChangeUsageMsg(__InputRemoting__ChangeUsageMsg const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputRemoting__ChangeUsageMsg()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::RemoveDeviceMsg
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6270))
// CS Name: ::InputRemoting::RemoveDeviceMsg*
class CORDL_TYPE __InputRemoting__RemoveDeviceMsg : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Create addr 0x2aa54a8 size 0x70 virtual false final false
static inline ::UnityEngine::InputSystem::__InputRemoting__Message Create(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method Process addr 0x2aa4630 size 0xc0 virtual false final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver, ::UnityEngine::InputSystem::__InputRemoting__Message  msg) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__RemoveDeviceMsg", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputRemoting__RemoveDeviceMsg(__InputRemoting__RemoveDeviceMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputRemoting__RemoveDeviceMsg", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputRemoting__RemoveDeviceMsg(__InputRemoting__RemoveDeviceMsg const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputRemoting__RemoveDeviceMsg()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputRemoting
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6271))
// CS Name: ::UnityEngine.InputSystem::InputRemoting*
class CORDL_TYPE InputRemoting : public ::System::Object {
public:
// Declarations
using RemoveDeviceMsg = ::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg;

using ChangeUsageMsg = ::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg;

using NewEventsMsg = ::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg;

using NewDeviceMsg = ::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg;

using NewLayoutMsg = ::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg;

using DisconnectMsg = ::UnityEngine::InputSystem::__InputRemoting__DisconnectMsg;

using StopSendingMsg = ::UnityEngine::InputSystem::__InputRemoting__StopSendingMsg;

using StartSendingMsg = ::UnityEngine::InputSystem::__InputRemoting__StartSendingMsg;

using ConnectMsg = ::UnityEngine::InputSystem::__InputRemoting__ConnectMsg;

using Subscriber = ::UnityEngine::InputSystem::__InputRemoting__Subscriber;

using RemoteInputDevice = ::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice;

using RemoteSender = ::UnityEngine::InputSystem::__InputRemoting__RemoteSender;

using Flags = ::UnityEngine::InputSystem::__InputRemoting__Flags;

using Message = ::UnityEngine::InputSystem::__InputRemoting__Message;

using MessageType = ::UnityEngine::InputSystem::__InputRemoting__MessageType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field m_Flags offset 0x10
 __declspec(property(get=__get_m_Flags, put=__set_m_Flags)) ::UnityEngine::InputSystem::__InputRemoting__Flags  m_Flags;

/// @brief Field m_LocalManager offset 0x18
 __declspec(property(get=__get_m_LocalManager, put=__set_m_LocalManager)) ::UnityEngine::InputSystem::InputManager*  m_LocalManager;

/// @brief Field m_Subscribers offset 0x20
 __declspec(property(get=__get_m_Subscribers, put=__set_m_Subscribers)) ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__Subscriber*,::Array<::UnityEngine::InputSystem::__InputRemoting__Subscriber*>*>  m_Subscribers;

/// @brief Field m_Senders offset 0x28
 __declspec(property(get=__get_m_Senders, put=__set_m_Senders)) ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteSender,::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteSender>*>  m_Senders;

 __declspec(property(get=get_sending, put=set_sending)) bool  sending;

 __declspec(property(get=get_manager)) ::UnityEngine::InputSystem::InputManager*  manager;

/// @brief Convert operator to "::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>"
constexpr operator  ::System::IObservable_1<::UnityEngine::InputSystem::__InputRemoting__Message>*() noexcept;

/// @brief Convert operator to "::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>"
constexpr operator  ::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*() noexcept;

constexpr void __set_m_Flags(::UnityEngine::InputSystem::__InputRemoting__Flags  value) ;

constexpr ::UnityEngine::InputSystem::__InputRemoting__Flags& __get_m_Flags() ;

constexpr ::UnityEngine::InputSystem::__InputRemoting__Flags const& __get_m_Flags() const;

constexpr void __set_m_LocalManager(::UnityEngine::InputSystem::InputManager*  value) ;

constexpr ::UnityEngine::InputSystem::InputManager* __get_m_LocalManager() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputManager*> __get_m_LocalManager() const;

constexpr void __set_m_Subscribers(::ArrayW<::UnityEngine::InputSystem::__InputRemoting__Subscriber*,::Array<::UnityEngine::InputSystem::__InputRemoting__Subscriber*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__Subscriber*,::Array<::UnityEngine::InputSystem::__InputRemoting__Subscriber*>*>& __get_m_Subscribers() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__Subscriber*,::Array<::UnityEngine::InputSystem::__InputRemoting__Subscriber*>*> const& __get_m_Subscribers() const;

constexpr void __set_m_Senders(::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteSender,::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteSender>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteSender,::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteSender>*>& __get_m_Senders() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::__InputRemoting__RemoteSender,::Array<::UnityEngine::InputSystem::__InputRemoting__RemoteSender>*> const& __get_m_Senders() const;

/// @brief Method get_sending addr 0x2aa351c size 0xc virtual false final false
inline bool get_sending() ;

/// @brief Method set_sending addr 0x2aa3528 size 0x1c virtual false final false
inline void set_sending(bool  value) ;

static inline ::UnityEngine::InputSystem::InputRemoting* New_ctor(::UnityEngine::InputSystem::InputManager*  manager, bool  startSendingOnConnect) ;

/// @brief Method .ctor addr 0x2aa3544 size 0x8c virtual false final false
inline void _ctor(::UnityEngine::InputSystem::InputManager*  manager, bool  startSendingOnConnect) ;

/// @brief Method StartSending addr 0x2aa35d0 size 0x17c virtual false final false
inline void StartSending() ;

/// @brief Method StopSending addr 0x2aa386c size 0x160 virtual false final false
inline void StopSending() ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext addr 0x2aa3ad4 size 0x84 virtual true final true
inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext(::UnityEngine::InputSystem::__InputRemoting__Message  msg) ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError addr 0x2aa4710 size 0x4 virtual true final true
inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError(::System::Exception*  error) ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted addr 0x2aa4714 size 0x4 virtual true final true
inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted() ;

/// @brief Method Subscribe addr 0x2aa4718 size 0xe4 virtual true final true
inline ::System::IDisposable* Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::__InputRemoting__Message>*  observer) ;

/// @brief Method SendInitialMessages addr 0x2aa3854 size 0x18 virtual false final false
inline void SendInitialMessages() ;

/// @brief Method SendAllGeneratedLayouts addr 0x2aa4804 size 0x154 virtual false final false
inline void SendAllGeneratedLayouts() ;

/// @brief Method SendLayout addr 0x2aa4ac0 size 0xb4 virtual false final false
inline void SendLayout(::StringW  layoutName) ;

/// @brief Method SendAllDevices addr 0x2aa4958 size 0x168 virtual false final false
inline void SendAllDevices() ;

/// @brief Method SendDevice addr 0x2aa4f2c size 0x84 virtual false final false
inline void SendDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method SendEvent addr 0x2aa52ac size 0x64 virtual false final false
inline void SendEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method SendDeviceChange addr 0x2aa53e8 size 0xc0 virtual false final false
inline void SendDeviceChange(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::InputDeviceChange  change) ;

/// @brief Method SendLayoutChange addr 0x2aa5734 size 0x104 virtual false final false
inline void SendLayoutChange(::StringW  layout, ::UnityEngine::InputSystem::InputControlLayoutChange  change) ;

/// @brief Method Send addr 0x2aa4dc0 size 0x104 virtual false final false
inline void Send(::UnityEngine::InputSystem::__InputRemoting__Message  msg) ;

/// @brief Method FindOrCreateSenderRecord addr 0x2aa5838 size 0xa4 virtual false final false
inline int32_t FindOrCreateSenderRecord(int32_t  senderId) ;

/// @brief Method BuildLayoutNamespace addr 0x2aa58dc size 0xa0 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::InternedString BuildLayoutNamespace(int32_t  senderId) ;

/// @brief Method FindLocalDeviceId addr 0x2aa597c size 0x74 virtual false final false
inline int32_t FindLocalDeviceId(int32_t  remoteDeviceId, int32_t  senderIndex) ;

/// @brief Method TryGetDeviceByRemoteId addr 0x2aa59f0 size 0x28 virtual false final false
inline ::UnityEngine::InputSystem::InputDevice* TryGetDeviceByRemoteId(int32_t  remoteDeviceId, int32_t  senderIndex) ;

/// @brief Method get_manager addr 0x2aa5a90 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::InputManager* get_manager() ;

/// @brief Method RemoveRemoteDevices addr 0x2aa5a98 size 0xfc virtual false final false
inline void RemoveRemoteDevices(int32_t  participantId) ;

/// @brief Method SerializeData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TData>
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> SerializeData(TData  data) ;

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TData>
static inline TData DeserializeData(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputRemoting(InputRemoting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputRemoting(InputRemoting const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputRemoting()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__Flags, "UnityEngine.InputSystem", "InputRemoting/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__MessageType, "UnityEngine.InputSystem", "InputRemoting/MessageType");
NEED_NO_BOX(::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputRemoting__ChangeUsageMsg____c*, "UnityEngine.InputSystem", "InputRemoting/ChangeUsageMsg/<>c");
NEED_NO_BOX(::GlobalNamespace::__InputRemoting__NewDeviceMsg____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputRemoting__NewDeviceMsg____c*, "UnityEngine.InputSystem", "InputRemoting/NewDeviceMsg/<>c");
NEED_NO_BOX(::UnityEngine::InputSystem::InputRemoting);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting*, "UnityEngine.InputSystem", "InputRemoting");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__ChangeUsageMsg*, "UnityEngine.InputSystem", "InputRemoting/ChangeUsageMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__ConnectMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__ConnectMsg*, "UnityEngine.InputSystem", "InputRemoting/ConnectMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__DisconnectMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__DisconnectMsg*, "UnityEngine.InputSystem", "InputRemoting/DisconnectMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__NewDeviceMsg*, "UnityEngine.InputSystem", "InputRemoting/NewDeviceMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__NewEventsMsg*, "UnityEngine.InputSystem", "InputRemoting/NewEventsMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__NewLayoutMsg*, "UnityEngine.InputSystem", "InputRemoting/NewLayoutMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__RemoveDeviceMsg*, "UnityEngine.InputSystem", "InputRemoting/RemoveDeviceMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__StartSendingMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__StartSendingMsg*, "UnityEngine.InputSystem", "InputRemoting/StartSendingMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__StopSendingMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__StopSendingMsg*, "UnityEngine.InputSystem", "InputRemoting/StopSendingMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputRemoting__Subscriber);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__Subscriber*, "UnityEngine.InputSystem", "InputRemoting/Subscriber");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputRemoting__ChangeUsageMsg__Data, "UnityEngine.InputSystem", "InputRemoting/ChangeUsageMsg/Data");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputRemoting__NewDeviceMsg__Data, "UnityEngine.InputSystem", "InputRemoting/NewDeviceMsg/Data");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputRemoting__NewLayoutMsg__Data, "UnityEngine.InputSystem", "InputRemoting/NewLayoutMsg/Data");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__Message, "UnityEngine.InputSystem", "InputRemoting/Message");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__RemoteInputDevice, "UnityEngine.InputSystem", "InputRemoting/RemoteInputDevice");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputRemoting__RemoteSender, "UnityEngine.InputSystem", "InputRemoting/RemoteSender");
