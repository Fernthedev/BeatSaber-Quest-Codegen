#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationOutputWeightProcessor_def.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationOutputWeightProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationPlayableOutput_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineEvaluateCallback_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationMotionXToDeltaPlayable_def.hpp"
constexpr void UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo::__set_mixer(::UnityEngine::Playables::Playable  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::Playable, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Playables::Playable>(value));
}
constexpr ::UnityEngine::Playables::Playable& UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo::__get_mixer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::Playable, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Playables::Playable const& UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo::__get_mixer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::Playable, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo::__set_parentMixer(::UnityEngine::Playables::Playable  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::Playable, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Playables::Playable>(value));
}
constexpr ::UnityEngine::Playables::Playable& UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo::__get_parentMixer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::Playable, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Playables::Playable const& UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo::__get_parentMixer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::Playable, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo::__set_port(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo::__get_port()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo::__get_port() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "mixer", ty: "::UnityEngine::Playables::Playable", modifiers: "", def_value: Some("{}") }, CppParam { name: "parentMixer", ty: "::UnityEngine::Playables::Playable", modifiers: "", def_value: Some("{}") }, CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo::__AnimationOutputWeightProcessor__WeightInfo(::UnityEngine::Playables::Playable  mixer, ::UnityEngine::Playables::Playable  parentMixer, int32_t  port) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->mixer = mixer;
this->parentMixer = parentMixer;
this->port = port;
}
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationOutputWeightProcessor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationOutputWeightProcessor::*)(::UnityEngine::Animations::AnimationPlayableOutput)>(&::UnityEngine::Timeline::AnimationOutputWeightProcessor::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c4f358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animations::AnimationPlayableOutput>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationOutputWeightProcessor.FindMixers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationOutputWeightProcessor::*)()>(&::UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2c4f418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(),
                            "FindMixers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationOutputWeightProcessor.FindMixers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationOutputWeightProcessor::*)(::UnityEngine::Playables::Playable, int32_t, ::UnityEngine::Playables::Playable)>(&::UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x2c4f500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(),
                            "FindMixers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationOutputWeightProcessor.Evaluate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationOutputWeightProcessor::*)()>(&::UnityEngine::Timeline::AnimationOutputWeightProcessor::Evaluate)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2c4f7c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(),
                            "Evaluate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineEvaluateCallback"
constexpr  UnityEngine::Timeline::AnimationOutputWeightProcessor::operator ::UnityEngine::Timeline::ITimelineEvaluateCallback*() noexcept {
return static_cast<::UnityEngine::Timeline::ITimelineEvaluateCallback*>(static_cast<void*>(this));
}
constexpr void UnityEngine::Timeline::AnimationOutputWeightProcessor::__set_m_Output(::UnityEngine::Animations::AnimationPlayableOutput  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Animations::AnimationPlayableOutput, 0x10>(this, std::forward<::UnityEngine::Animations::AnimationPlayableOutput>(value));
}
constexpr ::UnityEngine::Animations::AnimationPlayableOutput& UnityEngine::Timeline::AnimationOutputWeightProcessor::__get_m_Output()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Animations::AnimationPlayableOutput, 0x10>(this);
}
constexpr ::UnityEngine::Animations::AnimationPlayableOutput const& UnityEngine::Timeline::AnimationOutputWeightProcessor::__get_m_Output() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Animations::AnimationPlayableOutput, 0x10>(this);
}
constexpr void UnityEngine::Timeline::AnimationOutputWeightProcessor::__set_m_MotionXPlayable(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable, 0x20>(this, std::forward<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>(value));
}
constexpr ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable& UnityEngine::Timeline::AnimationOutputWeightProcessor::__get_m_MotionXPlayable()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable, 0x20>(this);
}
constexpr ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable const& UnityEngine::Timeline::AnimationOutputWeightProcessor::__get_m_MotionXPlayable() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable, 0x20>(this);
}
constexpr void UnityEngine::Timeline::AnimationOutputWeightProcessor::__set_m_Mixers(::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>*, 0x30>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>* UnityEngine::Timeline::AnimationOutputWeightProcessor::__get_m_Mixers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>*> UnityEngine::Timeline::AnimationOutputWeightProcessor::__get_m_Mixers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Timeline::__AnimationOutputWeightProcessor__WeightInfo>*, 0x30>(this);
}
inline ::UnityEngine::Timeline::AnimationOutputWeightProcessor* UnityEngine::Timeline::AnimationOutputWeightProcessor::New_ctor(::UnityEngine::Animations::AnimationPlayableOutput  output)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>(output));
}
inline void UnityEngine::Timeline::AnimationOutputWeightProcessor::_ctor(::UnityEngine::Animations::AnimationPlayableOutput  output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animations::AnimationPlayableOutput>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, output);
}
inline void UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(),
                            "FindMixers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationOutputWeightProcessor::FindMixers(::UnityEngine::Playables::Playable  parent, int32_t  port, ::UnityEngine::Playables::Playable  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(),
                            "FindMixers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parent, port, node);
}
inline void UnityEngine::Timeline::AnimationOutputWeightProcessor::Evaluate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationOutputWeightProcessor*>::get(),
                            "Evaluate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
