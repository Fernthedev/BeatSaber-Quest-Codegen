#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Http/zzzz__NtlmSession_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
//  Writing Method size for method: ::Mono::Http::NtlmSession._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Http::NtlmSession::*)()>(&::Mono::Http::NtlmSession::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2825ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::NtlmSession*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Http::NtlmSession.Authenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization* (::Mono::Http::NtlmSession::*)(::StringW, ::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&::Mono::Http::NtlmSession::Authenticate)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x2825edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::NtlmSession*>::get(),
                            "Authenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Http::NtlmSession::__set_message(::Mono::Security::Protocol::Ntlm::MessageBase*  value)  {
::cordl_internals::setInstanceField<::Mono::Security::Protocol::Ntlm::MessageBase*, 0x10>(this, std::forward<::Mono::Security::Protocol::Ntlm::MessageBase*>(value));
}
constexpr ::Mono::Security::Protocol::Ntlm::MessageBase* Mono::Http::NtlmSession::__get_message()  {
return ::cordl_internals::getInstanceField<::Mono::Security::Protocol::Ntlm::MessageBase*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Protocol::Ntlm::MessageBase*> Mono::Http::NtlmSession::__get_message() const {
return ::cordl_internals::getInstanceField<::Mono::Security::Protocol::Ntlm::MessageBase*, 0x10>(this);
}
inline ::Mono::Http::NtlmSession* Mono::Http::NtlmSession::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Http::NtlmSession*>());
}
inline void Mono::Http::NtlmSession::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::NtlmSession*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Net::Authorization* Mono::Http::NtlmSession::Authenticate(::StringW  challenge, ::System::Net::WebRequest*  webRequest, ::System::Net::ICredentials*  credentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Http::NtlmSession*>::get(),
                            "Authenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization*, false>(*this, ___internal_method, challenge, webRequest, credentials);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
