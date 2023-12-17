#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataStrobeFilterTransform_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIntensityReductionOptions_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataStrobeFilterTransform_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData.StartPotentialStrobe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::StartPotentialStrobe)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x223b940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData*>::get(),
                            "StartPotentialStrobe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData.AddStrobeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::AddStrobeData)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x223b868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData*>::get(),
                            "AddStrobeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::*)()>(&::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223b860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__set_isActive(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_isActive()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_isActive() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__set_strobeStartTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_strobeStartTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_strobeStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__set_startColorType(::GlobalNamespace::EnvironmentColorType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentColorType, 0x18>(this, std::forward<::GlobalNamespace::EnvironmentColorType>(value));
}
constexpr ::GlobalNamespace::EnvironmentColorType& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_startColorType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentColorType, 0x18>(this);
}
constexpr ::GlobalNamespace::EnvironmentColorType const& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_startColorType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentColorType, 0x18>(this);
}
constexpr void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__set_lastSwitchTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_lastSwitchTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_lastSwitchTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__set_lastColorType(::GlobalNamespace::EnvironmentColorType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentColorType, 0x20>(this, std::forward<::GlobalNamespace::EnvironmentColorType>(value));
}
constexpr ::GlobalNamespace::EnvironmentColorType& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_lastColorType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentColorType, 0x20>(this);
}
constexpr ::GlobalNamespace::EnvironmentColorType const& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_lastColorType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentColorType, 0x20>(this);
}
constexpr void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__set_lastIsOn(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_lastIsOn()  {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr bool const& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_lastIsOn() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__set_originalBasicBeatmapEventData(::GlobalNamespace::BasicBeatmapEventData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventData*, 0x28>(this, std::forward<::GlobalNamespace::BasicBeatmapEventData*>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventData* GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_originalBasicBeatmapEventData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventData*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BasicBeatmapEventData*> GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_originalBasicBeatmapEventData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventData*, 0x28>(this);
}
constexpr void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__set__foundFirstColoredEventData(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get__foundFirstColoredEventData()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get__foundFirstColoredEventData() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
inline void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::StartPotentialStrobe(::GlobalNamespace::BasicBeatmapEventData*  startBasicBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData*>::get(),
                            "StartPotentialStrobe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, startBasicBeatmapEventData);
}
inline void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::AddStrobeData(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData*>::get(),
                            "AddStrobeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, basicBeatmapEventData);
}
inline ::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData* GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData*>());
}
inline void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStrobeFilterTransform.CreateTransformedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::EnvironmentIntensityReductionOptions*)>(&::GlobalNamespace::BeatmapDataStrobeFilterTransform::CreateTransformedData)> {
  constexpr static std::size_t size = 0xc38;
  constexpr static std::size_t addrs = 0x223ac28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(),
                            "CreateTransformedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStrobeFilterTransform.GetOnEventDataValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::EnvironmentColorType)>(&::GlobalNamespace::BeatmapDataStrobeFilterTransform::GetOnEventDataValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x223b8fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(),
                            "GetOnEventDataValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStrobeFilterTransform.GetFlashAndFadeToBlackEventDataValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::EnvironmentColorType)>(&::GlobalNamespace::BeatmapDataStrobeFilterTransform::GetFlashAndFadeToBlackEventDataValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x223b920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(),
                            "GetFlashAndFadeToBlackEventDataValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get()}
                        )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::BeatmapDataStrobeFilterTransform::CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData*  beatmapData, ::GlobalNamespace::EnvironmentIntensityReductionOptions*  environmentIntensityReductionOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(),
                            "CreateTransformedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*, false>(nullptr, ___internal_method, beatmapData, environmentIntensityReductionOptions);
}
inline int32_t GlobalNamespace::BeatmapDataStrobeFilterTransform::GetOnEventDataValue(::GlobalNamespace::EnvironmentColorType  lightColorType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(),
                            "GetOnEventDataValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, lightColorType);
}
inline int32_t GlobalNamespace::BeatmapDataStrobeFilterTransform::GetFlashAndFadeToBlackEventDataValue(::GlobalNamespace::EnvironmentColorType  lightColorType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(),
                            "GetFlashAndFadeToBlackEventDataValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, lightColorType);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
