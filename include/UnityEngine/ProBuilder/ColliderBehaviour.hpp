// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: UnityEngine.ProBuilder.ColliderBehaviour
  // [DisallowMultipleComponent] Offset: E39DC0
  class ColliderBehaviour : public UnityEngine::ProBuilder::EntityBehaviour {
    public:
    // Creating value type constructor for type: ColliderBehaviour
    ColliderBehaviour() noexcept {}
    // public override System.Void Initialize()
    // Offset: 0x1F63580
    // Implemented from: UnityEngine.ProBuilder.EntityBehaviour
    // Base method: System.Void EntityBehaviour::Initialize()
    void Initialize();
    // public override System.Void OnEnterPlayMode()
    // Offset: 0x1F636F8
    // Implemented from: UnityEngine.ProBuilder.EntityBehaviour
    // Base method: System.Void EntityBehaviour::OnEnterPlayMode()
    void OnEnterPlayMode();
    // public override System.Void OnSceneLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0x1F637A8
    // Implemented from: UnityEngine.ProBuilder.EntityBehaviour
    // Base method: System.Void EntityBehaviour::OnSceneLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode mode)
    void OnSceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode);
    // public System.Void .ctor()
    // Offset: 0x1F63858
    // Implemented from: UnityEngine.ProBuilder.EntityBehaviour
    // Base method: System.Void EntityBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColliderBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ColliderBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColliderBehaviour*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.ColliderBehaviour
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ColliderBehaviour*, "UnityEngine.ProBuilder", "ColliderBehaviour");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColliderBehaviour::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::ColliderBehaviour::*)()>(&UnityEngine::ProBuilder::ColliderBehaviour::Initialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColliderBehaviour*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColliderBehaviour::OnEnterPlayMode
// Il2CppName: OnEnterPlayMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::ColliderBehaviour::*)()>(&UnityEngine::ProBuilder::ColliderBehaviour::OnEnterPlayMode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColliderBehaviour*), "OnEnterPlayMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColliderBehaviour::OnSceneLoaded
// Il2CppName: OnSceneLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::ColliderBehaviour::*)(UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::LoadSceneMode)>(&UnityEngine::ProBuilder::ColliderBehaviour::OnSceneLoaded)> {
  const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ColliderBehaviour*), "OnSceneLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene, mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ColliderBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
