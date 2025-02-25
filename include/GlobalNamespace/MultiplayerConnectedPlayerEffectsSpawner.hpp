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
  // Forward declaring type: NoteDebrisSpawner
  class NoteDebrisSpawner;
  // Forward declaring type: BombExplosionEffect
  class BombExplosionEffect;
  // Forward declaring type: IConnectedPlayerNoteEventManager
  class IConnectedPlayerNoteEventManager;
  // Forward declaring type: NoteCutInfoNetSerializable
  class NoteCutInfoNetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerEffectsSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerEffectsSpawner : public UnityEngine::MonoBehaviour {
    public:
    // private NoteDebrisSpawner _noteDebrisSpawner
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::NoteDebrisSpawner* noteDebrisSpawner;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteDebrisSpawner*) == 0x8);
    // private BombExplosionEffect _bombExplosionEffect
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BombExplosionEffect* bombExplosionEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BombExplosionEffect*) == 0x8);
    // [InjectAttribute] Offset: 0xE3FAE0
    // private readonly IConnectedPlayerNoteEventManager _noteEventManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IConnectedPlayerNoteEventManager* noteEventManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayerNoteEventManager*) == 0x8);
    // Creating value type constructor for type: MultiplayerConnectedPlayerEffectsSpawner
    MultiplayerConnectedPlayerEffectsSpawner(GlobalNamespace::NoteDebrisSpawner* noteDebrisSpawner_ = {}, GlobalNamespace::BombExplosionEffect* bombExplosionEffect_ = {}, GlobalNamespace::IConnectedPlayerNoteEventManager* noteEventManager_ = {}) noexcept : noteDebrisSpawner{noteDebrisSpawner_}, bombExplosionEffect{bombExplosionEffect_}, noteEventManager{noteEventManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private NoteDebrisSpawner _noteDebrisSpawner
    GlobalNamespace::NoteDebrisSpawner*& dyn__noteDebrisSpawner();
    // Get instance field reference: private BombExplosionEffect _bombExplosionEffect
    GlobalNamespace::BombExplosionEffect*& dyn__bombExplosionEffect();
    // Get instance field reference: private readonly IConnectedPlayerNoteEventManager _noteEventManager
    GlobalNamespace::IConnectedPlayerNoteEventManager*& dyn__noteEventManager();
    // protected System.Void Start()
    // Offset: 0x11C9574
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x11C9664
    void OnDestroy();
    // private System.Void HandleNoteEventManagerConnectedPlayerNoteWasCut(NoteCutInfoNetSerializable noteCutInfo)
    // Offset: 0x11C9764
    void HandleNoteEventManagerConnectedPlayerNoteWasCut(GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);
    // public System.Void .ctor()
    // Offset: 0x11C9960
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerEffectsSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerEffectsSpawner*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerEffectsSpawner
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerEffectsSpawner), 40 + sizeof(GlobalNamespace::IConnectedPlayerNoteEventManager*)> __GlobalNamespace_MultiplayerConnectedPlayerEffectsSpawnerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerEffectsSpawner) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*, "", "MultiplayerConnectedPlayerEffectsSpawner");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::HandleNoteEventManagerConnectedPlayerNoteWasCut
// Il2CppName: HandleNoteEventManagerConnectedPlayerNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)(GlobalNamespace::NoteCutInfoNetSerializable*)>(&GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::HandleNoteEventManagerConnectedPlayerNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfoNetSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*), "HandleNoteEventManagerConnectedPlayerNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteCutInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
