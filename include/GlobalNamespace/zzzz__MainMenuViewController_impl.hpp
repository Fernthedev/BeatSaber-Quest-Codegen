#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__MainMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__MainMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__MusicPackPromoBanner_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
constexpr void GlobalNamespace::__MainMenuViewController__MenuButton::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainMenuViewController__MenuButton::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MainMenuViewController__MenuButton::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton::__MainMenuViewController__MenuButton(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton  GlobalNamespace::__MainMenuViewController__MenuButton::SoloFreePlay{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton  GlobalNamespace::__MainMenuViewController__MenuButton::Party{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton  GlobalNamespace::__MainMenuViewController__MenuButton::BeatmapEditor{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton  GlobalNamespace::__MainMenuViewController__MenuButton::SoloCampaign{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton  GlobalNamespace::__MainMenuViewController__MenuButton::FloorAdjust{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton  GlobalNamespace::__MainMenuViewController__MenuButton::Quit{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton  GlobalNamespace::__MainMenuViewController__MenuButton::Multiplayer{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton  GlobalNamespace::__MainMenuViewController__MenuButton::Options{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::__MainMenuViewController__MenuButton  GlobalNamespace::__MainMenuViewController__MenuButton::HowToPlay{static_cast<int32_t>(0x8)};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(::System::Action_2<::GlobalNamespace::MainMenuViewController*,::GlobalNamespace::__MainMenuViewController__MenuButton>*)>(&::GlobalNamespace::MainMenuViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22c8abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MainMenuViewController*,::GlobalNamespace::__MainMenuViewController__MenuButton>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(::System::Action_2<::GlobalNamespace::MainMenuViewController*,::GlobalNamespace::__MainMenuViewController__MenuButton>*)>(&::GlobalNamespace::MainMenuViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22c8b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MainMenuViewController*,::GlobalNamespace::__MainMenuViewController__MenuButton>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.add_musicPackPromoButtonWasPressedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*,::GlobalNamespace::IPreviewBeatmapLevel*>*)>(&::GlobalNamespace::MainMenuViewController::add_musicPackPromoButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22c8c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "add_musicPackPromoButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*,::GlobalNamespace::IPreviewBeatmapLevel*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.remove_musicPackPromoButtonWasPressedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*,::GlobalNamespace::IPreviewBeatmapLevel*>*)>(&::GlobalNamespace::MainMenuViewController::remove_musicPackPromoButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22c8ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "remove_musicPackPromoButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*,::GlobalNamespace::IPreviewBeatmapLevel*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(bool, bool, bool)>(&::GlobalNamespace::MainMenuViewController::DidActivate)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x22c8d7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.PackPromoButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::PackPromoButtonWasPressed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22c92a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "PackPromoButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController.HandleMenuButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)(::GlobalNamespace::__MainMenuViewController__MenuButton)>(&::GlobalNamespace::MainMenuViewController::HandleMenuButton)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x22c9300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "HandleMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainMenuViewController__MenuButton>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__20_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_DidActivate_b__20_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "<DidActivate>b__20_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__20_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_DidActivate_b__20_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "<DidActivate>b__20_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__20_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_DidActivate_b__20_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "<DidActivate>b__20_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__20_3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_DidActivate_b__20_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "<DidActivate>b__20_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__20_4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_DidActivate_b__20_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "<DidActivate>b__20_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__20_5
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_DidActivate_b__20_5)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "<DidActivate>b__20_5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__20_6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_DidActivate_b__20_6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "<DidActivate>b__20_6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuViewController._DidActivate_b__20_7
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuViewController::*)()>(&::GlobalNamespace::MainMenuViewController::_DidActivate_b__20_7)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c94f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "<DidActivate>b__20_7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MainMenuViewController::__set__soloButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x70>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::MainMenuViewController::__get__soloButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::MainMenuViewController::__get__soloButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x70>(this);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__partyButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x78>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::MainMenuViewController::__get__partyButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::MainMenuViewController::__get__partyButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__campaignButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x80>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::MainMenuViewController::__get__campaignButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::MainMenuViewController::__get__campaignButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x80>(this);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__quitButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x88>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::MainMenuViewController::__get__quitButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::MainMenuViewController::__get__quitButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x88>(this);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__howToPlayButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x90>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::MainMenuViewController::__get__howToPlayButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::MainMenuViewController::__get__howToPlayButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x90>(this);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__beatmapEditorButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x98>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::MainMenuViewController::__get__beatmapEditorButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::MainMenuViewController::__get__beatmapEditorButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x98>(this);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__multiplayerButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0xa0>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::MainMenuViewController::__get__multiplayerButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::MainMenuViewController::__get__multiplayerButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0xa0>(this);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__optionsButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0xa8>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::MainMenuViewController::__get__optionsButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::MainMenuViewController::__get__optionsButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0xa8>(this);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__musicPackPromoButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0xb0>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::MainMenuViewController::__get__musicPackPromoButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::MainMenuViewController::__get__musicPackPromoButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0xb0>(this);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__musicPackPromoBanner(::GlobalNamespace::MusicPackPromoBanner*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MusicPackPromoBanner*, 0xb8>(this, std::forward<::GlobalNamespace::MusicPackPromoBanner*>(value));
}
constexpr ::GlobalNamespace::MusicPackPromoBanner* GlobalNamespace::MainMenuViewController::__get__musicPackPromoBanner()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MusicPackPromoBanner*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MusicPackPromoBanner*> GlobalNamespace::MainMenuViewController::__get__musicPackPromoBanner() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MusicPackPromoBanner*, 0xb8>(this);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DlcPromoPanelModel*, 0xc0>(this, std::forward<::GlobalNamespace::DlcPromoPanelModel*>(value));
}
constexpr ::GlobalNamespace::DlcPromoPanelModel* GlobalNamespace::MainMenuViewController::__get__dlcPromoPanelModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DlcPromoPanelModel*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DlcPromoPanelModel*> GlobalNamespace::MainMenuViewController::__get__dlcPromoPanelModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DlcPromoPanelModel*, 0xc0>(this);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AppStaticSettingsSO*, 0xc8>(this, std::forward<::GlobalNamespace::AppStaticSettingsSO*>(value));
}
constexpr ::GlobalNamespace::AppStaticSettingsSO* GlobalNamespace::MainMenuViewController::__get__appStaticSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppStaticSettingsSO*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppStaticSettingsSO*> GlobalNamespace::MainMenuViewController::__get__appStaticSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppStaticSettingsSO*, 0xc8>(this);
}
constexpr void GlobalNamespace::MainMenuViewController::__set__analyticsModel(::GlobalNamespace::IAnalyticsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAnalyticsModel*, 0xd0>(this, std::forward<::GlobalNamespace::IAnalyticsModel*>(value));
}
constexpr ::GlobalNamespace::IAnalyticsModel* GlobalNamespace::MainMenuViewController::__get__analyticsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnalyticsModel*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> GlobalNamespace::MainMenuViewController::__get__analyticsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnalyticsModel*, 0xd0>(this);
}
constexpr void GlobalNamespace::MainMenuViewController::__set_didFinishEvent(::System::Action_2<::GlobalNamespace::MainMenuViewController*,::GlobalNamespace::__MainMenuViewController__MenuButton>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::MainMenuViewController*,::GlobalNamespace::__MainMenuViewController__MenuButton>*, 0xd8>(this, std::forward<::System::Action_2<::GlobalNamespace::MainMenuViewController*,::GlobalNamespace::__MainMenuViewController__MenuButton>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::MainMenuViewController*,::GlobalNamespace::__MainMenuViewController__MenuButton>* GlobalNamespace::MainMenuViewController::__get_didFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::MainMenuViewController*,::GlobalNamespace::__MainMenuViewController__MenuButton>*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MainMenuViewController*,::GlobalNamespace::__MainMenuViewController__MenuButton>*> GlobalNamespace::MainMenuViewController::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::MainMenuViewController*,::GlobalNamespace::__MainMenuViewController__MenuButton>*, 0xd8>(this);
}
constexpr void GlobalNamespace::MainMenuViewController::__set_musicPackPromoButtonWasPressedEvent(::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*,::GlobalNamespace::IPreviewBeatmapLevel*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*,::GlobalNamespace::IPreviewBeatmapLevel*>*, 0xe0>(this, std::forward<::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*,::GlobalNamespace::IPreviewBeatmapLevel*>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*,::GlobalNamespace::IPreviewBeatmapLevel*>* GlobalNamespace::MainMenuViewController::__get_musicPackPromoButtonWasPressedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*,::GlobalNamespace::IPreviewBeatmapLevel*>*, 0xe0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*,::GlobalNamespace::IPreviewBeatmapLevel*>*> GlobalNamespace::MainMenuViewController::__get_musicPackPromoButtonWasPressedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*,::GlobalNamespace::IPreviewBeatmapLevel*>*, 0xe0>(this);
}
inline void GlobalNamespace::MainMenuViewController::add_didFinishEvent(::System::Action_2<::GlobalNamespace::MainMenuViewController*,::GlobalNamespace::__MainMenuViewController__MenuButton>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MainMenuViewController*,::GlobalNamespace::__MainMenuViewController__MenuButton>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MainMenuViewController::remove_didFinishEvent(::System::Action_2<::GlobalNamespace::MainMenuViewController*,::GlobalNamespace::__MainMenuViewController__MenuButton>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MainMenuViewController*,::GlobalNamespace::__MainMenuViewController__MenuButton>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MainMenuViewController::add_musicPackPromoButtonWasPressedEvent(::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*,::GlobalNamespace::IPreviewBeatmapLevel*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "add_musicPackPromoButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*,::GlobalNamespace::IPreviewBeatmapLevel*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MainMenuViewController::remove_musicPackPromoButtonWasPressedEvent(::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*,::GlobalNamespace::IPreviewBeatmapLevel*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "remove_musicPackPromoButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IBeatmapLevelPack*,::GlobalNamespace::IPreviewBeatmapLevel*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MainMenuViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MainMenuViewController::PackPromoButtonWasPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "PackPromoButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::HandleMenuButton(::GlobalNamespace::__MainMenuViewController__MenuButton  menuButton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "HandleMenuButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainMenuViewController__MenuButton>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, menuButton);
}
inline ::GlobalNamespace::MainMenuViewController* GlobalNamespace::MainMenuViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MainMenuViewController*>());
}
inline void GlobalNamespace::MainMenuViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "<DidActivate>b__20_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "<DidActivate>b__20_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "<DidActivate>b__20_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "<DidActivate>b__20_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "<DidActivate>b__20_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_5()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "<DidActivate>b__20_5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_6()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "<DidActivate>b__20_6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainMenuViewController::_DidActivate_b__20_7()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuViewController*>::get(),
                            "<DidActivate>b__20_7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
