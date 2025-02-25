// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: TutorialSongController
#include "GlobalNamespace/TutorialSongController.hpp"
// Including type: TutorialSongController/TutorialObjectSpawnData
#include "GlobalNamespace/TutorialSongController_TutorialObjectSpawnData.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: TutorialSongController/TutorialJumpingNoteSpawnData
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialSongController::TutorialJumpingNoteSpawnData : public GlobalNamespace::TutorialSongController::TutorialObjectSpawnData {
    public:
    // public readonly NoteLineLayer noteLineLayer
    // Size: 0x4
    // Offset: 0x24
    GlobalNamespace::NoteLineLayer noteLineLayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteLineLayer) == 0x4);
    // Creating value type constructor for type: TutorialJumpingNoteSpawnData
    TutorialJumpingNoteSpawnData(GlobalNamespace::NoteLineLayer noteLineLayer_ = {}) noexcept : noteLineLayer{noteLineLayer_} {}
    // Creating conversion operator: operator GlobalNamespace::NoteLineLayer
    constexpr operator GlobalNamespace::NoteLineLayer() const noexcept {
      return noteLineLayer;
    }
    // Get instance field reference: public readonly NoteLineLayer noteLineLayer
    GlobalNamespace::NoteLineLayer& dyn_noteLineLayer();
    // protected System.Void .ctor(Signal signal, System.Int32 firstTimeBeatOffset, System.Int32 beatOffset, System.Int32 lineIndex, NoteLineLayer noteLineLayer)
    // Offset: 0x12930C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialSongController::TutorialJumpingNoteSpawnData* New_ctor(GlobalNamespace::Signal* signal, int firstTimeBeatOffset, int beatOffset, int lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialSongController::TutorialJumpingNoteSpawnData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialSongController::TutorialJumpingNoteSpawnData*, creationType>(signal, firstTimeBeatOffset, beatOffset, lineIndex, noteLineLayer)));
    }
  }; // TutorialSongController/TutorialJumpingNoteSpawnData
  #pragma pack(pop)
  static check_size<sizeof(TutorialSongController::TutorialJumpingNoteSpawnData), 36 + sizeof(GlobalNamespace::NoteLineLayer)> __GlobalNamespace_TutorialSongController_TutorialJumpingNoteSpawnDataSizeCheck;
  static_assert(sizeof(TutorialSongController::TutorialJumpingNoteSpawnData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialSongController::TutorialJumpingNoteSpawnData*, "", "TutorialSongController/TutorialJumpingNoteSpawnData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::TutorialJumpingNoteSpawnData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
