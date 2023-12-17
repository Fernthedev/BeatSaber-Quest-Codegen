#pragma once
#include "GlobalNamespace/zzzz__MenuDestination_impl.hpp"
#include "GlobalNamespace/zzzz__RunLevelMenuDestination_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RunLevelMenuDestination._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RunLevelMenuDestination::*)(::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::GameplayModifiers*, bool, float_t, float_t, bool, ::StringW, ::StringW, bool)>(&::GlobalNamespace::RunLevelMenuDestination::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x223dd50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunLevelMenuDestination*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RunLevelMenuDestination::__set_beatmapLevelPack(::GlobalNamespace::IBeatmapLevelPack*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevelPack*, 0x10>(this, std::forward<::GlobalNamespace::IBeatmapLevelPack*>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevelPack* GlobalNamespace::RunLevelMenuDestination::__get_beatmapLevelPack()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelPack*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> GlobalNamespace::RunLevelMenuDestination::__get_beatmapLevelPack() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelPack*, 0x10>(this);
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x18>(this, std::forward<::GlobalNamespace::IPreviewBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::RunLevelMenuDestination::__get_previewBeatmapLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> GlobalNamespace::RunLevelMenuDestination::__get_previewBeatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x18>(this);
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x20>(this, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::RunLevelMenuDestination::__get_beatmapDifficulty()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x20>(this);
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::RunLevelMenuDestination::__get_beatmapDifficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x20>(this);
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x28>(this, std::forward<::GlobalNamespace::BeatmapCharacteristicSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::RunLevelMenuDestination::__get_beatmapCharacteristic()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> GlobalNamespace::RunLevelMenuDestination::__get_beatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x28>(this);
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__set_gameplayModifiers(::GlobalNamespace::GameplayModifiers*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifiers*, 0x30>(this, std::forward<::GlobalNamespace::GameplayModifiers*>(value));
}
constexpr ::GlobalNamespace::GameplayModifiers* GlobalNamespace::RunLevelMenuDestination::__get_gameplayModifiers()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiers*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> GlobalNamespace::RunLevelMenuDestination::__get_gameplayModifiers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiers*, 0x30>(this);
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__set_practice(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::RunLevelMenuDestination::__get_practice()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::RunLevelMenuDestination::__get_practice() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__set_startSongTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::RunLevelMenuDestination::__get_startSongTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& GlobalNamespace::RunLevelMenuDestination::__get_startSongTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__set_songSpeedMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::RunLevelMenuDestination::__get_songSpeedMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::RunLevelMenuDestination::__get_songSpeedMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__set_overrideEnvironments(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x44>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::RunLevelMenuDestination::__get_overrideEnvironments()  {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
constexpr bool const& GlobalNamespace::RunLevelMenuDestination::__get_overrideEnvironments() const {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__set_environmentType(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::RunLevelMenuDestination::__get_environmentType()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& GlobalNamespace::RunLevelMenuDestination::__get_environmentType() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__set_environmentName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::RunLevelMenuDestination::__get_environmentName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr ::StringW const& GlobalNamespace::RunLevelMenuDestination::__get_environmentName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr void GlobalNamespace::RunLevelMenuDestination::__set_quitAppAfterRun(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::RunLevelMenuDestination::__get_quitAppAfterRun()  {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr bool const& GlobalNamespace::RunLevelMenuDestination::__get_quitAppAfterRun() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
inline ::GlobalNamespace::RunLevelMenuDestination* GlobalNamespace::RunLevelMenuDestination::New_ctor(::GlobalNamespace::IBeatmapLevelPack*  beatmapLevelPack, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, bool  practice, float_t  startSongTime, float_t  songSpeedMultiplier, bool  overrideEnvironments, ::StringW  environmentType, ::StringW  environmentName, bool  quitAppAfterRun)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RunLevelMenuDestination*>(beatmapLevelPack, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, gameplayModifiers, practice, startSongTime, songSpeedMultiplier, overrideEnvironments, environmentType, environmentName, quitAppAfterRun));
}
inline void GlobalNamespace::RunLevelMenuDestination::_ctor(::GlobalNamespace::IBeatmapLevelPack*  beatmapLevelPack, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, bool  practice, float_t  startSongTime, float_t  songSpeedMultiplier, bool  overrideEnvironments, ::StringW  environmentType, ::StringW  environmentName, bool  quitAppAfterRun)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RunLevelMenuDestination*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapLevelPack, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, gameplayModifiers, practice, startSongTime, songSpeedMultiplier, overrideEnvironments, environmentType, environmentName, quitAppAfterRun);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
