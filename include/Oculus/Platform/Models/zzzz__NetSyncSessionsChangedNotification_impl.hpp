#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionsChangedNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::NetSyncSessionsChangedNotification._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::NetSyncSessionsChangedNotification::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::NetSyncSessionsChangedNotification::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2707890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::NetSyncSessionsChangedNotification::__set_ConnectionId(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this, std::forward<int64_t>(value));
}
constexpr int64_t& Oculus::Platform::Models::NetSyncSessionsChangedNotification::__get_ConnectionId()  {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr int64_t const& Oculus::Platform::Models::NetSyncSessionsChangedNotification::__get_ConnectionId() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr void Oculus::Platform::Models::NetSyncSessionsChangedNotification::__set_Sessions(::Oculus::Platform::Models::NetSyncSessionList*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::NetSyncSessionList*, 0x18>(this, std::forward<::Oculus::Platform::Models::NetSyncSessionList*>(value));
}
constexpr ::Oculus::Platform::Models::NetSyncSessionList* Oculus::Platform::Models::NetSyncSessionsChangedNotification::__get_Sessions()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::NetSyncSessionList*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::NetSyncSessionList*> Oculus::Platform::Models::NetSyncSessionsChangedNotification::__get_Sessions() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::NetSyncSessionList*, 0x18>(this);
}
inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* Oculus::Platform::Models::NetSyncSessionsChangedNotification::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>(o));
}
inline void Oculus::Platform::Models::NetSyncSessionsChangedNotification::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
