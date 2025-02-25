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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HealthWarningSceneSetupData
  // [TokenAttribute] Offset: FFFFFFFF
  class HealthWarningSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // private ScenesTransitionSetupDataSO _nextScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScenesTransitionSetupDataSO*) == 0x8);
    // Creating value type constructor for type: HealthWarningSceneSetupData
    HealthWarningSceneSetupData(GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData_ = {}) noexcept : nextScenesTransitionSetupData{nextScenesTransitionSetupData_} {}
    // Creating conversion operator: operator GlobalNamespace::ScenesTransitionSetupDataSO*
    constexpr operator GlobalNamespace::ScenesTransitionSetupDataSO*() const noexcept {
      return nextScenesTransitionSetupData;
    }
    // Get instance field reference: private ScenesTransitionSetupDataSO _nextScenesTransitionSetupData
    GlobalNamespace::ScenesTransitionSetupDataSO*& dyn__nextScenesTransitionSetupData();
    // public ScenesTransitionSetupDataSO get_nextScenesTransitionSetupData()
    // Offset: 0x1186C68
    GlobalNamespace::ScenesTransitionSetupDataSO* get_nextScenesTransitionSetupData();
    // public System.Void .ctor(ScenesTransitionSetupDataSO nextScenesTransitionSetupData)
    // Offset: 0x1186C70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HealthWarningSceneSetupData* New_ctor(GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HealthWarningSceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HealthWarningSceneSetupData*, creationType>(nextScenesTransitionSetupData)));
    }
  }; // HealthWarningSceneSetupData
  #pragma pack(pop)
  static check_size<sizeof(HealthWarningSceneSetupData), 16 + sizeof(GlobalNamespace::ScenesTransitionSetupDataSO*)> __GlobalNamespace_HealthWarningSceneSetupDataSizeCheck;
  static_assert(sizeof(HealthWarningSceneSetupData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningSceneSetupData*, "", "HealthWarningSceneSetupData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningSceneSetupData::get_nextScenesTransitionSetupData
// Il2CppName: get_nextScenesTransitionSetupData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ScenesTransitionSetupDataSO* (GlobalNamespace::HealthWarningSceneSetupData::*)()>(&GlobalNamespace::HealthWarningSceneSetupData::get_nextScenesTransitionSetupData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningSceneSetupData*), "get_nextScenesTransitionSetupData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningSceneSetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
