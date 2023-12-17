#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlDownloadManager_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/zzzz__XmlDownloadManager_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
//  Writing Method size for method: ::System::Xml::__XmlDownloadManager____c__DisplayClass4_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlDownloadManager____c__DisplayClass4_0::*)()>(&::System::Xml::__XmlDownloadManager____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28a4710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlDownloadManager____c__DisplayClass4_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlDownloadManager____c__DisplayClass4_0._GetStreamAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Xml::__XmlDownloadManager____c__DisplayClass4_0::*)()>(&::System::Xml::__XmlDownloadManager____c__DisplayClass4_0::_GetStreamAsync_b__0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x28a4838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlDownloadManager____c__DisplayClass4_0*>::get(),
                            "<GetStreamAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::__XmlDownloadManager____c__DisplayClass4_0::__set_uri(::System::Uri*  value)  {
::cordl_internals::setInstanceField<::System::Uri*, 0x10>(this, std::forward<::System::Uri*>(value));
}
constexpr ::System::Uri* System::Xml::__XmlDownloadManager____c__DisplayClass4_0::__get_uri()  {
return ::cordl_internals::getInstanceField<::System::Uri*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> System::Xml::__XmlDownloadManager____c__DisplayClass4_0::__get_uri() const {
return ::cordl_internals::getInstanceField<::System::Uri*, 0x10>(this);
}
inline ::System::Xml::__XmlDownloadManager____c__DisplayClass4_0* System::Xml::__XmlDownloadManager____c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::__XmlDownloadManager____c__DisplayClass4_0*>());
}
inline void System::Xml::__XmlDownloadManager____c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlDownloadManager____c__DisplayClass4_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::IO::Stream* System::Xml::__XmlDownloadManager____c__DisplayClass4_0::_GetStreamAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlDownloadManager____c__DisplayClass4_0*>::get(),
                            "<GetStreamAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::*)()>(&::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x774;
  constexpr static std::size_t addrs = 0x28a48c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x28a503c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>& System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> const& System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__set_uri(::System::Uri*  value)  {
::cordl_internals::setInstanceField<::System::Uri*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Uri*>(value));
}
constexpr ::System::Uri* System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get_uri()  {
return ::cordl_internals::getInstanceField<::System::Uri*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get_uri() const {
return ::cordl_internals::getInstanceField<::System::Uri*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__set_credentials(::System::Net::ICredentials*  value)  {
::cordl_internals::setInstanceField<::System::Net::ICredentials*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Net::ICredentials*>(value));
}
constexpr ::System::Net::ICredentials* System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get_credentials()  {
return ::cordl_internals::getInstanceField<::System::Net::ICredentials*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::ICredentials*> System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get_credentials() const {
return ::cordl_internals::getInstanceField<::System::Net::ICredentials*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__set_proxy(::System::Net::IWebProxy*  value)  {
::cordl_internals::setInstanceField<::System::Net::IWebProxy*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Net::IWebProxy*>(value));
}
constexpr ::System::Net::IWebProxy* System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get_proxy()  {
return ::cordl_internals::getInstanceField<::System::Net::IWebProxy*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get_proxy() const {
return ::cordl_internals::getInstanceField<::System::Net::IWebProxy*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__set_cachePolicy(::System::Net::Cache::RequestCachePolicy*  value)  {
::cordl_internals::setInstanceField<::System::Net::Cache::RequestCachePolicy*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Net::Cache::RequestCachePolicy*>(value));
}
constexpr ::System::Net::Cache::RequestCachePolicy* System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get_cachePolicy()  {
return ::cordl_internals::getInstanceField<::System::Net::Cache::RequestCachePolicy*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCachePolicy*> System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get_cachePolicy() const {
return ::cordl_internals::getInstanceField<::System::Net::Cache::RequestCachePolicy*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__set___4__this(::System::Xml::XmlDownloadManager*  value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlDownloadManager*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Xml::XmlDownloadManager*>(value));
}
constexpr ::System::Xml::XmlDownloadManager* System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get___4__this()  {
return ::cordl_internals::getInstanceField<::System::Xml::XmlDownloadManager*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDownloadManager*> System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlDownloadManager*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__set__req_5__2(::System::Net::WebRequest*  value)  {
::cordl_internals::setInstanceField<::System::Net::WebRequest*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Net::WebRequest*>(value));
}
constexpr ::System::Net::WebRequest* System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get__req_5__2()  {
return ::cordl_internals::getInstanceField<::System::Net::WebRequest*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebRequest*> System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get__req_5__2() const {
return ::cordl_internals::getInstanceField<::System::Net::WebRequest*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*>>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*>& System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*> const& System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "uri", ty: "::System::Uri*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "credentials", ty: "::System::Net::ICredentials*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "proxy", ty: "::System::Net::IWebProxy*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cachePolicy", ty: "::System::Net::Cache::RequestCachePolicy*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "::System::Xml::XmlDownloadManager*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_req_5__2", ty: "::System::Net::WebRequest*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__XmlDownloadManager___GetNonFileStreamAsync_d__5::__XmlDownloadManager___GetNonFileStreamAsync_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  __t__builder, ::System::Uri*  uri, ::System::Net::ICredentials*  credentials, ::System::Net::IWebProxy*  proxy, ::System::Net::Cache::RequestCachePolicy*  cachePolicy, ::System::Xml::XmlDownloadManager*  __4__this, ::System::Net::WebRequest*  _req_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebResponse*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x60>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->uri = uri;
this->credentials = credentials;
this->proxy = proxy;
this->cachePolicy = cachePolicy;
this->__4__this = __4__this;
this->_req_5__2 = _req_5__2;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::System::Xml::XmlDownloadManager.GetStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Xml::XmlDownloadManager::*)(::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*)>(&::System::Xml::XmlDownloadManager::GetStream)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x28a3cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDownloadManager*>::get(),
                            "GetStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCachePolicy*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDownloadManager.GetNonFileStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Xml::XmlDownloadManager::*)(::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*)>(&::System::Xml::XmlDownloadManager::GetNonFileStream)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x28a3db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDownloadManager*>::get(),
                            "GetNonFileStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCachePolicy*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDownloadManager.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDownloadManager::*)(::StringW)>(&::System::Xml::XmlDownloadManager::Remove)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x28a4440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDownloadManager*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDownloadManager.GetStreamAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Xml::XmlDownloadManager::*)(::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*)>(&::System::Xml::XmlDownloadManager::GetStreamAsync)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x28a45ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDownloadManager*>::get(),
                            "GetStreamAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCachePolicy*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDownloadManager.GetNonFileStreamAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Xml::XmlDownloadManager::*)(::System::Uri*, ::System::Net::ICredentials*, ::System::Net::IWebProxy*, ::System::Net::Cache::RequestCachePolicy*)>(&::System::Xml::XmlDownloadManager::GetNonFileStreamAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x28a4718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDownloadManager*>::get(),
                            "GetNonFileStreamAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCachePolicy*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlDownloadManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlDownloadManager::*)()>(&::System::Xml::XmlDownloadManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28a4830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDownloadManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::XmlDownloadManager::__set_connections(::System::Collections::Hashtable*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Hashtable*, 0x10>(this, std::forward<::System::Collections::Hashtable*>(value));
}
constexpr ::System::Collections::Hashtable* System::Xml::XmlDownloadManager::__get_connections()  {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> System::Xml::XmlDownloadManager::__get_connections() const {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x10>(this);
}
inline ::System::IO::Stream* System::Xml::XmlDownloadManager::GetStream(::System::Uri*  uri, ::System::Net::ICredentials*  credentials, ::System::Net::IWebProxy*  proxy, ::System::Net::Cache::RequestCachePolicy*  cachePolicy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDownloadManager*>::get(),
                            "GetStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCachePolicy*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(*this, ___internal_method, uri, credentials, proxy, cachePolicy);
}
inline ::System::IO::Stream* System::Xml::XmlDownloadManager::GetNonFileStream(::System::Uri*  uri, ::System::Net::ICredentials*  credentials, ::System::Net::IWebProxy*  proxy, ::System::Net::Cache::RequestCachePolicy*  cachePolicy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDownloadManager*>::get(),
                            "GetNonFileStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCachePolicy*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(*this, ___internal_method, uri, credentials, proxy, cachePolicy);
}
inline void System::Xml::XmlDownloadManager::Remove(::StringW  host)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDownloadManager*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, host);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Xml::XmlDownloadManager::GetStreamAsync(::System::Uri*  uri, ::System::Net::ICredentials*  credentials, ::System::Net::IWebProxy*  proxy, ::System::Net::Cache::RequestCachePolicy*  cachePolicy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDownloadManager*>::get(),
                            "GetStreamAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCachePolicy*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*, false>(*this, ___internal_method, uri, credentials, proxy, cachePolicy);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Xml::XmlDownloadManager::GetNonFileStreamAsync(::System::Uri*  uri, ::System::Net::ICredentials*  credentials, ::System::Net::IWebProxy*  proxy, ::System::Net::Cache::RequestCachePolicy*  cachePolicy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDownloadManager*>::get(),
                            "GetNonFileStreamAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCachePolicy*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*, false>(*this, ___internal_method, uri, credentials, proxy, cachePolicy);
}
inline ::System::Xml::XmlDownloadManager* System::Xml::XmlDownloadManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::XmlDownloadManager*>());
}
inline void System::Xml::XmlDownloadManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlDownloadManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
