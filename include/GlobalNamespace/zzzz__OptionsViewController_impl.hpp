#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__OptionsViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
#include "GlobalNamespace/zzzz__OptionsViewController_def.hpp"
constexpr void GlobalNamespace::__OptionsViewController__OptionsButton::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OptionsViewController__OptionsButton::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OptionsViewController__OptionsButton::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OptionsViewController__OptionsButton::__OptionsViewController__OptionsButton(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OptionsViewController__OptionsButton  GlobalNamespace::__OptionsViewController__OptionsButton::EditAvatar{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OptionsViewController__OptionsButton  GlobalNamespace::__OptionsViewController__OptionsButton::PlayerOptions{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OptionsViewController__OptionsButton  GlobalNamespace::__OptionsViewController__OptionsButton::Settings{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OptionsViewController::*)(::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>*)>(&::GlobalNamespace::OptionsViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22da2f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OptionsViewController::*)(::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>*)>(&::GlobalNamespace::OptionsViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22da3a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OptionsViewController::*)(bool, bool, bool)>(&::GlobalNamespace::OptionsViewController::DidActivate)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x22da458;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OptionsViewController::*)()>(&::GlobalNamespace::OptionsViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22da5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController._DidActivate_b__8_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OptionsViewController::*)()>(&::GlobalNamespace::OptionsViewController::_DidActivate_b__8_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22da5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController*>::get(),
                            "<DidActivate>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController._DidActivate_b__8_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OptionsViewController::*)()>(&::GlobalNamespace::OptionsViewController::_DidActivate_b__8_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22da610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController*>::get(),
                            "<DidActivate>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OptionsViewController._DidActivate_b__8_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OptionsViewController::*)()>(&::GlobalNamespace::OptionsViewController::_DidActivate_b__8_2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22da630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController*>::get(),
                            "<DidActivate>b__8_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OptionsViewController::__set__editAvatarButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x70>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::OptionsViewController::__get__editAvatarButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::OptionsViewController::__get__editAvatarButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x70>(this);
}
constexpr void GlobalNamespace::OptionsViewController::__set__playerOptionsButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x78>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::OptionsViewController::__get__playerOptionsButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::OptionsViewController::__get__playerOptionsButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr void GlobalNamespace::OptionsViewController::__set__settingsButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x80>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::OptionsViewController::__get__settingsButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::OptionsViewController::__get__settingsButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x80>(this);
}
constexpr void GlobalNamespace::OptionsViewController::__set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AppStaticSettingsSO*, 0x88>(this, std::forward<::GlobalNamespace::AppStaticSettingsSO*>(value));
}
constexpr ::GlobalNamespace::AppStaticSettingsSO* GlobalNamespace::OptionsViewController::__get__appStaticSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppStaticSettingsSO*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppStaticSettingsSO*> GlobalNamespace::OptionsViewController::__get__appStaticSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppStaticSettingsSO*, 0x88>(this);
}
constexpr void GlobalNamespace::OptionsViewController::__set_didFinishEvent(::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>*, 0x90>(this, std::forward<::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>* GlobalNamespace::OptionsViewController::__get_didFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>*> GlobalNamespace::OptionsViewController::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>*, 0x90>(this);
}
inline void GlobalNamespace::OptionsViewController::add_didFinishEvent(::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OptionsViewController::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OptionsViewController__OptionsButton>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OptionsViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline ::GlobalNamespace::OptionsViewController* GlobalNamespace::OptionsViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OptionsViewController*>());
}
inline void GlobalNamespace::OptionsViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OptionsViewController::_DidActivate_b__8_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController*>::get(),
                            "<DidActivate>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OptionsViewController::_DidActivate_b__8_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController*>::get(),
                            "<DidActivate>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OptionsViewController::_DidActivate_b__8_2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OptionsViewController*>::get(),
                            "<DidActivate>b__8_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
