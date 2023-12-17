#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__EulaDisplayViewController_def.hpp"
#include "HMUI/zzzz__TextPageScrollView_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedTextAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EulaDisplayViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaDisplayViewController::*)(bool, bool, bool)>(&::GlobalNamespace::EulaDisplayViewController::DidActivate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x22afed8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaDisplayViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaDisplayViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaDisplayViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaDisplayViewController::*)()>(&::GlobalNamespace::EulaDisplayViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22aff1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaDisplayViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EulaDisplayViewController::__set__textPageScrollView(::HMUI::TextPageScrollView*  value)  {
::cordl_internals::setInstanceField<::HMUI::TextPageScrollView*, 0x70>(this, std::forward<::HMUI::TextPageScrollView*>(value));
}
constexpr ::HMUI::TextPageScrollView* GlobalNamespace::EulaDisplayViewController::__get__textPageScrollView()  {
return ::cordl_internals::getInstanceField<::HMUI::TextPageScrollView*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::TextPageScrollView*> GlobalNamespace::EulaDisplayViewController::__get__textPageScrollView() const {
return ::cordl_internals::getInstanceField<::HMUI::TextPageScrollView*, 0x70>(this);
}
constexpr void GlobalNamespace::EulaDisplayViewController::__set__localizedTextAsset(::GlobalNamespace::LocalizedTextAsset*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LocalizedTextAsset*, 0x78>(this, std::forward<::GlobalNamespace::LocalizedTextAsset*>(value));
}
constexpr ::GlobalNamespace::LocalizedTextAsset* GlobalNamespace::EulaDisplayViewController::__get__localizedTextAsset()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LocalizedTextAsset*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalizedTextAsset*> GlobalNamespace::EulaDisplayViewController::__get__localizedTextAsset() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LocalizedTextAsset*, 0x78>(this);
}
inline void GlobalNamespace::EulaDisplayViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaDisplayViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline ::GlobalNamespace::EulaDisplayViewController* GlobalNamespace::EulaDisplayViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EulaDisplayViewController*>());
}
inline void GlobalNamespace::EulaDisplayViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaDisplayViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
