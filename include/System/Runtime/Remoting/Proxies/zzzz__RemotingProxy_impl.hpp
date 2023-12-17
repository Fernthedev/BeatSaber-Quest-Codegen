#pragma once
#include "System/Runtime/Remoting/Proxies/zzzz__RealProxy_impl.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RemotingProxy_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ConstructionCall_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "System/Runtime/Remoting/zzzz__ClientIdentity_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/Remoting/zzzz__IRemotingTypeInfo_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Type*, ::System::Runtime::Remoting::ClientIdentity*)>(&::System::Runtime::Remoting::Proxies::RemotingProxy::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2498c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ClientIdentity*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Type*, ::StringW, ::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::System::Runtime::Remoting::Proxies::RemotingProxy::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x249649c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (::System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Proxies::RemotingProxy::Invoke)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x2499634;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.AttachIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Runtime::Remoting::Identity*)>(&::System::Runtime::Remoting::Proxies::RemotingProxy::AttachIdentity)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2499f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                            "AttachIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Identity*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.ActivateRemoteObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (::System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Runtime::Remoting::Messaging::IMethodMessage*)>(&::System::Runtime::Remoting::Proxies::RemotingProxy::ActivateRemoteObject)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2497b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                            "ActivateRemoteObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.get_TypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Proxies::RemotingProxy::*)()>(&::System::Runtime::Remoting::Proxies::RemotingProxy::get_TypeName)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x249a750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                            "get_TypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.CanCastTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Proxies::RemotingProxy::*)(::System::Type*, ::System::Object*)>(&::System::Runtime::Remoting::Proxies::RemotingProxy::CanCastTo)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x249a888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                            "CanCastTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Proxies::RemotingProxy.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Proxies::RemotingProxy::*)()>(&::System::Runtime::Remoting::Proxies::RemotingProxy::Finalize)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x249aaa4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Remoting::IRemotingTypeInfo"
constexpr  System::Runtime::Remoting::Proxies::RemotingProxy::operator ::System::Runtime::Remoting::IRemotingTypeInfo*() noexcept {
return static_cast<::System::Runtime::Remoting::IRemotingTypeInfo*>(static_cast<void*>(this));
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::setStaticF__cache_GetTypeMethod(::System::Reflection::MethodInfo*  value)  {
::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "_cache_GetTypeMethod", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get>(std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* System::Runtime::Remoting::Proxies::RemotingProxy::getStaticF__cache_GetTypeMethod()  {
return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "_cache_GetTypeMethod", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get>();
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::setStaticF__cache_GetHashCodeMethod(::System::Reflection::MethodInfo*  value)  {
::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "_cache_GetHashCodeMethod", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get>(std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* System::Runtime::Remoting::Proxies::RemotingProxy::getStaticF__cache_GetHashCodeMethod()  {
return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "_cache_GetHashCodeMethod", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get>();
}
constexpr void System::Runtime::Remoting::Proxies::RemotingProxy::__set__sink(::System::Runtime::Remoting::Messaging::IMessageSink*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::IMessageSink*, 0x50>(this, std::forward<::System::Runtime::Remoting::Messaging::IMessageSink*>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Proxies::RemotingProxy::__get__sink()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::IMessageSink*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> System::Runtime::Remoting::Proxies::RemotingProxy::__get__sink() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::IMessageSink*, 0x50>(this);
}
constexpr void System::Runtime::Remoting::Proxies::RemotingProxy::__set__hasEnvoySink(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Remoting::Proxies::RemotingProxy::__get__hasEnvoySink()  {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr bool const& System::Runtime::Remoting::Proxies::RemotingProxy::__get__hasEnvoySink() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr void System::Runtime::Remoting::Proxies::RemotingProxy::__set__ctorCall(::System::Runtime::Remoting::Messaging::ConstructionCall*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::ConstructionCall*, 0x60>(this, std::forward<::System::Runtime::Remoting::Messaging::ConstructionCall*>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::ConstructionCall* System::Runtime::Remoting::Proxies::RemotingProxy::__get__ctorCall()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::ConstructionCall*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::ConstructionCall*> System::Runtime::Remoting::Proxies::RemotingProxy::__get__ctorCall() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::ConstructionCall*, 0x60>(this);
}
inline ::System::Runtime::Remoting::Proxies::RemotingProxy* System::Runtime::Remoting::Proxies::RemotingProxy::New_ctor(::System::Type*  type, ::System::Runtime::Remoting::ClientIdentity*  identity)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Proxies::RemotingProxy*>(type, identity));
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::_ctor(::System::Type*  type, ::System::Runtime::Remoting::ClientIdentity*  identity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ClientIdentity*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, identity);
}
inline ::System::Runtime::Remoting::Proxies::RemotingProxy* System::Runtime::Remoting::Proxies::RemotingProxy::New_ctor(::System::Type*  type, ::StringW  activationUrl, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  activationAttributes)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Proxies::RemotingProxy*>(type, activationUrl, activationAttributes));
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::_ctor(::System::Type*  type, ::StringW  activationUrl, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  activationAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, activationUrl, activationAttributes);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Proxies::RemotingProxy::Invoke(::System::Runtime::Remoting::Messaging::IMessage*  request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(*this, ___internal_method, request);
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::AttachIdentity(::System::Runtime::Remoting::Identity*  identity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                            "AttachIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Identity*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, identity);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Proxies::RemotingProxy::ActivateRemoteObject(::System::Runtime::Remoting::Messaging::IMethodMessage*  request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                            "ActivateRemoteObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodMessage*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(*this, ___internal_method, request);
}
inline ::StringW System::Runtime::Remoting::Proxies::RemotingProxy::get_TypeName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                            "get_TypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline bool System::Runtime::Remoting::Proxies::RemotingProxy::CanCastTo(::System::Type*  fromType, ::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                            "CanCastTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, fromType, o);
}
inline void System::Runtime::Remoting::Proxies::RemotingProxy::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Proxies::RemotingProxy*>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
