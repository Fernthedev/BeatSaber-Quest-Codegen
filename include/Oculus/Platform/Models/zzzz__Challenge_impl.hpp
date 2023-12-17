#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Challenge_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/zzzz__ChallengeCreationType_def.hpp"
#include "Oculus/Platform/zzzz__ChallengeVisibility_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Oculus/Platform/Models/zzzz__Leaderboard_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Challenge._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Challenge::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::Challenge::_ctor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x2704fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Challenge*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::Challenge::__set_CreationType(::Oculus::Platform::ChallengeCreationType  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::ChallengeCreationType, 0x10>(this, std::forward<::Oculus::Platform::ChallengeCreationType>(value));
}
constexpr ::Oculus::Platform::ChallengeCreationType& Oculus::Platform::Models::Challenge::__get_CreationType()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::ChallengeCreationType, 0x10>(this);
}
constexpr ::Oculus::Platform::ChallengeCreationType const& Oculus::Platform::Models::Challenge::__get_CreationType() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::ChallengeCreationType, 0x10>(this);
}
constexpr void Oculus::Platform::Models::Challenge::__set_Description(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::Challenge::__get_Description()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::Challenge::__get_Description() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void Oculus::Platform::Models::Challenge::__set_EndDate(::System::DateTime  value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x20>(this, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime& Oculus::Platform::Models::Challenge::__get_EndDate()  {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x20>(this);
}
constexpr ::System::DateTime const& Oculus::Platform::Models::Challenge::__get_EndDate() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x20>(this);
}
constexpr void Oculus::Platform::Models::Challenge::__set__cordl_ID(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x28>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& Oculus::Platform::Models::Challenge::__get__cordl_ID()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x28>(this);
}
constexpr uint64_t const& Oculus::Platform::Models::Challenge::__get__cordl_ID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x28>(this);
}
constexpr void Oculus::Platform::Models::Challenge::__set_InvitedUsersOptional(::Oculus::Platform::Models::UserList*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList*, 0x30>(this, std::forward<::Oculus::Platform::Models::UserList*>(value));
}
constexpr ::Oculus::Platform::Models::UserList* Oculus::Platform::Models::Challenge::__get_InvitedUsersOptional()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> Oculus::Platform::Models::Challenge::__get_InvitedUsersOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x30>(this);
}
constexpr void Oculus::Platform::Models::Challenge::__set_InvitedUsers(::Oculus::Platform::Models::UserList*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList*, 0x38>(this, std::forward<::Oculus::Platform::Models::UserList*>(value));
}
constexpr ::Oculus::Platform::Models::UserList* Oculus::Platform::Models::Challenge::__get_InvitedUsers()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> Oculus::Platform::Models::Challenge::__get_InvitedUsers() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x38>(this);
}
constexpr void Oculus::Platform::Models::Challenge::__set_Leaderboard(::Oculus::Platform::Models::Leaderboard*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::Leaderboard*, 0x40>(this, std::forward<::Oculus::Platform::Models::Leaderboard*>(value));
}
constexpr ::Oculus::Platform::Models::Leaderboard* Oculus::Platform::Models::Challenge::__get_Leaderboard()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Leaderboard*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Leaderboard*> Oculus::Platform::Models::Challenge::__get_Leaderboard() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Leaderboard*, 0x40>(this);
}
constexpr void Oculus::Platform::Models::Challenge::__set_ParticipantsOptional(::Oculus::Platform::Models::UserList*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList*, 0x48>(this, std::forward<::Oculus::Platform::Models::UserList*>(value));
}
constexpr ::Oculus::Platform::Models::UserList* Oculus::Platform::Models::Challenge::__get_ParticipantsOptional()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> Oculus::Platform::Models::Challenge::__get_ParticipantsOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x48>(this);
}
constexpr void Oculus::Platform::Models::Challenge::__set_Participants(::Oculus::Platform::Models::UserList*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList*, 0x50>(this, std::forward<::Oculus::Platform::Models::UserList*>(value));
}
constexpr ::Oculus::Platform::Models::UserList* Oculus::Platform::Models::Challenge::__get_Participants()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> Oculus::Platform::Models::Challenge::__get_Participants() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x50>(this);
}
constexpr void Oculus::Platform::Models::Challenge::__set_StartDate(::System::DateTime  value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x58>(this, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime& Oculus::Platform::Models::Challenge::__get_StartDate()  {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x58>(this);
}
constexpr ::System::DateTime const& Oculus::Platform::Models::Challenge::__get_StartDate() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x58>(this);
}
constexpr void Oculus::Platform::Models::Challenge::__set_Title(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::Challenge::__get_Title()  {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::Challenge::__get_Title() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr void Oculus::Platform::Models::Challenge::__set_Visibility(::Oculus::Platform::ChallengeVisibility  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::ChallengeVisibility, 0x68>(this, std::forward<::Oculus::Platform::ChallengeVisibility>(value));
}
constexpr ::Oculus::Platform::ChallengeVisibility& Oculus::Platform::Models::Challenge::__get_Visibility()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::ChallengeVisibility, 0x68>(this);
}
constexpr ::Oculus::Platform::ChallengeVisibility const& Oculus::Platform::Models::Challenge::__get_Visibility() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::ChallengeVisibility, 0x68>(this);
}
inline ::Oculus::Platform::Models::Challenge* Oculus::Platform::Models::Challenge::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::Challenge*>(o));
}
inline void Oculus::Platform::Models::Challenge::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Challenge*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
