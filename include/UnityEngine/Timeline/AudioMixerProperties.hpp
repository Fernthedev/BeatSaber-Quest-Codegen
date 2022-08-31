// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: AudioMixerProperties
  class AudioMixerProperties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::AudioMixerProperties);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AudioMixerProperties*, "UnityEngine.Timeline", "AudioMixerProperties");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.AudioMixerProperties
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioMixerProperties : public ::UnityEngine::Playables::PlayableBehaviour {
    public:
    public:
    // [RangeAttribute] Offset: 0x10A455C
    // public System.Single volume
    // Size: 0x4
    // Offset: 0x10
    float volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x10A4574
    // public System.Single stereoPan
    // Size: 0x4
    // Offset: 0x14
    float stereoPan;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x10A458C
    // public System.Single spatialBlend
    // Size: 0x4
    // Offset: 0x18
    float spatialBlend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single volume
    [[deprecated("Use field access instead!")]] float& dyn_volume();
    // Get instance field reference: public System.Single stereoPan
    [[deprecated("Use field access instead!")]] float& dyn_stereoPan();
    // Get instance field reference: public System.Single spatialBlend
    [[deprecated("Use field access instead!")]] float& dyn_spatialBlend();
    // public System.Void .ctor()
    // Offset: 0x1DA7F84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioMixerProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::AudioMixerProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioMixerProperties*, creationType>()));
    }
    // public override System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1DA7D68
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);
  }; // UnityEngine.Timeline.AudioMixerProperties
  #pragma pack(pop)
  static check_size<sizeof(AudioMixerProperties), 24 + sizeof(float)> __UnityEngine_Timeline_AudioMixerPropertiesSizeCheck;
  static_assert(sizeof(AudioMixerProperties) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioMixerProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioMixerProperties::PrepareFrame
// Il2CppName: PrepareFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::AudioMixerProperties::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::AudioMixerProperties::PrepareFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AudioMixerProperties*), "PrepareFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
