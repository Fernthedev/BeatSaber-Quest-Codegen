// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameNoteController
  class GameNoteController;
  // Forward declaring type: BombNoteController
  class BombNoteController;
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Forward declaring type: NoteLineConnectionController
  class NoteLineConnectionController;
  // Forward declaring type: BeatLine
  class BeatLine;
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectsInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectsInstaller : public Zenject::MonoInstaller {
    public:
    // private GameNoteController _normalBasicNotePrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameNoteController* normalBasicNotePrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameNoteController*) == 0x8);
    // private GameNoteController _proModeNotePrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameNoteController* proModeNotePrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameNoteController*) == 0x8);
    // private BombNoteController _bombNotePrefab
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BombNoteController* bombNotePrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BombNoteController*) == 0x8);
    // private ObstacleController _obstaclePrefab
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ObstacleController* obstaclePrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObstacleController*) == 0x8);
    // private NoteLineConnectionController _noteLineConnectionControllerPrefab
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::NoteLineConnectionController* noteLineConnectionControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteLineConnectionController*) == 0x8);
    // private BeatLine _beatLinePrefab
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatLine* beatLinePrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatLine*) == 0x8);
    // [InjectAttribute] Offset: 0xE433BC
    // private readonly GameplayCoreSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    // Creating value type constructor for type: BeatmapObjectsInstaller
    BeatmapObjectsInstaller(GlobalNamespace::GameNoteController* normalBasicNotePrefab_ = {}, GlobalNamespace::GameNoteController* proModeNotePrefab_ = {}, GlobalNamespace::BombNoteController* bombNotePrefab_ = {}, GlobalNamespace::ObstacleController* obstaclePrefab_ = {}, GlobalNamespace::NoteLineConnectionController* noteLineConnectionControllerPrefab_ = {}, GlobalNamespace::BeatLine* beatLinePrefab_ = {}, GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData_ = {}) noexcept : normalBasicNotePrefab{normalBasicNotePrefab_}, proModeNotePrefab{proModeNotePrefab_}, bombNotePrefab{bombNotePrefab_}, obstaclePrefab{obstaclePrefab_}, noteLineConnectionControllerPrefab{noteLineConnectionControllerPrefab_}, beatLinePrefab{beatLinePrefab_}, sceneSetupData{sceneSetupData_} {}
    // Get instance field reference: private GameNoteController _normalBasicNotePrefab
    GlobalNamespace::GameNoteController*& dyn__normalBasicNotePrefab();
    // Get instance field reference: private GameNoteController _proModeNotePrefab
    GlobalNamespace::GameNoteController*& dyn__proModeNotePrefab();
    // Get instance field reference: private BombNoteController _bombNotePrefab
    GlobalNamespace::BombNoteController*& dyn__bombNotePrefab();
    // Get instance field reference: private ObstacleController _obstaclePrefab
    GlobalNamespace::ObstacleController*& dyn__obstaclePrefab();
    // Get instance field reference: private NoteLineConnectionController _noteLineConnectionControllerPrefab
    GlobalNamespace::NoteLineConnectionController*& dyn__noteLineConnectionControllerPrefab();
    // Get instance field reference: private BeatLine _beatLinePrefab
    GlobalNamespace::BeatLine*& dyn__beatLinePrefab();
    // Get instance field reference: private readonly GameplayCoreSceneSetupData _sceneSetupData
    GlobalNamespace::GameplayCoreSceneSetupData*& dyn__sceneSetupData();
    // public System.Void .ctor()
    // Offset: 0x10D5F88
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectsInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectsInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectsInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x10D5DE4
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // BeatmapObjectsInstaller
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectsInstaller), 80 + sizeof(GlobalNamespace::GameplayCoreSceneSetupData*)> __GlobalNamespace_BeatmapObjectsInstallerSizeCheck;
  static_assert(sizeof(BeatmapObjectsInstaller) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectsInstaller*, "", "BeatmapObjectsInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectsInstaller::*)()>(&GlobalNamespace::BeatmapObjectsInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
