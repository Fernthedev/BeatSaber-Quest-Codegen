#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSession_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::NetSyncSession._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::NetSyncSession::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::NetSyncSession::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2707598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncSession*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::NetSyncSession::__set_ConnectionId(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this, std::forward<int64_t>(value));
}
constexpr int64_t& Oculus::Platform::Models::NetSyncSession::__get_ConnectionId()  {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr int64_t const& Oculus::Platform::Models::NetSyncSession::__get_ConnectionId() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr void Oculus::Platform::Models::NetSyncSession::__set_Muted(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& Oculus::Platform::Models::NetSyncSession::__get_Muted()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& Oculus::Platform::Models::NetSyncSession::__get_Muted() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void Oculus::Platform::Models::NetSyncSession::__set_SessionId(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x20>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& Oculus::Platform::Models::NetSyncSession::__get_SessionId()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this);
}
constexpr uint64_t const& Oculus::Platform::Models::NetSyncSession::__get_SessionId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this);
}
constexpr void Oculus::Platform::Models::NetSyncSession::__set_UserId(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x28>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& Oculus::Platform::Models::NetSyncSession::__get_UserId()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x28>(this);
}
constexpr uint64_t const& Oculus::Platform::Models::NetSyncSession::__get_UserId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x28>(this);
}
constexpr void Oculus::Platform::Models::NetSyncSession::__set_VoipGroup(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::NetSyncSession::__get_VoipGroup()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::NetSyncSession::__get_VoipGroup() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
inline ::Oculus::Platform::Models::NetSyncSession* Oculus::Platform::Models::NetSyncSession::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::NetSyncSession*>(o));
}
inline void Oculus::Platform::Models::NetSyncSession::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncSession*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
