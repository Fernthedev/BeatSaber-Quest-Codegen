#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__OtherSettingsViewController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OtherSettingsViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OtherSettingsViewController::*)(bool, bool, bool)>(&::GlobalNamespace::OtherSettingsViewController::DidActivate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x22da650;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OtherSettingsViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OtherSettingsViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OtherSettingsViewController.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OtherSettingsViewController::*)(bool, bool)>(&::GlobalNamespace::OtherSettingsViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22da75c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OtherSettingsViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OtherSettingsViewController*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OtherSettingsViewController.HandleHideExplicitChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OtherSettingsViewController::*)(bool)>(&::GlobalNamespace::OtherSettingsViewController::HandleHideExplicitChanged)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22da804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OtherSettingsViewController*>::get(),
                            "HandleHideExplicitChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OtherSettingsViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OtherSettingsViewController::*)()>(&::GlobalNamespace::OtherSettingsViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22da838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OtherSettingsViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OtherSettingsViewController::__set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel*, 0x70>(this, std::forward<::GlobalNamespace::PlayerDataModel*>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel* GlobalNamespace::OtherSettingsViewController::__get__playerDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> GlobalNamespace::OtherSettingsViewController::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x70>(this);
}
constexpr void GlobalNamespace::OtherSettingsViewController::__set__hideExplicitToggle(::UnityEngine::UI::Toggle*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Toggle*, 0x78>(this, std::forward<::UnityEngine::UI::Toggle*>(value));
}
constexpr ::UnityEngine::UI::Toggle* GlobalNamespace::OtherSettingsViewController::__get__hideExplicitToggle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> GlobalNamespace::OtherSettingsViewController::__get__hideExplicitToggle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x78>(this);
}
inline void GlobalNamespace::OtherSettingsViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OtherSettingsViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::OtherSettingsViewController::DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OtherSettingsViewController*>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::OtherSettingsViewController::HandleHideExplicitChanged(bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OtherSettingsViewController*>::get(),
                            "HandleHideExplicitChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newValue);
}
inline ::GlobalNamespace::OtherSettingsViewController* GlobalNamespace::OtherSettingsViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OtherSettingsViewController*>());
}
inline void GlobalNamespace::OtherSettingsViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OtherSettingsViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
