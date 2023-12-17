#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementUpdate_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AchievementUpdate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AchievementUpdate::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::AchievementUpdate::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2703d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AchievementUpdate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::AchievementUpdate::__set_JustUnlocked(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& Oculus::Platform::Models::AchievementUpdate::__get_JustUnlocked()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& Oculus::Platform::Models::AchievementUpdate::__get_JustUnlocked() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void Oculus::Platform::Models::AchievementUpdate::__set_Name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::AchievementUpdate::__get_Name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::AchievementUpdate::__get_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::Oculus::Platform::Models::AchievementUpdate* Oculus::Platform::Models::AchievementUpdate::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::AchievementUpdate*>(o));
}
inline void Oculus::Platform::Models::AchievementUpdate::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AchievementUpdate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
