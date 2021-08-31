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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VFXController
  class VFXController;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLobbyAvatarController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLobbyAvatarController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerLobbyAvatarController::Factory
    class Factory;
    // Nested type: GlobalNamespace::MultiplayerLobbyAvatarController::$SpawnAnimationCoroutine$d__8
    class $SpawnAnimationCoroutine$d__8;
    // Nested type: GlobalNamespace::MultiplayerLobbyAvatarController::$ShowDespawnAnimationAndDestroy$d__10
    class $ShowDespawnAnimationAndDestroy$d__10;
    // Nested type: GlobalNamespace::MultiplayerLobbyAvatarController::$DespawnAnimationCoroutine$d__12
    class $DespawnAnimationCoroutine$d__12;
    // private UnityEngine.Playables.PlayableDirector _spawnEffect
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Playables::PlayableDirector* spawnEffect;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableDirector*) == 0x8);
    // private VFXController _despawnVFXController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::VFXController* despawnVFXController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VFXController*) == 0x8);
    // private System.Single _spawnAvatarDelay
    // Size: 0x4
    // Offset: 0x28
    float spawnAvatarDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _despawnAvatarDelay
    // Size: 0x4
    // Offset: 0x2C
    float despawnAvatarDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _destroyAvatarDelay
    // Size: 0x4
    // Offset: 0x30
    float destroyAvatarDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: destroyAvatarDelay and: visualObjects
    char __padding4[0x4] = {};
    // private UnityEngine.GameObject[] _visualObjects
    // Size: 0x8
    // Offset: 0x38
    ::Array<UnityEngine::GameObject*>* visualObjects;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GameObject*>*) == 0x8);
    // Creating value type constructor for type: MultiplayerLobbyAvatarController
    MultiplayerLobbyAvatarController(UnityEngine::Playables::PlayableDirector* spawnEffect_ = {}, GlobalNamespace::VFXController* despawnVFXController_ = {}, float spawnAvatarDelay_ = {}, float despawnAvatarDelay_ = {}, float destroyAvatarDelay_ = {}, ::Array<UnityEngine::GameObject*>* visualObjects_ = {}) noexcept : spawnEffect{spawnEffect_}, despawnVFXController{despawnVFXController_}, spawnAvatarDelay{spawnAvatarDelay_}, despawnAvatarDelay{despawnAvatarDelay_}, destroyAvatarDelay{destroyAvatarDelay_}, visualObjects{visualObjects_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.Playables.PlayableDirector _spawnEffect
    UnityEngine::Playables::PlayableDirector* _get__spawnEffect();
    // Set instance field: private UnityEngine.Playables.PlayableDirector _spawnEffect
    void _set__spawnEffect(UnityEngine::Playables::PlayableDirector* value);
    // Get instance field: private VFXController _despawnVFXController
    GlobalNamespace::VFXController* _get__despawnVFXController();
    // Set instance field: private VFXController _despawnVFXController
    void _set__despawnVFXController(GlobalNamespace::VFXController* value);
    // Get instance field: private System.Single _spawnAvatarDelay
    float _get__spawnAvatarDelay();
    // Set instance field: private System.Single _spawnAvatarDelay
    void _set__spawnAvatarDelay(float value);
    // Get instance field: private System.Single _despawnAvatarDelay
    float _get__despawnAvatarDelay();
    // Set instance field: private System.Single _despawnAvatarDelay
    void _set__despawnAvatarDelay(float value);
    // Get instance field: private System.Single _destroyAvatarDelay
    float _get__destroyAvatarDelay();
    // Set instance field: private System.Single _destroyAvatarDelay
    void _set__destroyAvatarDelay(float value);
    // Get instance field: private UnityEngine.GameObject[] _visualObjects
    ::Array<UnityEngine::GameObject*>* _get__visualObjects();
    // Set instance field: private UnityEngine.GameObject[] _visualObjects
    void _set__visualObjects(::Array<UnityEngine::GameObject*>* value);
    // public System.Void ShowSpawnAnimation(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x1060104
    void ShowSpawnAnimation(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // private System.Collections.IEnumerator SpawnAnimationCoroutine()
    // Offset: 0x106023C
    System::Collections::IEnumerator* SpawnAnimationCoroutine();
    // private System.Void ActivateVisualObjects(System.Boolean on)
    // Offset: 0x10601C0
    void ActivateVisualObjects(bool on);
    // public System.Collections.IEnumerator ShowDespawnAnimationAndDestroy()
    // Offset: 0x10602D8
    System::Collections::IEnumerator* ShowDespawnAnimationAndDestroy();
    // public System.Void DestroySelf()
    // Offset: 0x1060374
    void DestroySelf();
    // private System.Collections.IEnumerator DespawnAnimationCoroutine()
    // Offset: 0x10603F0
    System::Collections::IEnumerator* DespawnAnimationCoroutine();
    // public System.Void .ctor()
    // Offset: 0x106048C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyAvatarController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLobbyAvatarController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyAvatarController*, creationType>()));
    }
  }; // MultiplayerLobbyAvatarController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLobbyAvatarController), 56 + sizeof(::Array<UnityEngine::GameObject*>*)> __GlobalNamespace_MultiplayerLobbyAvatarControllerSizeCheck;
  static_assert(sizeof(MultiplayerLobbyAvatarController) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyAvatarController*, "", "MultiplayerLobbyAvatarController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarController::ShowSpawnAnimation
// Il2CppName: ShowSpawnAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarController::*)(UnityEngine::Vector3, UnityEngine::Quaternion)>(&GlobalNamespace::MultiplayerLobbyAvatarController::ShowSpawnAnimation)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarController*), "ShowSpawnAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarController::SpawnAnimationCoroutine
// Il2CppName: SpawnAnimationCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::MultiplayerLobbyAvatarController::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarController::SpawnAnimationCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarController*), "SpawnAnimationCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarController::ActivateVisualObjects
// Il2CppName: ActivateVisualObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarController::*)(bool)>(&GlobalNamespace::MultiplayerLobbyAvatarController::ActivateVisualObjects)> {
  static const MethodInfo* get() {
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarController*), "ActivateVisualObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{on});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarController::ShowDespawnAnimationAndDestroy
// Il2CppName: ShowDespawnAnimationAndDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::MultiplayerLobbyAvatarController::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarController::ShowDespawnAnimationAndDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarController*), "ShowDespawnAnimationAndDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarController::DestroySelf
// Il2CppName: DestroySelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyAvatarController::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarController::DestroySelf)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarController*), "DestroySelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarController::DespawnAnimationCoroutine
// Il2CppName: DespawnAnimationCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::MultiplayerLobbyAvatarController::*)()>(&GlobalNamespace::MultiplayerLobbyAvatarController::DespawnAnimationCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyAvatarController*), "DespawnAnimationCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
