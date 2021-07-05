// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorScheme
  class ColorScheme;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: TutorialSceneSetupData
  // [ZenjectAllowDuringValidationAttribute] Offset: E11578
  class TutorialSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // public readonly ColorScheme colorScheme
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::ColorScheme* colorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorScheme*) == 0x8);
    // Creating value type constructor for type: TutorialSceneSetupData
    TutorialSceneSetupData(GlobalNamespace::ColorScheme* colorScheme_ = {}) noexcept : colorScheme{colorScheme_} {}
    // Creating conversion operator: operator GlobalNamespace::ColorScheme*
    constexpr operator GlobalNamespace::ColorScheme*() const noexcept {
      return colorScheme;
    }
    // public System.Void .ctor(ColorScheme colorScheme)
    // Offset: 0x111F5B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialSceneSetupData* New_ctor(GlobalNamespace::ColorScheme* colorScheme) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialSceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialSceneSetupData*, creationType>(colorScheme)));
    }
  }; // TutorialSceneSetupData
  #pragma pack(pop)
  static check_size<sizeof(TutorialSceneSetupData), 16 + sizeof(GlobalNamespace::ColorScheme*)> __GlobalNamespace_TutorialSceneSetupDataSizeCheck;
  static_assert(sizeof(TutorialSceneSetupData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialSceneSetupData*, "", "TutorialSceneSetupData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialSceneSetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
