// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: CoreGameHUDController
#include "GlobalNamespace/CoreGameHUDController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FlyingSpriteSpawner
  class FlyingSpriteSpawner;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: NoteController
  class NoteController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: MissedNoteEffectSpawner
  class MissedNoteEffectSpawner : public UnityEngine::MonoBehaviour {
    public:
    // private FlyingSpriteSpawner _missedNoteFlyingSpriteSpawner
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::FlyingSpriteSpawner* missedNoteFlyingSpriteSpawner;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FlyingSpriteSpawner*) == 0x8);
    // [InjectAttribute] Offset: 0xE19DF4
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE19E04
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xE19E14
    // private readonly CoreGameHUDController/InitData _initData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::CoreGameHUDController::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CoreGameHUDController::InitData*) == 0x8);
    // private System.Single _spawnPosZ
    // Size: 0x4
    // Offset: 0x38
    float spawnPosZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MissedNoteEffectSpawner
    MissedNoteEffectSpawner(GlobalNamespace::FlyingSpriteSpawner* missedNoteFlyingSpriteSpawner_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, GlobalNamespace::CoreGameHUDController::InitData* initData_ = {}, float spawnPosZ_ = {}) noexcept : missedNoteFlyingSpriteSpawner{missedNoteFlyingSpriteSpawner_}, beatmapObjectManager{beatmapObjectManager_}, audioTimeSyncController{audioTimeSyncController_}, initData{initData_}, spawnPosZ{spawnPosZ_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x10928D8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x10929B8
    void OnDestroy();
    // private System.Void HandleNoteWasMissed(NoteController noteController)
    // Offset: 0x1092A58
    void HandleNoteWasMissed(GlobalNamespace::NoteController* noteController);
    // public System.Void .ctor()
    // Offset: 0x1092C60
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissedNoteEffectSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissedNoteEffectSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissedNoteEffectSpawner*, creationType>()));
    }
  }; // MissedNoteEffectSpawner
  #pragma pack(pop)
  static check_size<sizeof(MissedNoteEffectSpawner), 56 + sizeof(float)> __GlobalNamespace_MissedNoteEffectSpawnerSizeCheck;
  static_assert(sizeof(MissedNoteEffectSpawner) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissedNoteEffectSpawner*, "", "MissedNoteEffectSpawner");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissedNoteEffectSpawner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissedNoteEffectSpawner::*)()>(&GlobalNamespace::MissedNoteEffectSpawner::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissedNoteEffectSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissedNoteEffectSpawner::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissedNoteEffectSpawner::*)()>(&GlobalNamespace::MissedNoteEffectSpawner::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissedNoteEffectSpawner*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissedNoteEffectSpawner::HandleNoteWasMissed
// Il2CppName: HandleNoteWasMissed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissedNoteEffectSpawner::*)(GlobalNamespace::NoteController*)>(&GlobalNamespace::MissedNoteEffectSpawner::HandleNoteWasMissed)> {
  const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissedNoteEffectSpawner*), "HandleNoteWasMissed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissedNoteEffectSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
