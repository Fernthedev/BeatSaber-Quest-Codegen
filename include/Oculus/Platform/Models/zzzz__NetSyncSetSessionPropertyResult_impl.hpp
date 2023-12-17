#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSetSessionPropertyResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSession_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::NetSyncSetSessionPropertyResult::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::NetSyncSetSessionPropertyResult::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2707950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::NetSyncSetSessionPropertyResult::__set_Session(::Oculus::Platform::Models::NetSyncSession*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::NetSyncSession*, 0x10>(this, std::forward<::Oculus::Platform::Models::NetSyncSession*>(value));
}
constexpr ::Oculus::Platform::Models::NetSyncSession* Oculus::Platform::Models::NetSyncSetSessionPropertyResult::__get_Session()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::NetSyncSession*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::NetSyncSession*> Oculus::Platform::Models::NetSyncSetSessionPropertyResult::__get_Session() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::NetSyncSession*, 0x10>(this);
}
inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* Oculus::Platform::Models::NetSyncSetSessionPropertyResult::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*>(o));
}
inline void Oculus::Platform::Models::NetSyncSetSessionPropertyResult::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
