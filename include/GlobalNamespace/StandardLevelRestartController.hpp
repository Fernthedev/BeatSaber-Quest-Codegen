// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ILevelRestartController
#include "GlobalNamespace/ILevelRestartController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelRestartController
  class StandardLevelRestartController : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::ILevelRestartController*/ {
    public:
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelSceneSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE1C86C
    // private readonly PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PrepareLevelCompletionResults*) == 0x8);
    // Creating value type constructor for type: StandardLevelRestartController
    StandardLevelRestartController(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData_ = {}, GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults_ = {}) noexcept : standardLevelSceneSetupData{standardLevelSceneSetupData_}, prepareLevelCompletionResults{prepareLevelCompletionResults_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ILevelRestartController
    operator GlobalNamespace::ILevelRestartController() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILevelRestartController*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void RestartLevel()
    // Offset: 0x11623EC
    void RestartLevel();
    // public System.Void .ctor()
    // Offset: 0x1162434
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelRestartController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelRestartController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelRestartController*, creationType>()));
    }
  }; // StandardLevelRestartController
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelRestartController), 32 + sizeof(GlobalNamespace::PrepareLevelCompletionResults*)> __GlobalNamespace_StandardLevelRestartControllerSizeCheck;
  static_assert(sizeof(StandardLevelRestartController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelRestartController*, "", "StandardLevelRestartController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelRestartController::RestartLevel
// Il2CppName: RestartLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelRestartController::*)()>(&GlobalNamespace::StandardLevelRestartController::RestartLevel)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelRestartController*), "RestartLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelRestartController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
