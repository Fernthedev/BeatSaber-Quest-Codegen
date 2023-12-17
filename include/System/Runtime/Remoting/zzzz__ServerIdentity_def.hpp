#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ServerIdentity)
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Lifetime {
class Lease;
}
namespace System {
class MarshalByRefObject;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System {
class Type;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting::Lifetime {
class ILease;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ServerIdentity;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ServerIdentity);
// Type: System.Runtime.Remoting::ServerIdentity
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3060))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3072))
// CS Name: ::System.Runtime.Remoting::ServerIdentity*
class CORDL_TYPE ServerIdentity : public ::System::Runtime::Remoting::Identity {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::System::Runtime::Remoting::Identity)]{};

/// @brief Field _objectType offset 0x48
 __declspec(property(get=__get__objectType, put=__set__objectType)) ::System::Type*  _objectType;

/// @brief Field _serverObject offset 0x50
 __declspec(property(get=__get__serverObject, put=__set__serverObject)) ::System::MarshalByRefObject*  _serverObject;

/// @brief Field _serverSink offset 0x58
 __declspec(property(get=__get__serverSink, put=__set__serverSink)) ::System::Runtime::Remoting::Messaging::IMessageSink*  _serverSink;

/// @brief Field _context offset 0x60
 __declspec(property(get=__get__context, put=__set__context)) ::System::Runtime::Remoting::Contexts::Context*  _context;

/// @brief Field _lease offset 0x68
 __declspec(property(get=__get__lease, put=__set__lease)) ::System::Runtime::Remoting::Lifetime::Lease*  _lease;

 __declspec(property(get=get_ObjectType)) ::System::Type*  ObjectType;

 __declspec(property(get=get_Lease)) ::System::Runtime::Remoting::Lifetime::Lease*  Lease;

 __declspec(property(get=get_Context, put=set_Context)) ::System::Runtime::Remoting::Contexts::Context*  Context;

constexpr void __set__objectType(::System::Type*  value) ;

constexpr ::System::Type* __get__objectType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__objectType() const;

constexpr void __set__serverObject(::System::MarshalByRefObject*  value) ;

constexpr ::System::MarshalByRefObject* __get__serverObject() ;

constexpr ::cordl_internals::to_const_pointer<::System::MarshalByRefObject*> __get__serverObject() const;

constexpr void __set__serverSink(::System::Runtime::Remoting::Messaging::IMessageSink*  value) ;

constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* __get__serverSink() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> __get__serverSink() const;

constexpr void __set__context(::System::Runtime::Remoting::Contexts::Context*  value) ;

constexpr ::System::Runtime::Remoting::Contexts::Context* __get__context() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Contexts::Context*> __get__context() const;

constexpr void __set__lease(::System::Runtime::Remoting::Lifetime::Lease*  value) ;

constexpr ::System::Runtime::Remoting::Lifetime::Lease* __get__lease() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Lifetime::Lease*> __get__lease() const;

static inline ::System::Runtime::Remoting::ServerIdentity* New_ctor(::StringW  objectUri, ::System::Runtime::Remoting::Contexts::Context*  context, ::System::Type*  objectType) ;

/// @brief Method .ctor addr 0x2492788 size 0x30 virtual false final false
inline void _ctor(::StringW  objectUri, ::System::Runtime::Remoting::Contexts::Context*  context, ::System::Type*  objectType) ;

/// @brief Method get_ObjectType addr 0x24927b8 size 0x8 virtual false final false
inline ::System::Type* get_ObjectType() ;

/// @brief Method StartTrackingLifetime addr 0x24927c0 size 0x18c virtual false final false
inline void StartTrackingLifetime(::System::Runtime::Remoting::Lifetime::ILease*  lease) ;

/// @brief Method OnLifetimeExpired addr 0x2492b0c size 0x4 virtual true final false
inline void OnLifetimeExpired() ;

/// @brief Method CreateObjRef addr 0x2492b8c size 0x1ac virtual true final false
inline ::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type*  requestedType) ;

/// @brief Method AttachServerObject addr 0x2493148 size 0xf8 virtual false final false
inline void AttachServerObject(::System::MarshalByRefObject*  serverObject, ::System::Runtime::Remoting::Contexts::Context*  context) ;

/// @brief Method get_Lease addr 0x2493444 size 0x8 virtual false final false
inline ::System::Runtime::Remoting::Lifetime::Lease* get_Lease() ;

/// @brief Method get_Context addr 0x249344c size 0x8 virtual false final false
inline ::System::Runtime::Remoting::Contexts::Context* get_Context() ;

/// @brief Method set_Context addr 0x2493454 size 0x8 virtual false final false
inline void set_Context(::System::Runtime::Remoting::Contexts::Context*  value) ;

/// @brief Method SyncObjectProcessMessage addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage*  msg) ;

/// @brief Method AsyncObjectProcessMessage addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage*  msg, ::System::Runtime::Remoting::Messaging::IMessageSink*  replySink) ;

/// @brief Method DisposeServerObject addr 0x2492b10 size 0x7c virtual false final false
inline void DisposeServerObject() ;

// Ctor Parameters [CppParam { name: "", ty: "ServerIdentity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerIdentity(ServerIdentity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerIdentity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerIdentity(ServerIdentity const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ServerIdentity()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ServerIdentity, 0x70>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ServerIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ServerIdentity*, "System.Runtime.Remoting", "ServerIdentity");
