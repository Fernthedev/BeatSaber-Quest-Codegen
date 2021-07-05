// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.AnimationPlayableBinding
  class AnimationPlayableBinding : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AnimationPlayableBinding
    AnimationPlayableBinding() noexcept {}
    // static public UnityEngine.Playables.PlayableBinding Create(System.String name, UnityEngine.Object key)
    // Offset: 0x23550DC
    static UnityEngine::Playables::PlayableBinding Create(::Il2CppString* name, UnityEngine::Object* key);
    // static private UnityEngine.Playables.PlayableOutput CreateAnimationOutput(UnityEngine.Playables.PlayableGraph graph, System.String name)
    // Offset: 0x23551FC
    static UnityEngine::Playables::PlayableOutput CreateAnimationOutput(UnityEngine::Playables::PlayableGraph graph, ::Il2CppString* name);
  }; // UnityEngine.Animations.AnimationPlayableBinding
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationPlayableBinding*, "UnityEngine.Animations", "AnimationPlayableBinding");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPlayableBinding::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableBinding (*)(::Il2CppString*, UnityEngine::Object*)>(&UnityEngine::Animations::AnimationPlayableBinding::Create)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationPlayableBinding*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, key});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPlayableBinding::CreateAnimationOutput
// Il2CppName: CreateAnimationOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableOutput (*)(UnityEngine::Playables::PlayableGraph, ::Il2CppString*)>(&UnityEngine::Animations::AnimationPlayableBinding::CreateAnimationOutput)> {
  const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationPlayableBinding*), "CreateAnimationOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, name});
  }
};
