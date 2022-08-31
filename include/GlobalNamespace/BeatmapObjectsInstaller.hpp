// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameNoteController
  class GameNoteController;
  // Forward declaring type: BurstSliderGameNoteController
  class BurstSliderGameNoteController;
  // Forward declaring type: BombNoteController
  class BombNoteController;
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Forward declaring type: SliderController
  class SliderController;
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
  // Forward declaring type: BeatmapObjectsInstaller
  class BeatmapObjectsInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectsInstaller*, "", "BeatmapObjectsInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectsInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectsInstaller : public ::Zenject::MonoInstaller {
    public:
    public:
    // private GameNoteController _normalBasicNotePrefab
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GameNoteController* normalBasicNotePrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameNoteController*) == 0x8);
    // private GameNoteController _proModeNotePrefab
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::GameNoteController* proModeNotePrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameNoteController*) == 0x8);
    // private GameNoteController _burstSliderHeadNotePrefab
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::GameNoteController* burstSliderHeadNotePrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameNoteController*) == 0x8);
    // private BurstSliderGameNoteController _burstSliderNotePrefab
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::BurstSliderGameNoteController* burstSliderNotePrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BurstSliderGameNoteController*) == 0x8);
    // private BurstSliderGameNoteController _burstSliderFillPrefab
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BurstSliderGameNoteController* burstSliderFillPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BurstSliderGameNoteController*) == 0x8);
    // private BombNoteController _bombNotePrefab
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::BombNoteController* bombNotePrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BombNoteController*) == 0x8);
    // private ObstacleController _obstaclePrefab
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::ObstacleController* obstaclePrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ObstacleController*) == 0x8);
    // private SliderController _sliderShortPrefab
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::SliderController* sliderShortPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SliderController*) == 0x8);
    // private SliderController _sliderMediumPrefab
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::SliderController* sliderMediumPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SliderController*) == 0x8);
    // private SliderController _sliderLongPrefab
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::SliderController* sliderLongPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SliderController*) == 0x8);
    // private NoteLineConnectionController _noteLineConnectionControllerPrefab
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::NoteLineConnectionController* noteLineConnectionControllerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteLineConnectionController*) == 0x8);
    // private BeatLine _beatLinePrefab
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::BeatLine* beatLinePrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatLine*) == 0x8);
    // [InjectAttribute] Offset: 0x10EE174
    // private readonly GameplayCoreSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    public:
    // Get instance field reference: private GameNoteController _normalBasicNotePrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameNoteController*& dyn__normalBasicNotePrefab();
    // Get instance field reference: private GameNoteController _proModeNotePrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameNoteController*& dyn__proModeNotePrefab();
    // Get instance field reference: private GameNoteController _burstSliderHeadNotePrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameNoteController*& dyn__burstSliderHeadNotePrefab();
    // Get instance field reference: private BurstSliderGameNoteController _burstSliderNotePrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BurstSliderGameNoteController*& dyn__burstSliderNotePrefab();
    // Get instance field reference: private BurstSliderGameNoteController _burstSliderFillPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BurstSliderGameNoteController*& dyn__burstSliderFillPrefab();
    // Get instance field reference: private BombNoteController _bombNotePrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BombNoteController*& dyn__bombNotePrefab();
    // Get instance field reference: private ObstacleController _obstaclePrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ObstacleController*& dyn__obstaclePrefab();
    // Get instance field reference: private SliderController _sliderShortPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SliderController*& dyn__sliderShortPrefab();
    // Get instance field reference: private SliderController _sliderMediumPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SliderController*& dyn__sliderMediumPrefab();
    // Get instance field reference: private SliderController _sliderLongPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SliderController*& dyn__sliderLongPrefab();
    // Get instance field reference: private NoteLineConnectionController _noteLineConnectionControllerPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteLineConnectionController*& dyn__noteLineConnectionControllerPrefab();
    // Get instance field reference: private BeatLine _beatLinePrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatLine*& dyn__beatLinePrefab();
    // Get instance field reference: private readonly GameplayCoreSceneSetupData _sceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayCoreSceneSetupData*& dyn__sceneSetupData();
    // public System.Void .ctor()
    // Offset: 0x1351DB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectsInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectsInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectsInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x13519B8
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // BeatmapObjectsInstaller
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectsInstaller), 128 + sizeof(::GlobalNamespace::GameplayCoreSceneSetupData*)> __GlobalNamespace_BeatmapObjectsInstallerSizeCheck;
  static_assert(sizeof(BeatmapObjectsInstaller) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
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
