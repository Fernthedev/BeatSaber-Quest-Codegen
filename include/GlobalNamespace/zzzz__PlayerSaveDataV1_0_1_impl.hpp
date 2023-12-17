#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveDataV1_0_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveDataV1_0_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType  GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType::All{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType  GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType::FullHeightOnly{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType  GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType::None{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType  GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType::Bar{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType  GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType::Battery{static_cast<int32_t>(0x1)};
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed  GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed  GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed::Faster{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed  GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed::Slower{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::*)()>(&::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236ad28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__set_energyType(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType, 0x10>(this, std::forward<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_energyType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType, 0x10>(this);
}
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType const& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_energyType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__set_noFail(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_noFail()  {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_noFail() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__set_instaFail(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x15>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_instaFail()  {
return ::cordl_internals::getInstanceField<bool, 0x15>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_instaFail() const {
return ::cordl_internals::getInstanceField<bool, 0x15>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__set_failOnSaberClash(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x16>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_failOnSaberClash()  {
return ::cordl_internals::getInstanceField<bool, 0x16>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_failOnSaberClash() const {
return ::cordl_internals::getInstanceField<bool, 0x16>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__set_enabledObstacleType(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType, 0x18>(this, std::forward<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_enabledObstacleType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType, 0x18>(this);
}
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType const& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_enabledObstacleType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType, 0x18>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__set_fastNotes(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_fastNotes()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_fastNotes() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__set_strictAngles(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1d>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_strictAngles()  {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_strictAngles() const {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__set_disappearingArrows(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1e>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_disappearingArrows()  {
return ::cordl_internals::getInstanceField<bool, 0x1e>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_disappearingArrows() const {
return ::cordl_internals::getInstanceField<bool, 0x1e>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__set_noBombs(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1f>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_noBombs()  {
return ::cordl_internals::getInstanceField<bool, 0x1f>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_noBombs() const {
return ::cordl_internals::getInstanceField<bool, 0x1f>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__set_songSpeed(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed, 0x20>(this, std::forward<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_songSpeed()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed, 0x20>(this);
}
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed const& GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::__get_songSpeed() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed, 0x20>(this);
}
inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers* GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers*>());
}
inline void GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::*)()>(&::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236ad30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__set_staticLights(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_staticLights()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_staticLights() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__set_leftHanded(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_leftHanded()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_leftHanded() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__set_swapColors(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x12>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_swapColors()  {
return ::cordl_internals::getInstanceField<bool, 0x12>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_swapColors() const {
return ::cordl_internals::getInstanceField<bool, 0x12>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__set_playerHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_playerHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_playerHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__set_disableSFX(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_disableSFX()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_disableSFX() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__set_reduceDebris(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_reduceDebris()  {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_reduceDebris() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__set_advancedHud(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1a>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_advancedHud()  {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_advancedHud() const {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__set_noTextsAndHuds(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1b>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_noTextsAndHuds()  {
return ::cordl_internals::getInstanceField<bool, 0x1b>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::__get_noTextsAndHuds() const {
return ::cordl_internals::getInstanceField<bool, 0x1b>(this);
}
inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings* GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*>());
}
inline void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::*)()>(&::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x236ad38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::*)(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*, ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*, ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*)>(&::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x236ade4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::__set_campaignOverallStatsData(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*, 0x10>(this, std::forward<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::__get_campaignOverallStatsData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*> GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::__get_campaignOverallStatsData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::__set_soloFreePlayOverallStatsData(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*, 0x18>(this, std::forward<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::__get_soloFreePlayOverallStatsData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*> GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::__get_soloFreePlayOverallStatsData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*, 0x18>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::__set_partyFreePlayOverallStatsData(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*, 0x20>(this, std::forward<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::__get_partyFreePlayOverallStatsData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*> GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::__get_partyFreePlayOverallStatsData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*, 0x20>(this);
}
inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData* GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData*>());
}
inline void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData* GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::New_ctor(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*  campaignOverallStatsData, ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*  soloFreePlayOverallStatsData, ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*  partyFreePlayOverallStatsData)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData*>(campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData));
}
inline void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData::_ctor(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*  campaignOverallStatsData, ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*  soloFreePlayOverallStatsData, ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*  partyFreePlayOverallStatsData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::*)()>(&::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236addc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::*)(int32_t, int32_t, int32_t, int64_t, int32_t, int32_t, int32_t, int32_t, float_t, int32_t, int64_t)>(&::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x236ae20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_goodCutsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_goodCutsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_goodCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_badCutsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_badCutsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_badCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_missedCutsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_missedCutsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_missedCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_totalScore(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_totalScore()  {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr int64_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_totalScore() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_playedLevelsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_playedLevelsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_playedLevelsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_cleardLevelsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_cleardLevelsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_cleardLevelsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_failedLevelsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_failedLevelsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_failedLevelsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_fullComboCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_fullComboCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_fullComboCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_timePlayed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_timePlayed()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_timePlayed() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_handDistanceTravelled(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_handDistanceTravelled()  {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_handDistanceTravelled() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__set_cummulativeCutScoreWithoutMultiplier(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x40>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_cummulativeCutScoreWithoutMultiplier()  {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this);
}
constexpr int64_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::__get_cummulativeCutScoreWithoutMultiplier() const {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this);
}
inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*>());
}
inline void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::New_ctor(int32_t  goodCutsCount, int32_t  badCutsCount, int32_t  missedCutsCount, int64_t  totalScore, int32_t  playedLevelsCount, int32_t  cleardLevelsCount, int32_t  failedLevelsCount, int32_t  fullComboCount, float_t  timePlayed, int32_t  handDistanceTravelled, int64_t  cummulativeCutScoreWithoutMultiplier)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*>(goodCutsCount, badCutsCount, missedCutsCount, totalScore, playedLevelsCount, cleardLevelsCount, failedLevelsCount, fullComboCount, timePlayed, handDistanceTravelled, cummulativeCutScoreWithoutMultiplier));
}
inline void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData::_ctor(int32_t  goodCutsCount, int32_t  badCutsCount, int32_t  missedCutsCount, int64_t  totalScore, int32_t  playedLevelsCount, int32_t  cleardLevelsCount, int32_t  failedLevelsCount, int32_t  fullComboCount, float_t  timePlayed, int32_t  handDistanceTravelled, int64_t  cummulativeCutScoreWithoutMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, goodCutsCount, badCutsCount, missedCutsCount, totalScore, playedLevelsCount, cleardLevelsCount, failedLevelsCount, fullComboCount, timePlayed, handDistanceTravelled, cummulativeCutScoreWithoutMultiplier);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::*)()>(&::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236aed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__set_levelId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_levelId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__set_difficulty(::GlobalNamespace::BeatmapDifficulty  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x18>(this, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_difficulty()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x18>(this);
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_difficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x18>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__set_highScore(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_highScore()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_highScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__set_maxCombo(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_maxCombo()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_maxCombo() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__set_fullCombo(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_fullCombo()  {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_fullCombo() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__set_maxRank(::GlobalNamespace::__RankModel__Rank  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__RankModel__Rank, 0x28>(this, std::forward<::GlobalNamespace::__RankModel__Rank>(value));
}
constexpr ::GlobalNamespace::__RankModel__Rank& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_maxRank()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RankModel__Rank, 0x28>(this);
}
constexpr ::GlobalNamespace::__RankModel__Rank const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_maxRank() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RankModel__Rank, 0x28>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__set_validScore(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_validScore()  {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_validScore() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__set_playCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_playCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::__get_playCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData* GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData*>());
}
inline void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData::*)()>(&::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236aed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData::__set_missionId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData::__get_missionId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData::__get_missionId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData::__set_cleared(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData::__get_cleared()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData::__get_cleared() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData* GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData*>());
}
inline void GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData::*)()>(&::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236aee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData::__set_unlockedAchievements(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x10>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData::__get_unlockedAchievements()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x10>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData::__get_unlockedAchievements() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData::__set_unlockedAchievementsToUpload(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData::__get_unlockedAchievementsToUpload()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData::__get_unlockedAchievementsToUpload() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData* GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData*>());
}
inline void GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::*)()>(&::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x236aee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__set_playerId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_playerId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_playerId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__set_playerName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_playerName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_playerName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__set_shouldShowTutorialPrompt(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_shouldShowTutorialPrompt()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_shouldShowTutorialPrompt() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__set_gameplayModifiers(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers*, 0x28>(this, std::forward<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers* GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_gameplayModifiers()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers*> GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_gameplayModifiers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers*, 0x28>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__set_playerSpecificSettings(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*, 0x30>(this, std::forward<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings* GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_playerSpecificSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*> GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*, 0x30>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__set_playerAllOverallStatsData(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData*, 0x38>(this, std::forward<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData* GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_playerAllOverallStatsData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData*> GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_playerAllOverallStatsData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData*, 0x38>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__set_levelsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData*>*, 0x40>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData*>* GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_levelsStatsData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData*>*> GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_levelsStatsData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData*>*, 0x40>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__set_missionsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData*>*, 0x48>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData*>* GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_missionsStatsData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData*>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData*>*> GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_missionsStatsData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData*>*, 0x48>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__set_showedMissionHelpIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x50>(this, std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_showedMissionHelpIds()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_showedMissionHelpIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x50>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__set_achievementsData(::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData*, 0x58>(this, std::forward<::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData* GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_achievementsData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData*> GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::__get_achievementsData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData*, 0x58>(this);
}
inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer* GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer*>());
}
inline void GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer::*)()>(&::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236aef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer::__set_playerName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer::__get_playerName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer::__get_playerName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer::__set_playerSpecificSettings(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*, 0x18>(this, std::forward<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*>(value));
}
constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings* GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer::__get_playerSpecificSettings()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*> GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer::__get_playerSpecificSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*, 0x18>(this);
}
inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer* GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer*>());
}
inline void GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataV1_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveDataV1_0_1::*)()>(&::GlobalNamespace::PlayerSaveDataV1_0_1::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x236ad18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1::__set_version(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::PlayerSaveDataV1_0_1::__get_version()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveDataV1_0_1::__get_version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1::__set_localPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer*>* GlobalNamespace::PlayerSaveDataV1_0_1::__get_localPlayers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer*>*> GlobalNamespace::PlayerSaveDataV1_0_1::__get_localPlayers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer*>*, 0x18>(this);
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1::__set_guestPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer*>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer*>* GlobalNamespace::PlayerSaveDataV1_0_1::__get_guestPlayers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer*>*> GlobalNamespace::PlayerSaveDataV1_0_1::__get_guestPlayers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer*>*, 0x20>(this);
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1::__set_lastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x28>(this, std::forward<::GlobalNamespace::BeatmapDifficulty>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::PlayerSaveDataV1_0_1::__get_lastSelectedBeatmapDifficulty()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x28>(this);
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::PlayerSaveDataV1_0_1::__get_lastSelectedBeatmapDifficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficulty, 0x28>(this);
}
inline ::GlobalNamespace::PlayerSaveDataV1_0_1* GlobalNamespace::PlayerSaveDataV1_0_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlayerSaveDataV1_0_1*>());
}
inline void GlobalNamespace::PlayerSaveDataV1_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
constexpr ::GlobalNamespace::BeatmapDifficulty  GlobalNamespace::PlayerSaveDataV1_0_1::kDefaulLastSelectedBeatmapDifficulty{static_cast<int32_t>(0x1)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
