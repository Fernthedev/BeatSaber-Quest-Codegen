#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PauseMenuManager_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__PauseMenuManager_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSpawnRotation_def.hpp"
#include "GlobalNamespace/zzzz__PauseAnimationController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PauseMenuManager__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PauseMenuManager__InitData::*)(::StringW, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*, bool, bool)>(&::GlobalNamespace::__PauseMenuManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23c911c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PauseMenuManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PauseMenuManager__InitData::__set_backButtonText(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PauseMenuManager__InitData::__get_backButtonText()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__PauseMenuManager__InitData::__get_backButtonText() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__PauseMenuManager__InitData::__set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x18>(this, std::forward<::GlobalNamespace::IPreviewBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::__PauseMenuManager__InitData::__get_previewBeatmapLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> GlobalNamespace::__PauseMenuManager__InitData::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x18>(this);
}
constexpr void GlobalNamespace::__PauseMenuManager__InitData::__set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x20>(this, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::__PauseMenuManager__InitData::__get_beatmapDifficulty()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x20>(this);
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::__PauseMenuManager__InitData::__get_beatmapDifficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x20>(this);
}
constexpr void GlobalNamespace::__PauseMenuManager__InitData::__set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x28>(this, std::forward<::GlobalNamespace::BeatmapCharacteristicSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::__PauseMenuManager__InitData::__get_beatmapCharacteristic()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> GlobalNamespace::__PauseMenuManager__InitData::__get_beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x28>(this);
}
constexpr void GlobalNamespace::__PauseMenuManager__InitData::__set_showRestartButton(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PauseMenuManager__InitData::__get_showRestartButton()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& GlobalNamespace::__PauseMenuManager__InitData::__get_showRestartButton() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void GlobalNamespace::__PauseMenuManager__InitData::__set_showLevelBar(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PauseMenuManager__InitData::__get_showLevelBar()  {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
constexpr bool const& GlobalNamespace::__PauseMenuManager__InitData::__get_showLevelBar() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
inline ::GlobalNamespace::__PauseMenuManager__InitData* GlobalNamespace::__PauseMenuManager__InitData::New_ctor(::StringW  backButtonText, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, bool  showRestartButton, bool  showLevelBar)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PauseMenuManager__InitData*>(backButtonText, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, showRestartButton, showLevelBar));
}
inline void GlobalNamespace::__PauseMenuManager__InitData::_ctor(::StringW  backButtonText, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, bool  showRestartButton, bool  showLevelBar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PauseMenuManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, backButtonText, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, showRestartButton, showLevelBar);
}
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.add_didPressContinueButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)(::System::Action*)>(&::GlobalNamespace::PauseMenuManager::add_didPressContinueButtonEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23c85d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "add_didPressContinueButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.remove_didPressContinueButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)(::System::Action*)>(&::GlobalNamespace::PauseMenuManager::remove_didPressContinueButtonEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23c866c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "remove_didPressContinueButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.add_didPressMenuButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)(::System::Action*)>(&::GlobalNamespace::PauseMenuManager::add_didPressMenuButtonEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23c8708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "add_didPressMenuButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.remove_didPressMenuButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)(::System::Action*)>(&::GlobalNamespace::PauseMenuManager::remove_didPressMenuButtonEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23c87a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "remove_didPressMenuButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.add_didPressRestartButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)(::System::Action*)>(&::GlobalNamespace::PauseMenuManager::add_didPressRestartButtonEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23c8840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "add_didPressRestartButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.remove_didPressRestartButtonEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)(::System::Action*)>(&::GlobalNamespace::PauseMenuManager::remove_didPressRestartButtonEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23c88dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "remove_didPressRestartButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.add_didFinishResumeAnimationEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)(::System::Action*)>(&::GlobalNamespace::PauseMenuManager::add_didFinishResumeAnimationEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23c8978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "add_didFinishResumeAnimationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.remove_didFinishResumeAnimationEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)(::System::Action*)>(&::GlobalNamespace::PauseMenuManager::remove_didFinishResumeAnimationEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23c8a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "remove_didFinishResumeAnimationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::Awake)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x23c8ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::Start)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x23c8c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::OnDestroy)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x23c8da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::Update)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x23c8e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.ShowMenu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::ShowMenu)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23c9070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "ShowMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.StartResumeAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::StartResumeAnimation)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23c90cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "StartResumeAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.HandleResumeFromPauseAnimationDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::HandleResumeFromPauseAnimationDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23c90f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "HandleResumeFromPauseAnimationDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.MenuButtonPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::MenuButtonPressed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23c9038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "MenuButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.RestartButtonPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::RestartButtonPressed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23c8fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "RestartButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.ContinueButtonPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::ContinueButtonPressed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23c8fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "ContinueButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c9114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PauseMenuManager::__set__pauseAnimationController(::GlobalNamespace::PauseAnimationController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PauseAnimationController*, 0x18>(this, std::forward<::GlobalNamespace::PauseAnimationController*>(value));
}
constexpr ::GlobalNamespace::PauseAnimationController* GlobalNamespace::PauseMenuManager::__get__pauseAnimationController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PauseAnimationController*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PauseAnimationController*> GlobalNamespace::PauseMenuManager::__get__pauseAnimationController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PauseAnimationController*, 0x18>(this);
}
constexpr void GlobalNamespace::PauseMenuManager::__set__levelBar(::GlobalNamespace::LevelBar*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelBar*, 0x20>(this, std::forward<::GlobalNamespace::LevelBar*>(value));
}
constexpr ::GlobalNamespace::LevelBar* GlobalNamespace::PauseMenuManager::__get__levelBar()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelBar*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> GlobalNamespace::PauseMenuManager::__get__levelBar() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelBar*, 0x20>(this);
}
constexpr void GlobalNamespace::PauseMenuManager::__set__continueButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x28>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::PauseMenuManager::__get__continueButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::PauseMenuManager::__get__continueButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x28>(this);
}
constexpr void GlobalNamespace::PauseMenuManager::__set__restartButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x30>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::PauseMenuManager::__get__restartButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::PauseMenuManager::__get__restartButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x30>(this);
}
constexpr void GlobalNamespace::PauseMenuManager::__set__backButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x38>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::PauseMenuManager::__get__backButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::PauseMenuManager::__get__backButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x38>(this);
}
constexpr void GlobalNamespace::PauseMenuManager::__set__backButtonText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x40>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::PauseMenuManager::__get__backButtonText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::PauseMenuManager::__get__backButtonText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x40>(this);
}
constexpr void GlobalNamespace::PauseMenuManager::__set__pauseContainerTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x48>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::PauseMenuManager::__get__pauseContainerTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::PauseMenuManager::__get__pauseContainerTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x48>(this);
}
constexpr void GlobalNamespace::PauseMenuManager::__set__initData(::GlobalNamespace::__PauseMenuManager__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PauseMenuManager__InitData*, 0x50>(this, std::forward<::GlobalNamespace::__PauseMenuManager__InitData*>(value));
}
constexpr ::GlobalNamespace::__PauseMenuManager__InitData* GlobalNamespace::PauseMenuManager::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PauseMenuManager__InitData*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PauseMenuManager__InitData*> GlobalNamespace::PauseMenuManager::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PauseMenuManager__InitData*, 0x50>(this);
}
constexpr void GlobalNamespace::PauseMenuManager::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x58>(this, std::forward<::GlobalNamespace::IVRPlatformHelper*>(value));
}
constexpr ::GlobalNamespace::IVRPlatformHelper* GlobalNamespace::PauseMenuManager::__get__vrPlatformHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> GlobalNamespace::PauseMenuManager::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x58>(this);
}
constexpr void GlobalNamespace::PauseMenuManager::__set__environmentSpawnRotation(::GlobalNamespace::EnvironmentSpawnRotation*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentSpawnRotation*, 0x60>(this, std::forward<::GlobalNamespace::EnvironmentSpawnRotation*>(value));
}
constexpr ::GlobalNamespace::EnvironmentSpawnRotation* GlobalNamespace::PauseMenuManager::__get__environmentSpawnRotation()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentSpawnRotation*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentSpawnRotation*> GlobalNamespace::PauseMenuManager::__get__environmentSpawnRotation() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentSpawnRotation*, 0x60>(this);
}
constexpr void GlobalNamespace::PauseMenuManager::__set_didPressContinueButtonEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x68>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PauseMenuManager::__get_didPressContinueButtonEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PauseMenuManager::__get_didPressContinueButtonEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x68>(this);
}
constexpr void GlobalNamespace::PauseMenuManager::__set_didPressMenuButtonEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x70>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PauseMenuManager::__get_didPressMenuButtonEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PauseMenuManager::__get_didPressMenuButtonEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x70>(this);
}
constexpr void GlobalNamespace::PauseMenuManager::__set_didPressRestartButtonEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x78>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PauseMenuManager::__get_didPressRestartButtonEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PauseMenuManager::__get_didPressRestartButtonEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x78>(this);
}
constexpr void GlobalNamespace::PauseMenuManager::__set_didFinishResumeAnimationEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x80>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PauseMenuManager::__get_didFinishResumeAnimationEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PauseMenuManager::__get_didFinishResumeAnimationEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x80>(this);
}
constexpr void GlobalNamespace::PauseMenuManager::__set__buttonBinder(::HMUI::ButtonBinder*  value)  {
::cordl_internals::setInstanceField<::HMUI::ButtonBinder*, 0x88>(this, std::forward<::HMUI::ButtonBinder*>(value));
}
constexpr ::HMUI::ButtonBinder* GlobalNamespace::PauseMenuManager::__get__buttonBinder()  {
return ::cordl_internals::getInstanceField<::HMUI::ButtonBinder*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> GlobalNamespace::PauseMenuManager::__get__buttonBinder() const {
return ::cordl_internals::getInstanceField<::HMUI::ButtonBinder*, 0x88>(this);
}
constexpr void GlobalNamespace::PauseMenuManager::__set__disabledInteractionRemainingTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x90>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::PauseMenuManager::__get__disabledInteractionRemainingTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
constexpr float_t const& GlobalNamespace::PauseMenuManager::__get__disabledInteractionRemainingTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
inline void GlobalNamespace::PauseMenuManager::add_didPressContinueButtonEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "add_didPressContinueButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PauseMenuManager::remove_didPressContinueButtonEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "remove_didPressContinueButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PauseMenuManager::add_didPressMenuButtonEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "add_didPressMenuButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PauseMenuManager::remove_didPressMenuButtonEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "remove_didPressMenuButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PauseMenuManager::add_didPressRestartButtonEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "add_didPressRestartButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PauseMenuManager::remove_didPressRestartButtonEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "remove_didPressRestartButtonEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PauseMenuManager::add_didFinishResumeAnimationEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "add_didFinishResumeAnimationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PauseMenuManager::remove_didFinishResumeAnimationEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "remove_didFinishResumeAnimationEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PauseMenuManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::ShowMenu()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "ShowMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::StartResumeAnimation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "StartResumeAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::HandleResumeFromPauseAnimationDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "HandleResumeFromPauseAnimationDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::MenuButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "MenuButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::RestartButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "RestartButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::ContinueButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            "ContinueButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::PauseMenuManager* GlobalNamespace::PauseMenuManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PauseMenuManager*>());
}
inline void GlobalNamespace::PauseMenuManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
