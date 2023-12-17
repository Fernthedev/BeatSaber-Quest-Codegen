#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorBaseData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventTransitionType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightColorBaseData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorBaseData::*)(float_t, ::GlobalNamespace::BeatmapEventTransitionType, ::GlobalNamespace::EnvironmentColorType, float_t, int32_t, float_t, bool)>(&::GlobalNamespace::LightColorBaseData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x233cd24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBaseData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventTransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightColorBaseData::__set_beat(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightColorBaseData::__get_beat()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& GlobalNamespace::LightColorBaseData::__get_beat() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void GlobalNamespace::LightColorBaseData::__set_transitionType(::GlobalNamespace::BeatmapEventTransitionType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapEventTransitionType, 0x14>(this, std::forward<::GlobalNamespace::BeatmapEventTransitionType>(value));
}
constexpr ::GlobalNamespace::BeatmapEventTransitionType& GlobalNamespace::LightColorBaseData::__get_transitionType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapEventTransitionType, 0x14>(this);
}
constexpr ::GlobalNamespace::BeatmapEventTransitionType const& GlobalNamespace::LightColorBaseData::__get_transitionType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapEventTransitionType, 0x14>(this);
}
constexpr void GlobalNamespace::LightColorBaseData::__set_colorType(::GlobalNamespace::EnvironmentColorType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentColorType, 0x18>(this, std::forward<::GlobalNamespace::EnvironmentColorType>(value));
}
constexpr ::GlobalNamespace::EnvironmentColorType& GlobalNamespace::LightColorBaseData::__get_colorType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentColorType, 0x18>(this);
}
constexpr ::GlobalNamespace::EnvironmentColorType const& GlobalNamespace::LightColorBaseData::__get_colorType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentColorType, 0x18>(this);
}
constexpr void GlobalNamespace::LightColorBaseData::__set_brightness(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightColorBaseData::__get_brightness()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::LightColorBaseData::__get_brightness() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::LightColorBaseData::__set_strobeBeatFrequency(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LightColorBaseData::__get_strobeBeatFrequency()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& GlobalNamespace::LightColorBaseData::__get_strobeBeatFrequency() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void GlobalNamespace::LightColorBaseData::__set_strobeBrightness(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightColorBaseData::__get_strobeBrightness()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::LightColorBaseData::__get_strobeBrightness() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::LightColorBaseData::__set_strobeFade(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LightColorBaseData::__get_strobeFade()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::LightColorBaseData::__get_strobeFade() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline ::GlobalNamespace::LightColorBaseData* GlobalNamespace::LightColorBaseData::New_ctor(float_t  beat, ::GlobalNamespace::BeatmapEventTransitionType  transitionType, ::GlobalNamespace::EnvironmentColorType  colorType, float_t  brightness, int32_t  strobeBeatFrequency, float_t  strobeBrightness, bool  strobeFade)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightColorBaseData*>(beat, transitionType, colorType, brightness, strobeBeatFrequency, strobeBrightness, strobeFade));
}
inline void GlobalNamespace::LightColorBaseData::_ctor(float_t  beat, ::GlobalNamespace::BeatmapEventTransitionType  transitionType, ::GlobalNamespace::EnvironmentColorType  colorType, float_t  brightness, int32_t  strobeBeatFrequency, float_t  strobeBrightness, bool  strobeFade)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBaseData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventTransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, transitionType, colorType, brightness, strobeBeatFrequency, strobeBrightness, strobeFade);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
