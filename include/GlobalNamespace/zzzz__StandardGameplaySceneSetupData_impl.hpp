#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__StandardGameplaySceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardGameplaySceneSetupData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardGameplaySceneSetupData::*)(bool, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*, ::StringW, ::GlobalNamespace::GameplayModifiers*, bool)>(&::GlobalNamespace::StandardGameplaySceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x231cdfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardGameplaySceneSetupData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::StandardGameplaySceneSetupData::__set_autoRestart(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::StandardGameplaySceneSetupData::__get_autoRestart()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::StandardGameplaySceneSetupData::__get_autoRestart() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::StandardGameplaySceneSetupData::__set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x18>(this, std::forward<::GlobalNamespace::IPreviewBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::StandardGameplaySceneSetupData::__get_previewBeatmapLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> GlobalNamespace::StandardGameplaySceneSetupData::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x18>(this);
}
constexpr void GlobalNamespace::StandardGameplaySceneSetupData::__set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x20>(this, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::StandardGameplaySceneSetupData::__get_beatmapDifficulty()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x20>(this);
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::StandardGameplaySceneSetupData::__get_beatmapDifficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x20>(this);
}
constexpr void GlobalNamespace::StandardGameplaySceneSetupData::__set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x28>(this, std::forward<::GlobalNamespace::BeatmapCharacteristicSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::StandardGameplaySceneSetupData::__get_beatmapCharacteristic()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> GlobalNamespace::StandardGameplaySceneSetupData::__get_beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x28>(this);
}
constexpr void GlobalNamespace::StandardGameplaySceneSetupData::__set_backButtonText(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::StandardGameplaySceneSetupData::__get_backButtonText()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& GlobalNamespace::StandardGameplaySceneSetupData::__get_backButtonText() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void GlobalNamespace::StandardGameplaySceneSetupData::__set_gameplayModifiers(::GlobalNamespace::GameplayModifiers*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifiers*, 0x38>(this, std::forward<::GlobalNamespace::GameplayModifiers*>(value));
}
constexpr ::GlobalNamespace::GameplayModifiers* GlobalNamespace::StandardGameplaySceneSetupData::__get_gameplayModifiers()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiers*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> GlobalNamespace::StandardGameplaySceneSetupData::__get_gameplayModifiers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiers*, 0x38>(this);
}
constexpr void GlobalNamespace::StandardGameplaySceneSetupData::__set_startPaused(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::StandardGameplaySceneSetupData::__get_startPaused()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& GlobalNamespace::StandardGameplaySceneSetupData::__get_startPaused() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
inline ::GlobalNamespace::StandardGameplaySceneSetupData* GlobalNamespace::StandardGameplaySceneSetupData::New_ctor(bool  autoRestart, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::StringW  backButtonText, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, bool  startPaused)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandardGameplaySceneSetupData*>(autoRestart, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, backButtonText, gameplayModifiers, startPaused));
}
inline void GlobalNamespace::StandardGameplaySceneSetupData::_ctor(bool  autoRestart, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::StringW  backButtonText, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, bool  startPaused)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardGameplaySceneSetupData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, autoRestart, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, backButtonText, gameplayModifiers, startPaused);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
