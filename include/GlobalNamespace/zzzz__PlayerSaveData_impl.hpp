#pragma once
#include "GlobalNamespace/zzzz__VersionSaveData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType::__PlayerSaveData__GameplayModifiers__EnabledObstacleType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType  GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType::All{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType  GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType::FullHeightOnly{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType  GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType::None{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType::__PlayerSaveData__GameplayModifiers__EnergyType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType  GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType::Bar{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType  GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType::Battery{static_cast<int32_t>(0x1)};
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed::__PlayerSaveData__GameplayModifiers__SongSpeed(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed  GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed  GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed::Faster{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed  GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed::Slower{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__GameplayModifiers._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__GameplayModifiers::*)()>(&::GlobalNamespace::__PlayerSaveData__GameplayModifiers::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2372854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__GameplayModifiers*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__set_energyType(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType, 0x10>(this, std::forward<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_energyType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType, 0x10>(this);
}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_energyType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__set_instaFail(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_instaFail()  {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_instaFail() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__set_failOnSaberClash(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x15>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_failOnSaberClash()  {
return ::cordl_internals::getInstanceField<bool, 0x15>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_failOnSaberClash() const {
return ::cordl_internals::getInstanceField<bool, 0x15>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__set_enabledObstacleType(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType, 0x18>(this, std::forward<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_enabledObstacleType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType, 0x18>(this);
}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_enabledObstacleType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType, 0x18>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__set_fastNotes(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_fastNotes()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_fastNotes() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__set_strictAngles(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1d>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_strictAngles()  {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_strictAngles() const {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__set_disappearingArrows(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1e>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_disappearingArrows()  {
return ::cordl_internals::getInstanceField<bool, 0x1e>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_disappearingArrows() const {
return ::cordl_internals::getInstanceField<bool, 0x1e>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__set_ghostNotes(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1f>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_ghostNotes()  {
return ::cordl_internals::getInstanceField<bool, 0x1f>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_ghostNotes() const {
return ::cordl_internals::getInstanceField<bool, 0x1f>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__set_noBombs(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_noBombs()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_noBombs() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__set_songSpeed(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed, 0x24>(this, std::forward<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_songSpeed()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed, 0x24>(this);
}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_songSpeed() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed, 0x24>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__set_noArrows(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_noArrows()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_noArrows() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__set_noFailOn0Energy(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_noFailOn0Energy()  {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_noFailOn0Energy() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__set_proMode(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2a>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_proMode()  {
return ::cordl_internals::getInstanceField<bool, 0x2a>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_proMode() const {
return ::cordl_internals::getInstanceField<bool, 0x2a>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__set_zenMode(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2b>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_zenMode()  {
return ::cordl_internals::getInstanceField<bool, 0x2b>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_zenMode() const {
return ::cordl_internals::getInstanceField<bool, 0x2b>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__set_smallCubes(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_smallCubes()  {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__get_smallCubes() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
inline ::GlobalNamespace::__PlayerSaveData__GameplayModifiers* GlobalNamespace::__PlayerSaveData__GameplayModifiers::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveData__GameplayModifiers*>());
}
inline void GlobalNamespace::__PlayerSaveData__GameplayModifiers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__GameplayModifiers*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData  GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::AllEffects{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData  GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::StrobeFilter{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData  GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::NoEffects{static_cast<int32_t>(0xa)};
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData  GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData  GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::Low{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData  GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::Standard{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData  GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::High{static_cast<int32_t>(0x3)};
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData  GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData::Dynamic{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData  GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData::Static{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::*)()>(&::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x237285c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_staticLights(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_staticLights()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_staticLights() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_leftHanded(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_leftHanded()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_leftHanded() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_playerHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_playerHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_playerHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_automaticPlayerHeight(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_automaticPlayerHeight()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_automaticPlayerHeight() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_sfxVolume(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_sfxVolume()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_sfxVolume() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_reduceDebris(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_reduceDebris()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_reduceDebris() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_noTextsAndHuds(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_noTextsAndHuds()  {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_noTextsAndHuds() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_advancedHud(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x22>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_advancedHud()  {
return ::cordl_internals::getInstanceField<bool, 0x22>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_advancedHud() const {
return ::cordl_internals::getInstanceField<bool, 0x22>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_saberTrailIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_saberTrailIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_saberTrailIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set__noteJumpDurationTypeSettingsSaveData(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData, 0x28>(this, std::forward<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get__noteJumpDurationTypeSettingsSaveData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData, 0x28>(this);
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get__noteJumpDurationTypeSettingsSaveData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData, 0x28>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_noteJumpFixedDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_noteJumpFixedDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_noteJumpFixedDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_autoRestart(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_autoRestart()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_autoRestart() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_noFailEffects(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_noFailEffects()  {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_noFailEffects() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_noteJumpBeatOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_noteJumpBeatOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_noteJumpBeatOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_hideNoteSpawnEffect(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_hideNoteSpawnEffect()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_hideNoteSpawnEffect() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_adaptiveSfx(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_adaptiveSfx()  {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_adaptiveSfx() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_arcsHapticFeedback(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3a>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_arcsHapticFeedback()  {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_arcsHapticFeedback() const {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_arcsVisibleSaveData(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData, 0x3c>(this, std::forward<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_arcsVisibleSaveData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData, 0x3c>(this);
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_arcsVisibleSaveData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData, 0x3c>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_environmentEffectsFilterDefaultPreset(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData, 0x40>(this, std::forward<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_environmentEffectsFilterDefaultPreset()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData, 0x40>(this);
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_environmentEffectsFilterDefaultPreset() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData, 0x40>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_environmentEffectsFilterExpertPlusPreset(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData, 0x44>(this, std::forward<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_environmentEffectsFilterExpertPlusPreset()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData, 0x44>(this);
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_environmentEffectsFilterExpertPlusPreset() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData, 0x44>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__set_headsetHapticIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_headsetHapticIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__get_headsetHapticIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
inline ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings* GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*>());
}
inline void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::*)()>(&::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x237239c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::*)(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*)>(&::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2372548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__set_campaignOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, 0x10>(this, std::forward<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__get_campaignOverallStatsData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*> GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__get_campaignOverallStatsData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__set_soloFreePlayOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, 0x18>(this, std::forward<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__get_soloFreePlayOverallStatsData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*> GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__get_soloFreePlayOverallStatsData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, 0x18>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__set_partyFreePlayOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, 0x20>(this, std::forward<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__get_partyFreePlayOverallStatsData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*> GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__get_partyFreePlayOverallStatsData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, 0x20>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__set_onlinePlayOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, 0x28>(this, std::forward<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__get_onlinePlayOverallStatsData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*> GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__get_onlinePlayOverallStatsData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, 0x28>(this);
}
inline ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData* GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*>());
}
inline void GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData* GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::New_ctor(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*  campaignOverallStatsData, ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*  soloFreePlayOverallStatsData, ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*  partyFreePlayOverallStatsData, ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*  onlinePlayOverallStatsData)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*>(campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData, onlinePlayOverallStatsData));
}
inline void GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::_ctor(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*  campaignOverallStatsData, ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*  soloFreePlayOverallStatsData, ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*  partyFreePlayOverallStatsData, ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*  onlinePlayOverallStatsData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData, onlinePlayOverallStatsData);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::*)()>(&::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2372588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::*)(int32_t, int32_t, int32_t, int64_t, int32_t, int32_t, int32_t, int32_t, float_t, int32_t, int64_t)>(&::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2372590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__set_goodCutsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_goodCutsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_goodCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__set_badCutsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_badCutsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_badCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__set_missedCutsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_missedCutsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_missedCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__set_totalScore(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_totalScore()  {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr int64_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_totalScore() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__set_playedLevelsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_playedLevelsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_playedLevelsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__set_cleardLevelsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_cleardLevelsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_cleardLevelsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__set_failedLevelsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_failedLevelsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_failedLevelsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__set_fullComboCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_fullComboCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_fullComboCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__set_timePlayed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_timePlayed()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_timePlayed() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__set_handDistanceTravelled(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_handDistanceTravelled()  {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_handDistanceTravelled() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__set_cummulativeCutScoreWithoutMultiplier(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x40>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_cummulativeCutScoreWithoutMultiplier()  {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this);
}
constexpr int64_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__get_cummulativeCutScoreWithoutMultiplier() const {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this);
}
inline ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>());
}
inline void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::New_ctor(int32_t  goodCutsCount, int32_t  badCutsCount, int32_t  missedCutsCount, int64_t  totalScore, int32_t  playedLevelsCount, int32_t  cleardLevelsCount, int32_t  failedLevelsCount, int32_t  fullComboCount, float_t  timePlayed, int32_t  handDistanceTravelled, int64_t  cummulativeCutScoreWithoutMultiplier)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>(goodCutsCount, badCutsCount, missedCutsCount, totalScore, playedLevelsCount, cleardLevelsCount, failedLevelsCount, fullComboCount, timePlayed, handDistanceTravelled, cummulativeCutScoreWithoutMultiplier));
}
inline void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::_ctor(int32_t  goodCutsCount, int32_t  badCutsCount, int32_t  missedCutsCount, int64_t  totalScore, int32_t  playedLevelsCount, int32_t  cleardLevelsCount, int32_t  failedLevelsCount, int32_t  fullComboCount, float_t  timePlayed, int32_t  handDistanceTravelled, int64_t  cummulativeCutScoreWithoutMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, goodCutsCount, badCutsCount, missedCutsCount, totalScore, playedLevelsCount, cleardLevelsCount, failedLevelsCount, fullComboCount, timePlayed, handDistanceTravelled, cummulativeCutScoreWithoutMultiplier);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::*)()>(&::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2372894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__set_levelId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_levelId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__set_difficulty(::GlobalNamespace::BeatmapDifficulty  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x18>(this, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_difficulty()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x18>(this);
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_difficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x18>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__set_beatmapCharacteristicName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_beatmapCharacteristicName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_beatmapCharacteristicName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__set_highScore(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_highScore()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_highScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__set_maxCombo(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_maxCombo()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_maxCombo() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__set_fullCombo(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_fullCombo()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_fullCombo() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__set_maxRank(::GlobalNamespace::__RankModel__Rank  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__RankModel__Rank, 0x34>(this, std::forward<::GlobalNamespace::__RankModel__Rank>(value));
}
constexpr ::GlobalNamespace::__RankModel__Rank& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_maxRank()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RankModel__Rank, 0x34>(this);
}
constexpr ::GlobalNamespace::__RankModel__Rank const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_maxRank() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RankModel__Rank, 0x34>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__set_validScore(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_validScore()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_validScore() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__set_playCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_playCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__get_playCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
inline ::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData* GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>());
}
inline void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::*)()>(&::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x237289c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::__set_missionId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::__get_missionId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::__get_missionId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::__set_cleared(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::__get_cleared()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::__get_cleared() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
inline ::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData* GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>());
}
inline void GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PracticeSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PracticeSettings::*)()>(&::GlobalNamespace::__PlayerSaveData__PracticeSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23728a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PracticeSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveData__PracticeSettings::__set_startSongTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__PlayerSaveData__PracticeSettings::__get_startSongTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PracticeSettings::__get_startSongTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PracticeSettings::__set_songSpeedMul(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__PlayerSaveData__PracticeSettings::__get_songSpeedMul()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PracticeSettings::__get_songSpeedMul() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
inline ::GlobalNamespace::__PlayerSaveData__PracticeSettings* GlobalNamespace::__PlayerSaveData__PracticeSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveData__PracticeSettings*>());
}
inline void GlobalNamespace::__PlayerSaveData__PracticeSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PracticeSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__ColorScheme._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__ColorScheme::*)(::StringW, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(&::GlobalNamespace::__PlayerSaveData__ColorScheme::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x23728ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__ColorScheme*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveData__ColorScheme::__set_colorSchemeId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__ColorScheme::__get_colorSchemeId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__ColorScheme::__get_colorSchemeId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorScheme::__set_saberAColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x18>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::__PlayerSaveData__ColorScheme::__get_saberAColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x18>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__PlayerSaveData__ColorScheme::__get_saberAColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x18>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorScheme::__set_saberBColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x28>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::__PlayerSaveData__ColorScheme::__get_saberBColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x28>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__PlayerSaveData__ColorScheme::__get_saberBColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x28>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorScheme::__set_environmentColor0(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x38>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::__PlayerSaveData__ColorScheme::__get_environmentColor0()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x38>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__PlayerSaveData__ColorScheme::__get_environmentColor0() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x38>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorScheme::__set_environmentColor1(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x48>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::__PlayerSaveData__ColorScheme::__get_environmentColor1()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x48>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__PlayerSaveData__ColorScheme::__get_environmentColor1() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x48>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorScheme::__set_obstaclesColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x58>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::__PlayerSaveData__ColorScheme::__get_obstaclesColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x58>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__PlayerSaveData__ColorScheme::__get_obstaclesColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x58>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorScheme::__set_environmentColor0Boost(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x68>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::__PlayerSaveData__ColorScheme::__get_environmentColor0Boost()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x68>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__PlayerSaveData__ColorScheme::__get_environmentColor0Boost() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x68>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorScheme::__set_environmentColor1Boost(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x78>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::__PlayerSaveData__ColorScheme::__get_environmentColor1Boost()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x78>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__PlayerSaveData__ColorScheme::__get_environmentColor1Boost() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x78>(this);
}
inline ::GlobalNamespace::__PlayerSaveData__ColorScheme* GlobalNamespace::__PlayerSaveData__ColorScheme::New_ctor(::StringW  colorSchemeId, ::UnityEngine::Color  saberAColor, ::UnityEngine::Color  saberBColor, ::UnityEngine::Color  environmentColor0, ::UnityEngine::Color  environmentColor1, ::UnityEngine::Color  obstaclesColor, ::UnityEngine::Color  environmentColor0Boost, ::UnityEngine::Color  environmentColor1Boost)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveData__ColorScheme*>(colorSchemeId, saberAColor, saberBColor, environmentColor0, environmentColor1, obstaclesColor, environmentColor0Boost, environmentColor1Boost));
}
inline void GlobalNamespace::__PlayerSaveData__ColorScheme::_ctor(::StringW  colorSchemeId, ::UnityEngine::Color  saberAColor, ::UnityEngine::Color  saberBColor, ::UnityEngine::Color  environmentColor0, ::UnityEngine::Color  environmentColor1, ::UnityEngine::Color  obstaclesColor, ::UnityEngine::Color  environmentColor0Boost, ::UnityEngine::Color  environmentColor1Boost)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__ColorScheme*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, colorSchemeId, saberAColor, saberBColor, environmentColor0, environmentColor1, obstaclesColor, environmentColor0Boost, environmentColor1Boost);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::*)(bool, ::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*)>(&::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x237297c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__set_overrideDefaultColors(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__get_overrideDefaultColors()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__get_overrideDefaultColors() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__set_selectedColorSchemeId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__get_selectedColorSchemeId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__get_selectedColorSchemeId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__set_colorSchemes(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>* GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__get_colorSchemes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*> GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__get_colorSchemes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*, 0x20>(this);
}
inline ::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings* GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::New_ctor(bool  overrideDefaultColors, ::StringW  selectedColorSchemeId, ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*  colorSchemes)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*>(overrideDefaultColors, selectedColorSchemeId, colorSchemes));
}
inline void GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::_ctor(bool  overrideDefaultColors, ::StringW  selectedColorSchemeId, ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*  colorSchemes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, overrideDefaultColors, selectedColorSchemeId, colorSchemes);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::*)()>(&::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23729b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__set_overrideEnvironments(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__get_overrideEnvironments()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__get_overrideEnvironments() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__set_overrideNormalEnvironmentName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__get_overrideNormalEnvironmentName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__get_overrideNormalEnvironmentName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__set_override360EnvironmentName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__get_override360EnvironmentName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__get_override360EnvironmentName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
inline ::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings* GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*>());
}
inline void GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__GuestPlayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__GuestPlayer::*)()>(&::GlobalNamespace::__PlayerSaveData__GuestPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23729c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveData__GuestPlayer::__set_playerName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__GuestPlayer::__get_playerName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__GuestPlayer::__get_playerName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
inline ::GlobalNamespace::__PlayerSaveData__GuestPlayer* GlobalNamespace::__PlayerSaveData__GuestPlayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>());
}
inline void GlobalNamespace::__PlayerSaveData__GuestPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::*)()>(&::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23729c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__set_createServerNumberOfPlayers(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__get_createServerNumberOfPlayers()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__get_createServerNumberOfPlayers() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__set_quickPlayDifficulty(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__get_quickPlayDifficulty()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__get_quickPlayDifficulty() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__set_quickPlaySongPackMask(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x20>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__get_quickPlaySongPackMask()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x20>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__get_quickPlaySongPackMask() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x20>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__set_quickPlaySongPackMaskSerializedName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__get_quickPlaySongPackMaskSerializedName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__get_quickPlaySongPackMaskSerializedName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__set_quickPlayEnableLevelSelection(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__get_quickPlayEnableLevelSelection()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__get_quickPlayEnableLevelSelection() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
inline ::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings* GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*>());
}
inline void GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::*)()>(&::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2372a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__set_eulaVersion(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__get_eulaVersion()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__get_eulaVersion() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__set_privacyPolicyVersion(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__get_privacyPolicyVersion()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__get_privacyPolicyVersion() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__set_healthAndSafetyVersion(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__get_healthAndSafetyVersion()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__get_healthAndSafetyVersion() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__set_playerSensitivityFlagVersion(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__get_playerSensitivityFlagVersion()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__get_playerSensitivityFlagVersion() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
inline ::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData* GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*>());
}
inline void GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
constexpr void GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData::__PlayerSaveData__UserAgeCategorySaveData(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData  GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData::Unknown{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData  GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData::Child{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData  GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData::Teen{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData  GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData::Adult{static_cast<int32_t>(0x3)};
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData::__PlayerSaveData__PlayerSensitivityFlagSaveData(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData  GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData::Unknown{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData  GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData::Safe{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData  GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData::Explicit{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__LocalPlayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__LocalPlayer::*)()>(&::GlobalNamespace::__PlayerSaveData__LocalPlayer::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2372a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_playerId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_playerId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_playerId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_playerName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_playerName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_playerName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_shouldShowTutorialPrompt(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_shouldShowTutorialPrompt()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_shouldShowTutorialPrompt() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_shouldShow360Warning(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_shouldShow360Warning()  {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_shouldShow360Warning() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_agreedToEula(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x22>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_agreedToEula()  {
return ::cordl_internals::getInstanceField<bool, 0x22>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_agreedToEula() const {
return ::cordl_internals::getInstanceField<bool, 0x22>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_didSelectLanguage(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x23>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_didSelectLanguage()  {
return ::cordl_internals::getInstanceField<bool, 0x23>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_didSelectLanguage() const {
return ::cordl_internals::getInstanceField<bool, 0x23>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_agreedToMultiplayerDisclaimer(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_agreedToMultiplayerDisclaimer()  {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_agreedToMultiplayerDisclaimer() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_didSelectRegionVersion(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_didSelectRegionVersion()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_didSelectRegionVersion() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_selectedAvatarSystemTypeId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_selectedAvatarSystemTypeId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_selectedAvatarSystemTypeId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_playerAgreements(::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*, 0x38>(this, std::forward<::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData* GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_playerAgreements()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*> GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_playerAgreements() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*, 0x38>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_lastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x40>(this, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_lastSelectedBeatmapDifficulty()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x40>(this);
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_lastSelectedBeatmapDifficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x40>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_lastSelectedBeatmapCharacteristicName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_lastSelectedBeatmapCharacteristicName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_lastSelectedBeatmapCharacteristicName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_gameplayModifiers(::GlobalNamespace::__PlayerSaveData__GameplayModifiers*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__GameplayModifiers*, 0x50>(this, std::forward<::GlobalNamespace::__PlayerSaveData__GameplayModifiers*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers* GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_gameplayModifiers()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__GameplayModifiers*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__GameplayModifiers*> GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_gameplayModifiers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__GameplayModifiers*, 0x50>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_playerSpecificSettings(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*, 0x58>(this, std::forward<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings* GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_playerSpecificSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*> GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*, 0x58>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_practiceSettings(::GlobalNamespace::__PlayerSaveData__PracticeSettings*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__PracticeSettings*, 0x60>(this, std::forward<::GlobalNamespace::__PlayerSaveData__PracticeSettings*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PracticeSettings* GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_practiceSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PracticeSettings*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PracticeSettings*> GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_practiceSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PracticeSettings*, 0x60>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_playerAllOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*, 0x68>(this, std::forward<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData* GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_playerAllOverallStatsData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*> GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_playerAllOverallStatsData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*, 0x68>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_levelsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>*, 0x70>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>* GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_levelsStatsData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>*> GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_levelsStatsData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>*, 0x70>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_missionsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>*, 0x78>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>* GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_missionsStatsData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>*> GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_missionsStatsData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>*, 0x78>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_showedMissionHelpIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x80>(this, std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_showedMissionHelpIds()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_showedMissionHelpIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x80>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_colorSchemesSettings(::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*, 0x88>(this, std::forward<::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings* GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_colorSchemesSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*> GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_colorSchemesSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*, 0x88>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_overrideEnvironmentSettings(::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*, 0x90>(this, std::forward<::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings* GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_overrideEnvironmentSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*> GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_overrideEnvironmentSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*, 0x90>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_favoritesLevelIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x98>(this, std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_favoritesLevelIds()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_favoritesLevelIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x98>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_multiplayerModeSettings(::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*, 0xa0>(this, std::forward<::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings* GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_multiplayerModeSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*> GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_multiplayerModeSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*, 0xa0>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_currentDlcPromoDisplayCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xa8>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_currentDlcPromoDisplayCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0xa8>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_currentDlcPromoDisplayCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa8>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_currentDlcPromoId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xb0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_currentDlcPromoId()  {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_currentDlcPromoId() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_userAgeCategory(::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData, 0xb8>(this, std::forward<::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_userAgeCategory()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData, 0xb8>(this);
}
constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_userAgeCategory() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData, 0xb8>(this);
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__set_desiredSensitivityFlag(::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData, 0xbc>(this, std::forward<::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_desiredSensitivityFlag()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData, 0xbc>(this);
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__get_desiredSensitivityFlag() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData, 0xbc>(this);
}
inline ::GlobalNamespace::__PlayerSaveData__LocalPlayer* GlobalNamespace::__PlayerSaveData__LocalPlayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>());
}
inline void GlobalNamespace::__PlayerSaveData__LocalPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData::*)()>(&::GlobalNamespace::PlayerSaveData::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23727f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PlayerSaveData::__set_localPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>* GlobalNamespace::PlayerSaveData::__get_localPlayers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>*> GlobalNamespace::PlayerSaveData::__get_localPlayers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>*, 0x18>(this);
}
constexpr void GlobalNamespace::PlayerSaveData::__set_guestPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>* GlobalNamespace::PlayerSaveData::__get_guestPlayers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>*> GlobalNamespace::PlayerSaveData::__get_guestPlayers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>*, 0x20>(this);
}
inline ::GlobalNamespace::PlayerSaveData* GlobalNamespace::PlayerSaveData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlayerSaveData*>());
}
inline void GlobalNamespace::PlayerSaveData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
