// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentSceneSetupData
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // public readonly System.Boolean hideBranding
    // Size: 0x1
    // Offset: 0x10
    bool hideBranding;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EnvironmentSceneSetupData
    EnvironmentSceneSetupData(bool hideBranding_ = {}) noexcept : hideBranding{hideBranding_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return hideBranding;
    }
    // Get instance field reference: public readonly System.Boolean hideBranding
    bool& dyn_hideBranding();
    // public System.Void .ctor(System.Boolean hideBranding)
    // Offset: 0x1052C00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentSceneSetupData* New_ctor(bool hideBranding) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentSceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentSceneSetupData*, creationType>(hideBranding)));
    }
  }; // EnvironmentSceneSetupData
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentSceneSetupData), 16 + sizeof(bool)> __GlobalNamespace_EnvironmentSceneSetupDataSizeCheck;
  static_assert(sizeof(EnvironmentSceneSetupData) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentSceneSetupData*, "", "EnvironmentSceneSetupData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSceneSetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
