// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayableOutput
#include "UnityEngine/Playables/IPlayableOutput.hpp"
// Including type: UnityEngine.Playables.PlayableOutputHandle
#include "UnityEngine/Playables/PlayableOutputHandle.hpp"
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
  // Forward declaring type: PlayableOutput
  struct PlayableOutput;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Audio.AudioPlayableOutput
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: DE1D00
  // [NativeHeaderAttribute] Offset: DE1D00
  // [StaticAccessorAttribute] Offset: DE1D00
  // [NativeHeaderAttribute] Offset: DE1D00
  // [NativeHeaderAttribute] Offset: DE1D00
  struct AudioPlayableOutput/*, public System::ValueType, public UnityEngine::Playables::IPlayableOutput*/ {
    public:
    // private UnityEngine.Playables.PlayableOutputHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Playables::PlayableOutputHandle m_Handle;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableOutputHandle) == 0xC);
    // Creating value type constructor for type: AudioPlayableOutput
    constexpr AudioPlayableOutput(UnityEngine::Playables::PlayableOutputHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayableOutput
    operator UnityEngine::Playables::IPlayableOutput() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayableOutput*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableOutputHandle
    constexpr operator UnityEngine::Playables::PlayableOutputHandle() const noexcept {
      return m_Handle;
    }
    // Get instance field reference: private UnityEngine.Playables.PlayableOutputHandle m_Handle
    UnityEngine::Playables::PlayableOutputHandle& dyn_m_Handle();
    // static public UnityEngine.Audio.AudioPlayableOutput get_Null()
    // Offset: 0x23FBC4C
    static UnityEngine::Audio::AudioPlayableOutput get_Null();
    // System.Void .ctor(UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0x23FBCD8
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  AudioPlayableOutput(UnityEngine::Playables::PlayableOutputHandle handle)
    // static public UnityEngine.Audio.AudioPlayableOutput Create(UnityEngine.Playables.PlayableGraph graph, System.String name, UnityEngine.AudioSource target)
    // Offset: 0x23FBB0C
    static UnityEngine::Audio::AudioPlayableOutput Create(UnityEngine::Playables::PlayableGraph graph, ::Il2CppString* name, UnityEngine::AudioSource* target);
    // public UnityEngine.Playables.PlayableOutputHandle GetHandle()
    // Offset: 0x23FBDE0
    UnityEngine::Playables::PlayableOutputHandle GetHandle();
    // static public UnityEngine.Audio.AudioPlayableOutput op_Explicit(UnityEngine.Playables.PlayableOutput output)
    // Offset: 0x23FBDEC
    explicit AudioPlayableOutput(UnityEngine::Playables::PlayableOutput& output);
    // public System.Void SetTarget(UnityEngine.AudioSource value)
    // Offset: 0x23FBD90
    void SetTarget(UnityEngine::AudioSource* value);
    // public System.Void SetEvaluateOnSeek(System.Boolean value)
    // Offset: 0x23FBE84
    void SetEvaluateOnSeek(bool value);
    // static private System.Void InternalSetTarget(ref UnityEngine.Playables.PlayableOutputHandle output, UnityEngine.AudioSource target)
    // Offset: 0x23FBE34
    static void InternalSetTarget(ByRef<UnityEngine::Playables::PlayableOutputHandle> output, UnityEngine::AudioSource* target);
    // static private System.Void InternalSetEvaluateOnSeek(ref UnityEngine.Playables.PlayableOutputHandle output, System.Boolean value)
    // Offset: 0x23FBED4
    static void InternalSetEvaluateOnSeek(ByRef<UnityEngine::Playables::PlayableOutputHandle> output, bool value);
  }; // UnityEngine.Audio.AudioPlayableOutput
  #pragma pack(pop)
  static check_size<sizeof(AudioPlayableOutput), 0 + sizeof(UnityEngine::Playables::PlayableOutputHandle)> __UnityEngine_Audio_AudioPlayableOutputSizeCheck;
  static_assert(sizeof(AudioPlayableOutput) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioPlayableOutput, "UnityEngine.Audio", "AudioPlayableOutput");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Audio::AudioPlayableOutput::get_Null
// Il2CppName: get_Null
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Audio::AudioPlayableOutput (*)()>(&UnityEngine::Audio::AudioPlayableOutput::get_Null)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioPlayableOutput), "get_Null", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioPlayableOutput::AudioPlayableOutput
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Audio::AudioPlayableOutput::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Audio::AudioPlayableOutput (*)(UnityEngine::Playables::PlayableGraph, ::Il2CppString*, UnityEngine::AudioSource*)>(&UnityEngine::Audio::AudioPlayableOutput::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioPlayableOutput), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, name, target});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioPlayableOutput::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableOutputHandle (UnityEngine::Audio::AudioPlayableOutput::*)()>(&UnityEngine::Audio::AudioPlayableOutput::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioPlayableOutput), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioPlayableOutput::AudioPlayableOutput
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Audio::AudioPlayableOutput::SetTarget
// Il2CppName: SetTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Audio::AudioPlayableOutput::*)(UnityEngine::AudioSource*)>(&UnityEngine::Audio::AudioPlayableOutput::SetTarget)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioPlayableOutput), "SetTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioPlayableOutput::SetEvaluateOnSeek
// Il2CppName: SetEvaluateOnSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Audio::AudioPlayableOutput::*)(bool)>(&UnityEngine::Audio::AudioPlayableOutput::SetEvaluateOnSeek)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioPlayableOutput), "SetEvaluateOnSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioPlayableOutput::InternalSetTarget
// Il2CppName: InternalSetTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::Playables::PlayableOutputHandle>, UnityEngine::AudioSource*)>(&UnityEngine::Audio::AudioPlayableOutput::InternalSetTarget)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioPlayableOutput), "InternalSetTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, target});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioPlayableOutput::InternalSetEvaluateOnSeek
// Il2CppName: InternalSetEvaluateOnSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::Playables::PlayableOutputHandle>, bool)>(&UnityEngine::Audio::AudioPlayableOutput::InternalSetEvaluateOnSeek)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioPlayableOutput), "InternalSetEvaluateOnSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, value});
  }
};
