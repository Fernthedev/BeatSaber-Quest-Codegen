#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingSettings_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__ObjectsMovementRecorder_def.hpp"
#include "GlobalNamespace/zzzz__PlaybackRenderer_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingSettings::*)(::StringW, ::GlobalNamespace::IBeatmapLevelPack*, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*, bool, bool, ::GlobalNamespace::__ObjectsMovementRecorder__Mode, ::StringW, ::GlobalNamespace::__ObjectsMovementRecorder__CameraView, bool, bool, int32_t, int32_t, int32_t, ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, bool, float_t, float_t, bool, ::GlobalNamespace::EnvironmentTypeSO*, ::GlobalNamespace::EnvironmentInfoSO*, bool)>(&::GlobalNamespace::RecordingSettings::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2307890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObjectsMovementRecorder__Mode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObjectsMovementRecorder__CameraView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentTypeSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingSettings.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RecordingSettings::*)()>(&::GlobalNamespace::RecordingSettings::ToString)> {
  constexpr static std::size_t size = 0xb54;
  constexpr static std::size_t addrs = 0x2308dd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingSettings*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingSettings*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RecordingSettings::__set_gameMode(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::RecordingSettings::__get_gameMode()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::RecordingSettings::__get_gameMode() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_pack(::GlobalNamespace::IBeatmapLevelPack*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevelPack*, 0x18>(this, std::forward<::GlobalNamespace::IBeatmapLevelPack*>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevelPack* GlobalNamespace::RecordingSettings::__get_pack()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelPack*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> GlobalNamespace::RecordingSettings::__get_pack() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelPack*, 0x18>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_level(::GlobalNamespace::IPreviewBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x20>(this, std::forward<::GlobalNamespace::IPreviewBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::RecordingSettings::__get_level()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> GlobalNamespace::RecordingSettings::__get_level() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x20>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_difficulty(::GlobalNamespace::BeatmapDifficulty  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x28>(this, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::RecordingSettings::__get_difficulty()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x28>(this);
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::RecordingSettings::__get_difficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x28>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_characteristic(::GlobalNamespace::BeatmapCharacteristicSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x30>(this, std::forward<::GlobalNamespace::BeatmapCharacteristicSO*>(value));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::RecordingSettings::__get_characteristic()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> GlobalNamespace::RecordingSettings::__get_characteristic() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCharacteristicSO*, 0x30>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_runLevel(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::RecordingSettings::__get_runLevel()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::RecordingSettings::__get_runLevel() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_recordPerformance(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::RecordingSettings::__get_recordPerformance()  {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr bool const& GlobalNamespace::RecordingSettings::__get_recordPerformance() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_recordingMode(::GlobalNamespace::__ObjectsMovementRecorder__Mode  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__Mode, 0x3c>(this, std::forward<::GlobalNamespace::__ObjectsMovementRecorder__Mode>(value));
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode& GlobalNamespace::RecordingSettings::__get_recordingMode()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__Mode, 0x3c>(this);
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode const& GlobalNamespace::RecordingSettings::__get_recordingMode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__Mode, 0x3c>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_recordingPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::RecordingSettings::__get_recordingPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& GlobalNamespace::RecordingSettings::__get_recordingPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_cameraView(::GlobalNamespace::__ObjectsMovementRecorder__CameraView  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__CameraView, 0x48>(this, std::forward<::GlobalNamespace::__ObjectsMovementRecorder__CameraView>(value));
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView& GlobalNamespace::RecordingSettings::__get_cameraView()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__CameraView, 0x48>(this);
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView const& GlobalNamespace::RecordingSettings::__get_cameraView() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__CameraView, 0x48>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_addDateTimeSuffixToRecordingName(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x4c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::RecordingSettings::__get_addDateTimeSuffixToRecordingName()  {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this);
}
constexpr bool const& GlobalNamespace::RecordingSettings::__get_addDateTimeSuffixToRecordingName() const {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_screenshotRecording(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x4d>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::RecordingSettings::__get_screenshotRecording()  {
return ::cordl_internals::getInstanceField<bool, 0x4d>(this);
}
constexpr bool const& GlobalNamespace::RecordingSettings::__get_screenshotRecording() const {
return ::cordl_internals::getInstanceField<bool, 0x4d>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_screenshotWidth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::RecordingSettings::__get_screenshotWidth()  {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr int32_t const& GlobalNamespace::RecordingSettings::__get_screenshotWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_screenshotHeight(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::RecordingSettings::__get_screenshotHeight()  {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr int32_t const& GlobalNamespace::RecordingSettings::__get_screenshotHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_framerate(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::RecordingSettings::__get_framerate()  {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr int32_t const& GlobalNamespace::RecordingSettings::__get_framerate() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_playbackScreenshots(::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, 0x60>(this, std::forward<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>& GlobalNamespace::RecordingSettings::__get_playbackScreenshots()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, 0x60>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> const& GlobalNamespace::RecordingSettings::__get_playbackScreenshots() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, 0x60>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_practice(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::RecordingSettings::__get_practice()  {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr bool const& GlobalNamespace::RecordingSettings::__get_practice() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_startSongTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::RecordingSettings::__get_startSongTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this);
}
constexpr float_t const& GlobalNamespace::RecordingSettings::__get_startSongTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_songSpeedMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::RecordingSettings::__get_songSpeedMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr float_t const& GlobalNamespace::RecordingSettings::__get_songSpeedMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_overrideEnvironments(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x74>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::RecordingSettings::__get_overrideEnvironments()  {
return ::cordl_internals::getInstanceField<bool, 0x74>(this);
}
constexpr bool const& GlobalNamespace::RecordingSettings::__get_overrideEnvironments() const {
return ::cordl_internals::getInstanceField<bool, 0x74>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_environmentType(::GlobalNamespace::EnvironmentTypeSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentTypeSO*, 0x78>(this, std::forward<::GlobalNamespace::EnvironmentTypeSO*>(value));
}
constexpr ::GlobalNamespace::EnvironmentTypeSO* GlobalNamespace::RecordingSettings::__get_environmentType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentTypeSO*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentTypeSO*> GlobalNamespace::RecordingSettings::__get_environmentType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentTypeSO*, 0x78>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x80>(this, std::forward<::GlobalNamespace::EnvironmentInfoSO*>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::RecordingSettings::__get_environmentInfo()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> GlobalNamespace::RecordingSettings::__get_environmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x80>(this);
}
constexpr void GlobalNamespace::RecordingSettings::__set_saveToOldFormat(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::RecordingSettings::__get_saveToOldFormat()  {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr bool const& GlobalNamespace::RecordingSettings::__get_saveToOldFormat() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
inline ::GlobalNamespace::RecordingSettings* GlobalNamespace::RecordingSettings::New_ctor(::StringW  gameMode, ::GlobalNamespace::IBeatmapLevelPack*  pack, ::GlobalNamespace::IPreviewBeatmapLevel*  level, ::GlobalNamespace::BeatmapDifficulty  difficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  characteristic, bool  runLevel, bool  recordPerformance, ::GlobalNamespace::__ObjectsMovementRecorder__Mode  recordingMode, ::StringW  recordingPath, ::GlobalNamespace::__ObjectsMovementRecorder__CameraView  cameraView, bool  addDateTimeSuffixToRecordingName, bool  screenshotRecording, int32_t  screenshotWidth, int32_t  screenshotHeight, int32_t  framerate, ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>  playbackScreenshots, bool  practice, float_t  startSongTime, float_t  songSpeedMultiplier, bool  overrideEnvironments, ::GlobalNamespace::EnvironmentTypeSO*  environmentType, ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo, bool  saveToOldFormat)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RecordingSettings*>(gameMode, pack, level, difficulty, characteristic, runLevel, recordPerformance, recordingMode, recordingPath, cameraView, addDateTimeSuffixToRecordingName, screenshotRecording, screenshotWidth, screenshotHeight, framerate, playbackScreenshots, practice, startSongTime, songSpeedMultiplier, overrideEnvironments, environmentType, environmentInfo, saveToOldFormat));
}
inline void GlobalNamespace::RecordingSettings::_ctor(::StringW  gameMode, ::GlobalNamespace::IBeatmapLevelPack*  pack, ::GlobalNamespace::IPreviewBeatmapLevel*  level, ::GlobalNamespace::BeatmapDifficulty  difficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  characteristic, bool  runLevel, bool  recordPerformance, ::GlobalNamespace::__ObjectsMovementRecorder__Mode  recordingMode, ::StringW  recordingPath, ::GlobalNamespace::__ObjectsMovementRecorder__CameraView  cameraView, bool  addDateTimeSuffixToRecordingName, bool  screenshotRecording, int32_t  screenshotWidth, int32_t  screenshotHeight, int32_t  framerate, ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>  playbackScreenshots, bool  practice, float_t  startSongTime, float_t  songSpeedMultiplier, bool  overrideEnvironments, ::GlobalNamespace::EnvironmentTypeSO*  environmentType, ::GlobalNamespace::EnvironmentInfoSO*  environmentInfo, bool  saveToOldFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObjectsMovementRecorder__Mode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObjectsMovementRecorder__CameraView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentTypeSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, gameMode, pack, level, difficulty, characteristic, runLevel, recordPerformance, recordingMode, recordingPath, cameraView, addDateTimeSuffixToRecordingName, screenshotRecording, screenshotWidth, screenshotHeight, framerate, playbackScreenshots, practice, startSongTime, songSpeedMultiplier, overrideEnvironments, environmentType, environmentInfo, saveToOldFormat);
}
inline ::StringW GlobalNamespace::RecordingSettings::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingSettings*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
