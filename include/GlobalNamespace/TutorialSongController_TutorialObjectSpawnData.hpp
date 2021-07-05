// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TutorialSongController
#include "GlobalNamespace/TutorialSongController.hpp"
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
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: TutorialSongController/TutorialObjectSpawnData
  class TutorialSongController::TutorialObjectSpawnData : public ::Il2CppObject {
    public:
    // public readonly Signal signal
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::Signal* signal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // public readonly System.Int32 beatOffset
    // Size: 0x4
    // Offset: 0x18
    int beatOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 firstTimeBeatOffset
    // Size: 0x4
    // Offset: 0x1C
    int firstTimeBeatOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 lineIndex
    // Size: 0x4
    // Offset: 0x20
    int lineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TutorialObjectSpawnData
    TutorialObjectSpawnData(GlobalNamespace::Signal* signal_ = {}, int beatOffset_ = {}, int firstTimeBeatOffset_ = {}, int lineIndex_ = {}) noexcept : signal{signal_}, beatOffset{beatOffset_}, firstTimeBeatOffset{firstTimeBeatOffset_}, lineIndex{lineIndex_} {}
    // protected System.Void .ctor(Signal signal, System.Int32 firstTimeBeatOffset, System.Int32 beatOffset, System.Int32 lineIndex)
    // Offset: 0x1120628
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialSongController::TutorialObjectSpawnData* New_ctor(GlobalNamespace::Signal* signal, int firstTimeBeatOffset, int beatOffset, int lineIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialSongController::TutorialObjectSpawnData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialSongController::TutorialObjectSpawnData*, creationType>(signal, firstTimeBeatOffset, beatOffset, lineIndex)));
    }
  }; // TutorialSongController/TutorialObjectSpawnData
  #pragma pack(pop)
  static check_size<sizeof(TutorialSongController::TutorialObjectSpawnData), 32 + sizeof(int)> __GlobalNamespace_TutorialSongController_TutorialObjectSpawnDataSizeCheck;
  static_assert(sizeof(TutorialSongController::TutorialObjectSpawnData) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialSongController::TutorialObjectSpawnData*, "", "TutorialSongController/TutorialObjectSpawnData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::TutorialObjectSpawnData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
