#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "BeatmapEditor3D/zzzz__BeatmapEditorStandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorScenesTransitionSetupDataSO_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__CreditsScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCache_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0::*)()>(&::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231f2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0._HandleMainGameSceneDidFinish_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0::_HandleMainGameSceneDidFinish_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x231fd20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0*>::get(),
                            "<HandleMainGameSceneDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0::__set___4__this(::GlobalNamespace::MenuTransitionsHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x10>(this, std::forward<::GlobalNamespace::MenuTransitionsHelper*>(value));
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x10>(this);
}
constexpr void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0::__set_standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x18>(this, std::forward<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0::__get_standardLevelScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0::__get_standardLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0::__set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelCompletionResults*, 0x20>(this, std::forward<::GlobalNamespace::LevelCompletionResults*>(value));
}
constexpr ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0::__get_levelCompletionResults()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelCompletionResults*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0::__get_levelCompletionResults() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelCompletionResults*, 0x20>(this);
}
inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0*>());
}
inline void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0::_HandleMainGameSceneDidFinish_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass29_0*>::get(),
                            "<HandleMainGameSceneDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
//  Writing Method size for method: ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0::*)()>(&::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231f484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0._HandleMultiplayerLevelDidFinish_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0::_HandleMultiplayerLevelDidFinish_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x231fd58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0*>::get(),
                            "<HandleMultiplayerLevelDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0::__set___4__this(::GlobalNamespace::MenuTransitionsHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x10>(this, std::forward<::GlobalNamespace::MenuTransitionsHelper*>(value));
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x10>(this);
}
constexpr void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0::__set_multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, 0x18>(this, std::forward<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0::__get_multiplayerLevelScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*> GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0::__get_multiplayerLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0::__set_multiplayerResultsData(::GlobalNamespace::MultiplayerResultsData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerResultsData*, 0x20>(this, std::forward<::GlobalNamespace::MultiplayerResultsData*>(value));
}
constexpr ::GlobalNamespace::MultiplayerResultsData* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0::__get_multiplayerResultsData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerResultsData*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsData*> GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0::__get_multiplayerResultsData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerResultsData*, 0x20>(this);
}
inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0*>());
}
inline void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0::_HandleMultiplayerLevelDidFinish_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass30_0*>::get(),
                            "<HandleMultiplayerLevelDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
//  Writing Method size for method: ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0::*)()>(&::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231f614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0._HandleMultiplayerLevelDidDisconnect_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0::_HandleMultiplayerLevelDidDisconnect_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x231fd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0*>::get(),
                            "<HandleMultiplayerLevelDidDisconnect>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0::__set___4__this(::GlobalNamespace::MenuTransitionsHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x10>(this, std::forward<::GlobalNamespace::MenuTransitionsHelper*>(value));
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x10>(this);
}
constexpr void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0::__set_disconnectedReason(::GlobalNamespace::DisconnectedReason  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DisconnectedReason, 0x18>(this, std::forward<::GlobalNamespace::DisconnectedReason>(value));
}
constexpr ::GlobalNamespace::DisconnectedReason& GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0::__get_disconnectedReason()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DisconnectedReason, 0x18>(this);
}
constexpr ::GlobalNamespace::DisconnectedReason const& GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0::__get_disconnectedReason() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DisconnectedReason, 0x18>(this);
}
inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0*>());
}
inline void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0::_HandleMultiplayerLevelDidDisconnect_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass31_0*>::get(),
                            "<HandleMultiplayerLevelDidDisconnect>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
//  Writing Method size for method: ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0::*)()>(&::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231f7dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0._HandleMissionLevelSceneDidFinish_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0::_HandleMissionLevelSceneDidFinish_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x231fdc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0*>::get(),
                            "<HandleMissionLevelSceneDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0::__set___4__this(::GlobalNamespace::MenuTransitionsHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x10>(this, std::forward<::GlobalNamespace::MenuTransitionsHelper*>(value));
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x10>(this);
}
constexpr void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0::__set_missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x18>(this, std::forward<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0::__get_missionLevelScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0::__get_missionLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0::__set_missionCompletionResults(::GlobalNamespace::MissionCompletionResults*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionCompletionResults*, 0x20>(this, std::forward<::GlobalNamespace::MissionCompletionResults*>(value));
}
constexpr ::GlobalNamespace::MissionCompletionResults* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0::__get_missionCompletionResults()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionCompletionResults*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionCompletionResults*> GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0::__get_missionCompletionResults() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionCompletionResults*, 0x20>(this);
}
inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0*>());
}
inline void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0::_HandleMissionLevelSceneDidFinish_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass32_0*>::get(),
                            "<HandleMissionLevelSceneDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
//  Writing Method size for method: ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0::*)()>(&::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231f928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0._HandleTutorialSceneDidFinish_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0::_HandleTutorialSceneDidFinish_b__0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x231fe00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0*>::get(),
                            "<HandleTutorialSceneDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0::__set_endState(::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType, 0x10>(this, std::forward<::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>(value));
}
constexpr ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType& GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0::__get_endState()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType, 0x10>(this);
}
constexpr ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType const& GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0::__get_endState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType, 0x10>(this);
}
constexpr void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0::__set___4__this(::GlobalNamespace::MenuTransitionsHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x18>(this, std::forward<::GlobalNamespace::MenuTransitionsHelper*>(value));
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x18>(this);
}
constexpr void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0::__set_tutorialSceneTransitionSetupData(::GlobalNamespace::TutorialScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*, 0x20>(this, std::forward<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0::__get_tutorialSceneTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*> GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0::__get_tutorialSceneTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*, 0x20>(this);
}
inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0*>());
}
inline void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0::_HandleTutorialSceneDidFinish_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0*>::get(),
                            "<HandleTutorialSceneDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
//  Writing Method size for method: ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0::*)()>(&::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231fc44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0._HandleBeatmapEditorGameSceneDidFinish_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0::_HandleBeatmapEditorGameSceneDidFinish_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x231fe3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0*>::get(),
                            "<HandleBeatmapEditorGameSceneDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0::__set___4__this(::GlobalNamespace::MenuTransitionsHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x10>(this, std::forward<::GlobalNamespace::MenuTransitionsHelper*>(value));
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuTransitionsHelper*, 0x10>(this);
}
constexpr void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0::__set_beatmapEditorStandardLevelScenesTransitionSetupData(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, 0x18>(this, std::forward<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0::__get_beatmapEditorStandardLevelScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*> GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0::__get_beatmapEditorStandardLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0::__set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelCompletionResults*, 0x20>(this, std::forward<::GlobalNamespace::LevelCompletionResults*>(value));
}
constexpr ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0::__get_levelCompletionResults()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelCompletionResults*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0::__get_levelCompletionResults() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelCompletionResults*, 0x20>(this);
}
inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0* GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0*>());
}
inline void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0::_HandleBeatmapEditorGameSceneDidFinish_b__0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0*>::get(),
                            "<HandleBeatmapEditorGameSceneDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)()>(&::GlobalNamespace::MenuTransitionsHelper::OnDestroy)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x231dfd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.StartStandardLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::StringW, ::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::OverrideEnvironmentSettings*, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PracticeSettings*, ::StringW, bool, bool, ::System::Action*, ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*, ::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*, ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>)>(&::GlobalNamespace::MenuTransitionsHelper::StartStandardLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x231e390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StartStandardLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.StartStandardLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::StringW, ::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::OverrideEnvironmentSettings*, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PracticeSettings*, ::StringW, bool, bool, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*, ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*, ::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*, ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>)>(&::GlobalNamespace::MenuTransitionsHelper::StartStandardLevel)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x231e3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StartStandardLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.StartMissionLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::StringW, ::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::GameplayModifiers*, ::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>, ::GlobalNamespace::PlayerSpecificSettings*, ::System::Action*, ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*, ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*)>(&::GlobalNamespace::MenuTransitionsHelper::StartMissionLevel)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x231e564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StartMissionLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.StartMultiplayerLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::StringW, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PracticeSettings*, ::StringW, bool, ::System::Action*, ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*, ::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::MenuTransitionsHelper::StartMultiplayerLevel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x231e6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StartMultiplayerLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.StartMultiplayerLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::StringW, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PracticeSettings*, ::StringW, bool, ::System::Action*, ::System::Action_1<::Zenject::DiContainer*>*, ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*, ::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::MenuTransitionsHelper::StartMultiplayerLevel)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x231e720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StartMultiplayerLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.StartTutorial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::GlobalNamespace::PlayerSpecificSettings*, ::System::Action*)>(&::GlobalNamespace::MenuTransitionsHelper::StartTutorial)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x231ed74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StartTutorial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.ShowCredits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)()>(&::GlobalNamespace::MenuTransitionsHelper::ShowCredits)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x231ef2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "ShowCredits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.StartBeatmapEditor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::System::Action*)>(&::GlobalNamespace::MenuTransitionsHelper::StartBeatmapEditor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x231f024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StartBeatmapEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.StartBeatmapEditorStandardLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PracticeSettings*, ::GlobalNamespace::ColorScheme*, bool, ::System::Action*, ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*)>(&::GlobalNamespace::MenuTransitionsHelper::StartBeatmapEditorStandardLevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x231f028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StartBeatmapEditorStandardLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.RestartGame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::System::Action_1<::Zenject::DiContainer*>*)>(&::GlobalNamespace::MenuTransitionsHelper::RestartGame)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x231f02c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "RestartGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.StopStandardLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)()>(&::GlobalNamespace::MenuTransitionsHelper::StopStandardLevel)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x231f090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StopStandardLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.HandleMainGameSceneDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::MenuTransitionsHelper::HandleMainGameSceneDidFinish)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x231f0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "HandleMainGameSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.HandleMultiplayerLevelDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MultiplayerResultsData*)>(&::GlobalNamespace::MenuTransitionsHelper::HandleMultiplayerLevelDidFinish)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x231f2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "HandleMultiplayerLevelDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.HandleMultiplayerLevelDidDisconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::MenuTransitionsHelper::HandleMultiplayerLevelDidDisconnect)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x231f48c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "HandleMultiplayerLevelDidDisconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.HandleMissionLevelSceneDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MissionCompletionResults*)>(&::GlobalNamespace::MenuTransitionsHelper::HandleMissionLevelSceneDidFinish)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x231f61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "HandleMissionLevelSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionCompletionResults*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.HandleTutorialSceneDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::GlobalNamespace::TutorialScenesTransitionSetupDataSO*, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType)>(&::GlobalNamespace::MenuTransitionsHelper::HandleTutorialSceneDidFinish)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x231f7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "HandleTutorialSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.HandleCreditsSceneDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::GlobalNamespace::CreditsScenesTransitionSetupDataSO*)>(&::GlobalNamespace::MenuTransitionsHelper::HandleCreditsSceneDidFinish)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x231f930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "HandleCreditsSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.HandleBeatmapEditorSceneDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*)>(&::GlobalNamespace::MenuTransitionsHelper::HandleBeatmapEditorSceneDidFinish)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x231f9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "HandleBeatmapEditorSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper.HandleBeatmapEditorGameSceneDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::MenuTransitionsHelper::HandleBeatmapEditorGameSceneDidFinish)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x231fb10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "HandleBeatmapEditorGameSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)()>(&::GlobalNamespace::MenuTransitionsHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231fcfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuTransitionsHelper._HandleBeatmapEditorSceneDidFinish_b__35_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuTransitionsHelper::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::MenuTransitionsHelper::_HandleBeatmapEditorSceneDidFinish_b__35_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x231fd04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "<HandleBeatmapEditorSceneDidFinish>b__35_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__appInitScenesTransitionSetupDataContainer(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*, 0x18>(this, std::forward<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*>(value));
}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* GlobalNamespace::MenuTransitionsHelper::__get__appInitScenesTransitionSetupDataContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*> GlobalNamespace::MenuTransitionsHelper::__get__appInitScenesTransitionSetupDataContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*, 0x18>(this);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x20>(this, std::forward<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* GlobalNamespace::MenuTransitionsHelper::__get__standardLevelScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> GlobalNamespace::MenuTransitionsHelper::__get__standardLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x20>(this);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, 0x28>(this, std::forward<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* GlobalNamespace::MenuTransitionsHelper::__get__multiplayerLevelScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*> GlobalNamespace::MenuTransitionsHelper::__get__multiplayerLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, 0x28>(this);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x30>(this, std::forward<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* GlobalNamespace::MenuTransitionsHelper::__get__missionLevelScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> GlobalNamespace::MenuTransitionsHelper::__get__missionLevelScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, 0x30>(this);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__tutorialScenesTransitionSetupData(::GlobalNamespace::TutorialScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*, 0x38>(this, std::forward<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO* GlobalNamespace::MenuTransitionsHelper::__get__tutorialScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*> GlobalNamespace::MenuTransitionsHelper::__get__tutorialScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*, 0x38>(this);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__creditsScenesTransitionSetupData(::GlobalNamespace::CreditsScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*, 0x40>(this, std::forward<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::CreditsScenesTransitionSetupDataSO* GlobalNamespace::MenuTransitionsHelper::__get__creditsScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*> GlobalNamespace::MenuTransitionsHelper::__get__creditsScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*, 0x40>(this);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x48>(this, std::forward<::GlobalNamespace::MainSettingsModelSO*>(value));
}
constexpr ::GlobalNamespace::MainSettingsModelSO* GlobalNamespace::MenuTransitionsHelper::__get__mainSettingsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> GlobalNamespace::MenuTransitionsHelper::__get__mainSettingsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainSettingsModelSO*, 0x48>(this);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager*, 0x50>(this, std::forward<::GlobalNamespace::GameScenesManager*>(value));
}
constexpr ::GlobalNamespace::GameScenesManager* GlobalNamespace::MenuTransitionsHelper::__get__gameScenesManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> GlobalNamespace::MenuTransitionsHelper::__get__gameScenesManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x50>(this);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__beatmapDataCache(::GlobalNamespace::BeatmapDataCache*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCache*, 0x58>(this, std::forward<::GlobalNamespace::BeatmapDataCache*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCache* GlobalNamespace::MenuTransitionsHelper::__get__beatmapDataCache()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCache*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCache*> GlobalNamespace::MenuTransitionsHelper::__get__beatmapDataCache() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCache*, 0x58>(this);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__standardLevelFinishedCallback(::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*, 0x60>(this, std::forward<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>* GlobalNamespace::MenuTransitionsHelper::__get__standardLevelFinishedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*> GlobalNamespace::MenuTransitionsHelper::__get__standardLevelFinishedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*, 0x60>(this);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__standardLevelRestartedCallback(::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*, 0x68>(this, std::forward<::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>* GlobalNamespace::MenuTransitionsHelper::__get__standardLevelRestartedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*> GlobalNamespace::MenuTransitionsHelper::__get__standardLevelRestartedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*, 0x68>(this);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__multiplayerLevelFinishedCallback(::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*, 0x70>(this, std::forward<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>* GlobalNamespace::MenuTransitionsHelper::__get__multiplayerLevelFinishedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*> GlobalNamespace::MenuTransitionsHelper::__get__multiplayerLevelFinishedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*, 0x70>(this);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__multiplayerDidDisconnectCallback(::System::Action_1<::GlobalNamespace::DisconnectedReason>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::DisconnectedReason>*, 0x78>(this, std::forward<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* GlobalNamespace::MenuTransitionsHelper::__get__multiplayerDidDisconnectCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::DisconnectedReason>*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> GlobalNamespace::MenuTransitionsHelper::__get__multiplayerDidDisconnectCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::DisconnectedReason>*, 0x78>(this);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__missionLevelFinishedCallback(::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*, 0x80>(this, std::forward<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>* GlobalNamespace::MenuTransitionsHelper::__get__missionLevelFinishedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*> GlobalNamespace::MenuTransitionsHelper::__get__missionLevelFinishedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*, 0x80>(this);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__missionLevelRestartedCallback(::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*, 0x88>(this, std::forward<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>* GlobalNamespace::MenuTransitionsHelper::__get__missionLevelRestartedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*> GlobalNamespace::MenuTransitionsHelper::__get__missionLevelRestartedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*, 0x88>(this);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__beatmapEditorFinishedCallback(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x90>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::MenuTransitionsHelper::__get__beatmapEditorFinishedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::MenuTransitionsHelper::__get__beatmapEditorFinishedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x90>(this);
}
constexpr void GlobalNamespace::MenuTransitionsHelper::__set__beatmapEditorGameplayLevelFinishedCallback(::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*, 0x98>(this, std::forward<::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*>(value));
}
constexpr ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>* GlobalNamespace::MenuTransitionsHelper::__get__beatmapEditorGameplayLevelFinishedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*> GlobalNamespace::MenuTransitionsHelper::__get__beatmapEditorGameplayLevelFinishedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*, 0x98>(this);
}
inline void GlobalNamespace::MenuTransitionsHelper::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param recordingToolData: ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> (default: {})
inline void GlobalNamespace::MenuTransitionsHelper::StartStandardLevel(::StringW  gameMode, ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::OverrideEnvironmentSettings*  overrideEnvironmentSettings, ::GlobalNamespace::ColorScheme*  overrideColorScheme, ::GlobalNamespace::ColorScheme*  beatmapOverrideColorScheme, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings, ::GlobalNamespace::PracticeSettings*  practiceSettings, ::StringW  backButtonText, bool  useTestNoteCutSoundEffects, bool  startPaused, ::System::Action*  beforeSceneSwitchCallback, ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  levelFinishedCallback, ::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  levelRestartedCallback, ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>  recordingToolData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StartStandardLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, gameMode, difficultyBeatmap, previewBeatmapLevel, overrideEnvironmentSettings, overrideColorScheme, beatmapOverrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, backButtonText, useTestNoteCutSoundEffects, startPaused, beforeSceneSwitchCallback, levelFinishedCallback, levelRestartedCallback, recordingToolData);
}
/// @param recordingToolData: ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> (default: {})
inline void GlobalNamespace::MenuTransitionsHelper::StartStandardLevel(::StringW  gameMode, ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::OverrideEnvironmentSettings*  overrideEnvironmentSettings, ::GlobalNamespace::ColorScheme*  overrideColorScheme, ::GlobalNamespace::ColorScheme*  beatmapOverrideColorScheme, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings, ::GlobalNamespace::PracticeSettings*  practiceSettings, ::StringW  backButtonText, bool  useTestNoteCutSoundEffects, bool  startPaused, ::System::Action*  beforeSceneSwitchCallback, ::System::Action_1<::Zenject::DiContainer*>*  afterSceneSwitchCallback, ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  levelFinishedCallback, ::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  levelRestartedCallback, ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>  recordingToolData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StartStandardLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, gameMode, difficultyBeatmap, previewBeatmapLevel, overrideEnvironmentSettings, overrideColorScheme, beatmapOverrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, backButtonText, useTestNoteCutSoundEffects, startPaused, beforeSceneSwitchCallback, afterSceneSwitchCallback, levelFinishedCallback, levelRestartedCallback, recordingToolData);
}
/// @param levelRestartedCallback: ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>* (default: csnull)
inline void GlobalNamespace::MenuTransitionsHelper::StartMissionLevel(::StringW  missionId, ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::ColorScheme*  overrideColorScheme, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>  missionObjectives, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings, ::System::Action*  beforeSceneSwitchCallback, ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*  levelFinishedCallback, ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*  levelRestartedCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StartMissionLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MissionCompletionResults*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, missionId, difficultyBeatmap, previewBeatmapLevel, overrideColorScheme, gameplayModifiers, missionObjectives, playerSpecificSettings, beforeSceneSwitchCallback, levelFinishedCallback, levelRestartedCallback);
}
inline void GlobalNamespace::MenuTransitionsHelper::StartMultiplayerLevel(::StringW  gameMode, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ::GlobalNamespace::ColorScheme*  overrideColorScheme, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings, ::GlobalNamespace::PracticeSettings*  practiceSettings, ::StringW  backButtonText, bool  useTestNoteCutSoundEffects, ::System::Action*  beforeSceneSwitchCallback, ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*  levelFinishedCallback, ::System::Action_1<::GlobalNamespace::DisconnectedReason>*  didDisconnectCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StartMultiplayerLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, gameMode, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, difficultyBeatmap, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, backButtonText, useTestNoteCutSoundEffects, beforeSceneSwitchCallback, levelFinishedCallback, didDisconnectCallback);
}
inline void GlobalNamespace::MenuTransitionsHelper::StartMultiplayerLevel(::StringW  gameMode, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ::GlobalNamespace::ColorScheme*  overrideColorScheme, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings, ::GlobalNamespace::PracticeSettings*  practiceSettings, ::StringW  backButtonText, bool  useTestNoteCutSoundEffects, ::System::Action*  beforeSceneSwitchCallback, ::System::Action_1<::Zenject::DiContainer*>*  afterSceneSwitchCallback, ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*  levelFinishedCallback, ::System::Action_1<::GlobalNamespace::DisconnectedReason>*  didDisconnectCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StartMultiplayerLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*,::GlobalNamespace::MultiplayerResultsData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, gameMode, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, difficultyBeatmap, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, backButtonText, useTestNoteCutSoundEffects, beforeSceneSwitchCallback, afterSceneSwitchCallback, levelFinishedCallback, didDisconnectCallback);
}
/// @param beforeSceneSwitchCallback: ::System::Action* (default: csnull)
inline void GlobalNamespace::MenuTransitionsHelper::StartTutorial(::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings, ::System::Action*  beforeSceneSwitchCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StartTutorial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playerSpecificSettings, beforeSceneSwitchCallback);
}
inline void GlobalNamespace::MenuTransitionsHelper::ShowCredits()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "ShowCredits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MenuTransitionsHelper::StartBeatmapEditor(::System::Action*  beatmapEditorFinishedCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StartBeatmapEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapEditorFinishedCallback);
}
inline void GlobalNamespace::MenuTransitionsHelper::StartBeatmapEditorStandardLevel(::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings, ::GlobalNamespace::PracticeSettings*  practiceSettings, ::GlobalNamespace::ColorScheme*  colorScheme, bool  useFirstPersonFlyingController, ::System::Action*  beforeSceneSwitchCallback, ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*  levelFinishedCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StartBeatmapEditorStandardLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*,::GlobalNamespace::LevelCompletionResults*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, difficultyBeatmap, previewBeatmapLevel, gameplayModifiers, playerSpecificSettings, practiceSettings, colorScheme, useFirstPersonFlyingController, beforeSceneSwitchCallback, levelFinishedCallback);
}
/// @param finishCallback: ::System::Action_1<::Zenject::DiContainer*>* (default: csnull)
inline void GlobalNamespace::MenuTransitionsHelper::RestartGame(::System::Action_1<::Zenject::DiContainer*>*  finishCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "RestartGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, finishCallback);
}
inline void GlobalNamespace::MenuTransitionsHelper::StopStandardLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "StopStandardLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MenuTransitionsHelper::HandleMainGameSceneDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  standardLevelScenesTransitionSetupData, ::GlobalNamespace::LevelCompletionResults*  levelCompletionResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "HandleMainGameSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, standardLevelScenesTransitionSetupData, levelCompletionResults);
}
inline void GlobalNamespace::MenuTransitionsHelper::HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  multiplayerLevelScenesTransitionSetupData, ::GlobalNamespace::MultiplayerResultsData*  multiplayerResultsData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "HandleMultiplayerLevelDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, multiplayerLevelScenesTransitionSetupData, multiplayerResultsData);
}
inline void GlobalNamespace::MenuTransitionsHelper::HandleMultiplayerLevelDidDisconnect(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  multiplayerLevelScenesTransitionSetupData, ::GlobalNamespace::DisconnectedReason  disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "HandleMultiplayerLevelDidDisconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, multiplayerLevelScenesTransitionSetupData, disconnectedReason);
}
inline void GlobalNamespace::MenuTransitionsHelper::HandleMissionLevelSceneDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*  missionLevelScenesTransitionSetupData, ::GlobalNamespace::MissionCompletionResults*  missionCompletionResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "HandleMissionLevelSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionCompletionResults*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, missionLevelScenesTransitionSetupData, missionCompletionResults);
}
inline void GlobalNamespace::MenuTransitionsHelper::HandleTutorialSceneDidFinish(::GlobalNamespace::TutorialScenesTransitionSetupDataSO*  tutorialSceneTransitionSetupData, ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType  endState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "HandleTutorialSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tutorialSceneTransitionSetupData, endState);
}
inline void GlobalNamespace::MenuTransitionsHelper::HandleCreditsSceneDidFinish(::GlobalNamespace::CreditsScenesTransitionSetupDataSO*  creditsSceneTransitionSetupData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "HandleCreditsSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, creditsSceneTransitionSetupData);
}
inline void GlobalNamespace::MenuTransitionsHelper::HandleBeatmapEditorSceneDidFinish(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*  beatmapEditorScenesTransitionSetupData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "HandleBeatmapEditorSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapEditorScenesTransitionSetupData);
}
inline void GlobalNamespace::MenuTransitionsHelper::HandleBeatmapEditorGameSceneDidFinish(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*  beatmapEditorStandardLevelScenesTransitionSetupData, ::GlobalNamespace::LevelCompletionResults*  levelCompletionResults)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "HandleBeatmapEditorGameSceneDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapEditorStandardLevelScenesTransitionSetupData, levelCompletionResults);
}
inline ::GlobalNamespace::MenuTransitionsHelper* GlobalNamespace::MenuTransitionsHelper::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MenuTransitionsHelper*>());
}
inline void GlobalNamespace::MenuTransitionsHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MenuTransitionsHelper::_HandleBeatmapEditorSceneDidFinish_b__35_0(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuTransitionsHelper*>::get(),
                            "<HandleBeatmapEditorSceneDidFinish>b__35_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
