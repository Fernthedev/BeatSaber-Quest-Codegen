#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PerformanceToolLauncher_def.hpp"
#include "GlobalNamespace/zzzz__MainCamera_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceToolLauncher_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceRecorder_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceVisualizer_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
constexpr void GlobalNamespace::__PerformanceToolLauncher__Assets::__set_visualizer(::GlobalNamespace::PerformanceVisualizer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PerformanceVisualizer*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::PerformanceVisualizer*>(value));
}
constexpr ::GlobalNamespace::PerformanceVisualizer* GlobalNamespace::__PerformanceToolLauncher__Assets::__get_visualizer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PerformanceVisualizer*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerformanceVisualizer*> GlobalNamespace::__PerformanceToolLauncher__Assets::__get_visualizer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PerformanceVisualizer*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__PerformanceToolLauncher__Assets::__set_recorder(::GlobalNamespace::PerformanceRecorder*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PerformanceRecorder*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::PerformanceRecorder*>(value));
}
constexpr ::GlobalNamespace::PerformanceRecorder* GlobalNamespace::__PerformanceToolLauncher__Assets::__get_recorder()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PerformanceRecorder*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerformanceRecorder*> GlobalNamespace::__PerformanceToolLauncher__Assets::__get_recorder() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PerformanceRecorder*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "visualizer", ty: "::GlobalNamespace::PerformanceVisualizer*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "recorder", ty: "::GlobalNamespace::PerformanceRecorder*", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Assets::__PerformanceToolLauncher__Assets(::GlobalNamespace::PerformanceVisualizer*  visualizer, ::GlobalNamespace::PerformanceRecorder*  recorder) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->visualizer = visualizer;
this->recorder = recorder;
}
constexpr void GlobalNamespace::__PerformanceToolLauncher__Config::__set_enableRecording(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::__PerformanceToolLauncher__Config::__get_enableRecording()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::__PerformanceToolLauncher__Config::__get_enableRecording() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__PerformanceToolLauncher__Config::__set_enableFpsVisualization(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::__PerformanceToolLauncher__Config::__get_enableFpsVisualization()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::__PerformanceToolLauncher__Config::__get_enableFpsVisualization() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__PerformanceToolLauncher__Config::__set_enableMemoryVisualization(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::__PerformanceToolLauncher__Config::__get_enableMemoryVisualization()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::__PerformanceToolLauncher__Config::__get_enableMemoryVisualization() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "enableRecording", ty: "::GlobalNamespace::BoolSO*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "enableFpsVisualization", ty: "::GlobalNamespace::BoolSO*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "enableMemoryVisualization", ty: "::GlobalNamespace::BoolSO*", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Config::__PerformanceToolLauncher__Config(::GlobalNamespace::BoolSO*  enableRecording, ::GlobalNamespace::BoolSO*  enableFpsVisualization, ::GlobalNamespace::BoolSO*  enableMemoryVisualization) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->enableRecording = enableRecording;
this->enableFpsVisualization = enableFpsVisualization;
this->enableMemoryVisualization = enableMemoryVisualization;
}
inline void GlobalNamespace::__PerformanceToolLauncher__OverrideConfig::setStaticF_kDefault(::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig, "kDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>::get>(std::forward<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>(value));
}
inline ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig GlobalNamespace::__PerformanceToolLauncher__OverrideConfig::getStaticF_kDefault()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig, "kDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>::get>();
}
constexpr void GlobalNamespace::__PerformanceToolLauncher__OverrideConfig::__set_enableRecording(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PerformanceToolLauncher__OverrideConfig::__get_enableRecording()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::__PerformanceToolLauncher__OverrideConfig::__get_enableRecording() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__PerformanceToolLauncher__OverrideConfig::__set_minFpsWindow(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__PerformanceToolLauncher__OverrideConfig::__get_minFpsWindow()  {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::__PerformanceToolLauncher__OverrideConfig::__get_minFpsWindow() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "enableRecording", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "minFpsWindow", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig::__PerformanceToolLauncher__OverrideConfig(bool  enableRecording, float_t  minFpsWindow) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->enableRecording = enableRecording;
this->minFpsWindow = minFpsWindow;
}
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher::*)(::GlobalNamespace::MainCamera*, ::GlobalNamespace::IGamePause*, ::GlobalNamespace::GameplayCoreSceneSetupData*, ::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>)>(&::GlobalNamespace::PerformanceToolLauncher::Initialize)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2304c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainCamera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGamePause*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceToolLauncher._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformanceToolLauncher::*)()>(&::GlobalNamespace::PerformanceToolLauncher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2304f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PerformanceToolLauncher::__set__assets(::GlobalNamespace::__PerformanceToolLauncher__Assets  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PerformanceToolLauncher__Assets, 0x18>(this, std::forward<::GlobalNamespace::__PerformanceToolLauncher__Assets>(value));
}
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Assets& GlobalNamespace::PerformanceToolLauncher::__get__assets()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PerformanceToolLauncher__Assets, 0x18>(this);
}
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Assets const& GlobalNamespace::PerformanceToolLauncher::__get__assets() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PerformanceToolLauncher__Assets, 0x18>(this);
}
constexpr void GlobalNamespace::PerformanceToolLauncher::__set__config(::GlobalNamespace::__PerformanceToolLauncher__Config  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PerformanceToolLauncher__Config, 0x28>(this, std::forward<::GlobalNamespace::__PerformanceToolLauncher__Config>(value));
}
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Config& GlobalNamespace::PerformanceToolLauncher::__get__config()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PerformanceToolLauncher__Config, 0x28>(this);
}
constexpr ::GlobalNamespace::__PerformanceToolLauncher__Config const& GlobalNamespace::PerformanceToolLauncher::__get__config() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PerformanceToolLauncher__Config, 0x28>(this);
}
/// @param gamePause: ::GlobalNamespace::IGamePause* (default: csnull)
/// @param sceneSetupData: ::GlobalNamespace::GameplayCoreSceneSetupData* (default: csnull)
/// @param overrideConfig: ::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig> (default: {})
inline void GlobalNamespace::PerformanceToolLauncher::Initialize(::GlobalNamespace::MainCamera*  mainCamera, ::GlobalNamespace::IGamePause*  gamePause, ::GlobalNamespace::GameplayCoreSceneSetupData*  sceneSetupData, ::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>  overrideConfig)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MainCamera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGamePause*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, mainCamera, gamePause, sceneSetupData, overrideConfig);
}
inline ::GlobalNamespace::PerformanceToolLauncher* GlobalNamespace::PerformanceToolLauncher::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PerformanceToolLauncher*>());
}
inline void GlobalNamespace::PerformanceToolLauncher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformanceToolLauncher*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
