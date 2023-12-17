#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSettingsPanelController_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__IRefreshable_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpStartBeatOffsetDropdown_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "GlobalNamespace/zzzz__EventBinder_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_def.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityTypeSettingsDropdown_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPresetDropdown_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettingsDropdown_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightSettingsController_def.hpp"
constexpr void GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout::__PlayerSettingsPanelController__PlayerSettingsPanelLayout(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout  GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout::All{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout  GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout::Singleplayer{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout  GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout::Multiplayer{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.add_didChangePlayerSettingsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::System::Action*)>(&::GlobalNamespace::PlayerSettingsPanelController::add_didChangePlayerSettingsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22b2da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "add_didChangePlayerSettingsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.remove_didChangePlayerSettingsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::System::Action*)>(&::GlobalNamespace::PlayerSettingsPanelController::remove_didChangePlayerSettingsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22b3be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "remove_didChangePlayerSettingsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.get_playerSpecificSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSpecificSettings* (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::get_playerSpecificSettings)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x22b1f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "get_playerSpecificSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::PlayerData*)>(&::GlobalNamespace::PlayerSettingsPanelController::SetData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b2c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.SetLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout)>(&::GlobalNamespace::PlayerSettingsPanelController::SetLayout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b24b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "SetLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x22b3ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::OnEnable)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x22b3d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22b4118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22b4150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.UnsubscribeAllUICallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::UnsubscribeAllUICallbacks)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22b411c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "UnsubscribeAllUICallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::Refresh)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x22b37c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleSFXVolumeSettingsControllerValueDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleSFXVolumeSettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b4270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleSFXVolumeSettingsControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleArcVisibilityDropdownDidSelectCellWithIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, ::GlobalNamespace::ArcVisibilityType)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleArcVisibilityDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x22b42b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleArcVisibilityDropdownDidSelectCellWithIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleSaberTrailIntensitySettingsControllerValueDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleSaberTrailIntensitySettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b4318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleSaberTrailIntensitySettingsControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandlePlayerHeightSettingsControllerValueDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(float_t)>(&::GlobalNamespace::PlayerSettingsPanelController::HandlePlayerHeightSettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b433c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandlePlayerHeightSettingsControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleHeadsetHapticIntensityControllerValueDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleHeadsetHapticIntensityControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b4360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleHeadsetHapticIntensityControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleNoteJumpStartBeatOffsetPositionSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, float_t)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpStartBeatOffsetPositionSelected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b4384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleNoteJumpStartBeatOffsetPositionSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleLightReductionAmountSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, ::GlobalNamespace::EnvironmentEffectsFilterPreset)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleLightReductionAmountSelected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b43a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleLightReductionAmountSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentEffectsFilterPreset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleAdvancedHudToggleChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleAdvancedHudToggleChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22b43cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleAdvancedHudToggleChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, ::GlobalNamespace::NoteJumpDurationTypeSettings)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22b441c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteJumpDurationTypeSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleNoteJumpFixedDurationSettingsControllerValueDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpFixedDurationSettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b4458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleNoteJumpFixedDurationSettingsControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleNoTextsAndHudsToggleChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleNoTextsAndHudsToggleChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22b447c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleNoTextsAndHudsToggleChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.SetIsDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::SetIsDirty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b4294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "SetIsDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.RefreshNoteJumpUI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::NoteJumpDurationTypeSettings)>(&::GlobalNamespace::PlayerSettingsPanelController::RefreshNoteJumpUI)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22b4154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "RefreshNoteJumpUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteJumpDurationTypeSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.SetSectionDisabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::UnityEngine::CanvasGroup*, bool)>(&::GlobalNamespace::PlayerSettingsPanelController::SetSectionDisabled)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22b3c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "SetSectionDisabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CanvasGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.RefreshArcsWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::ArcVisibilityType, bool)>(&::GlobalNamespace::PlayerSettingsPanelController::RefreshArcsWarning)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x22b4190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "RefreshArcsWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22b44cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b4534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b4558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b457c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b45a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_4)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b45c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_5
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_5)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x22b45e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_6)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b462c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_7
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_7)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x22b4650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_8)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x22b4a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IRefreshable"
constexpr  GlobalNamespace::PlayerSettingsPanelController::operator ::GlobalNamespace::IRefreshable*() noexcept {
return static_cast<::GlobalNamespace::IRefreshable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__leftHandedToggle(::UnityEngine::UI::Toggle*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Toggle*, 0x18>(this, std::forward<::UnityEngine::UI::Toggle*>(value));
}
constexpr ::UnityEngine::UI::Toggle* GlobalNamespace::PlayerSettingsPanelController::__get__leftHandedToggle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> GlobalNamespace::PlayerSettingsPanelController::__get__leftHandedToggle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x18>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__reduceDebrisToggle(::UnityEngine::UI::Toggle*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Toggle*, 0x20>(this, std::forward<::UnityEngine::UI::Toggle*>(value));
}
constexpr ::UnityEngine::UI::Toggle* GlobalNamespace::PlayerSettingsPanelController::__get__reduceDebrisToggle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> GlobalNamespace::PlayerSettingsPanelController::__get__reduceDebrisToggle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x20>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noTextsAndHudsToggle(::UnityEngine::UI::Toggle*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Toggle*, 0x28>(this, std::forward<::UnityEngine::UI::Toggle*>(value));
}
constexpr ::UnityEngine::UI::Toggle* GlobalNamespace::PlayerSettingsPanelController::__get__noTextsAndHudsToggle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> GlobalNamespace::PlayerSettingsPanelController::__get__noTextsAndHudsToggle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x28>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__advanceHudToggle(::UnityEngine::UI::Toggle*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Toggle*, 0x30>(this, std::forward<::UnityEngine::UI::Toggle*>(value));
}
constexpr ::UnityEngine::UI::Toggle* GlobalNamespace::PlayerSettingsPanelController::__get__advanceHudToggle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> GlobalNamespace::PlayerSettingsPanelController::__get__advanceHudToggle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x30>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__autoRestartToggle(::UnityEngine::UI::Toggle*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Toggle*, 0x38>(this, std::forward<::UnityEngine::UI::Toggle*>(value));
}
constexpr ::UnityEngine::UI::Toggle* GlobalNamespace::PlayerSettingsPanelController::__get__autoRestartToggle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> GlobalNamespace::PlayerSettingsPanelController::__get__autoRestartToggle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x38>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__playerHeightSettingsController(::GlobalNamespace::PlayerHeightSettingsController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerHeightSettingsController*, 0x40>(this, std::forward<::GlobalNamespace::PlayerHeightSettingsController*>(value));
}
constexpr ::GlobalNamespace::PlayerHeightSettingsController* GlobalNamespace::PlayerSettingsPanelController::__get__playerHeightSettingsController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerHeightSettingsController*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeightSettingsController*> GlobalNamespace::PlayerSettingsPanelController::__get__playerHeightSettingsController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerHeightSettingsController*, 0x40>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__playerHeightSettingsCanvasGroup(::UnityEngine::CanvasGroup*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::CanvasGroup*, 0x48>(this, std::forward<::UnityEngine::CanvasGroup*>(value));
}
constexpr ::UnityEngine::CanvasGroup* GlobalNamespace::PlayerSettingsPanelController::__get__playerHeightSettingsCanvasGroup()  {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> GlobalNamespace::PlayerSettingsPanelController::__get__playerHeightSettingsCanvasGroup() const {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0x48>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__automaticPlayerHeightToggle(::UnityEngine::UI::Toggle*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Toggle*, 0x50>(this, std::forward<::UnityEngine::UI::Toggle*>(value));
}
constexpr ::UnityEngine::UI::Toggle* GlobalNamespace::PlayerSettingsPanelController::__get__automaticPlayerHeightToggle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> GlobalNamespace::PlayerSettingsPanelController::__get__automaticPlayerHeightToggle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0x50>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__sfxVolumeSettingsController(::GlobalNamespace::FormattedFloatListSettingsController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FormattedFloatListSettingsController*, 0x58>(this, std::forward<::GlobalNamespace::FormattedFloatListSettingsController*>(value));
}
constexpr ::GlobalNamespace::FormattedFloatListSettingsController* GlobalNamespace::PlayerSettingsPanelController::__get__sfxVolumeSettingsController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FormattedFloatListSettingsController*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> GlobalNamespace::PlayerSettingsPanelController::__get__sfxVolumeSettingsController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FormattedFloatListSettingsController*, 0x58>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__saberTrailIntensitySettingsController(::GlobalNamespace::FormattedFloatListSettingsController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FormattedFloatListSettingsController*, 0x60>(this, std::forward<::GlobalNamespace::FormattedFloatListSettingsController*>(value));
}
constexpr ::GlobalNamespace::FormattedFloatListSettingsController* GlobalNamespace::PlayerSettingsPanelController::__get__saberTrailIntensitySettingsController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FormattedFloatListSettingsController*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> GlobalNamespace::PlayerSettingsPanelController::__get__saberTrailIntensitySettingsController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FormattedFloatListSettingsController*, 0x60>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noteJumpDurationTypeSettingsDropdown(::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*, 0x68>(this, std::forward<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*>(value));
}
constexpr ::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown* GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpDurationTypeSettingsDropdown()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*> GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpDurationTypeSettingsDropdown() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*, 0x68>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noteJumpFixedDurationSettingsController(::GlobalNamespace::FormattedFloatListSettingsController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FormattedFloatListSettingsController*, 0x70>(this, std::forward<::GlobalNamespace::FormattedFloatListSettingsController*>(value));
}
constexpr ::GlobalNamespace::FormattedFloatListSettingsController* GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpFixedDurationSettingsController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FormattedFloatListSettingsController*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpFixedDurationSettingsController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FormattedFloatListSettingsController*, 0x70>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noteJumpFixedDurationSettingsCanvasGroup(::UnityEngine::CanvasGroup*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::CanvasGroup*, 0x78>(this, std::forward<::UnityEngine::CanvasGroup*>(value));
}
constexpr ::UnityEngine::CanvasGroup* GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpFixedDurationSettingsCanvasGroup()  {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpFixedDurationSettingsCanvasGroup() const {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0x78>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noteJumpStartBeatOffsetDropdown(::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*, 0x80>(this, std::forward<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*>(value));
}
constexpr ::GlobalNamespace::NoteJumpStartBeatOffsetDropdown* GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpStartBeatOffsetDropdown()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*> GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpStartBeatOffsetDropdown() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*, 0x80>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noteJumpStartBeatOffsetCanvasGroup(::UnityEngine::CanvasGroup*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::CanvasGroup*, 0x88>(this, std::forward<::UnityEngine::CanvasGroup*>(value));
}
constexpr ::UnityEngine::CanvasGroup* GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpStartBeatOffsetCanvasGroup()  {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpStartBeatOffsetCanvasGroup() const {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0x88>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__environmentEffectsFilterDefaultPresetDropdown(::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*, 0x90>(this, std::forward<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*>(value));
}
constexpr ::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* GlobalNamespace::PlayerSettingsPanelController::__get__environmentEffectsFilterDefaultPresetDropdown()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*> GlobalNamespace::PlayerSettingsPanelController::__get__environmentEffectsFilterDefaultPresetDropdown() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*, 0x90>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__environmentEffectsFilterExpertPlusPresetDropdown(::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*, 0x98>(this, std::forward<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*>(value));
}
constexpr ::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* GlobalNamespace::PlayerSettingsPanelController::__get__environmentEffectsFilterExpertPlusPresetDropdown()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*> GlobalNamespace::PlayerSettingsPanelController::__get__environmentEffectsFilterExpertPlusPresetDropdown() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*, 0x98>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__hideNoteSpawnEffectToggle(::UnityEngine::UI::Toggle*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Toggle*, 0xa0>(this, std::forward<::UnityEngine::UI::Toggle*>(value));
}
constexpr ::UnityEngine::UI::Toggle* GlobalNamespace::PlayerSettingsPanelController::__get__hideNoteSpawnEffectToggle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> GlobalNamespace::PlayerSettingsPanelController::__get__hideNoteSpawnEffectToggle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0xa0>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__adaptiveSfxToggle(::UnityEngine::UI::Toggle*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Toggle*, 0xa8>(this, std::forward<::UnityEngine::UI::Toggle*>(value));
}
constexpr ::UnityEngine::UI::Toggle* GlobalNamespace::PlayerSettingsPanelController::__get__adaptiveSfxToggle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> GlobalNamespace::PlayerSettingsPanelController::__get__adaptiveSfxToggle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0xa8>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__headsetHapticIntensityController(::GlobalNamespace::FormattedFloatListSettingsController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FormattedFloatListSettingsController*, 0xb0>(this, std::forward<::GlobalNamespace::FormattedFloatListSettingsController*>(value));
}
constexpr ::GlobalNamespace::FormattedFloatListSettingsController* GlobalNamespace::PlayerSettingsPanelController::__get__headsetHapticIntensityController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FormattedFloatListSettingsController*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> GlobalNamespace::PlayerSettingsPanelController::__get__headsetHapticIntensityController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FormattedFloatListSettingsController*, 0xb0>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__arcsVisibilityTypeSettingsDropdown(::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*, 0xb8>(this, std::forward<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*>(value));
}
constexpr ::GlobalNamespace::ArcVisibilityTypeSettingsDropdown* GlobalNamespace::PlayerSettingsPanelController::__get__arcsVisibilityTypeSettingsDropdown()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*> GlobalNamespace::PlayerSettingsPanelController::__get__arcsVisibilityTypeSettingsDropdown() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*, 0xb8>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__arcHapticFeedbackCanvasGroup(::UnityEngine::CanvasGroup*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::CanvasGroup*, 0xc0>(this, std::forward<::UnityEngine::CanvasGroup*>(value));
}
constexpr ::UnityEngine::CanvasGroup* GlobalNamespace::PlayerSettingsPanelController::__get__arcHapticFeedbackCanvasGroup()  {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> GlobalNamespace::PlayerSettingsPanelController::__get__arcHapticFeedbackCanvasGroup() const {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0xc0>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__arcsHapticFeedbackToggle(::UnityEngine::UI::Toggle*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Toggle*, 0xc8>(this, std::forward<::UnityEngine::UI::Toggle*>(value));
}
constexpr ::UnityEngine::UI::Toggle* GlobalNamespace::PlayerSettingsPanelController::__get__arcsHapticFeedbackToggle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> GlobalNamespace::PlayerSettingsPanelController::__get__arcsHapticFeedbackToggle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle*, 0xc8>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__singleplayerOnlyCanvasGroup(::UnityEngine::CanvasGroup*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::CanvasGroup*, 0xd0>(this, std::forward<::UnityEngine::CanvasGroup*>(value));
}
constexpr ::UnityEngine::CanvasGroup* GlobalNamespace::PlayerSettingsPanelController::__get__singleplayerOnlyCanvasGroup()  {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> GlobalNamespace::PlayerSettingsPanelController::__get__singleplayerOnlyCanvasGroup() const {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0xd0>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__arcVisibilityWarning(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0xd8>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::PlayerSettingsPanelController::__get__arcVisibilityWarning()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::PlayerSettingsPanelController::__get__arcVisibilityWarning() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0xd8>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set_didChangePlayerSettingsEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0xe0>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PlayerSettingsPanelController::__get_didChangePlayerSettingsEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0xe0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PlayerSettingsPanelController::__get_didChangePlayerSettingsEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0xe0>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__currentArcType(::GlobalNamespace::ArcVisibilityType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ArcVisibilityType, 0xe8>(this, std::forward<::GlobalNamespace::ArcVisibilityType>(value));
}
constexpr ::GlobalNamespace::ArcVisibilityType& GlobalNamespace::PlayerSettingsPanelController::__get__currentArcType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ArcVisibilityType, 0xe8>(this);
}
constexpr ::GlobalNamespace::ArcVisibilityType const& GlobalNamespace::PlayerSettingsPanelController::__get__currentArcType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ArcVisibilityType, 0xe8>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__playerData(::GlobalNamespace::PlayerData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerData*, 0xf0>(this, std::forward<::GlobalNamespace::PlayerData*>(value));
}
constexpr ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerSettingsPanelController::__get__playerData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerData*, 0xf0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerData*> GlobalNamespace::PlayerSettingsPanelController::__get__playerData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerData*, 0xf0>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerSpecificSettings*, 0xf8>(this, std::forward<::GlobalNamespace::PlayerSpecificSettings*>(value));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::PlayerSettingsPanelController::__get__playerSpecificSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSpecificSettings*, 0xf8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> GlobalNamespace::PlayerSettingsPanelController::__get__playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerSpecificSettings*, 0xf8>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__toggleBinder(::HMUI::ToggleBinder*  value)  {
::cordl_internals::setInstanceField<::HMUI::ToggleBinder*, 0x100>(this, std::forward<::HMUI::ToggleBinder*>(value));
}
constexpr ::HMUI::ToggleBinder* GlobalNamespace::PlayerSettingsPanelController::__get__toggleBinder()  {
return ::cordl_internals::getInstanceField<::HMUI::ToggleBinder*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> GlobalNamespace::PlayerSettingsPanelController::__get__toggleBinder() const {
return ::cordl_internals::getInstanceField<::HMUI::ToggleBinder*, 0x100>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__dirty(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x108>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::PlayerSettingsPanelController::__get__dirty()  {
return ::cordl_internals::getInstanceField<bool, 0x108>(this);
}
constexpr bool const& GlobalNamespace::PlayerSettingsPanelController::__get__dirty() const {
return ::cordl_internals::getInstanceField<bool, 0x108>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__refreshed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x109>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::PlayerSettingsPanelController::__get__refreshed()  {
return ::cordl_internals::getInstanceField<bool, 0x109>(this);
}
constexpr bool const& GlobalNamespace::PlayerSettingsPanelController::__get__refreshed() const {
return ::cordl_internals::getInstanceField<bool, 0x109>(this);
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__eventBinder(::GlobalNamespace::EventBinder*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EventBinder*, 0x110>(this, std::forward<::GlobalNamespace::EventBinder*>(value));
}
constexpr ::GlobalNamespace::EventBinder* GlobalNamespace::PlayerSettingsPanelController::__get__eventBinder()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EventBinder*, 0x110>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EventBinder*> GlobalNamespace::PlayerSettingsPanelController::__get__eventBinder() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EventBinder*, 0x110>(this);
}
inline void GlobalNamespace::PlayerSettingsPanelController::add_didChangePlayerSettingsEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "add_didChangePlayerSettingsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::remove_didChangePlayerSettingsEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "remove_didChangePlayerSettingsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::PlayerSettingsPanelController::get_playerSpecificSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "get_playerSpecificSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettings*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::SetData(::GlobalNamespace::PlayerData*  playerData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playerData);
}
inline void GlobalNamespace::PlayerSettingsPanelController::SetLayout(::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout  layout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "SetLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, layout);
}
inline void GlobalNamespace::PlayerSettingsPanelController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::UnsubscribeAllUICallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "UnsubscribeAllUICallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleSFXVolumeSettingsControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController*  settingsController, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleSFXVolumeSettingsControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, settingsController, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleArcVisibilityDropdownDidSelectCellWithIdx(int32_t  idx, ::GlobalNamespace::ArcVisibilityType  arcVisibilityType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleArcVisibilityDropdownDidSelectCellWithIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, idx, arcVisibilityType);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleSaberTrailIntensitySettingsControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController*  settingsController, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleSaberTrailIntensitySettingsControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, settingsController, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandlePlayerHeightSettingsControllerValueDidChange(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandlePlayerHeightSettingsControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleHeadsetHapticIntensityControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController*  settingsController, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleHeadsetHapticIntensityControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, settingsController, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpStartBeatOffsetPositionSelected(int32_t  idx, float_t  startBeatOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleNoteJumpStartBeatOffsetPositionSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, idx, startBeatOffset);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleLightReductionAmountSelected(int32_t  obj, ::GlobalNamespace::EnvironmentEffectsFilterPreset  environmentEffectsFilterPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleLightReductionAmountSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentEffectsFilterPreset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj, environmentEffectsFilterPreset);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleAdvancedHudToggleChanged(bool  on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleAdvancedHudToggleChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx(int32_t  idx, ::GlobalNamespace::NoteJumpDurationTypeSettings  noteJumpDurationTypeSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteJumpDurationTypeSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, idx, noteJumpDurationTypeSettings);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpFixedDurationSettingsControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController*  formattedFloatListSettingsController, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleNoteJumpFixedDurationSettingsControllerValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, formattedFloatListSettingsController, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleNoTextsAndHudsToggleChanged(bool  on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "HandleNoTextsAndHudsToggleChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::SetIsDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "SetIsDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::RefreshNoteJumpUI(::GlobalNamespace::NoteJumpDurationTypeSettings  noteJumpDurationTypeSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "RefreshNoteJumpUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteJumpDurationTypeSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteJumpDurationTypeSettings);
}
inline void GlobalNamespace::PlayerSettingsPanelController::SetSectionDisabled(::UnityEngine::CanvasGroup*  sectionCanvasGroup, bool  disable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "SetSectionDisabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CanvasGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sectionCanvasGroup, disable);
}
inline void GlobalNamespace::PlayerSettingsPanelController::RefreshArcsWarning(::GlobalNamespace::ArcVisibilityType  arcVisibilityType, bool  forceRebuild)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "RefreshArcsWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, arcVisibilityType, forceRebuild);
}
inline ::GlobalNamespace::PlayerSettingsPanelController* GlobalNamespace::PlayerSettingsPanelController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlayerSettingsPanelController*>());
}
inline void GlobalNamespace::PlayerSettingsPanelController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_0(bool  on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_1(bool  on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_2(bool  on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_3(bool  on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_4(bool  on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_5(bool  on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_6(bool  on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_7()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_8()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                            "<OnEnable>b__42_8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
