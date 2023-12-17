#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AppStaticSettingsSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppStaticSettingsSO::*)()>(&::GlobalNamespace::AppStaticSettingsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2239bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppStaticSettingsSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AppStaticSettingsSO::__set_requirePrivacyPolicy(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::AppStaticSettingsSO::__get_requirePrivacyPolicy()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::AppStaticSettingsSO::__get_requirePrivacyPolicy() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void GlobalNamespace::AppStaticSettingsSO::__set_enable360DegreeLevels(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::AppStaticSettingsSO::__get_enable360DegreeLevels()  {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr bool const& GlobalNamespace::AppStaticSettingsSO::__get_enable360DegreeLevels() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr void GlobalNamespace::AppStaticSettingsSO::__set_enableCustomLevels(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1a>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::AppStaticSettingsSO::__get_enableCustomLevels()  {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this);
}
constexpr bool const& GlobalNamespace::AppStaticSettingsSO::__get_enableCustomLevels() const {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this);
}
constexpr void GlobalNamespace::AppStaticSettingsSO::__set_disableMultiplayer(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1b>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::AppStaticSettingsSO::__get_disableMultiplayer()  {
return ::cordl_internals::getInstanceField<bool, 0x1b>(this);
}
constexpr bool const& GlobalNamespace::AppStaticSettingsSO::__get_disableMultiplayer() const {
return ::cordl_internals::getInstanceField<bool, 0x1b>(this);
}
inline ::GlobalNamespace::AppStaticSettingsSO* GlobalNamespace::AppStaticSettingsSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AppStaticSettingsSO*>());
}
inline void GlobalNamespace::AppStaticSettingsSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppStaticSettingsSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
