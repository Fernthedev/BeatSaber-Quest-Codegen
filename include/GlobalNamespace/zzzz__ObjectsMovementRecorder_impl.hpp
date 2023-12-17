#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ObjectsMovementRecorder_def.hpp"
#include "GlobalNamespace/zzzz__ObjectsMovementRecorder_def.hpp"
#include "GlobalNamespace/zzzz__PlaybackRenderer_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecorder_def.hpp"
#include "GlobalNamespace/zzzz__PoseObject_def.hpp"
#include "GlobalNamespace/zzzz__PoseObjectIdSO_def.hpp"
#include "GlobalNamespace/zzzz__PosesPlayback_def.hpp"
#include "GlobalNamespace/zzzz__PlaybackScreenshotRecorder_def.hpp"
#include "GlobalNamespace/zzzz__IPosesSerializer_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
constexpr void GlobalNamespace::__ObjectsMovementRecorder__Mode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ObjectsMovementRecorder__Mode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__ObjectsMovementRecorder__Mode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode::__ObjectsMovementRecorder__Mode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode  GlobalNamespace::__ObjectsMovementRecorder__Mode::Record{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode  GlobalNamespace::__ObjectsMovementRecorder__Mode::Playback{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode  GlobalNamespace::__ObjectsMovementRecorder__Mode::Off{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__ObjectsMovementRecorder__CameraView::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ObjectsMovementRecorder__CameraView::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__ObjectsMovementRecorder__CameraView::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView::__ObjectsMovementRecorder__CameraView(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView  GlobalNamespace::__ObjectsMovementRecorder__CameraView::FirstPerson{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView  GlobalNamespace::__ObjectsMovementRecorder__CameraView::ThirdPerson{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::__ObjectsMovementRecorder__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ObjectsMovementRecorder__InitData::*)(::GlobalNamespace::__ObjectsMovementRecorder__Mode, ::StringW, ::GlobalNamespace::__ObjectsMovementRecorder__CameraView, bool, bool, int32_t, int32_t, int32_t, ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, bool, ::GlobalNamespace::IBeatSaberLogger*, ::GlobalNamespace::IPosesSerializer*)>(&::GlobalNamespace::__ObjectsMovementRecorder__InitData::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2300138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ObjectsMovementRecorder__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObjectsMovementRecorder__Mode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObjectsMovementRecorder__CameraView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberLogger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPosesSerializer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__ObjectsMovementRecorder__InitData::__set_mode(::GlobalNamespace::__ObjectsMovementRecorder__Mode  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__Mode, 0x10>(this, std::forward<::GlobalNamespace::__ObjectsMovementRecorder__Mode>(value));
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_mode()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__Mode, 0x10>(this);
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode const& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_mode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__Mode, 0x10>(this);
}
constexpr void GlobalNamespace::__ObjectsMovementRecorder__InitData::__set_recordingPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_recordingPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_recordingPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::__ObjectsMovementRecorder__InitData::__set_cameraView(::GlobalNamespace::__ObjectsMovementRecorder__CameraView  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__CameraView, 0x20>(this, std::forward<::GlobalNamespace::__ObjectsMovementRecorder__CameraView>(value));
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_cameraView()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__CameraView, 0x20>(this);
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView const& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_cameraView() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__CameraView, 0x20>(this);
}
constexpr void GlobalNamespace::__ObjectsMovementRecorder__InitData::__set_addDateTimeSuffixToRecordingName(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_addDateTimeSuffixToRecordingName()  {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr bool const& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_addDateTimeSuffixToRecordingName() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr void GlobalNamespace::__ObjectsMovementRecorder__InitData::__set_screenshotRecording(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x25>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_screenshotRecording()  {
return ::cordl_internals::getInstanceField<bool, 0x25>(this);
}
constexpr bool const& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_screenshotRecording() const {
return ::cordl_internals::getInstanceField<bool, 0x25>(this);
}
constexpr void GlobalNamespace::__ObjectsMovementRecorder__InitData::__set_screenshotWidth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_screenshotWidth()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_screenshotWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void GlobalNamespace::__ObjectsMovementRecorder__InitData::__set_screenshotHeight(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_screenshotHeight()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_screenshotHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void GlobalNamespace::__ObjectsMovementRecorder__InitData::__set_framerate(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_framerate()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_framerate() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void GlobalNamespace::__ObjectsMovementRecorder__InitData::__set_playbackScreenshots(::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, 0x38>(this, std::forward<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_playbackScreenshots()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, 0x38>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> const& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_playbackScreenshots() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, 0x38>(this);
}
constexpr void GlobalNamespace::__ObjectsMovementRecorder__InitData::__set_saveToOldFormat(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_saveToOldFormat()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_saveToOldFormat() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void GlobalNamespace::__ObjectsMovementRecorder__InitData::__set_posesSerializer(::GlobalNamespace::IPosesSerializer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPosesSerializer*, 0x48>(this, std::forward<::GlobalNamespace::IPosesSerializer*>(value));
}
constexpr ::GlobalNamespace::IPosesSerializer* GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_posesSerializer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPosesSerializer*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPosesSerializer*> GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_posesSerializer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPosesSerializer*, 0x48>(this);
}
constexpr void GlobalNamespace::__ObjectsMovementRecorder__InitData::__set_logger(::GlobalNamespace::IBeatSaberLogger*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatSaberLogger*, 0x50>(this, std::forward<::GlobalNamespace::IBeatSaberLogger*>(value));
}
constexpr ::GlobalNamespace::IBeatSaberLogger* GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_logger()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatSaberLogger*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> GlobalNamespace::__ObjectsMovementRecorder__InitData::__get_logger() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatSaberLogger*, 0x50>(this);
}
inline ::GlobalNamespace::__ObjectsMovementRecorder__InitData* GlobalNamespace::__ObjectsMovementRecorder__InitData::New_ctor(::GlobalNamespace::__ObjectsMovementRecorder__Mode  mode, ::StringW  recordingPath, ::GlobalNamespace::__ObjectsMovementRecorder__CameraView  cameraView, bool  addDateTimeSuffixToRecordingName, bool  screenshotRecording, int32_t  screenshotWidth, int32_t  screenshotHeight, int32_t  framerate, ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>  playbackScreenshots, bool  saveToOldFormat, ::GlobalNamespace::IBeatSaberLogger*  logger, ::GlobalNamespace::IPosesSerializer*  posesSerializer)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ObjectsMovementRecorder__InitData*>(mode, recordingPath, cameraView, addDateTimeSuffixToRecordingName, screenshotRecording, screenshotWidth, screenshotHeight, framerate, playbackScreenshots, saveToOldFormat, logger, posesSerializer));
}
inline void GlobalNamespace::__ObjectsMovementRecorder__InitData::_ctor(::GlobalNamespace::__ObjectsMovementRecorder__Mode  mode, ::StringW  recordingPath, ::GlobalNamespace::__ObjectsMovementRecorder__CameraView  cameraView, bool  addDateTimeSuffixToRecordingName, bool  screenshotRecording, int32_t  screenshotWidth, int32_t  screenshotHeight, int32_t  framerate, ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>  playbackScreenshots, bool  saveToOldFormat, ::GlobalNamespace::IBeatSaberLogger*  logger, ::GlobalNamespace::IPosesSerializer*  posesSerializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ObjectsMovementRecorder__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObjectsMovementRecorder__Mode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObjectsMovementRecorder__CameraView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberLogger*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPosesSerializer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, mode, recordingPath, cameraView, addDateTimeSuffixToRecordingName, screenshotRecording, screenshotWidth, screenshotHeight, framerate, playbackScreenshots, saveToOldFormat, logger, posesSerializer);
}
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorder.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObjectsMovementRecorder::*)()>(&::GlobalNamespace::ObjectsMovementRecorder::Init)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x22fef7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorder.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObjectsMovementRecorder::*)()>(&::GlobalNamespace::ObjectsMovementRecorder::OnDestroy)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x22ffd84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorder.HandleGameStateChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObjectsMovementRecorder::*)()>(&::GlobalNamespace::ObjectsMovementRecorder::HandleGameStateChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22fffc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder*>::get(),
                            "HandleGameStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObjectsMovementRecorder::*)()>(&::GlobalNamespace::ObjectsMovementRecorder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2300128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ObjectsMovementRecorder::__set__poseObjects(::ArrayW<::GlobalNamespace::PoseObject*,::Array<::GlobalNamespace::PoseObject*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::PoseObject*,::Array<::GlobalNamespace::PoseObject*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::PoseObject*,::Array<::GlobalNamespace::PoseObject*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::PoseObject*,::Array<::GlobalNamespace::PoseObject*>*>& GlobalNamespace::ObjectsMovementRecorder::__get__poseObjects()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::PoseObject*,::Array<::GlobalNamespace::PoseObject*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::PoseObject*,::Array<::GlobalNamespace::PoseObject*>*> const& GlobalNamespace::ObjectsMovementRecorder::__get__poseObjects() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::PoseObject*,::Array<::GlobalNamespace::PoseObject*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__set__livPoseObjectId(::GlobalNamespace::PoseObjectIdSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PoseObjectIdSO*, 0x20>(this, std::forward<::GlobalNamespace::PoseObjectIdSO*>(value));
}
constexpr ::GlobalNamespace::PoseObjectIdSO* GlobalNamespace::ObjectsMovementRecorder::__get__livPoseObjectId()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PoseObjectIdSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PoseObjectIdSO*> GlobalNamespace::ObjectsMovementRecorder::__get__livPoseObjectId() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PoseObjectIdSO*, 0x20>(this);
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__set__recorder(::GlobalNamespace::PosesRecorder*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PosesRecorder*, 0x28>(this, std::forward<::GlobalNamespace::PosesRecorder*>(value));
}
constexpr ::GlobalNamespace::PosesRecorder* GlobalNamespace::ObjectsMovementRecorder::__get__recorder()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PosesRecorder*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PosesRecorder*> GlobalNamespace::ObjectsMovementRecorder::__get__recorder() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PosesRecorder*, 0x28>(this);
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__set__playback(::GlobalNamespace::PosesPlayback*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PosesPlayback*, 0x30>(this, std::forward<::GlobalNamespace::PosesPlayback*>(value));
}
constexpr ::GlobalNamespace::PosesPlayback* GlobalNamespace::ObjectsMovementRecorder::__get__playback()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PosesPlayback*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PosesPlayback*> GlobalNamespace::ObjectsMovementRecorder::__get__playback() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PosesPlayback*, 0x30>(this);
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__set__playbackScreenshotRecorder(::GlobalNamespace::PlaybackScreenshotRecorder*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlaybackScreenshotRecorder*, 0x38>(this, std::forward<::GlobalNamespace::PlaybackScreenshotRecorder*>(value));
}
constexpr ::GlobalNamespace::PlaybackScreenshotRecorder* GlobalNamespace::ObjectsMovementRecorder::__get__playbackScreenshotRecorder()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlaybackScreenshotRecorder*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlaybackScreenshotRecorder*> GlobalNamespace::ObjectsMovementRecorder::__get__playbackScreenshotRecorder() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlaybackScreenshotRecorder*, 0x38>(this);
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__set__playbackRender(::GlobalNamespace::PlaybackRenderer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlaybackRenderer*, 0x40>(this, std::forward<::GlobalNamespace::PlaybackRenderer*>(value));
}
constexpr ::GlobalNamespace::PlaybackRenderer* GlobalNamespace::ObjectsMovementRecorder::__get__playbackRender()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlaybackRenderer*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlaybackRenderer*> GlobalNamespace::ObjectsMovementRecorder::__get__playbackRender() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlaybackRenderer*, 0x40>(this);
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__set__externalCameraPrefab(::UnityEngine::Camera*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Camera*, 0x48>(this, std::forward<::UnityEngine::Camera*>(value));
}
constexpr ::UnityEngine::Camera* GlobalNamespace::ObjectsMovementRecorder::__get__externalCameraPrefab()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> GlobalNamespace::ObjectsMovementRecorder::__get__externalCameraPrefab() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x48>(this);
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x50>(this, std::forward<::GlobalNamespace::AudioTimeSyncController*>(value));
}
constexpr ::GlobalNamespace::AudioTimeSyncController* GlobalNamespace::ObjectsMovementRecorder::__get__audioTimeSyncController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> GlobalNamespace::ObjectsMovementRecorder::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x50>(this);
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__set__hmdCamera(::UnityEngine::Camera*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Camera*, 0x58>(this, std::forward<::UnityEngine::Camera*>(value));
}
constexpr ::UnityEngine::Camera* GlobalNamespace::ObjectsMovementRecorder::__get__hmdCamera()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> GlobalNamespace::ObjectsMovementRecorder::__get__hmdCamera() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x58>(this);
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__set__initData(::GlobalNamespace::__ObjectsMovementRecorder__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__InitData*, 0x60>(this, std::forward<::GlobalNamespace::__ObjectsMovementRecorder__InitData*>(value));
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__InitData* GlobalNamespace::ObjectsMovementRecorder::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__InitData*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ObjectsMovementRecorder__InitData*> GlobalNamespace::ObjectsMovementRecorder::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__InitData*, 0x60>(this);
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__set__mode(::GlobalNamespace::__ObjectsMovementRecorder__Mode  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__Mode, 0x68>(this, std::forward<::GlobalNamespace::__ObjectsMovementRecorder__Mode>(value));
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode& GlobalNamespace::ObjectsMovementRecorder::__get__mode()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__Mode, 0x68>(this);
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode const& GlobalNamespace::ObjectsMovementRecorder::__get__mode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__Mode, 0x68>(this);
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__set__recordingPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::ObjectsMovementRecorder::__get__recordingPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this);
}
constexpr ::StringW const& GlobalNamespace::ObjectsMovementRecorder::__get__recordingPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this);
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__set__cameraView(::GlobalNamespace::__ObjectsMovementRecorder__CameraView  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__CameraView, 0x78>(this, std::forward<::GlobalNamespace::__ObjectsMovementRecorder__CameraView>(value));
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView& GlobalNamespace::ObjectsMovementRecorder::__get__cameraView()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__CameraView, 0x78>(this);
}
constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView const& GlobalNamespace::ObjectsMovementRecorder::__get__cameraView() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ObjectsMovementRecorder__CameraView, 0x78>(this);
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__set__externalCamera(::UnityEngine::Camera*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Camera*, 0x80>(this, std::forward<::UnityEngine::Camera*>(value));
}
constexpr ::UnityEngine::Camera* GlobalNamespace::ObjectsMovementRecorder::__get__externalCamera()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> GlobalNamespace::ObjectsMovementRecorder::__get__externalCamera() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x80>(this);
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__set__playbackScreenshots(::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, 0x88>(this, std::forward<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>& GlobalNamespace::ObjectsMovementRecorder::__get__playbackScreenshots()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, 0x88>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> const& GlobalNamespace::ObjectsMovementRecorder::__get__playbackScreenshots() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>, 0x88>(this);
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__set__logger(::GlobalNamespace::IBeatSaberLogger*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatSaberLogger*, 0x90>(this, std::forward<::GlobalNamespace::IBeatSaberLogger*>(value));
}
constexpr ::GlobalNamespace::IBeatSaberLogger* GlobalNamespace::ObjectsMovementRecorder::__get__logger()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatSaberLogger*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> GlobalNamespace::ObjectsMovementRecorder::__get__logger() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatSaberLogger*, 0x90>(this);
}
constexpr void GlobalNamespace::ObjectsMovementRecorder::__set__posesSerializer(::GlobalNamespace::IPosesSerializer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPosesSerializer*, 0x98>(this, std::forward<::GlobalNamespace::IPosesSerializer*>(value));
}
constexpr ::GlobalNamespace::IPosesSerializer* GlobalNamespace::ObjectsMovementRecorder::__get__posesSerializer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPosesSerializer*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPosesSerializer*> GlobalNamespace::ObjectsMovementRecorder::__get__posesSerializer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPosesSerializer*, 0x98>(this);
}
inline void GlobalNamespace::ObjectsMovementRecorder::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ObjectsMovementRecorder::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ObjectsMovementRecorder::HandleGameStateChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder*>::get(),
                            "HandleGameStateChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::ObjectsMovementRecorder* GlobalNamespace::ObjectsMovementRecorder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ObjectsMovementRecorder*>());
}
inline void GlobalNamespace::ObjectsMovementRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectsMovementRecorder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
