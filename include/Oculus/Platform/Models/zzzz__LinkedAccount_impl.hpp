#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LinkedAccount_def.hpp"
#include "Oculus/Platform/zzzz__ServiceProvider_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LinkedAccount._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LinkedAccount::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::LinkedAccount::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2706f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LinkedAccount*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::LinkedAccount::__set_AccessToken(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::LinkedAccount::__get_AccessToken()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::LinkedAccount::__get_AccessToken() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void Oculus::Platform::Models::LinkedAccount::__set_ServiceProvider(::Oculus::Platform::ServiceProvider  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::ServiceProvider, 0x18>(this, std::forward<::Oculus::Platform::ServiceProvider>(value));
}
constexpr ::Oculus::Platform::ServiceProvider& Oculus::Platform::Models::LinkedAccount::__get_ServiceProvider()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::ServiceProvider, 0x18>(this);
}
constexpr ::Oculus::Platform::ServiceProvider const& Oculus::Platform::Models::LinkedAccount::__get_ServiceProvider() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::ServiceProvider, 0x18>(this);
}
constexpr void Oculus::Platform::Models::LinkedAccount::__set_UserId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::LinkedAccount::__get_UserId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::LinkedAccount::__get_UserId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
inline ::Oculus::Platform::Models::LinkedAccount* Oculus::Platform::Models::LinkedAccount::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::LinkedAccount*>(o));
}
inline void Oculus::Platform::Models::LinkedAccount::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LinkedAccount*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
