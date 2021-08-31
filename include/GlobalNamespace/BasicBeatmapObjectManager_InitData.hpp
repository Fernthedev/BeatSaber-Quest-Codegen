// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BasicBeatmapObjectManager
#include "GlobalNamespace/BasicBeatmapObjectManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: BasicBeatmapObjectManager/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class BasicBeatmapObjectManager::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean disappearingArrows
    // Size: 0x1
    // Offset: 0x10
    bool disappearingArrows;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean ghostNotes
    // Size: 0x1
    // Offset: 0x11
    bool ghostNotes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ghostNotes and: cutAngleTolerance
    char __padding1[0x2] = {};
    // public readonly System.Single cutAngleTolerance
    // Size: 0x4
    // Offset: 0x14
    float cutAngleTolerance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single notesUniformScale
    // Size: 0x4
    // Offset: 0x18
    float notesUniformScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: InitData
    InitData(bool disappearingArrows_ = {}, bool ghostNotes_ = {}, float cutAngleTolerance_ = {}, float notesUniformScale_ = {}) noexcept : disappearingArrows{disappearingArrows_}, ghostNotes{ghostNotes_}, cutAngleTolerance{cutAngleTolerance_}, notesUniformScale{notesUniformScale_} {}
    // Get instance field reference: public readonly System.Boolean disappearingArrows
    bool& dyn_disappearingArrows();
    // Get instance field reference: public readonly System.Boolean ghostNotes
    bool& dyn_ghostNotes();
    // Get instance field reference: public readonly System.Single cutAngleTolerance
    float& dyn_cutAngleTolerance();
    // Get instance field reference: public readonly System.Single notesUniformScale
    float& dyn_notesUniformScale();
    // public System.Void .ctor(System.Boolean disappearingArrows, System.Boolean ghostNotes, System.Single cutAngleTolerance, System.Single notesUniformScale)
    // Offset: 0x11E6CF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BasicBeatmapObjectManager::InitData* New_ctor(bool disappearingArrows, bool ghostNotes, float cutAngleTolerance, float notesUniformScale) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BasicBeatmapObjectManager::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BasicBeatmapObjectManager::InitData*, creationType>(disappearingArrows, ghostNotes, cutAngleTolerance, notesUniformScale)));
    }
  }; // BasicBeatmapObjectManager/InitData
  #pragma pack(pop)
  static check_size<sizeof(BasicBeatmapObjectManager::InitData), 24 + sizeof(float)> __GlobalNamespace_BasicBeatmapObjectManager_InitDataSizeCheck;
  static_assert(sizeof(BasicBeatmapObjectManager::InitData) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicBeatmapObjectManager::InitData*, "", "BasicBeatmapObjectManager/InitData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapObjectManager::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
