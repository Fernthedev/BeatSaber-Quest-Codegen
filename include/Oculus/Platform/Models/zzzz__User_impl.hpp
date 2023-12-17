#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/zzzz__UserPresenceStatus_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::User._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::User::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::User::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x270414c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::User*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::User::__set_DisplayName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::User::__get_DisplayName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::User::__get_DisplayName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void Oculus::Platform::Models::User::__set__cordl_ID(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x18>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& Oculus::Platform::Models::User::__get__cordl_ID()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this);
}
constexpr uint64_t const& Oculus::Platform::Models::User::__get__cordl_ID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this);
}
constexpr void Oculus::Platform::Models::User::__set_ImageURL(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::User::__get_ImageURL()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::User::__get_ImageURL() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void Oculus::Platform::Models::User::__set_OculusID(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::User::__get_OculusID()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::User::__get_OculusID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void Oculus::Platform::Models::User::__set_Presence(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::User::__get_Presence()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::User::__get_Presence() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void Oculus::Platform::Models::User::__set_PresenceDeeplinkMessage(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::User::__get_PresenceDeeplinkMessage()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::User::__get_PresenceDeeplinkMessage() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void Oculus::Platform::Models::User::__set_PresenceDestinationApiName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::User::__get_PresenceDestinationApiName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::User::__get_PresenceDestinationApiName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void Oculus::Platform::Models::User::__set_PresenceLobbySessionId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::User::__get_PresenceLobbySessionId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::User::__get_PresenceLobbySessionId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr void Oculus::Platform::Models::User::__set_PresenceMatchSessionId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::User::__get_PresenceMatchSessionId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::User::__get_PresenceMatchSessionId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr void Oculus::Platform::Models::User::__set_PresenceStatus(::Oculus::Platform::UserPresenceStatus  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::UserPresenceStatus, 0x58>(this, std::forward<::Oculus::Platform::UserPresenceStatus>(value));
}
constexpr ::Oculus::Platform::UserPresenceStatus& Oculus::Platform::Models::User::__get_PresenceStatus()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::UserPresenceStatus, 0x58>(this);
}
constexpr ::Oculus::Platform::UserPresenceStatus const& Oculus::Platform::Models::User::__get_PresenceStatus() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::UserPresenceStatus, 0x58>(this);
}
constexpr void Oculus::Platform::Models::User::__set_SmallImageUrl(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::User::__get_SmallImageUrl()  {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::User::__get_SmallImageUrl() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
inline ::Oculus::Platform::Models::User* Oculus::Platform::Models::User::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::User*>(o));
}
inline void Oculus::Platform::Models::User::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::User*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
