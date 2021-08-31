// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.EntityBehaviour
#include "UnityEngine/ProBuilder/EntityBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
  // Forward declaring type: LoadSceneMode
  struct LoadSceneMode;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.TriggerBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  class TriggerBehaviour : public UnityEngine::ProBuilder::EntityBehaviour {
    public:
    // Creating value type constructor for type: TriggerBehaviour
    TriggerBehaviour() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x22CCDE8
    // Implemented from: UnityEngine.ProBuilder.EntityBehaviour
    // Base method: System.Void EntityBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TriggerBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::TriggerBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TriggerBehaviour*, creationType>()));
    }
    // public override System.Void Initialize()
    // Offset: 0x22CCA90
    // Implemented from: UnityEngine.ProBuilder.EntityBehaviour
    // Base method: System.Void EntityBehaviour::Initialize()
    void Initialize();
    // public override System.Void OnEnterPlayMode()
    // Offset: 0x22CCC88
    // Implemented from: UnityEngine.ProBuilder.EntityBehaviour
    // Base method: System.Void EntityBehaviour::OnEnterPlayMode()
    void OnEnterPlayMode();
    // public override System.Void OnSceneLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0x22CCD38
    // Implemented from: UnityEngine.ProBuilder.EntityBehaviour
    // Base method: System.Void EntityBehaviour::OnSceneLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode mode)
    void OnSceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode);
  }; // UnityEngine.ProBuilder.TriggerBehaviour
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::TriggerBehaviour*, "UnityEngine.ProBuilder", "TriggerBehaviour");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::TriggerBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::TriggerBehaviour::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::TriggerBehaviour::*)()>(&UnityEngine::ProBuilder::TriggerBehaviour::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::TriggerBehaviour*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::TriggerBehaviour::OnEnterPlayMode
// Il2CppName: OnEnterPlayMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::TriggerBehaviour::*)()>(&UnityEngine::ProBuilder::TriggerBehaviour::OnEnterPlayMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::TriggerBehaviour*), "OnEnterPlayMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::TriggerBehaviour::OnSceneLoaded
// Il2CppName: OnSceneLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::TriggerBehaviour::*)(UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::LoadSceneMode)>(&UnityEngine::ProBuilder::TriggerBehaviour::OnSceneLoaded)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::TriggerBehaviour*), "OnSceneLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene, mode});
  }
};
