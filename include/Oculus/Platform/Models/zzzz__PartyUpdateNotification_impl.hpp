#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__PartyUpdateNotification_def.hpp"
#include "Oculus/Platform/zzzz__PartyUpdateAction_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::PartyUpdateNotification._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::PartyUpdateNotification::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::PartyUpdateNotification::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2707fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PartyUpdateNotification*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::PartyUpdateNotification::__set_Action(::Oculus::Platform::PartyUpdateAction  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::PartyUpdateAction, 0x10>(this, std::forward<::Oculus::Platform::PartyUpdateAction>(value));
}
constexpr ::Oculus::Platform::PartyUpdateAction& Oculus::Platform::Models::PartyUpdateNotification::__get_Action()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::PartyUpdateAction, 0x10>(this);
}
constexpr ::Oculus::Platform::PartyUpdateAction const& Oculus::Platform::Models::PartyUpdateNotification::__get_Action() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::PartyUpdateAction, 0x10>(this);
}
constexpr void Oculus::Platform::Models::PartyUpdateNotification::__set_PartyId(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x18>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& Oculus::Platform::Models::PartyUpdateNotification::__get_PartyId()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this);
}
constexpr uint64_t const& Oculus::Platform::Models::PartyUpdateNotification::__get_PartyId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this);
}
constexpr void Oculus::Platform::Models::PartyUpdateNotification::__set_SenderId(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x20>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& Oculus::Platform::Models::PartyUpdateNotification::__get_SenderId()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this);
}
constexpr uint64_t const& Oculus::Platform::Models::PartyUpdateNotification::__get_SenderId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this);
}
constexpr void Oculus::Platform::Models::PartyUpdateNotification::__set_UpdateTimestamp(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::PartyUpdateNotification::__get_UpdateTimestamp()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::PartyUpdateNotification::__get_UpdateTimestamp() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void Oculus::Platform::Models::PartyUpdateNotification::__set_UserAlias(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::PartyUpdateNotification::__get_UserAlias()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::PartyUpdateNotification::__get_UserAlias() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void Oculus::Platform::Models::PartyUpdateNotification::__set_UserId(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x38>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& Oculus::Platform::Models::PartyUpdateNotification::__get_UserId()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x38>(this);
}
constexpr uint64_t const& Oculus::Platform::Models::PartyUpdateNotification::__get_UserId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x38>(this);
}
constexpr void Oculus::Platform::Models::PartyUpdateNotification::__set_UserName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::PartyUpdateNotification::__get_UserName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::PartyUpdateNotification::__get_UserName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
inline ::Oculus::Platform::Models::PartyUpdateNotification* Oculus::Platform::Models::PartyUpdateNotification::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::PartyUpdateNotification*>(o));
}
inline void Oculus::Platform::Models::PartyUpdateNotification::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PartyUpdateNotification*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
