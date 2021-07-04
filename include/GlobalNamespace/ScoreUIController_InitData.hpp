// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ScoreUIController
#include "GlobalNamespace/ScoreUIController.hpp"
// Including type: ScoreUIController/ScoreDisplayType
#include "GlobalNamespace/ScoreUIController_ScoreDisplayType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: ScoreUIController/InitData
  class ScoreUIController::InitData : public ::Il2CppObject {
    public:
    // public readonly ScoreUIController/ScoreDisplayType scoreDisplayType
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::ScoreUIController::ScoreDisplayType scoreDisplayType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScoreUIController::ScoreDisplayType) == 0x4);
    // Creating value type constructor for type: InitData
    InitData(GlobalNamespace::ScoreUIController::ScoreDisplayType scoreDisplayType_ = {}) noexcept : scoreDisplayType{scoreDisplayType_} {}
    // Creating conversion operator: operator GlobalNamespace::ScoreUIController::ScoreDisplayType
    constexpr operator GlobalNamespace::ScoreUIController::ScoreDisplayType() const noexcept {
      return scoreDisplayType;
    }
    // public System.Void .ctor(ScoreUIController/ScoreDisplayType scoreDisplayType)
    // Offset: 0x10D8E38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreUIController::InitData* New_ctor(GlobalNamespace::ScoreUIController::ScoreDisplayType scoreDisplayType) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScoreUIController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreUIController::InitData*, creationType>(scoreDisplayType)));
    }
  }; // ScoreUIController/InitData
  #pragma pack(pop)
  static check_size<sizeof(ScoreUIController::InitData), 16 + sizeof(GlobalNamespace::ScoreUIController::ScoreDisplayType)> __GlobalNamespace_ScoreUIController_InitDataSizeCheck;
  static_assert(sizeof(ScoreUIController::InitData) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreUIController::InitData*, "", "ScoreUIController/InitData");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::ScoreUIController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
