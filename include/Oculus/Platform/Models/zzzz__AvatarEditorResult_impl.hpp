#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AvatarEditorResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AvatarEditorResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AvatarEditorResult::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::AvatarEditorResult::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2704c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AvatarEditorResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::AvatarEditorResult::__set_RequestSent(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& Oculus::Platform::Models::AvatarEditorResult::__get_RequestSent()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& Oculus::Platform::Models::AvatarEditorResult::__get_RequestSent() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline ::Oculus::Platform::Models::AvatarEditorResult* Oculus::Platform::Models::AvatarEditorResult::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::AvatarEditorResult*>(o));
}
inline void Oculus::Platform::Models::AvatarEditorResult::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AvatarEditorResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
