#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Party_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Party._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Party::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::Party::_ctor)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2707d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Party*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::Party::__set__cordl_ID(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& Oculus::Platform::Models::Party::__get__cordl_ID()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this);
}
constexpr uint64_t const& Oculus::Platform::Models::Party::__get__cordl_ID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this);
}
constexpr void Oculus::Platform::Models::Party::__set_InvitedUsersOptional(::Oculus::Platform::Models::UserList*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList*, 0x18>(this, std::forward<::Oculus::Platform::Models::UserList*>(value));
}
constexpr ::Oculus::Platform::Models::UserList* Oculus::Platform::Models::Party::__get_InvitedUsersOptional()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> Oculus::Platform::Models::Party::__get_InvitedUsersOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x18>(this);
}
constexpr void Oculus::Platform::Models::Party::__set_InvitedUsers(::Oculus::Platform::Models::UserList*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList*, 0x20>(this, std::forward<::Oculus::Platform::Models::UserList*>(value));
}
constexpr ::Oculus::Platform::Models::UserList* Oculus::Platform::Models::Party::__get_InvitedUsers()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> Oculus::Platform::Models::Party::__get_InvitedUsers() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x20>(this);
}
constexpr void Oculus::Platform::Models::Party::__set_LeaderOptional(::Oculus::Platform::Models::User*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::User*, 0x28>(this, std::forward<::Oculus::Platform::Models::User*>(value));
}
constexpr ::Oculus::Platform::Models::User* Oculus::Platform::Models::Party::__get_LeaderOptional()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::User*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> Oculus::Platform::Models::Party::__get_LeaderOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::User*, 0x28>(this);
}
constexpr void Oculus::Platform::Models::Party::__set_Leader(::Oculus::Platform::Models::User*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::User*, 0x30>(this, std::forward<::Oculus::Platform::Models::User*>(value));
}
constexpr ::Oculus::Platform::Models::User* Oculus::Platform::Models::Party::__get_Leader()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::User*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> Oculus::Platform::Models::Party::__get_Leader() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::User*, 0x30>(this);
}
constexpr void Oculus::Platform::Models::Party::__set_UsersOptional(::Oculus::Platform::Models::UserList*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList*, 0x38>(this, std::forward<::Oculus::Platform::Models::UserList*>(value));
}
constexpr ::Oculus::Platform::Models::UserList* Oculus::Platform::Models::Party::__get_UsersOptional()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> Oculus::Platform::Models::Party::__get_UsersOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x38>(this);
}
constexpr void Oculus::Platform::Models::Party::__set_Users(::Oculus::Platform::Models::UserList*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList*, 0x40>(this, std::forward<::Oculus::Platform::Models::UserList*>(value));
}
constexpr ::Oculus::Platform::Models::UserList* Oculus::Platform::Models::Party::__get_Users()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> Oculus::Platform::Models::Party::__get_Users() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x40>(this);
}
inline ::Oculus::Platform::Models::Party* Oculus::Platform::Models::Party::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::Party*>(o));
}
inline void Oculus::Platform::Models::Party::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Party*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
