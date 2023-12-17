#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncConnection_def.hpp"
#include "Oculus/Platform/zzzz__NetSyncDisconnectReason_def.hpp"
#include "Oculus/Platform/zzzz__NetSyncConnectionStatus_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::NetSyncConnection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::NetSyncConnection::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::NetSyncConnection::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x27074e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncConnection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::NetSyncConnection::__set_ConnectionId(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this, std::forward<int64_t>(value));
}
constexpr int64_t& Oculus::Platform::Models::NetSyncConnection::__get_ConnectionId()  {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr int64_t const& Oculus::Platform::Models::NetSyncConnection::__get_ConnectionId() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr void Oculus::Platform::Models::NetSyncConnection::__set_DisconnectReason(::Oculus::Platform::NetSyncDisconnectReason  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::NetSyncDisconnectReason, 0x18>(this, std::forward<::Oculus::Platform::NetSyncDisconnectReason>(value));
}
constexpr ::Oculus::Platform::NetSyncDisconnectReason& Oculus::Platform::Models::NetSyncConnection::__get_DisconnectReason()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::NetSyncDisconnectReason, 0x18>(this);
}
constexpr ::Oculus::Platform::NetSyncDisconnectReason const& Oculus::Platform::Models::NetSyncConnection::__get_DisconnectReason() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::NetSyncDisconnectReason, 0x18>(this);
}
constexpr void Oculus::Platform::Models::NetSyncConnection::__set_SessionId(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x20>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& Oculus::Platform::Models::NetSyncConnection::__get_SessionId()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this);
}
constexpr uint64_t const& Oculus::Platform::Models::NetSyncConnection::__get_SessionId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this);
}
constexpr void Oculus::Platform::Models::NetSyncConnection::__set_Status(::Oculus::Platform::NetSyncConnectionStatus  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::NetSyncConnectionStatus, 0x28>(this, std::forward<::Oculus::Platform::NetSyncConnectionStatus>(value));
}
constexpr ::Oculus::Platform::NetSyncConnectionStatus& Oculus::Platform::Models::NetSyncConnection::__get_Status()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::NetSyncConnectionStatus, 0x28>(this);
}
constexpr ::Oculus::Platform::NetSyncConnectionStatus const& Oculus::Platform::Models::NetSyncConnection::__get_Status() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::NetSyncConnectionStatus, 0x28>(this);
}
constexpr void Oculus::Platform::Models::NetSyncConnection::__set_ZoneId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::NetSyncConnection::__get_ZoneId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::NetSyncConnection::__get_ZoneId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
inline ::Oculus::Platform::Models::NetSyncConnection* Oculus::Platform::Models::NetSyncConnection::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::NetSyncConnection*>(o));
}
inline void Oculus::Platform::Models::NetSyncConnection::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncConnection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
