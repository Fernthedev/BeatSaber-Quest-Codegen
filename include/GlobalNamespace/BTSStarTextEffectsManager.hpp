// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BTSStarTextEffectController
#include "GlobalNamespace/BTSStarTextEffectController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BTSStarTextEventEffect
  class BTSStarTextEventEffect;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BTSStarTextEffectsManager
  // [TokenAttribute] Offset: FFFFFFFF
  class BTSStarTextEffectsManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BTSStarTextEffectsManager::$DespawnEffectDelayed$d__5
    class $DespawnEffectDelayed$d__5;
    // private BTSStarTextEventEffect _btsStarTextEventEffect
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BTSStarTextEventEffect* btsStarTextEventEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BTSStarTextEventEffect*) == 0x8);
    // [InjectAttribute] Offset: 0xE302D4
    // private readonly BTSStarTextEffectController/Pool _btsStarTextEffectControllerPool
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BTSStarTextEffectController::Pool* btsStarTextEffectControllerPool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BTSStarTextEffectController::Pool*) == 0x8);
    // Creating value type constructor for type: BTSStarTextEffectsManager
    BTSStarTextEffectsManager(GlobalNamespace::BTSStarTextEventEffect* btsStarTextEventEffect_ = {}, GlobalNamespace::BTSStarTextEffectController::Pool* btsStarTextEffectControllerPool_ = {}) noexcept : btsStarTextEventEffect{btsStarTextEventEffect_}, btsStarTextEffectControllerPool{btsStarTextEffectControllerPool_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private BTSStarTextEventEffect _btsStarTextEventEffect
    GlobalNamespace::BTSStarTextEventEffect* _get__btsStarTextEventEffect();
    // Set instance field: private BTSStarTextEventEffect _btsStarTextEventEffect
    void _set__btsStarTextEventEffect(GlobalNamespace::BTSStarTextEventEffect* value);
    // Get instance field: private readonly BTSStarTextEffectController/Pool _btsStarTextEffectControllerPool
    GlobalNamespace::BTSStarTextEffectController::Pool* _get__btsStarTextEffectControllerPool();
    // Set instance field: private readonly BTSStarTextEffectController/Pool _btsStarTextEffectControllerPool
    void _set__btsStarTextEffectControllerPool(GlobalNamespace::BTSStarTextEffectController::Pool* value);
    // protected System.Void Start()
    // Offset: 0x1188D30
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1188E64
    void OnDestroy();
    // private System.Void HandleBTSStarTextEventEffect(UnityEngine.Sprite sprite, UnityEngine.Transform parentTransform, System.Single desiredAnimationLength)
    // Offset: 0x1188F98
    void HandleBTSStarTextEventEffect(UnityEngine::Sprite* sprite, UnityEngine::Transform* parentTransform, float desiredAnimationLength);
    // private System.Collections.IEnumerator DespawnEffectDelayed(BTSStarTextEffectController effectController)
    // Offset: 0x1189034
    System::Collections::IEnumerator* DespawnEffectDelayed(GlobalNamespace::BTSStarTextEffectController* effectController);
    // public System.Void .ctor()
    // Offset: 0x11890DC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSStarTextEffectsManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSStarTextEffectsManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSStarTextEffectsManager*, creationType>()));
    }
  }; // BTSStarTextEffectsManager
  #pragma pack(pop)
  static check_size<sizeof(BTSStarTextEffectsManager), 32 + sizeof(GlobalNamespace::BTSStarTextEffectController::Pool*)> __GlobalNamespace_BTSStarTextEffectsManagerSizeCheck;
  static_assert(sizeof(BTSStarTextEffectsManager) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSStarTextEffectsManager*, "", "BTSStarTextEffectsManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectsManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSStarTextEffectsManager::*)()>(&GlobalNamespace::BTSStarTextEffectsManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEffectsManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectsManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSStarTextEffectsManager::*)()>(&GlobalNamespace::BTSStarTextEffectsManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEffectsManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectsManager::HandleBTSStarTextEventEffect
// Il2CppName: HandleBTSStarTextEventEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSStarTextEffectsManager::*)(UnityEngine::Sprite*, UnityEngine::Transform*, float)>(&GlobalNamespace::BTSStarTextEffectsManager::HandleBTSStarTextEventEffect)> {
  static const MethodInfo* get() {
    static auto* sprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    static auto* parentTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* desiredAnimationLength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEffectsManager*), "HandleBTSStarTextEventEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sprite, parentTransform, desiredAnimationLength});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectsManager::DespawnEffectDelayed
// Il2CppName: DespawnEffectDelayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::BTSStarTextEffectsManager::*)(GlobalNamespace::BTSStarTextEffectController*)>(&GlobalNamespace::BTSStarTextEffectsManager::DespawnEffectDelayed)> {
  static const MethodInfo* get() {
    static auto* effectController = &::il2cpp_utils::GetClassFromName("", "BTSStarTextEffectController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEffectsManager*), "DespawnEffectDelayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{effectController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEffectsManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
