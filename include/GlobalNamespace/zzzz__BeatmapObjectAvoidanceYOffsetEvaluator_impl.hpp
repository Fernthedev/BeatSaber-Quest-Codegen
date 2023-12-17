#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidanceYOffsetEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidanceYOffsetEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::*)(float_t, float_t)>(&::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2217808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::__set_songTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::__get_songTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::__get_songTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::__set_yOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::__get_yOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::__get_yOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::_ctor(float_t  songTime, float_t  yOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, songTime, yOffset);
}
// Ctor Parameters [CppParam { name: "songTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "yOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData(float_t  songTime, float_t  yOffset) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->songTime = songTime;
this->yOffset = yOffset;
}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::*)(::GlobalNamespace::IAudioTimeSource*, ::GlobalNamespace::IBeatmapObjectSpawnController*, float_t, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData)>(&::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x22176b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapObjectSpawnController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator.ManualUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::*)()>(&::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::ManualUpdate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2217810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator.GetJumpOffsetYAtJumpStartSongTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::*)(float_t)>(&::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::GetJumpOffsetYAtJumpStartSongTime)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2217988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(),
                            "GetJumpOffsetYAtJumpStartSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__set__currentYJumpOffsetBufferEndIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__currentYJumpOffsetBufferEndIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__currentYJumpOffsetBufferEndIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__set__jumpDurationToDesiredZPosition(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__jumpDurationToDesiredZPosition()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__jumpDurationToDesiredZPosition() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__set__yJumpOffsetBuffer(::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData,::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData,::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData,::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData,::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*>& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__yJumpOffsetBuffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData,::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData,::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*> const& GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__yJumpOffsetBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData,::Array<::GlobalNamespace::__BeatmapObjectAvoidanceYOffsetEvaluator__BufferData>*>, 0x18>(this);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x20>(this, std::forward<::GlobalNamespace::IAudioTimeSource*>(value));
}
constexpr ::GlobalNamespace::IAudioTimeSource* GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__audioTimeSource()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__audioTimeSource() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x20>(this);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapObjectSpawnController*, 0x28>(this, std::forward<::GlobalNamespace::IBeatmapObjectSpawnController*>(value));
}
constexpr ::GlobalNamespace::IBeatmapObjectSpawnController* GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__beatmapObjectSpawnController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapObjectSpawnController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::__get__beatmapObjectSpawnController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapObjectSpawnController*, 0x28>(this);
}
inline ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator* GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::New_ctor(::GlobalNamespace::IAudioTimeSource*  audioTimeSource, ::GlobalNamespace::IBeatmapObjectSpawnController*  beatmapObjectSpawnController, float_t  moveToPlayerHeadTParam, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData  noteSpawnData)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>(audioTimeSource, beatmapObjectSpawnController, moveToPlayerHeadTParam, noteSpawnData));
}
inline void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::_ctor(::GlobalNamespace::IAudioTimeSource*  audioTimeSource, ::GlobalNamespace::IBeatmapObjectSpawnController*  beatmapObjectSpawnController, float_t  moveToPlayerHeadTParam, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData  noteSpawnData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapObjectSpawnController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, audioTimeSource, beatmapObjectSpawnController, moveToPlayerHeadTParam, noteSpawnData);
}
inline void GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::ManualUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator::GetJumpOffsetYAtJumpStartSongTime(float_t  lastDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*>::get(),
                            "GetJumpOffsetYAtJumpStartSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, lastDeltaTime);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
