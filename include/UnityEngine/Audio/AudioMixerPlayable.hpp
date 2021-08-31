// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
}
// Completed forward declares
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Audio.AudioMixerPlayable
  // [TokenAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: DDBC14
  // [RequiredByNativeCodeAttribute] Offset: DDBC14
  // [NativeHeaderAttribute] Offset: DDBC14
  // [NativeHeaderAttribute] Offset: DDBC14
  // [NativeHeaderAttribute] Offset: DDBC14
  struct AudioMixerPlayable/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Audio::AudioMixerPlayable>, public UnityEngine::Playables::IPlayable*/ {
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableHandle) == 0xC);
    // Creating value type constructor for type: AudioMixerPlayable
    constexpr AudioMixerPlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Audio::AudioMixerPlayable>
    operator System::IEquatable_1<UnityEngine::Audio::AudioMixerPlayable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Audio::AudioMixerPlayable>*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayable
    operator UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableHandle
    constexpr operator UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Get instance field reference: private UnityEngine.Playables.PlayableHandle m_Handle
    UnityEngine::Playables::PlayableHandle& dyn_m_Handle();
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x23FEA84
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  AudioMixerPlayable(UnityEngine::Playables::PlayableHandle handle)
    // static public UnityEngine.Audio.AudioMixerPlayable Create(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount, System.Boolean normalizeInputVolumes)
    // Offset: 0x23FE950
    static UnityEngine::Audio::AudioMixerPlayable Create(UnityEngine::Playables::PlayableGraph graph, int inputCount, bool normalizeInputVolumes);
    // static private UnityEngine.Playables.PlayableHandle CreateHandle(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount, System.Boolean normalizeInputVolumes)
    // Offset: 0x23FE990
    static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph, int inputCount, bool normalizeInputVolumes);
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0x23FEB94
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Audio.AudioMixerPlayable other)
    // Offset: 0x23FEBD4
    bool Equals(UnityEngine::Audio::AudioMixerPlayable other);
    // static private System.Boolean CreateAudioMixerPlayableInternal(ref UnityEngine.Playables.PlayableGraph graph, System.Boolean normalizeInputVolumes, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x23FEB3C
    static bool CreateAudioMixerPlayableInternal(ByRef<UnityEngine::Playables::PlayableGraph> graph, bool normalizeInputVolumes, ByRef<UnityEngine::Playables::PlayableHandle> handle);
  }; // UnityEngine.Audio.AudioMixerPlayable
  #pragma pack(pop)
  static check_size<sizeof(AudioMixerPlayable), 0 + sizeof(UnityEngine::Playables::PlayableHandle)> __UnityEngine_Audio_AudioMixerPlayableSizeCheck;
  static_assert(sizeof(AudioMixerPlayable) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioMixerPlayable, "UnityEngine.Audio", "AudioMixerPlayable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Audio::AudioMixerPlayable::AudioMixerPlayable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Audio::AudioMixerPlayable::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Audio::AudioMixerPlayable (*)(UnityEngine::Playables::PlayableGraph, int, bool)>(&UnityEngine::Audio::AudioMixerPlayable::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* normalizeInputVolumes = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioMixerPlayable), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, inputCount, normalizeInputVolumes});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioMixerPlayable::CreateHandle
// Il2CppName: CreateHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (*)(UnityEngine::Playables::PlayableGraph, int, bool)>(&UnityEngine::Audio::AudioMixerPlayable::CreateHandle)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* normalizeInputVolumes = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioMixerPlayable), "CreateHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, inputCount, normalizeInputVolumes});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioMixerPlayable::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (UnityEngine::Audio::AudioMixerPlayable::*)()>(&UnityEngine::Audio::AudioMixerPlayable::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioMixerPlayable), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioMixerPlayable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Audio::AudioMixerPlayable::*)(UnityEngine::Audio::AudioMixerPlayable)>(&UnityEngine::Audio::AudioMixerPlayable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Audio", "AudioMixerPlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioMixerPlayable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioMixerPlayable::CreateAudioMixerPlayableInternal
// Il2CppName: CreateAudioMixerPlayableInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<UnityEngine::Playables::PlayableGraph>, bool, ByRef<UnityEngine::Playables::PlayableHandle>)>(&UnityEngine::Audio::AudioMixerPlayable::CreateAudioMixerPlayableInternal)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* normalizeInputVolumes = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioMixerPlayable), "CreateAudioMixerPlayableInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, normalizeInputVolumes, handle});
  }
};
