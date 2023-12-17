#pragma once
#include "System/Security/Principal/zzzz__GenericIdentity_impl.hpp"
#include "System/Net/zzzz__HttpListenerBasicIdentity_def.hpp"
//  Writing Method size for method: ::System::Net::HttpListenerBasicIdentity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerBasicIdentity::*)(::StringW, ::StringW)>(&::System::Net::HttpListenerBasicIdentity::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x29c94d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerBasicIdentity*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::HttpListenerBasicIdentity::__set_password(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x88>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::HttpListenerBasicIdentity::__get_password()  {
return ::cordl_internals::getInstanceField<::StringW, 0x88>(this);
}
constexpr ::StringW const& System::Net::HttpListenerBasicIdentity::__get_password() const {
return ::cordl_internals::getInstanceField<::StringW, 0x88>(this);
}
inline ::System::Net::HttpListenerBasicIdentity* System::Net::HttpListenerBasicIdentity::New_ctor(::StringW  username, ::StringW  password)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::HttpListenerBasicIdentity*>(username, password));
}
inline void System::Net::HttpListenerBasicIdentity::_ctor(::StringW  username, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerBasicIdentity*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, username, password);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
