#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__MissionGameplaySceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionGameplaySceneSetupData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionGameplaySceneSetupData::*)(::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>, bool, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::GameplayModifiers*, ::StringW)>(&::GlobalNamespace::MissionGameplaySceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x231cce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionGameplaySceneSetupData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>, 0x10>(this, std::forward<::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>& GlobalNamespace::MissionGameplaySceneSetupData::__get_missionObjectives()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>, 0x10>(this);
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*> const& GlobalNamespace::MissionGameplaySceneSetupData::__get_missionObjectives() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>, 0x10>(this);
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_autoRestart(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MissionGameplaySceneSetupData::__get_autoRestart()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::MissionGameplaySceneSetupData::__get_autoRestart() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x20>(this, std::forward<::GlobalNamespace::IPreviewBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::MissionGameplaySceneSetupData::__get_previewBeatmapLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> GlobalNamespace::MissionGameplaySceneSetupData::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x20>(this);
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x28>(this, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::MissionGameplaySceneSetupData::__get_beatmapDifficulty()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x28>(this);
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::MissionGameplaySceneSetupData::__get_beatmapDifficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x28>(this);
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x30>(this, std::forward<::GlobalNamespace::BeatmapCharacteristicSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::MissionGameplaySceneSetupData::__get_beatmapCharacteristic()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> GlobalNamespace::MissionGameplaySceneSetupData::__get_beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x30>(this);
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_gameplayModifiers(::GlobalNamespace::GameplayModifiers*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifiers*, 0x38>(this, std::forward<::GlobalNamespace::GameplayModifiers*>(value));
}
constexpr ::GlobalNamespace::GameplayModifiers* GlobalNamespace::MissionGameplaySceneSetupData::__get_gameplayModifiers()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiers*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> GlobalNamespace::MissionGameplaySceneSetupData::__get_gameplayModifiers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiers*, 0x38>(this);
}
constexpr void GlobalNamespace::MissionGameplaySceneSetupData::__set_backButtonText(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::MissionGameplaySceneSetupData::__get_backButtonText()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& GlobalNamespace::MissionGameplaySceneSetupData::__get_backButtonText() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
inline ::GlobalNamespace::MissionGameplaySceneSetupData* GlobalNamespace::MissionGameplaySceneSetupData::New_ctor(::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>  missionObjectives, bool  autoRestart, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::StringW  backButtonText)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionGameplaySceneSetupData*>(missionObjectives, autoRestart, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, gameplayModifiers, backButtonText));
}
inline void GlobalNamespace::MissionGameplaySceneSetupData::_ctor(::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>  missionObjectives, bool  autoRestart, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::StringW  backButtonText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionGameplaySceneSetupData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, missionObjectives, autoRestart, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, gameplayModifiers, backButtonText);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
