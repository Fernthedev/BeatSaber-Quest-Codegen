// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableBinding
  struct PlayableBinding;
  // Forward declaring type: PlayableOutput
  struct PlayableOutput;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Audio.AudioPlayableBinding
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioPlayableBinding : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AudioPlayableBinding
    AudioPlayableBinding() noexcept {}
    // static public UnityEngine.Playables.PlayableBinding Create(System.String name, UnityEngine.Object key)
    // Offset: 0x23FB9A8
    static UnityEngine::Playables::PlayableBinding Create(::Il2CppString* name, UnityEngine::Object* key);
    // static private UnityEngine.Playables.PlayableOutput CreateAudioOutput(UnityEngine.Playables.PlayableGraph graph, System.String name)
    // Offset: 0x23FBAC8
    static UnityEngine::Playables::PlayableOutput CreateAudioOutput(UnityEngine::Playables::PlayableGraph graph, ::Il2CppString* name);
  }; // UnityEngine.Audio.AudioPlayableBinding
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioPlayableBinding*, "UnityEngine.Audio", "AudioPlayableBinding");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Audio::AudioPlayableBinding::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableBinding (*)(::Il2CppString*, UnityEngine::Object*)>(&UnityEngine::Audio::AudioPlayableBinding::Create)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioPlayableBinding*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, key});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioPlayableBinding::CreateAudioOutput
// Il2CppName: CreateAudioOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableOutput (*)(UnityEngine::Playables::PlayableGraph, ::Il2CppString*)>(&UnityEngine::Audio::AudioPlayableBinding::CreateAudioOutput)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioPlayableBinding*), "CreateAudioOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, name});
  }
};
