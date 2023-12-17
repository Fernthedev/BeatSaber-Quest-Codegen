#pragma once
#include "GlobalNamespace/zzzz__ZenjectSafeBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SongAutopilot_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
#include "GlobalNamespace/zzzz__Vector3SO_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "GlobalNamespace/zzzz__SongAutopilot_def.hpp"
#include "GlobalNamespace/zzzz__PlayerVRControllersManager_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SongAutopilot__Frame._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongAutopilot__Frame::*)(float_t, ::UnityEngine::Pose)>(&::GlobalNamespace::__SongAutopilot__Frame::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x226db90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongAutopilot__Frame>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__SongAutopilot__Frame::__set_time(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__SongAutopilot__Frame::__get_time()  {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::__SongAutopilot__Frame::__get_time() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__SongAutopilot__Frame::__set_pose(::UnityEngine::Pose  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Pose, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Pose>(value));
}
constexpr ::UnityEngine::Pose& GlobalNamespace::__SongAutopilot__Frame::__get_pose()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Pose, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::__SongAutopilot__Frame::__get_pose() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Pose, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__SongAutopilot__Frame::_ctor(float_t  time, ::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongAutopilot__Frame>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time, pose);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SongAutopilot__Frame::__SongAutopilot__Frame(float_t  time, ::UnityEngine::Pose  pose) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->time = time;
this->pose = pose;
}
//  Writing Method size for method: ::GlobalNamespace::SongAutopilot._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongAutopilot::*)()>(&::GlobalNamespace::SongAutopilot::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x226db50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongAutopilot*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SongAutopilot::__set__cutAngle(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SongAutopilot::__get__cutAngle()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::SongAutopilot::__get__cutAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__cutStartOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SongAutopilot::__get__cutStartOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::SongAutopilot::__get__cutStartOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__cutEndOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SongAutopilot::__get__cutEndOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::SongAutopilot::__get__cutEndOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set_saberYOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SongAutopilot::__get_saberYOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::SongAutopilot::__get_saberYOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__controllerPosition(::GlobalNamespace::Vector3SO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3SO*, 0x30>(this, std::forward<::GlobalNamespace::Vector3SO*>(value));
}
constexpr ::GlobalNamespace::Vector3SO* GlobalNamespace::SongAutopilot::__get__controllerPosition()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> GlobalNamespace::SongAutopilot::__get__controllerPosition() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0x30>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__controllerRotation(::GlobalNamespace::Vector3SO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3SO*, 0x38>(this, std::forward<::GlobalNamespace::Vector3SO*>(value));
}
constexpr ::GlobalNamespace::Vector3SO* GlobalNamespace::SongAutopilot::__get__controllerRotation()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> GlobalNamespace::SongAutopilot::__get__controllerRotation() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0x38>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__roomCenter(::GlobalNamespace::Vector3SO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3SO*, 0x40>(this, std::forward<::GlobalNamespace::Vector3SO*>(value));
}
constexpr ::GlobalNamespace::Vector3SO* GlobalNamespace::SongAutopilot::__get__roomCenter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> GlobalNamespace::SongAutopilot::__get__roomCenter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0x40>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__roomRotation(::GlobalNamespace::FloatSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO*, 0x48>(this, std::forward<::GlobalNamespace::FloatSO*>(value));
}
constexpr ::GlobalNamespace::FloatSO* GlobalNamespace::SongAutopilot::__get__roomRotation()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> GlobalNamespace::SongAutopilot::__get__roomRotation() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x48>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__drawHitTimeline(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::SongAutopilot::__get__drawHitTimeline()  {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr bool const& GlobalNamespace::SongAutopilot::__get__drawHitTimeline() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__drawAheadTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SongAutopilot::__get__drawAheadTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr float_t const& GlobalNamespace::SongAutopilot::__get__drawAheadTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__drawAfterTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SongAutopilot::__get__drawAfterTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr float_t const& GlobalNamespace::SongAutopilot::__get__drawAfterTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__bobFrequency(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SongAutopilot::__get__bobFrequency()  {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr float_t const& GlobalNamespace::SongAutopilot::__get__bobFrequency() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__bobAmplitude(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SongAutopilot::__get__bobAmplitude()  {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr float_t const& GlobalNamespace::SongAutopilot::__get__bobAmplitude() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__cameraLocation(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x64>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SongAutopilot::__get__cameraLocation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x64>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SongAutopilot::__get__cameraLocation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x64>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__cameraRotation(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x70>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SongAutopilot::__get__cameraRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x70>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SongAutopilot::__get__cameraRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x70>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__cameraMovementRange(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x7c>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::SongAutopilot::__get__cameraMovementRange()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x7c>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::SongAutopilot::__get__cameraMovementRange() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x7c>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__cameraRotationRange(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x84>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::SongAutopilot::__get__cameraRotationRange()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x84>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::SongAutopilot::__get__cameraRotationRange() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x84>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x90>(this, std::forward<::GlobalNamespace::GameplayCoreSceneSetupData*>(value));
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* GlobalNamespace::SongAutopilot::__get__sceneSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> GlobalNamespace::SongAutopilot::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayCoreSceneSetupData*, 0x90>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__playerVRControllersManager(::GlobalNamespace::PlayerVRControllersManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerVRControllersManager*, 0x98>(this, std::forward<::GlobalNamespace::PlayerVRControllersManager*>(value));
}
constexpr ::GlobalNamespace::PlayerVRControllersManager* GlobalNamespace::SongAutopilot::__get__playerVRControllersManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerVRControllersManager*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerVRControllersManager*> GlobalNamespace::SongAutopilot::__get__playerVRControllersManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerVRControllersManager*, 0x98>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapObjectSpawnController*, 0xa0>(this, std::forward<::GlobalNamespace::IBeatmapObjectSpawnController*>(value));
}
constexpr ::GlobalNamespace::IBeatmapObjectSpawnController* GlobalNamespace::SongAutopilot::__get__beatmapObjectSpawnController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapObjectSpawnController*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> GlobalNamespace::SongAutopilot::__get__beatmapObjectSpawnController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapObjectSpawnController*, 0xa0>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0xa8>(this, std::forward<::GlobalNamespace::BeatmapCallbacksController*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::SongAutopilot::__get__beatmapCallbacksController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> GlobalNamespace::SongAutopilot::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0xa8>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0xb0>(this, std::forward<::GlobalNamespace::IVRPlatformHelper*>(value));
}
constexpr ::GlobalNamespace::IVRPlatformHelper* GlobalNamespace::SongAutopilot::__get__vrPlatformHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> GlobalNamespace::SongAutopilot::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0xb0>(this);
}
constexpr void GlobalNamespace::SongAutopilot::__set__hmdCamera(::UnityEngine::Camera*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Camera*, 0xb8>(this, std::forward<::UnityEngine::Camera*>(value));
}
constexpr ::UnityEngine::Camera* GlobalNamespace::SongAutopilot::__get__hmdCamera()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> GlobalNamespace::SongAutopilot::__get__hmdCamera() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0xb8>(this);
}
inline ::GlobalNamespace::SongAutopilot* GlobalNamespace::SongAutopilot::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SongAutopilot*>());
}
inline void GlobalNamespace::SongAutopilot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongAutopilot*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
