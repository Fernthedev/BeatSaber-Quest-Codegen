#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/zzzz__LaunchType_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LaunchDetails._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LaunchDetails::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::LaunchDetails::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2706494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchDetails*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::LaunchDetails::__set_DeeplinkMessage(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__get_DeeplinkMessage()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__get_DeeplinkMessage() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void Oculus::Platform::Models::LaunchDetails::__set_DestinationApiName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__get_DestinationApiName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__get_DestinationApiName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void Oculus::Platform::Models::LaunchDetails::__set_LaunchSource(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__get_LaunchSource()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__get_LaunchSource() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void Oculus::Platform::Models::LaunchDetails::__set_LaunchType(::Oculus::Platform::LaunchType  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::LaunchType, 0x28>(this, std::forward<::Oculus::Platform::LaunchType>(value));
}
constexpr ::Oculus::Platform::LaunchType& Oculus::Platform::Models::LaunchDetails::__get_LaunchType()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::LaunchType, 0x28>(this);
}
constexpr ::Oculus::Platform::LaunchType const& Oculus::Platform::Models::LaunchDetails::__get_LaunchType() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::LaunchType, 0x28>(this);
}
constexpr void Oculus::Platform::Models::LaunchDetails::__set_TrackingID(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__get_TrackingID()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__get_TrackingID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void Oculus::Platform::Models::LaunchDetails::__set_UsersOptional(::Oculus::Platform::Models::UserList*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList*, 0x38>(this, std::forward<::Oculus::Platform::Models::UserList*>(value));
}
constexpr ::Oculus::Platform::Models::UserList* Oculus::Platform::Models::LaunchDetails::__get_UsersOptional()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> Oculus::Platform::Models::LaunchDetails::__get_UsersOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x38>(this);
}
constexpr void Oculus::Platform::Models::LaunchDetails::__set_Users(::Oculus::Platform::Models::UserList*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList*, 0x40>(this, std::forward<::Oculus::Platform::Models::UserList*>(value));
}
constexpr ::Oculus::Platform::Models::UserList* Oculus::Platform::Models::LaunchDetails::__get_Users()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> Oculus::Platform::Models::LaunchDetails::__get_Users() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList*, 0x40>(this);
}
inline ::Oculus::Platform::Models::LaunchDetails* Oculus::Platform::Models::LaunchDetails::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::LaunchDetails*>(o));
}
inline void Oculus::Platform::Models::LaunchDetails::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchDetails*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
