#pragma once
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayState_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
constexpr void UnityEngine::Playables::__FrameData__Flags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Playables::__FrameData__Flags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Playables::__FrameData__Flags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::__FrameData__Flags::__FrameData__Flags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Playables::__FrameData__Flags  UnityEngine::Playables::__FrameData__Flags::Evaluate{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Playables::__FrameData__Flags  UnityEngine::Playables::__FrameData__Flags::SeekOccured{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Playables::__FrameData__Flags  UnityEngine::Playables::__FrameData__Flags::Loop{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Playables::__FrameData__Flags  UnityEngine::Playables::__FrameData__Flags::Hold{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Playables::__FrameData__Flags  UnityEngine::Playables::__FrameData__Flags::EffectivePlayStateDelayed{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::Playables::__FrameData__Flags  UnityEngine::Playables::__FrameData__Flags::EffectivePlayStatePlaying{static_cast<int32_t>(0x20)};
constexpr void UnityEngine::Playables::__FrameData__EvaluationType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Playables::__FrameData__EvaluationType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Playables::__FrameData__EvaluationType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::__FrameData__EvaluationType::__FrameData__EvaluationType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::Playables::__FrameData__EvaluationType  UnityEngine::Playables::__FrameData__EvaluationType::Evaluate{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Playables::__FrameData__EvaluationType  UnityEngine::Playables::__FrameData__EvaluationType::Playback{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.HasFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Playables::FrameData::*)(::UnityEngine::Playables::__FrameData__Flags)>(&::UnityEngine::Playables::FrameData::HasFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2cf53b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "HasFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::__FrameData__Flags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_deltaTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_deltaTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cf53c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_deltaTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_effectiveSpeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_effectiveSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf53d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_effectiveSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_evaluationType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::__FrameData__EvaluationType (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_evaluationType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2cf53dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_evaluationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_seekOccurred
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_seekOccurred)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cf53ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_seekOccurred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_timeLooped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_timeLooped)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cf53f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_timeLooped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_timeHeld
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_timeHeld)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cf5404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_timeHeld",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_output
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutput (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_output)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cf5410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_output",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_effectivePlayState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayState (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_effectivePlayState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2cf541c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_effectivePlayState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Playables::FrameData::__set_m_FrameID(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t& UnityEngine::Playables::FrameData::__get_m_FrameID()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint64_t const& UnityEngine::Playables::FrameData::__get_m_FrameID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Playables::FrameData::__set_m_DeltaTime(double_t  value)  {
::cordl_internals::setInstanceField<double_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<double_t>(value));
}
constexpr double_t& UnityEngine::Playables::FrameData::__get_m_DeltaTime()  {
return ::cordl_internals::getInstanceField<double_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr double_t const& UnityEngine::Playables::FrameData::__get_m_DeltaTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Playables::FrameData::__set_m_Weight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::Playables::FrameData::__get_m_Weight()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::Playables::FrameData::__get_m_Weight() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Playables::FrameData::__set_m_EffectiveWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::Playables::FrameData::__get_m_EffectiveWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::Playables::FrameData::__get_m_EffectiveWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Playables::FrameData::__set_m_EffectiveParentDelay(double_t  value)  {
::cordl_internals::setInstanceField<double_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<double_t>(value));
}
constexpr double_t& UnityEngine::Playables::FrameData::__get_m_EffectiveParentDelay()  {
return ::cordl_internals::getInstanceField<double_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr double_t const& UnityEngine::Playables::FrameData::__get_m_EffectiveParentDelay() const {
return ::cordl_internals::getInstanceField<double_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Playables::FrameData::__set_m_EffectiveParentSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::Playables::FrameData::__get_m_EffectiveParentSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::Playables::FrameData::__get_m_EffectiveParentSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Playables::FrameData::__set_m_EffectiveSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::Playables::FrameData::__get_m_EffectiveSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::Playables::FrameData::__get_m_EffectiveSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Playables::FrameData::__set_m_Flags(::UnityEngine::Playables::__FrameData__Flags  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::__FrameData__Flags, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Playables::__FrameData__Flags>(value));
}
constexpr ::UnityEngine::Playables::__FrameData__Flags& UnityEngine::Playables::FrameData::__get_m_Flags()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::__FrameData__Flags, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Playables::__FrameData__Flags const& UnityEngine::Playables::FrameData::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::__FrameData__Flags, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Playables::FrameData::__set_m_Output(::UnityEngine::Playables::PlayableOutput  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::PlayableOutput, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Playables::PlayableOutput>(value));
}
constexpr ::UnityEngine::Playables::PlayableOutput& UnityEngine::Playables::FrameData::__get_m_Output()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableOutput, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Playables::PlayableOutput const& UnityEngine::Playables::FrameData::__get_m_Output() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableOutput, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline bool UnityEngine::Playables::FrameData::HasFlags(::UnityEngine::Playables::__FrameData__Flags  flag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "HasFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::__FrameData__Flags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, flag);
}
inline float_t UnityEngine::Playables::FrameData::get_deltaTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_deltaTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t UnityEngine::Playables::FrameData::get_effectiveSpeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_effectiveSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::__FrameData__EvaluationType UnityEngine::Playables::FrameData::get_evaluationType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_evaluationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::__FrameData__EvaluationType, false>(*this, ___internal_method);
}
inline bool UnityEngine::Playables::FrameData::get_seekOccurred()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_seekOccurred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::Playables::FrameData::get_timeLooped()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_timeLooped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::Playables::FrameData::get_timeHeld()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_timeHeld",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableOutput UnityEngine::Playables::FrameData::get_output()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_output",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutput, false>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayState UnityEngine::Playables::FrameData::get_effectivePlayState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_effectivePlayState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayState, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_FrameID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeltaTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EffectiveWeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EffectiveParentDelay", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EffectiveParentSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EffectiveSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::UnityEngine::Playables::__FrameData__Flags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Output", ty: "::UnityEngine::Playables::PlayableOutput", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::FrameData::FrameData(uint64_t  m_FrameID, double_t  m_DeltaTime, float_t  m_Weight, float_t  m_EffectiveWeight, double_t  m_EffectiveParentDelay, float_t  m_EffectiveParentSpeed, float_t  m_EffectiveSpeed, ::UnityEngine::Playables::__FrameData__Flags  m_Flags, ::UnityEngine::Playables::PlayableOutput  m_Output) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->m_FrameID = m_FrameID;
this->m_DeltaTime = m_DeltaTime;
this->m_Weight = m_Weight;
this->m_EffectiveWeight = m_EffectiveWeight;
this->m_EffectiveParentDelay = m_EffectiveParentDelay;
this->m_EffectiveParentSpeed = m_EffectiveParentSpeed;
this->m_EffectiveSpeed = m_EffectiveSpeed;
this->m_Flags = m_Flags;
this->m_Output = m_Output;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
