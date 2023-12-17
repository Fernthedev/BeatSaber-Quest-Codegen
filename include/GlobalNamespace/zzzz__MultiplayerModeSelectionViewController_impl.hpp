#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSelectionViewController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSelectionViewController_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
constexpr void GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton::__MultiplayerModeSelectionViewController__MenuButton(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton  GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton::QuickPlay{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton  GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton::CreateServer{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton  GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton::JoinWithCode{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton  GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton::GameBrowser{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)(::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*)>(&::GlobalNamespace::MultiplayerModeSelectionViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22cf3b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)(::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*)>(&::GlobalNamespace::MultiplayerModeSelectionViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22cf464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)(bool, bool, bool)>(&::GlobalNamespace::MultiplayerModeSelectionViewController::DidActivate)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x22cf514;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)(::GlobalNamespace::MultiplayerStatusData*)>(&::GlobalNamespace::MultiplayerModeSelectionViewController::SetData)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x22cf7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerStatusData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController.HandleMenuButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)(::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton)>(&::GlobalNamespace::MultiplayerModeSelectionViewController::HandleMenuButton)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22cfa5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            "HandleMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(&::GlobalNamespace::MultiplayerModeSelectionViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22cfa84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController._DidActivate_b__11_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(&::GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22cfa8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            "<DidActivate>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController._DidActivate_b__11_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(&::GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22cfab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            "<DidActivate>b__11_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController._DidActivate_b__11_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(&::GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22cfad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            "<DidActivate>b__11_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController._DidActivate_b__11_3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(&::GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22cfaf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            "<DidActivate>b__11_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__set__quickPlayButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x70>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::MultiplayerModeSelectionViewController::__get__quickPlayButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::MultiplayerModeSelectionViewController::__get__quickPlayButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x70>(this);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__set__gameBrowserButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x78>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::MultiplayerModeSelectionViewController::__get__gameBrowserButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::MultiplayerModeSelectionViewController::__get__gameBrowserButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__set__joinWithCodeButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x80>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::MultiplayerModeSelectionViewController::__get__joinWithCodeButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::MultiplayerModeSelectionViewController::__get__joinWithCodeButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x80>(this);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__set__createServerButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x88>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::MultiplayerModeSelectionViewController::__get__createServerButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::MultiplayerModeSelectionViewController::__get__createServerButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x88>(this);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__set__maintenanceMessageText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x90>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::MultiplayerModeSelectionViewController::__get__maintenanceMessageText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::MultiplayerModeSelectionViewController::__get__maintenanceMessageText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x90>(this);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__set__customServerEndPointText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x98>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::MultiplayerModeSelectionViewController::__get__customServerEndPointText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::MultiplayerModeSelectionViewController::__get__customServerEndPointText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x98>(this);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__set__networkConfig(::GlobalNamespace::INetworkConfig*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::INetworkConfig*, 0xa0>(this, std::forward<::GlobalNamespace::INetworkConfig*>(value));
}
constexpr ::GlobalNamespace::INetworkConfig* GlobalNamespace::MultiplayerModeSelectionViewController::__get__networkConfig()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkConfig*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> GlobalNamespace::MultiplayerModeSelectionViewController::__get__networkConfig() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkConfig*, 0xa0>(this);
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__set_didFinishEvent(::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*, 0xa8>(this, std::forward<::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>* GlobalNamespace::MultiplayerModeSelectionViewController::__get_didFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*> GlobalNamespace::MultiplayerModeSelectionViewController::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*, 0xa8>(this);
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::add_didFinishEvent(::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::remove_didFinishEvent(::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::SetData(::GlobalNamespace::MultiplayerStatusData*  multiplayerStatusData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerStatusData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, multiplayerStatusData);
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::HandleMenuButton(::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton  menuButton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            "HandleMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, menuButton);
}
inline ::GlobalNamespace::MultiplayerModeSelectionViewController* GlobalNamespace::MultiplayerModeSelectionViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerModeSelectionViewController*>());
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            "<DidActivate>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            "<DidActivate>b__11_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            "<DidActivate>b__11_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                            "<DidActivate>b__11_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
