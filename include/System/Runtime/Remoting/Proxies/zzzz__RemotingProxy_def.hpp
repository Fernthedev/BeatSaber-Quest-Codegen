#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Proxies/zzzz__RealProxy_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RemotingProxy)
namespace System::Runtime::Remoting::Messaging {
class ConstructionCall;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System {
class Object;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting {
class Identity;
}
namespace System::Runtime::Remoting {
class ClientIdentity;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Remoting {
class IRemotingTypeInfo;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting::Proxies {
class RemotingProxy;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Proxies::RemotingProxy);
// Type: System.Runtime.Remoting.Proxies::RemotingProxy
namespace System::Runtime::Remoting::Proxies {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3088))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3089))
// CS Name: ::System.Runtime.Remoting.Proxies::RemotingProxy*
class CORDL_TYPE RemotingProxy : public ::System::Runtime::Remoting::Proxies::RealProxy {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Runtime::Remoting::Proxies::RealProxy)]{};

/// @brief Field _sink offset 0x50
 __declspec(property(get=__get__sink, put=__set__sink)) ::System::Runtime::Remoting::Messaging::IMessageSink*  _sink;

/// @brief Field _hasEnvoySink offset 0x58
 __declspec(property(get=__get__hasEnvoySink, put=__set__hasEnvoySink)) bool  _hasEnvoySink;

/// @brief Field _ctorCall offset 0x60
 __declspec(property(get=__get__ctorCall, put=__set__ctorCall)) ::System::Runtime::Remoting::Messaging::ConstructionCall*  _ctorCall;

 __declspec(property(get=get_TypeName)) ::StringW  TypeName;

/// @brief Convert operator to "::System::Runtime::Remoting::IRemotingTypeInfo"
constexpr operator  ::System::Runtime::Remoting::IRemotingTypeInfo*() noexcept;

static inline void setStaticF__cache_GetTypeMethod(::System::Reflection::MethodInfo*  value) ;

static inline ::System::Reflection::MethodInfo* getStaticF__cache_GetTypeMethod() ;

static inline void setStaticF__cache_GetHashCodeMethod(::System::Reflection::MethodInfo*  value) ;

static inline ::System::Reflection::MethodInfo* getStaticF__cache_GetHashCodeMethod() ;

constexpr void __set__sink(::System::Runtime::Remoting::Messaging::IMessageSink*  value) ;

constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* __get__sink() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> __get__sink() const;

constexpr void __set__hasEnvoySink(bool  value) ;

constexpr bool& __get__hasEnvoySink() ;

constexpr bool const& __get__hasEnvoySink() const;

constexpr void __set__ctorCall(::System::Runtime::Remoting::Messaging::ConstructionCall*  value) ;

constexpr ::System::Runtime::Remoting::Messaging::ConstructionCall* __get__ctorCall() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::ConstructionCall*> __get__ctorCall() const;

static inline ::System::Runtime::Remoting::Proxies::RemotingProxy* New_ctor(::System::Type*  type, ::System::Runtime::Remoting::ClientIdentity*  identity) ;

/// @brief Method .ctor addr 0x2498c34 size 0x44 virtual false final false
inline void _ctor(::System::Type*  type, ::System::Runtime::Remoting::ClientIdentity*  identity) ;

static inline ::System::Runtime::Remoting::Proxies::RemotingProxy* New_ctor(::System::Type*  type, ::StringW  activationUrl, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  activationAttributes) ;

/// @brief Method .ctor addr 0x249649c size 0x48 virtual false final false
inline void _ctor(::System::Type*  type, ::StringW  activationUrl, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  activationAttributes) ;

/// @brief Method Invoke addr 0x2499634 size 0x5c8 virtual true final false
inline ::System::Runtime::Remoting::Messaging::IMessage* Invoke(::System::Runtime::Remoting::Messaging::IMessage*  request) ;

/// @brief Method AttachIdentity addr 0x2499f90 size 0x230 virtual false final false
inline void AttachIdentity(::System::Runtime::Remoting::Identity*  identity) ;

/// @brief Method ActivateRemoteObject addr 0x2497b5c size 0xdc virtual false final false
inline ::System::Runtime::Remoting::Messaging::IMessage* ActivateRemoteObject(::System::Runtime::Remoting::Messaging::IMethodMessage*  request) ;

/// @brief Method get_TypeName addr 0x249a750 size 0x138 virtual true final true
inline ::StringW get_TypeName() ;

/// @brief Method CanCastTo addr 0x249a888 size 0x21c virtual true final true
inline bool CanCastTo(::System::Type*  fromType, ::System::Object*  o) ;

/// @brief Method Finalize addr 0x249aaa4 size 0x11c virtual true final false
inline void Finalize() ;

// Ctor Parameters [CppParam { name: "", ty: "RemotingProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemotingProxy(RemotingProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemotingProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemotingProxy(RemotingProxy const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RemotingProxy()  = default;
public:


// Fields

// Static field _cache_GetTypeMethod

// Static field _cache_GetHashCodeMethod


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Proxies::RemotingProxy, 0x68>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Proxies
NEED_NO_BOX(::System::Runtime::Remoting::Proxies::RemotingProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Proxies::RemotingProxy*, "System.Runtime.Remoting.Proxies", "RemotingProxy");
