#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerOptionsViewController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSettingsPanelController_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerOptionsViewController.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerOptionsViewController::*)(::System::Action_1<::HMUI::ViewController*>*)>(&::GlobalNamespace::PlayerOptionsViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b3574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerOptionsViewController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::ViewController*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerOptionsViewController.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerOptionsViewController::*)(::System::Action_1<::HMUI::ViewController*>*)>(&::GlobalNamespace::PlayerOptionsViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b3624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerOptionsViewController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::ViewController*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerOptionsViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerOptionsViewController::*)(bool, bool, bool)>(&::GlobalNamespace::PlayerOptionsViewController::DidActivate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x22b36d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerOptionsViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerOptionsViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerOptionsViewController.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerOptionsViewController::*)(bool, bool)>(&::GlobalNamespace::PlayerOptionsViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b3b08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerOptionsViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerOptionsViewController*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerOptionsViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerOptionsViewController::*)()>(&::GlobalNamespace::PlayerOptionsViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b3bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerOptionsViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerOptionsViewController._DidActivate_b__6_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerOptionsViewController::*)()>(&::GlobalNamespace::PlayerOptionsViewController::_DidActivate_b__6_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22b3bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerOptionsViewController*>::get(),
                            "<DidActivate>b__6_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PlayerOptionsViewController::__set__playerSettingsPanelController(::GlobalNamespace::PlayerSettingsPanelController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerSettingsPanelController*, 0x70>(this, std::forward<::GlobalNamespace::PlayerSettingsPanelController*>(value));
}
constexpr ::GlobalNamespace::PlayerSettingsPanelController* GlobalNamespace::PlayerOptionsViewController::__get__playerSettingsPanelController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSettingsPanelController*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSettingsPanelController*> GlobalNamespace::PlayerOptionsViewController::__get__playerSettingsPanelController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSettingsPanelController*, 0x70>(this);
}
constexpr void GlobalNamespace::PlayerOptionsViewController::__set__okButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x78>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::PlayerOptionsViewController::__get__okButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::PlayerOptionsViewController::__get__okButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr void GlobalNamespace::PlayerOptionsViewController::__set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel*, 0x80>(this, std::forward<::GlobalNamespace::PlayerDataModel*>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel* GlobalNamespace::PlayerOptionsViewController::__get__playerDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> GlobalNamespace::PlayerOptionsViewController::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x80>(this);
}
constexpr void GlobalNamespace::PlayerOptionsViewController::__set_didFinishEvent(::System::Action_1<::HMUI::ViewController*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::HMUI::ViewController*>*, 0x88>(this, std::forward<::System::Action_1<::HMUI::ViewController*>*>(value));
}
constexpr ::System::Action_1<::HMUI::ViewController*>* GlobalNamespace::PlayerOptionsViewController::__get_didFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::HMUI::ViewController*>*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::ViewController*>*> GlobalNamespace::PlayerOptionsViewController::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::HMUI::ViewController*>*, 0x88>(this);
}
inline void GlobalNamespace::PlayerOptionsViewController::add_didFinishEvent(::System::Action_1<::HMUI::ViewController*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerOptionsViewController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::ViewController*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerOptionsViewController::remove_didFinishEvent(::System::Action_1<::HMUI::ViewController*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerOptionsViewController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::ViewController*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerOptionsViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerOptionsViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::PlayerOptionsViewController::DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerOptionsViewController*>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline ::GlobalNamespace::PlayerOptionsViewController* GlobalNamespace::PlayerOptionsViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlayerOptionsViewController*>());
}
inline void GlobalNamespace::PlayerOptionsViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerOptionsViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerOptionsViewController::_DidActivate_b__6_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerOptionsViewController*>::get(),
                            "<DidActivate>b__6_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
