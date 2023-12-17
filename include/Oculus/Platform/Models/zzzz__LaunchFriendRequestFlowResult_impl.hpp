#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchFriendRequestFlowResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LaunchFriendRequestFlowResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LaunchFriendRequestFlowResult::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::LaunchFriendRequestFlowResult::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x27065d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::LaunchFriendRequestFlowResult::__set_DidCancel(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& Oculus::Platform::Models::LaunchFriendRequestFlowResult::__get_DidCancel()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& Oculus::Platform::Models::LaunchFriendRequestFlowResult::__get_DidCancel() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void Oculus::Platform::Models::LaunchFriendRequestFlowResult::__set_DidSendRequest(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this, std::forward<bool>(value));
}
constexpr bool& Oculus::Platform::Models::LaunchFriendRequestFlowResult::__get_DidSendRequest()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr bool const& Oculus::Platform::Models::LaunchFriendRequestFlowResult::__get_DidSendRequest() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* Oculus::Platform::Models::LaunchFriendRequestFlowResult::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>(o));
}
inline void Oculus::Platform::Models::LaunchFriendRequestFlowResult::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
