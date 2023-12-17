#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsSubMenuInfo_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SettingsSubMenuInfo.get_viewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ViewController* (::GlobalNamespace::SettingsSubMenuInfo::*)()>(&::GlobalNamespace::SettingsSubMenuInfo::get_viewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsSubMenuInfo*>::get(),
                            "get_viewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsSubMenuInfo.get_localizedMenuName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SettingsSubMenuInfo::*)()>(&::GlobalNamespace::SettingsSubMenuInfo::get_localizedMenuName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22c9500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsSubMenuInfo*>::get(),
                            "get_localizedMenuName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsSubMenuInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsSubMenuInfo::*)()>(&::GlobalNamespace::SettingsSubMenuInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c950c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsSubMenuInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SettingsSubMenuInfo::__set__viewController(::HMUI::ViewController*  value)  {
::cordl_internals::setInstanceField<::HMUI::ViewController*, 0x10>(this, std::forward<::HMUI::ViewController*>(value));
}
constexpr ::HMUI::ViewController* GlobalNamespace::SettingsSubMenuInfo::__get__viewController()  {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> GlobalNamespace::SettingsSubMenuInfo::__get__viewController() const {
return ::cordl_internals::getInstanceField<::HMUI::ViewController*, 0x10>(this);
}
constexpr void GlobalNamespace::SettingsSubMenuInfo::__set__menuName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::SettingsSubMenuInfo::__get__menuName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::SettingsSubMenuInfo::__get__menuName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::HMUI::ViewController* GlobalNamespace::SettingsSubMenuInfo::get_viewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsSubMenuInfo*>::get(),
                            "get_viewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::ViewController*, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::SettingsSubMenuInfo::get_localizedMenuName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsSubMenuInfo*>::get(),
                            "get_localizedMenuName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SettingsSubMenuInfo* GlobalNamespace::SettingsSubMenuInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SettingsSubMenuInfo*>());
}
inline void GlobalNamespace::SettingsSubMenuInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsSubMenuInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
