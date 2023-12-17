#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInvite_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/Models/zzzz__Destination_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::ApplicationInvite._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::ApplicationInvite::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::ApplicationInvite::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2703ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ApplicationInvite*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::ApplicationInvite::__set_DestinationOptional(::Oculus::Platform::Models::Destination*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::Destination*, 0x10>(this, std::forward<::Oculus::Platform::Models::Destination*>(value));
}
constexpr ::Oculus::Platform::Models::Destination* Oculus::Platform::Models::ApplicationInvite::__get_DestinationOptional()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Destination*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Destination*> Oculus::Platform::Models::ApplicationInvite::__get_DestinationOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Destination*, 0x10>(this);
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__set_Destination(::Oculus::Platform::Models::Destination*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::Destination*, 0x18>(this, std::forward<::Oculus::Platform::Models::Destination*>(value));
}
constexpr ::Oculus::Platform::Models::Destination* Oculus::Platform::Models::ApplicationInvite::__get_Destination()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Destination*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Destination*> Oculus::Platform::Models::ApplicationInvite::__get_Destination() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Destination*, 0x18>(this);
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__set__cordl_ID(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x20>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& Oculus::Platform::Models::ApplicationInvite::__get__cordl_ID()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this);
}
constexpr uint64_t const& Oculus::Platform::Models::ApplicationInvite::__get__cordl_ID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this);
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__set_IsActive(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& Oculus::Platform::Models::ApplicationInvite::__get_IsActive()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& Oculus::Platform::Models::ApplicationInvite::__get_IsActive() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__set_LobbySessionId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::ApplicationInvite::__get_LobbySessionId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::ApplicationInvite::__get_LobbySessionId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__set_MatchSessionId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::ApplicationInvite::__get_MatchSessionId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::ApplicationInvite::__get_MatchSessionId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__set_RecipientOptional(::Oculus::Platform::Models::User*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::User*, 0x40>(this, std::forward<::Oculus::Platform::Models::User*>(value));
}
constexpr ::Oculus::Platform::Models::User* Oculus::Platform::Models::ApplicationInvite::__get_RecipientOptional()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::User*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> Oculus::Platform::Models::ApplicationInvite::__get_RecipientOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::User*, 0x40>(this);
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__set_Recipient(::Oculus::Platform::Models::User*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::User*, 0x48>(this, std::forward<::Oculus::Platform::Models::User*>(value));
}
constexpr ::Oculus::Platform::Models::User* Oculus::Platform::Models::ApplicationInvite::__get_Recipient()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::User*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> Oculus::Platform::Models::ApplicationInvite::__get_Recipient() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::User*, 0x48>(this);
}
inline ::Oculus::Platform::Models::ApplicationInvite* Oculus::Platform::Models::ApplicationInvite::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::ApplicationInvite*>(o));
}
inline void Oculus::Platform::Models::ApplicationInvite::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ApplicationInvite*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
