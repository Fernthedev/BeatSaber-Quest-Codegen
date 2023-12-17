#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PerformancePreset_def.hpp"
#include "GlobalNamespace/zzzz__ObstaclesQuality_def.hpp"
#include "GlobalNamespace/zzzz__QuestPerformanceSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerformancePreset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformancePreset::*)()>(&::GlobalNamespace::PerformancePreset::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x234fd78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformancePreset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PerformancePreset::__set_dataVersion(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& GlobalNamespace::PerformancePreset::__get_dataVersion()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this);
}
constexpr uint32_t const& GlobalNamespace::PerformancePreset::__get_dataVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_presetName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::PerformancePreset::__get_presetName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::PerformancePreset::__get_presetName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_presetNameLocalizationTag(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::PerformancePreset::__get_presetNameLocalizationTag()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& GlobalNamespace::PerformancePreset::__get_presetNameLocalizationTag() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_renderViewportScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::PerformancePreset::__get_renderViewportScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::PerformancePreset::__get_renderViewportScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_vrResolutionScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::PerformancePreset::__get_vrResolutionScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& GlobalNamespace::PerformancePreset::__get_vrResolutionScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_menuVRResolutionScaleMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::PerformancePreset::__get_menuVRResolutionScaleMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::PerformancePreset::__get_menuVRResolutionScaleMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_antiAliasingLevel(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::PerformancePreset::__get_antiAliasingLevel()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr int32_t const& GlobalNamespace::PerformancePreset::__get_antiAliasingLevel() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_targetFramerate(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::PerformancePreset::__get_targetFramerate()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::PerformancePreset::__get_targetFramerate() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_vSyncCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::PerformancePreset::__get_vSyncCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr int32_t const& GlobalNamespace::PerformancePreset::__get_vSyncCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_maxQueuedFrames(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::PerformancePreset::__get_maxQueuedFrames()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& GlobalNamespace::PerformancePreset::__get_maxQueuedFrames() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_mirrorGraphics(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::PerformancePreset::__get_mirrorGraphics()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr int32_t const& GlobalNamespace::PerformancePreset::__get_mirrorGraphics() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_mainEffectGraphics(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::PerformancePreset::__get_mainEffectGraphics()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& GlobalNamespace::PerformancePreset::__get_mainEffectGraphics() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_bloomGraphics(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::PerformancePreset::__get_bloomGraphics()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this);
}
constexpr int32_t const& GlobalNamespace::PerformancePreset::__get_bloomGraphics() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_smokeGraphics(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::PerformancePreset::__get_smokeGraphics()  {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr bool const& GlobalNamespace::PerformancePreset::__get_smokeGraphics() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_burnMarkTrails(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x51>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::PerformancePreset::__get_burnMarkTrails()  {
return ::cordl_internals::getInstanceField<bool, 0x51>(this);
}
constexpr bool const& GlobalNamespace::PerformancePreset::__get_burnMarkTrails() const {
return ::cordl_internals::getInstanceField<bool, 0x51>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_screenDisplacementEffects(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x52>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::PerformancePreset::__get_screenDisplacementEffects()  {
return ::cordl_internals::getInstanceField<bool, 0x52>(this);
}
constexpr bool const& GlobalNamespace::PerformancePreset::__get_screenDisplacementEffects() const {
return ::cordl_internals::getInstanceField<bool, 0x52>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_maxShockwaveParticles(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::PerformancePreset::__get_maxShockwaveParticles()  {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr int32_t const& GlobalNamespace::PerformancePreset::__get_maxShockwaveParticles() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_maxNumberOfCutSoundEffects(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::PerformancePreset::__get_maxNumberOfCutSoundEffects()  {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr int32_t const& GlobalNamespace::PerformancePreset::__get_maxNumberOfCutSoundEffects() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_obstaclesQuality(::GlobalNamespace::ObstaclesQuality  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ObstaclesQuality, 0x5c>(this, std::forward<::GlobalNamespace::ObstaclesQuality>(value));
}
constexpr ::GlobalNamespace::ObstaclesQuality& GlobalNamespace::PerformancePreset::__get_obstaclesQuality()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ObstaclesQuality, 0x5c>(this);
}
constexpr ::GlobalNamespace::ObstaclesQuality const& GlobalNamespace::PerformancePreset::__get_obstaclesQuality() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ObstaclesQuality, 0x5c>(this);
}
constexpr void GlobalNamespace::PerformancePreset::__set_questSettings(::GlobalNamespace::QuestPerformanceSettings*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::QuestPerformanceSettings*, 0x60>(this, std::forward<::GlobalNamespace::QuestPerformanceSettings*>(value));
}
constexpr ::GlobalNamespace::QuestPerformanceSettings* GlobalNamespace::PerformancePreset::__get_questSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::QuestPerformanceSettings*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::QuestPerformanceSettings*> GlobalNamespace::PerformancePreset::__get_questSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::QuestPerformanceSettings*, 0x60>(this);
}
inline ::GlobalNamespace::PerformancePreset* GlobalNamespace::PerformancePreset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PerformancePreset*>());
}
inline void GlobalNamespace::PerformancePreset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformancePreset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
