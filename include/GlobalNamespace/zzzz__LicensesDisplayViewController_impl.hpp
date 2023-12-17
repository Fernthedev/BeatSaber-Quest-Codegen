#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__LicensesDisplayViewController_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "HMUI/zzzz__TextPageScrollView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LicensesDisplayViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LicensesDisplayViewController::*)(bool, bool, bool)>(&::GlobalNamespace::LicensesDisplayViewController::DidActivate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x22c800c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LicensesDisplayViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LicensesDisplayViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LicensesDisplayViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LicensesDisplayViewController::*)()>(&::GlobalNamespace::LicensesDisplayViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c8050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LicensesDisplayViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LicensesDisplayViewController::__set__textPageScrollView(::HMUI::TextPageScrollView*  value)  {
::cordl_internals::setInstanceField<::HMUI::TextPageScrollView*, 0x70>(this, std::forward<::HMUI::TextPageScrollView*>(value));
}
constexpr ::HMUI::TextPageScrollView* GlobalNamespace::LicensesDisplayViewController::__get__textPageScrollView()  {
return ::cordl_internals::getInstanceField<::HMUI::TextPageScrollView*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::TextPageScrollView*> GlobalNamespace::LicensesDisplayViewController::__get__textPageScrollView() const {
return ::cordl_internals::getInstanceField<::HMUI::TextPageScrollView*, 0x70>(this);
}
constexpr void GlobalNamespace::LicensesDisplayViewController::__set__textAsset(::UnityEngine::TextAsset*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextAsset*, 0x78>(this, std::forward<::UnityEngine::TextAsset*>(value));
}
constexpr ::UnityEngine::TextAsset* GlobalNamespace::LicensesDisplayViewController::__get__textAsset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextAsset*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> GlobalNamespace::LicensesDisplayViewController::__get__textAsset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextAsset*, 0x78>(this);
}
inline void GlobalNamespace::LicensesDisplayViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LicensesDisplayViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline ::GlobalNamespace::LicensesDisplayViewController* GlobalNamespace::LicensesDisplayViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LicensesDisplayViewController*>());
}
inline void GlobalNamespace::LicensesDisplayViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LicensesDisplayViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
