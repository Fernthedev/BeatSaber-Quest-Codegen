#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RealProxy)
namespace System {
class Object;
}
namespace System::Runtime::Remoting::Messaging {
class MonoMethodMessage;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System {
class Exception;
}
namespace System {
class MarshalByRefObject;
}
namespace System::Runtime::Remoting {
class Identity;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Type;
}
namespace System::Runtime::Remoting {
class ClientIdentity;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Runtime::Remoting::Proxies {
class RealProxy;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Proxies::RealProxy);
// Type: System.Runtime.Remoting.Proxies::RealProxy
namespace System::Runtime::Remoting::Proxies {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3088))
// CS Name: ::System.Runtime.Remoting.Proxies::RealProxy*
class CORDL_TYPE RealProxy : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field class_to_proxy offset 0x10
 __declspec(property(get=__get_class_to_proxy, put=__set_class_to_proxy)) ::System::Type*  class_to_proxy;

/// @brief Field _targetContext offset 0x18
 __declspec(property(get=__get__targetContext, put=__set__targetContext)) ::System::Runtime::Remoting::Contexts::Context*  _targetContext;

/// @brief Field _server offset 0x20
 __declspec(property(get=__get__server, put=__set__server)) ::System::MarshalByRefObject*  _server;

/// @brief Field _targetDomainId offset 0x28
 __declspec(property(get=__get__targetDomainId, put=__set__targetDomainId)) int32_t  _targetDomainId;

/// @brief Field _targetUri offset 0x30
 __declspec(property(get=__get__targetUri, put=__set__targetUri)) ::StringW  _targetUri;

/// @brief Field _objectIdentity offset 0x38
 __declspec(property(get=__get__objectIdentity, put=__set__objectIdentity)) ::System::Runtime::Remoting::Identity*  _objectIdentity;

/// @brief Field _objTP offset 0x40
 __declspec(property(get=__get__objTP, put=__set__objTP)) ::System::Object*  _objTP;

/// @brief Field _stubData offset 0x48
 __declspec(property(get=__get__stubData, put=__set__stubData)) ::System::Object*  _stubData;

 __declspec(property(get=get_ObjectIdentity, put=set_ObjectIdentity)) ::System::Runtime::Remoting::Identity*  ObjectIdentity;

constexpr void __set_class_to_proxy(::System::Type*  value) ;

constexpr ::System::Type* __get_class_to_proxy() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_class_to_proxy() const;

constexpr void __set__targetContext(::System::Runtime::Remoting::Contexts::Context*  value) ;

constexpr ::System::Runtime::Remoting::Contexts::Context* __get__targetContext() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Contexts::Context*> __get__targetContext() const;

constexpr void __set__server(::System::MarshalByRefObject*  value) ;

constexpr ::System::MarshalByRefObject* __get__server() ;

constexpr ::cordl_internals::to_const_pointer<::System::MarshalByRefObject*> __get__server() const;

constexpr void __set__targetDomainId(int32_t  value) ;

constexpr int32_t& __get__targetDomainId() ;

constexpr int32_t const& __get__targetDomainId() const;

constexpr void __set__targetUri(::StringW  value) ;

constexpr ::StringW& __get__targetUri() ;

constexpr ::StringW const& __get__targetUri() const;

constexpr void __set__objectIdentity(::System::Runtime::Remoting::Identity*  value) ;

constexpr ::System::Runtime::Remoting::Identity* __get__objectIdentity() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Identity*> __get__objectIdentity() const;

constexpr void __set__objTP(::System::Object*  value) ;

constexpr ::System::Object* __get__objTP() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__objTP() const;

constexpr void __set__stubData(::System::Object*  value) ;

constexpr ::System::Object* __get__stubData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__stubData() const;

static inline ::System::Runtime::Remoting::Proxies::RealProxy* New_ctor() ;

/// @brief Method .ctor addr 0x249766c size 0x10 virtual false final false
inline void _ctor() ;

static inline ::System::Runtime::Remoting::Proxies::RealProxy* New_ctor(::System::Type*  classToProxy) ;

/// @brief Method .ctor addr 0x249767c size 0x60 virtual false final false
inline void _ctor(::System::Type*  classToProxy) ;

static inline ::System::Runtime::Remoting::Proxies::RealProxy* New_ctor(::System::Type*  classToProxy, ::System::Runtime::Remoting::ClientIdentity*  identity) ;

/// @brief Method .ctor addr 0x249780c size 0x6c virtual false final false
inline void _ctor(::System::Type*  classToProxy, ::System::Runtime::Remoting::ClientIdentity*  identity) ;

static inline ::System::Runtime::Remoting::Proxies::RealProxy* New_ctor(::System::Type*  classToProxy, ::cordl_internals::intptr_t  stub, ::System::Object*  stubData) ;

/// @brief Method .ctor addr 0x24976dc size 0x130 virtual false final false
inline void _ctor(::System::Type*  classToProxy, ::cordl_internals::intptr_t  stub, ::System::Object*  stubData) ;

/// @brief Method InternalGetProxyType addr 0x2497878 size 0x4 virtual false final false
static inline ::System::Type* InternalGetProxyType(::System::Object*  transparentProxy) ;

/// @brief Method GetProxiedType addr 0x249787c size 0xac virtual false final false
inline ::System::Type* GetProxiedType() ;

/// @brief Method GetObjectData addr 0x2497928 size 0x98 virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_ObjectIdentity addr 0x24979c0 size 0x8 virtual false final false
inline ::System::Runtime::Remoting::Identity* get_ObjectIdentity() ;

/// @brief Method set_ObjectIdentity addr 0x24979c8 size 0x8 virtual false final false
inline void set_ObjectIdentity(::System::Runtime::Remoting::Identity*  value) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Runtime::Remoting::Messaging::IMessage* Invoke(::System::Runtime::Remoting::Messaging::IMessage*  msg) ;

/// @brief Method PrivateInvoke addr 0x2496ab8 size 0x8d4 virtual false final false
static inline ::System::Object* PrivateInvoke(::System::Runtime::Remoting::Proxies::RealProxy*  rp, ::System::Runtime::Remoting::Messaging::IMessage*  msg, ByRef<::System::Exception*>  exc, ByRef<::ArrayW<::System::Object*,::Array<::System::Object*>*>>  out_args) ;

/// @brief Method InternalGetTransparentProxy addr 0x24988cc size 0x4 virtual true final false
inline ::System::Object* InternalGetTransparentProxy(::StringW  className) ;

/// @brief Method GetTransparentProxy addr 0x24988d0 size 0x164 virtual true final false
inline ::System::Object* GetTransparentProxy() ;

/// @brief Method AttachServer addr 0x2498a34 size 0x8 virtual false final false
inline void AttachServer(::System::MarshalByRefObject*  s) ;

/// @brief Method SetTargetDomain addr 0x2498a3c size 0x8 virtual false final false
inline void SetTargetDomain(int32_t  domainId) ;

/// @brief Method GetAppDomainTarget addr 0x2498a44 size 0x12c virtual false final false
inline ::System::Object* GetAppDomainTarget() ;

/// @brief Method ProcessResponse addr 0x24981c8 size 0x704 virtual false final false
static inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> ProcessResponse(::System::Runtime::Remoting::Messaging::IMethodReturnMessage*  mrm, ::System::Runtime::Remoting::Messaging::MonoMethodMessage*  call) ;

// Ctor Parameters [CppParam { name: "", ty: "RealProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RealProxy(RealProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RealProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RealProxy(RealProxy const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RealProxy()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Proxies::RealProxy, 0x50>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Proxies
NEED_NO_BOX(::System::Runtime::Remoting::Proxies::RealProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Proxies::RealProxy*, "System.Runtime.Remoting.Proxies", "RealProxy");
