#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "GlobalNamespace/zzzz__LanguageSO_def.hpp"
#include "GlobalNamespace/zzzz__PerformancePreset_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__ObstaclesQualitySO_def.hpp"
#include "GlobalNamespace/zzzz__IntSO_def.hpp"
#include "GlobalNamespace/zzzz__Vector2IntSO_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__StringSO_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
#include "GlobalNamespace/zzzz__Vector3SO_def.hpp"
#include "GlobalNamespace/zzzz__ObstaclesQuality_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
constexpr void GlobalNamespace::__MainSettingsModelSO__WindowMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__WindowMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__WindowMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainSettingsModelSO__WindowMode::__MainSettingsModelSO__WindowMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__MainSettingsModelSO__WindowMode  GlobalNamespace::__MainSettingsModelSO__WindowMode::Windowed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MainSettingsModelSO__WindowMode  GlobalNamespace::__MainSettingsModelSO__WindowMode::Fullscreen{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO__Config._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO__Config::*)()>(&::GlobalNamespace::__MainSettingsModelSO__Config::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x234f6d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO__Config._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO__Config::*)(::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>)>(&::GlobalNamespace::__MainSettingsModelSO__Config::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x234f7ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO__Config.ApplyPerformancePreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO__Config::*)(::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>)>(&::GlobalNamespace::__MainSettingsModelSO__Config::ApplyPerformancePreset)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x234f8a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(),
                            "ApplyPerformancePreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_version(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__MainSettingsModelSO__Config::__get_version()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__MainSettingsModelSO__Config::__get_version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_windowResolutionWidth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_windowResolutionWidth()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_windowResolutionWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_windowResolutionHeight(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_windowResolutionHeight()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_windowResolutionHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_editorResolutionWidth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_editorResolutionWidth()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_editorResolutionWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_editorResolutionHeight(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_editorResolutionHeight()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_editorResolutionHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_windowMode(::GlobalNamespace::__MainSettingsModelSO__WindowMode  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MainSettingsModelSO__WindowMode, 0x28>(this, std::forward<::GlobalNamespace::__MainSettingsModelSO__WindowMode>(value));
}
constexpr ::GlobalNamespace::__MainSettingsModelSO__WindowMode& GlobalNamespace::__MainSettingsModelSO__Config::__get_windowMode()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MainSettingsModelSO__WindowMode, 0x28>(this);
}
constexpr ::GlobalNamespace::__MainSettingsModelSO__WindowMode const& GlobalNamespace::__MainSettingsModelSO__Config::__get_windowMode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MainSettingsModelSO__WindowMode, 0x28>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_vrResolutionScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_vrResolutionScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_vrResolutionScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_menuVRResolutionScaleMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_menuVRResolutionScaleMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_menuVRResolutionScaleMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_antiAliasingLevel(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_antiAliasingLevel()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_antiAliasingLevel() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_mirrorGraphicsSettings(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_mirrorGraphicsSettings()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_mirrorGraphicsSettings() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_mainEffectGraphicsSettings(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_mainEffectGraphicsSettings()  {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_mainEffectGraphicsSettings() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_bloomGraphicsSettings(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_bloomGraphicsSettings()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_bloomGraphicsSettings() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smokeGraphicsSettings(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smokeGraphicsSettings()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smokeGraphicsSettings() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_burnMarkTrailsEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_burnMarkTrailsEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_burnMarkTrailsEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_screenDisplacementEffectsEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x49>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_screenDisplacementEffectsEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0x49>(this);
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_screenDisplacementEffectsEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x49>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_obstaclesQuality(::GlobalNamespace::ObstaclesQuality  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ObstaclesQuality, 0x4c>(this, std::forward<::GlobalNamespace::ObstaclesQuality>(value));
}
constexpr ::GlobalNamespace::ObstaclesQuality& GlobalNamespace::__MainSettingsModelSO__Config::__get_obstaclesQuality()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ObstaclesQuality, 0x4c>(this);
}
constexpr ::GlobalNamespace::ObstaclesQuality const& GlobalNamespace::__MainSettingsModelSO__Config::__get_obstaclesQuality() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ObstaclesQuality, 0x4c>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_performancePresetKey(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__MainSettingsModelSO__Config::__get_performancePresetKey()  {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr ::StringW const& GlobalNamespace::__MainSettingsModelSO__Config::__get_performancePresetKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_roomCenterX(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_roomCenterX()  {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_roomCenterX() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_roomCenterY(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_roomCenterY()  {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_roomCenterY() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_roomCenterZ(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_roomCenterZ()  {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_roomCenterZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_roomRotation(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_roomRotation()  {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_roomRotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_controllerPositionX(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerPositionX()  {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerPositionX() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_controllerPositionY(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerPositionY()  {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerPositionY() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_controllerPositionZ(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerPositionZ()  {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerPositionZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_controllerRotationX(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x74>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerRotationX()  {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerRotationX() const {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_controllerRotationY(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x78>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerRotationY()  {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerRotationY() const {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_controllerRotationZ(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x7c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerRotationZ()  {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerRotationZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraEnabled(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraEnabled()  {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraEnabled() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraFieldOfView(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x84>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraFieldOfView()  {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraFieldOfView() const {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonPositionX(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x88>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonPositionX()  {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonPositionX() const {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonPositionY(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x8c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonPositionY()  {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonPositionY() const {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonPositionZ(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x90>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonPositionZ()  {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonPositionZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonEulerAnglesX(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x94>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEulerAnglesX()  {
return ::cordl_internals::getInstanceField<float_t, 0x94>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEulerAnglesX() const {
return ::cordl_internals::getInstanceField<float_t, 0x94>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonEulerAnglesY(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x98>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEulerAnglesY()  {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEulerAnglesY() const {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonEulerAnglesZ(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x9c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEulerAnglesZ()  {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEulerAnglesZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonEnabled(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xa0>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEnabled()  {
return ::cordl_internals::getInstanceField<int32_t, 0xa0>(this);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEnabled() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa0>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraRotationSmooth(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xa4>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraRotationSmooth()  {
return ::cordl_internals::getInstanceField<float_t, 0xa4>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraRotationSmooth() const {
return ::cordl_internals::getInstanceField<float_t, 0xa4>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraPositionSmooth(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xa8>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraPositionSmooth()  {
return ::cordl_internals::getInstanceField<float_t, 0xa8>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraPositionSmooth() const {
return ::cordl_internals::getInstanceField<float_t, 0xa8>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_useCustomServerEnvironment(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xac>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_useCustomServerEnvironment()  {
return ::cordl_internals::getInstanceField<bool, 0xac>(this);
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_useCustomServerEnvironment() const {
return ::cordl_internals::getInstanceField<bool, 0xac>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_forceGameLiftServerEnvironment(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xad>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_forceGameLiftServerEnvironment()  {
return ::cordl_internals::getInstanceField<bool, 0xad>(this);
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_forceGameLiftServerEnvironment() const {
return ::cordl_internals::getInstanceField<bool, 0xad>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_customServerHostName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xb0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__MainSettingsModelSO__Config::__get_customServerHostName()  {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this);
}
constexpr ::StringW const& GlobalNamespace::__MainSettingsModelSO__Config::__get_customServerHostName() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_useFixedFoveatedRenderingDuringGameplay(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xb8>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_useFixedFoveatedRenderingDuringGameplay()  {
return ::cordl_internals::getInstanceField<bool, 0xb8>(this);
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_useFixedFoveatedRenderingDuringGameplay() const {
return ::cordl_internals::getInstanceField<bool, 0xb8>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_gpuLevel(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xbc>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_gpuLevel()  {
return ::cordl_internals::getInstanceField<int32_t, 0xbc>(this);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_gpuLevel() const {
return ::cordl_internals::getInstanceField<int32_t, 0xbc>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_cpuLevel(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc0>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_cpuLevel()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc0>(this);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_cpuLevel() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc0>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_targetFramerate(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xc4>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_targetFramerate()  {
return ::cordl_internals::getInstanceField<float_t, 0xc4>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_targetFramerate() const {
return ::cordl_internals::getInstanceField<float_t, 0xc4>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_volume(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xc8>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_volume()  {
return ::cordl_internals::getInstanceField<float_t, 0xc8>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_volume() const {
return ::cordl_internals::getInstanceField<float_t, 0xc8>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_ambientVolumeScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xcc>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_ambientVolumeScale()  {
return ::cordl_internals::getInstanceField<float_t, 0xcc>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_ambientVolumeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0xcc>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_controllersRumbleEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xd0>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllersRumbleEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0xd0>(this);
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllersRumbleEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0xd0>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_enableAlphaFeatures(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xd4>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_enableAlphaFeatures()  {
return ::cordl_internals::getInstanceField<int32_t, 0xd4>(this);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_enableAlphaFeatures() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd4>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_pauseButtonPressDurationLevel(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xd8>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_pauseButtonPressDurationLevel()  {
return ::cordl_internals::getInstanceField<int32_t, 0xd8>(this);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_pauseButtonPressDurationLevel() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd8>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_maxShockwaveParticles(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xdc>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_maxShockwaveParticles()  {
return ::cordl_internals::getInstanceField<int32_t, 0xdc>(this);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_maxShockwaveParticles() const {
return ::cordl_internals::getInstanceField<int32_t, 0xdc>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_overrideAudioLatency(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xe0>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_overrideAudioLatency()  {
return ::cordl_internals::getInstanceField<bool, 0xe0>(this);
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_overrideAudioLatency() const {
return ::cordl_internals::getInstanceField<bool, 0xe0>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_audioLatency(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xe4>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_audioLatency()  {
return ::cordl_internals::getInstanceField<float_t, 0xe4>(this);
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_audioLatency() const {
return ::cordl_internals::getInstanceField<float_t, 0xe4>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_maxNumberOfCutSoundEffects(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xe8>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_maxNumberOfCutSoundEffects()  {
return ::cordl_internals::getInstanceField<int32_t, 0xe8>(this);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_maxNumberOfCutSoundEffects() const {
return ::cordl_internals::getInstanceField<int32_t, 0xe8>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_language(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xf0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__MainSettingsModelSO__Config::__get_language()  {
return ::cordl_internals::getInstanceField<::StringW, 0xf0>(this);
}
constexpr ::StringW const& GlobalNamespace::__MainSettingsModelSO__Config::__get_language() const {
return ::cordl_internals::getInstanceField<::StringW, 0xf0>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_enableFPSCounter(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xf8>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_enableFPSCounter()  {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this);
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_enableFPSCounter() const {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_enableFPSRecorder(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xf9>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_enableFPSRecorder()  {
return ::cordl_internals::getInstanceField<bool, 0xf9>(this);
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_enableFPSRecorder() const {
return ::cordl_internals::getInstanceField<bool, 0xf9>(this);
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_enableMemoryTracker(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xfa>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_enableMemoryTracker()  {
return ::cordl_internals::getInstanceField<bool, 0xfa>(this);
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_enableMemoryTracker() const {
return ::cordl_internals::getInstanceField<bool, 0xfa>(this);
}
inline ::GlobalNamespace::__MainSettingsModelSO__Config* GlobalNamespace::__MainSettingsModelSO__Config::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MainSettingsModelSO__Config*>());
}
inline void GlobalNamespace::__MainSettingsModelSO__Config::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__MainSettingsModelSO__Config* GlobalNamespace::__MainSettingsModelSO__Config::New_ctor(::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>  performancePresetToLoad)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MainSettingsModelSO__Config*>(performancePresetToLoad));
}
inline void GlobalNamespace::__MainSettingsModelSO__Config::_ctor(::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>  performancePresetToLoad)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, performancePresetToLoad);
}
inline void GlobalNamespace::__MainSettingsModelSO__Config::ApplyPerformancePreset(::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>  performancePresetToLoad)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(),
                            "ApplyPerformancePreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, performancePresetToLoad);
}
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::*)()>(&::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::MoveNext)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x234fe44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2350378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__set_config(::GlobalNamespace::__MainSettingsModelSO__Config*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MainSettingsModelSO__Config*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__MainSettingsModelSO__Config*>(value));
}
constexpr ::GlobalNamespace::__MainSettingsModelSO__Config* GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__get_config()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MainSettingsModelSO__Config*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MainSettingsModelSO__Config*> GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__get_config() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MainSettingsModelSO__Config*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>& GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>> const& GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__set___7__wrap1(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__get___7__wrap1()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>& GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*> const& GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "config", ty: "::GlobalNamespace::__MainSettingsModelSO__Config*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::__MainSettingsModelSO__Config*  config, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>  __u__1, ::StringW  __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>  __u__2) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->config = config;
this->__u__1 = __u__1;
this->__7__wrap1 = __7__wrap1;
this->__u__2 = __u__2;
}
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.get_createScreenshotDuringTheGame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MainSettingsModelSO::*)()>(&::GlobalNamespace::MainSettingsModelSO::get_createScreenshotDuringTheGame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234e734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "get_createScreenshotDuringTheGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.set_createScreenshotDuringTheGame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(bool)>(&::GlobalNamespace::MainSettingsModelSO::set_createScreenshotDuringTheGame)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x234e73c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "set_createScreenshotDuringTheGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.get_playingForTheFirstTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MainSettingsModelSO::*)()>(&::GlobalNamespace::MainSettingsModelSO::get_playingForTheFirstTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234e748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "get_playingForTheFirstTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.set_playingForTheFirstTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(bool)>(&::GlobalNamespace::MainSettingsModelSO::set_playingForTheFirstTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x234e750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "set_playingForTheFirstTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::ISaveData*, ::System::Nullable_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>)>(&::GlobalNamespace::MainSettingsModelSO::Initialize)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x234e75c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.Save
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::ISaveData*)>(&::GlobalNamespace::MainSettingsModelSO::Save)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x234f1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "Save",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::ISaveData*, bool)>(&::GlobalNamespace::MainSettingsModelSO::Load)> {
  constexpr static std::size_t size = 0x894;
  constexpr static std::size_t addrs = 0x234e938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.ForceApplyPerformancePresetAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::__MainSettingsModelSO__Config*)>(&::GlobalNamespace::MainSettingsModelSO::ForceApplyPerformancePresetAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x234fa68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "ForceApplyPerformancePresetAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainSettingsModelSO__Config*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.__DeleteSettingsFiles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)()>(&::GlobalNamespace::MainSettingsModelSO::__DeleteSettingsFiles)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x234fb30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "__DeleteSettingsFiles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)()>(&::GlobalNamespace::MainSettingsModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234fc70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MainSettingsModelSO::__set_vrResolutionScale(::GlobalNamespace::FloatSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO*, 0x18>(this, std::forward<::GlobalNamespace::FloatSO*>(value));
}
constexpr ::GlobalNamespace::FloatSO* GlobalNamespace::MainSettingsModelSO::__get_vrResolutionScale()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> GlobalNamespace::MainSettingsModelSO::__get_vrResolutionScale() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x18>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_menuVRResolutionScaleMultiplier(::GlobalNamespace::FloatSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO*, 0x20>(this, std::forward<::GlobalNamespace::FloatSO*>(value));
}
constexpr ::GlobalNamespace::FloatSO* GlobalNamespace::MainSettingsModelSO::__get_menuVRResolutionScaleMultiplier()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> GlobalNamespace::MainSettingsModelSO::__get_menuVRResolutionScaleMultiplier() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x20>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_windowResolution(::GlobalNamespace::Vector2IntSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector2IntSO*, 0x28>(this, std::forward<::GlobalNamespace::Vector2IntSO*>(value));
}
constexpr ::GlobalNamespace::Vector2IntSO* GlobalNamespace::MainSettingsModelSO::__get_windowResolution()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector2IntSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector2IntSO*> GlobalNamespace::MainSettingsModelSO::__get_windowResolution() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector2IntSO*, 0x28>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_editorWindowResolution(::GlobalNamespace::Vector2IntSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector2IntSO*, 0x30>(this, std::forward<::GlobalNamespace::Vector2IntSO*>(value));
}
constexpr ::GlobalNamespace::Vector2IntSO* GlobalNamespace::MainSettingsModelSO::__get_editorWindowResolution()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector2IntSO*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector2IntSO*> GlobalNamespace::MainSettingsModelSO::__get_editorWindowResolution() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector2IntSO*, 0x30>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_fullscreen(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0x38>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::MainSettingsModelSO::__get_fullscreen()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::MainSettingsModelSO::__get_fullscreen() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x38>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_antiAliasingLevel(::GlobalNamespace::IntSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO*, 0x40>(this, std::forward<::GlobalNamespace::IntSO*>(value));
}
constexpr ::GlobalNamespace::IntSO* GlobalNamespace::MainSettingsModelSO::__get_antiAliasingLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> GlobalNamespace::MainSettingsModelSO::__get_antiAliasingLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x40>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_volume(::GlobalNamespace::FloatSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO*, 0x48>(this, std::forward<::GlobalNamespace::FloatSO*>(value));
}
constexpr ::GlobalNamespace::FloatSO* GlobalNamespace::MainSettingsModelSO::__get_volume()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> GlobalNamespace::MainSettingsModelSO::__get_volume() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x48>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_ambientVolumeScale(::GlobalNamespace::FloatSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO*, 0x50>(this, std::forward<::GlobalNamespace::FloatSO*>(value));
}
constexpr ::GlobalNamespace::FloatSO* GlobalNamespace::MainSettingsModelSO::__get_ambientVolumeScale()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> GlobalNamespace::MainSettingsModelSO::__get_ambientVolumeScale() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x50>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_controllersRumbleEnabled(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0x58>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::MainSettingsModelSO::__get_controllersRumbleEnabled()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::MainSettingsModelSO::__get_controllersRumbleEnabled() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x58>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_roomCenter(::GlobalNamespace::Vector3SO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3SO*, 0x60>(this, std::forward<::GlobalNamespace::Vector3SO*>(value));
}
constexpr ::GlobalNamespace::Vector3SO* GlobalNamespace::MainSettingsModelSO::__get_roomCenter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> GlobalNamespace::MainSettingsModelSO::__get_roomCenter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0x60>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_roomRotation(::GlobalNamespace::FloatSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO*, 0x68>(this, std::forward<::GlobalNamespace::FloatSO*>(value));
}
constexpr ::GlobalNamespace::FloatSO* GlobalNamespace::MainSettingsModelSO::__get_roomRotation()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> GlobalNamespace::MainSettingsModelSO::__get_roomRotation() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x68>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_controllerPosition(::GlobalNamespace::Vector3SO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3SO*, 0x70>(this, std::forward<::GlobalNamespace::Vector3SO*>(value));
}
constexpr ::GlobalNamespace::Vector3SO* GlobalNamespace::MainSettingsModelSO::__get_controllerPosition()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> GlobalNamespace::MainSettingsModelSO::__get_controllerPosition() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0x70>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_controllerRotation(::GlobalNamespace::Vector3SO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3SO*, 0x78>(this, std::forward<::GlobalNamespace::Vector3SO*>(value));
}
constexpr ::GlobalNamespace::Vector3SO* GlobalNamespace::MainSettingsModelSO::__get_controllerRotation()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> GlobalNamespace::MainSettingsModelSO::__get_controllerRotation() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0x78>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_mirrorGraphicsSettings(::GlobalNamespace::IntSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO*, 0x80>(this, std::forward<::GlobalNamespace::IntSO*>(value));
}
constexpr ::GlobalNamespace::IntSO* GlobalNamespace::MainSettingsModelSO::__get_mirrorGraphicsSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> GlobalNamespace::MainSettingsModelSO::__get_mirrorGraphicsSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x80>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_mainEffectGraphicsSettings(::GlobalNamespace::IntSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO*, 0x88>(this, std::forward<::GlobalNamespace::IntSO*>(value));
}
constexpr ::GlobalNamespace::IntSO* GlobalNamespace::MainSettingsModelSO::__get_mainEffectGraphicsSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> GlobalNamespace::MainSettingsModelSO::__get_mainEffectGraphicsSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x88>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_bloomPrePassGraphicsSettings(::GlobalNamespace::IntSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO*, 0x90>(this, std::forward<::GlobalNamespace::IntSO*>(value));
}
constexpr ::GlobalNamespace::IntSO* GlobalNamespace::MainSettingsModelSO::__get_bloomPrePassGraphicsSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> GlobalNamespace::MainSettingsModelSO::__get_bloomPrePassGraphicsSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x90>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_smokeGraphicsSettings(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0x98>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::MainSettingsModelSO::__get_smokeGraphicsSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::MainSettingsModelSO::__get_smokeGraphicsSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x98>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_enableAlphaFeatures(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0xa0>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::MainSettingsModelSO::__get_enableAlphaFeatures()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::MainSettingsModelSO::__get_enableAlphaFeatures() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0xa0>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_pauseButtonPressDurationLevel(::GlobalNamespace::IntSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO*, 0xa8>(this, std::forward<::GlobalNamespace::IntSO*>(value));
}
constexpr ::GlobalNamespace::IntSO* GlobalNamespace::MainSettingsModelSO::__get_pauseButtonPressDurationLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> GlobalNamespace::MainSettingsModelSO::__get_pauseButtonPressDurationLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0xa8>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_burnMarkTrailsEnabled(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0xb0>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::MainSettingsModelSO::__get_burnMarkTrailsEnabled()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::MainSettingsModelSO::__get_burnMarkTrailsEnabled() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0xb0>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_screenDisplacementEffectsEnabled(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0xb8>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::MainSettingsModelSO::__get_screenDisplacementEffectsEnabled()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::MainSettingsModelSO::__get_screenDisplacementEffectsEnabled() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0xb8>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_obstaclesQuality(::GlobalNamespace::ObstaclesQualitySO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ObstaclesQualitySO*, 0xc0>(this, std::forward<::GlobalNamespace::ObstaclesQualitySO*>(value));
}
constexpr ::GlobalNamespace::ObstaclesQualitySO* GlobalNamespace::MainSettingsModelSO::__get_obstaclesQuality()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ObstaclesQualitySO*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstaclesQualitySO*> GlobalNamespace::MainSettingsModelSO::__get_obstaclesQuality() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ObstaclesQualitySO*, 0xc0>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_performancePresetKey(::GlobalNamespace::StringSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StringSO*, 0xc8>(this, std::forward<::GlobalNamespace::StringSO*>(value));
}
constexpr ::GlobalNamespace::StringSO* GlobalNamespace::MainSettingsModelSO::__get_performancePresetKey()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StringSO*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StringSO*> GlobalNamespace::MainSettingsModelSO::__get_performancePresetKey() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StringSO*, 0xc8>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_smoothCameraEnabled(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0xd0>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::MainSettingsModelSO::__get_smoothCameraEnabled()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::MainSettingsModelSO::__get_smoothCameraEnabled() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0xd0>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_smoothCameraFieldOfView(::GlobalNamespace::FloatSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO*, 0xd8>(this, std::forward<::GlobalNamespace::FloatSO*>(value));
}
constexpr ::GlobalNamespace::FloatSO* GlobalNamespace::MainSettingsModelSO::__get_smoothCameraFieldOfView()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> GlobalNamespace::MainSettingsModelSO::__get_smoothCameraFieldOfView() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0xd8>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_smoothCameraThirdPersonPosition(::GlobalNamespace::Vector3SO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3SO*, 0xe0>(this, std::forward<::GlobalNamespace::Vector3SO*>(value));
}
constexpr ::GlobalNamespace::Vector3SO* GlobalNamespace::MainSettingsModelSO::__get_smoothCameraThirdPersonPosition()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0xe0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> GlobalNamespace::MainSettingsModelSO::__get_smoothCameraThirdPersonPosition() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0xe0>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_smoothCameraThirdPersonEulerAngles(::GlobalNamespace::Vector3SO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3SO*, 0xe8>(this, std::forward<::GlobalNamespace::Vector3SO*>(value));
}
constexpr ::GlobalNamespace::Vector3SO* GlobalNamespace::MainSettingsModelSO::__get_smoothCameraThirdPersonEulerAngles()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0xe8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> GlobalNamespace::MainSettingsModelSO::__get_smoothCameraThirdPersonEulerAngles() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO*, 0xe8>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_smoothCameraThirdPersonEnabled(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0xf0>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::MainSettingsModelSO::__get_smoothCameraThirdPersonEnabled()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0xf0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::MainSettingsModelSO::__get_smoothCameraThirdPersonEnabled() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0xf0>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_smoothCameraRotationSmooth(::GlobalNamespace::FloatSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO*, 0xf8>(this, std::forward<::GlobalNamespace::FloatSO*>(value));
}
constexpr ::GlobalNamespace::FloatSO* GlobalNamespace::MainSettingsModelSO::__get_smoothCameraRotationSmooth()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0xf8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> GlobalNamespace::MainSettingsModelSO::__get_smoothCameraRotationSmooth() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0xf8>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_smoothCameraPositionSmooth(::GlobalNamespace::FloatSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO*, 0x100>(this, std::forward<::GlobalNamespace::FloatSO*>(value));
}
constexpr ::GlobalNamespace::FloatSO* GlobalNamespace::MainSettingsModelSO::__get_smoothCameraPositionSmooth()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> GlobalNamespace::MainSettingsModelSO::__get_smoothCameraPositionSmooth() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x100>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_overrideAudioLatency(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0x108>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::MainSettingsModelSO::__get_overrideAudioLatency()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x108>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::MainSettingsModelSO::__get_overrideAudioLatency() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x108>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_audioLatency(::GlobalNamespace::FloatSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO*, 0x110>(this, std::forward<::GlobalNamespace::FloatSO*>(value));
}
constexpr ::GlobalNamespace::FloatSO* GlobalNamespace::MainSettingsModelSO::__get_audioLatency()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x110>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> GlobalNamespace::MainSettingsModelSO::__get_audioLatency() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x110>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_maxShockwaveParticles(::GlobalNamespace::IntSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO*, 0x118>(this, std::forward<::GlobalNamespace::IntSO*>(value));
}
constexpr ::GlobalNamespace::IntSO* GlobalNamespace::MainSettingsModelSO::__get_maxShockwaveParticles()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x118>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> GlobalNamespace::MainSettingsModelSO::__get_maxShockwaveParticles() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x118>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_maxNumberOfCutSoundEffects(::GlobalNamespace::IntSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO*, 0x120>(this, std::forward<::GlobalNamespace::IntSO*>(value));
}
constexpr ::GlobalNamespace::IntSO* GlobalNamespace::MainSettingsModelSO::__get_maxNumberOfCutSoundEffects()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x120>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> GlobalNamespace::MainSettingsModelSO::__get_maxNumberOfCutSoundEffects() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x120>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_language(::GlobalNamespace::LanguageSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LanguageSO*, 0x128>(this, std::forward<::GlobalNamespace::LanguageSO*>(value));
}
constexpr ::GlobalNamespace::LanguageSO* GlobalNamespace::MainSettingsModelSO::__get_language()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LanguageSO*, 0x128>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LanguageSO*> GlobalNamespace::MainSettingsModelSO::__get_language() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LanguageSO*, 0x128>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_useCustomServerEnvironment(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0x130>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::MainSettingsModelSO::__get_useCustomServerEnvironment()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x130>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::MainSettingsModelSO::__get_useCustomServerEnvironment() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x130>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_forceGameLiftServerEnvironment(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0x138>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::MainSettingsModelSO::__get_forceGameLiftServerEnvironment()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x138>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::MainSettingsModelSO::__get_forceGameLiftServerEnvironment() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x138>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_customServerHostName(::GlobalNamespace::StringSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StringSO*, 0x140>(this, std::forward<::GlobalNamespace::StringSO*>(value));
}
constexpr ::GlobalNamespace::StringSO* GlobalNamespace::MainSettingsModelSO::__get_customServerHostName()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StringSO*, 0x140>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StringSO*> GlobalNamespace::MainSettingsModelSO::__get_customServerHostName() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StringSO*, 0x140>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_enableFPSCounter(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0x148>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::MainSettingsModelSO::__get_enableFPSCounter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x148>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::MainSettingsModelSO::__get_enableFPSCounter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x148>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_enableFPSRecorder(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0x150>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::MainSettingsModelSO::__get_enableFPSRecorder()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x150>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::MainSettingsModelSO::__get_enableFPSRecorder() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x150>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_enableMemoryTracker(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0x158>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::MainSettingsModelSO::__get_enableMemoryTracker()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x158>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::MainSettingsModelSO::__get_enableMemoryTracker() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x158>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_useFixedFoveatedRenderingDuringGameplay(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0x160>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::MainSettingsModelSO::__get_useFixedFoveatedRenderingDuringGameplay()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x160>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::MainSettingsModelSO::__get_useFixedFoveatedRenderingDuringGameplay() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x160>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_gpuLevel(::GlobalNamespace::IntSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO*, 0x168>(this, std::forward<::GlobalNamespace::IntSO*>(value));
}
constexpr ::GlobalNamespace::IntSO* GlobalNamespace::MainSettingsModelSO::__get_gpuLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x168>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> GlobalNamespace::MainSettingsModelSO::__get_gpuLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x168>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_cpuLevel(::GlobalNamespace::IntSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO*, 0x170>(this, std::forward<::GlobalNamespace::IntSO*>(value));
}
constexpr ::GlobalNamespace::IntSO* GlobalNamespace::MainSettingsModelSO::__get_cpuLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x170>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> GlobalNamespace::MainSettingsModelSO::__get_cpuLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x170>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_targetFramerate(::GlobalNamespace::FloatSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO*, 0x178>(this, std::forward<::GlobalNamespace::FloatSO*>(value));
}
constexpr ::GlobalNamespace::FloatSO* GlobalNamespace::MainSettingsModelSO::__get_targetFramerate()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x178>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> GlobalNamespace::MainSettingsModelSO::__get_targetFramerate() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x178>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_depthTextureEnabled(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0x180>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::MainSettingsModelSO::__get_depthTextureEnabled()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x180>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::MainSettingsModelSO::__get_depthTextureEnabled() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x180>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set__createScreenshotDuringTheGame_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x188>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MainSettingsModelSO::__get__createScreenshotDuringTheGame_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x188>(this);
}
constexpr bool const& GlobalNamespace::MainSettingsModelSO::__get__createScreenshotDuringTheGame_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x188>(this);
}
inline void GlobalNamespace::MainSettingsModelSO::setStaticF_bestGraphicsPreset(::GlobalNamespace::PerformancePreset*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PerformancePreset*, "bestGraphicsPreset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get>(std::forward<::GlobalNamespace::PerformancePreset*>(value));
}
inline ::GlobalNamespace::PerformancePreset* GlobalNamespace::MainSettingsModelSO::getStaticF_bestGraphicsPreset()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PerformancePreset*, "bestGraphicsPreset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get>();
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set__playingForTheFirstTime_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x189>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MainSettingsModelSO::__get__playingForTheFirstTime_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x189>(this);
}
constexpr bool const& GlobalNamespace::MainSettingsModelSO::__get__playingForTheFirstTime_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x189>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set__playingForTheFirstTimeChecked(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18a>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MainSettingsModelSO::__get__playingForTheFirstTimeChecked()  {
return ::cordl_internals::getInstanceField<bool, 0x18a>(this);
}
constexpr bool const& GlobalNamespace::MainSettingsModelSO::__get__playingForTheFirstTimeChecked() const {
return ::cordl_internals::getInstanceField<bool, 0x18a>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set__isLoaded(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18b>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MainSettingsModelSO::__get__isLoaded()  {
return ::cordl_internals::getInstanceField<bool, 0x18b>(this);
}
constexpr bool const& GlobalNamespace::MainSettingsModelSO::__get__isLoaded() const {
return ::cordl_internals::getInstanceField<bool, 0x18b>(this);
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set__defaultPerformancePreset(::System::Nullable_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>  value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>, 0x190>(this, std::forward<::System::Nullable_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>>(value));
}
constexpr ::System::Nullable_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>& GlobalNamespace::MainSettingsModelSO::__get__defaultPerformancePreset()  {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>, 0x190>(this);
}
constexpr ::System::Nullable_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>> const& GlobalNamespace::MainSettingsModelSO::__get__defaultPerformancePreset() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>, 0x190>(this);
}
inline bool GlobalNamespace::MainSettingsModelSO::get_createScreenshotDuringTheGame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "get_createScreenshotDuringTheGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainSettingsModelSO::set_createScreenshotDuringTheGame(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "set_createScreenshotDuringTheGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::MainSettingsModelSO::get_playingForTheFirstTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "get_playingForTheFirstTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainSettingsModelSO::set_playingForTheFirstTime(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "set_playingForTheFirstTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MainSettingsModelSO::Initialize(::GlobalNamespace::ISaveData*  saveData, ::System::Nullable_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>  defaultPerformancePreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, saveData, defaultPerformancePreset);
}
inline void GlobalNamespace::MainSettingsModelSO::Save(::GlobalNamespace::ISaveData*  saveData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "Save",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, saveData);
}
inline void GlobalNamespace::MainSettingsModelSO::Load(::GlobalNamespace::ISaveData*  saveData, bool  forced)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, saveData, forced);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MainSettingsModelSO::ForceApplyPerformancePresetAsync(::GlobalNamespace::__MainSettingsModelSO__Config*  config)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "ForceApplyPerformancePresetAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainSettingsModelSO__Config*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, config);
}
inline void GlobalNamespace::MainSettingsModelSO::__DeleteSettingsFiles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            "__DeleteSettingsFiles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MainSettingsModelSO* GlobalNamespace::MainSettingsModelSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MainSettingsModelSO*>());
}
inline void GlobalNamespace::MainSettingsModelSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
