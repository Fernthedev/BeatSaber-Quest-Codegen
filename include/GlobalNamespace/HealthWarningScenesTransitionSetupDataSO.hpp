// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SingleFixedSceneScenesTransitionSetupDataSO
#include "GlobalNamespace/SingleFixedSceneScenesTransitionSetupDataSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HealthWarningSceneSetupData
  class HealthWarningSceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: HealthWarningScenesTransitionSetupDataSO
  class HealthWarningScenesTransitionSetupDataSO : public GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
    public:
    // Creating value type constructor for type: HealthWarningScenesTransitionSetupDataSO
    HealthWarningScenesTransitionSetupDataSO() noexcept {}
    // public System.Void Init(HealthWarningSceneSetupData healthWarningSceneSetupData)
    // Offset: 0x10BC678
    void Init(GlobalNamespace::HealthWarningSceneSetupData* healthWarningSceneSetupData);
    // public System.Void .ctor()
    // Offset: 0x10BC9E8
    // Implemented from: SingleFixedSceneScenesTransitionSetupDataSO
    // Base method: System.Void SingleFixedSceneScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HealthWarningScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HealthWarningScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HealthWarningScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // HealthWarningScenesTransitionSetupDataSO
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*, "", "HealthWarningScenesTransitionSetupDataSO");
// Writing includes for template specializations
#include "GlobalNamespace/HealthWarningSceneSetupData.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningScenesTransitionSetupDataSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningScenesTransitionSetupDataSO::*)(GlobalNamespace::HealthWarningSceneSetupData*)>(&GlobalNamespace::HealthWarningScenesTransitionSetupDataSO::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningScenesTransitionSetupDataSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::HealthWarningSceneSetupData*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
