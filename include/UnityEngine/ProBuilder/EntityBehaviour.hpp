// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.EntityBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class EntityBehaviour : public UnityEngine::MonoBehaviour {
    public:
    // [TooltipAttribute] Offset: 0xE55ECC
    // public System.Boolean manageVisibility
    // Size: 0x1
    // Offset: 0x18
    bool manageVisibility;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EntityBehaviour
    EntityBehaviour(bool manageVisibility_ = {}) noexcept : manageVisibility{manageVisibility_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: public System.Boolean manageVisibility
    bool _get_manageVisibility();
    // Set instance field: public System.Boolean manageVisibility
    void _set_manageVisibility(bool value);
    // public System.Void Initialize()
    // Offset: 0xFFFFFFFF
    void Initialize();
    // public System.Void OnEnterPlayMode()
    // Offset: 0xFFFFFFFF
    void OnEnterPlayMode();
    // public System.Void OnSceneLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0xFFFFFFFF
    void OnSceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode);
    // protected System.Void SetMaterial(UnityEngine.Material material)
    // Offset: 0x1AEE8D4
    void SetMaterial(UnityEngine::Material* material);
    // protected System.Void .ctor()
    // Offset: 0x1AEE9B0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EntityBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::EntityBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EntityBehaviour*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.EntityBehaviour
  #pragma pack(pop)
  static check_size<sizeof(EntityBehaviour), 24 + sizeof(bool)> __UnityEngine_ProBuilder_EntityBehaviourSizeCheck;
  static_assert(sizeof(EntityBehaviour) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::EntityBehaviour*, "UnityEngine.ProBuilder", "EntityBehaviour");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EntityBehaviour::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::EntityBehaviour::*)()>(&UnityEngine::ProBuilder::EntityBehaviour::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EntityBehaviour*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EntityBehaviour::OnEnterPlayMode
// Il2CppName: OnEnterPlayMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::EntityBehaviour::*)()>(&UnityEngine::ProBuilder::EntityBehaviour::OnEnterPlayMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EntityBehaviour*), "OnEnterPlayMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EntityBehaviour::OnSceneLoaded
// Il2CppName: OnSceneLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::EntityBehaviour::*)(UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::LoadSceneMode)>(&UnityEngine::ProBuilder::EntityBehaviour::OnSceneLoaded)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EntityBehaviour*), "OnSceneLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene, mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EntityBehaviour::SetMaterial
// Il2CppName: SetMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::EntityBehaviour::*)(UnityEngine::Material*)>(&UnityEngine::ProBuilder::EntityBehaviour::SetMaterial)> {
  static const MethodInfo* get() {
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::EntityBehaviour*), "SetMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{material});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::EntityBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
