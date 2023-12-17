#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__NtlmClient_def.hpp"
#include "System/Net/zzzz__IAuthenticationModule_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
//  Writing Method size for method: ::System::Net::NtlmClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NtlmClient::*)()>(&::System::Net::NtlmClient::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29d5594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NtlmClient*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NtlmClient.Authenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization* (::System::Net::NtlmClient::*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&::System::Net::NtlmClient::Authenticate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x29d5600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NtlmClient*>::get(),
                            "Authenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NtlmClient.PreAuthenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization* (::System::Net::NtlmClient::*)(::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&::System::Net::NtlmClient::PreAuthenticate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d56d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NtlmClient*>::get(),
                            "PreAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NtlmClient.get_AuthenticationType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::NtlmClient::*)()>(&::System::Net::NtlmClient::get_AuthenticationType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29d56d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NtlmClient*>::get(),
                            "get_AuthenticationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Net::IAuthenticationModule"
constexpr  System::Net::NtlmClient::operator ::System::Net::IAuthenticationModule*() noexcept {
return static_cast<::System::Net::IAuthenticationModule*>(static_cast<void*>(this));
}
constexpr void System::Net::NtlmClient::__set_authObject(::System::Net::IAuthenticationModule*  value)  {
::cordl_internals::setInstanceField<::System::Net::IAuthenticationModule*, 0x10>(this, std::forward<::System::Net::IAuthenticationModule*>(value));
}
constexpr ::System::Net::IAuthenticationModule* System::Net::NtlmClient::__get_authObject()  {
return ::cordl_internals::getInstanceField<::System::Net::IAuthenticationModule*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IAuthenticationModule*> System::Net::NtlmClient::__get_authObject() const {
return ::cordl_internals::getInstanceField<::System::Net::IAuthenticationModule*, 0x10>(this);
}
inline ::System::Net::NtlmClient* System::Net::NtlmClient::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::NtlmClient*>());
}
inline void System::Net::NtlmClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NtlmClient*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Net::Authorization* System::Net::NtlmClient::Authenticate(::StringW  challenge, ::System::Net::WebRequest*  webRequest, ::System::Net::ICredentials*  credentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NtlmClient*>::get(),
                            "Authenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*, false>(*this, ___internal_method, challenge, webRequest, credentials);
}
inline ::System::Net::Authorization* System::Net::NtlmClient::PreAuthenticate(::System::Net::WebRequest*  webRequest, ::System::Net::ICredentials*  credentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NtlmClient*>::get(),
                            "PreAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*, false>(*this, ___internal_method, webRequest, credentials);
}
inline ::StringW System::Net::NtlmClient::get_AuthenticationType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NtlmClient*>::get(),
                            "get_AuthenticationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
