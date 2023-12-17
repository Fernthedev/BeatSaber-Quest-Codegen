#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__UserDataStoreUpdateResponse_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::UserDataStoreUpdateResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::UserDataStoreUpdateResponse::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::UserDataStoreUpdateResponse::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2709340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::UserDataStoreUpdateResponse::__set_Success(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& Oculus::Platform::Models::UserDataStoreUpdateResponse::__get_Success()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& Oculus::Platform::Models::UserDataStoreUpdateResponse::__get_Success() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline ::Oculus::Platform::Models::UserDataStoreUpdateResponse* Oculus::Platform::Models::UserDataStoreUpdateResponse::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>(o));
}
inline void Oculus::Platform::Models::UserDataStoreUpdateResponse::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
