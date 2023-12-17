#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__GameEnergyCounter_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__SaberActivityCounter_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__ComboController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRatingsRecorder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PrepareLevelCompletionResults.FillLevelCompletionResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LevelCompletionResults* (::GlobalNamespace::PrepareLevelCompletionResults::*)(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType, ::GlobalNamespace::__LevelCompletionResults__LevelEndAction)>(&::GlobalNamespace::PrepareLevelCompletionResults::FillLevelCompletionResults)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x22607b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrepareLevelCompletionResults*>::get(),
                            "FillLevelCompletionResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrepareLevelCompletionResults._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrepareLevelCompletionResults::*)()>(&::GlobalNamespace::PrepareLevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2260a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrepareLevelCompletionResults*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__gameplayModifiersModelSO(::GlobalNamespace::GameplayModifiersModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifiersModelSO*, 0x18>(this, std::forward<::GlobalNamespace::GameplayModifiersModelSO*>(value));
}
constexpr ::GlobalNamespace::GameplayModifiersModelSO* GlobalNamespace::PrepareLevelCompletionResults::__get__gameplayModifiersModelSO()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiersModelSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> GlobalNamespace::PrepareLevelCompletionResults::__get__gameplayModifiersModelSO() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiersModelSO*, 0x18>(this);
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__saberActivityCounter(::GlobalNamespace::SaberActivityCounter*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SaberActivityCounter*, 0x20>(this, std::forward<::GlobalNamespace::SaberActivityCounter*>(value));
}
constexpr ::GlobalNamespace::SaberActivityCounter* GlobalNamespace::PrepareLevelCompletionResults::__get__saberActivityCounter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberActivityCounter*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberActivityCounter*> GlobalNamespace::PrepareLevelCompletionResults::__get__saberActivityCounter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberActivityCounter*, 0x20>(this);
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__beatmapObjectExecutionRatingsRecorder(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*, 0x28>(this, std::forward<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*>(value));
}
constexpr ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* GlobalNamespace::PrepareLevelCompletionResults::__get__beatmapObjectExecutionRatingsRecorder()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*> GlobalNamespace::PrepareLevelCompletionResults::__get__beatmapObjectExecutionRatingsRecorder() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*, 0x28>(this);
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__scoreController(::GlobalNamespace::IScoreController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IScoreController*, 0x30>(this, std::forward<::GlobalNamespace::IScoreController*>(value));
}
constexpr ::GlobalNamespace::IScoreController* GlobalNamespace::PrepareLevelCompletionResults::__get__scoreController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IScoreController*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> GlobalNamespace::PrepareLevelCompletionResults::__get__scoreController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IScoreController*, 0x30>(this);
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__gameEnergyCounter(::GlobalNamespace::GameEnergyCounter*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameEnergyCounter*, 0x38>(this, std::forward<::GlobalNamespace::GameEnergyCounter*>(value));
}
constexpr ::GlobalNamespace::GameEnergyCounter* GlobalNamespace::PrepareLevelCompletionResults::__get__gameEnergyCounter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameEnergyCounter*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameEnergyCounter*> GlobalNamespace::PrepareLevelCompletionResults::__get__gameEnergyCounter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameEnergyCounter*, 0x38>(this);
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x40>(this, std::forward<::GlobalNamespace::IReadonlyBeatmapData*>(value));
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::PrepareLevelCompletionResults::__get__beatmapData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> GlobalNamespace::PrepareLevelCompletionResults::__get__beatmapData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x40>(this);
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x48>(this, std::forward<::GlobalNamespace::AudioTimeSyncController*>(value));
}
constexpr ::GlobalNamespace::AudioTimeSyncController* GlobalNamespace::PrepareLevelCompletionResults::__get__audioTimeSyncController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> GlobalNamespace::PrepareLevelCompletionResults::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x48>(this);
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__gameplayModifiers(::GlobalNamespace::GameplayModifiers*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifiers*, 0x50>(this, std::forward<::GlobalNamespace::GameplayModifiers*>(value));
}
constexpr ::GlobalNamespace::GameplayModifiers* GlobalNamespace::PrepareLevelCompletionResults::__get__gameplayModifiers()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiers*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> GlobalNamespace::PrepareLevelCompletionResults::__get__gameplayModifiers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiers*, 0x50>(this);
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__comboController(::GlobalNamespace::ComboController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ComboController*, 0x58>(this, std::forward<::GlobalNamespace::ComboController*>(value));
}
constexpr ::GlobalNamespace::ComboController* GlobalNamespace::PrepareLevelCompletionResults::__get__comboController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ComboController*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ComboController*> GlobalNamespace::PrepareLevelCompletionResults::__get__comboController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ComboController*, 0x58>(this);
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::PrepareLevelCompletionResults::FillLevelCompletionResults(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType  levelEndStateType, ::GlobalNamespace::__LevelCompletionResults__LevelEndAction  levelEndAction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrepareLevelCompletionResults*>::get(),
                            "FillLevelCompletionResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*, false>(*this, ___internal_method, levelEndStateType, levelEndAction);
}
inline ::GlobalNamespace::PrepareLevelCompletionResults* GlobalNamespace::PrepareLevelCompletionResults::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PrepareLevelCompletionResults*>());
}
inline void GlobalNamespace::PrepareLevelCompletionResults::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrepareLevelCompletionResults*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
