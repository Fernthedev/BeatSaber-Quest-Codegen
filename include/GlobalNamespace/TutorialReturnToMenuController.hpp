// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IReturnToMenuController
#include "GlobalNamespace/IReturnToMenuController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TutorialScenesTransitionSetupDataSO
  class TutorialScenesTransitionSetupDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TutorialReturnToMenuController
  class TutorialReturnToMenuController : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IReturnToMenuController*/ {
    public:
    // private TutorialScenesTransitionSetupDataSO _tutorialSceneSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TutorialScenesTransitionSetupDataSO*) == 0x8);
    // Creating value type constructor for type: TutorialReturnToMenuController
    TutorialReturnToMenuController(GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialSceneSetupData_ = {}) noexcept : tutorialSceneSetupData{tutorialSceneSetupData_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IReturnToMenuController
    operator GlobalNamespace::IReturnToMenuController() noexcept {
      return *reinterpret_cast<GlobalNamespace::IReturnToMenuController*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void ReturnToMenu()
    // Offset: 0x111F590
    void ReturnToMenu();
    // public System.Void .ctor()
    // Offset: 0x111F5AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialReturnToMenuController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialReturnToMenuController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialReturnToMenuController*, creationType>()));
    }
  }; // TutorialReturnToMenuController
  #pragma pack(pop)
  static check_size<sizeof(TutorialReturnToMenuController), 24 + sizeof(GlobalNamespace::TutorialScenesTransitionSetupDataSO*)> __GlobalNamespace_TutorialReturnToMenuControllerSizeCheck;
  static_assert(sizeof(TutorialReturnToMenuController) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialReturnToMenuController*, "", "TutorialReturnToMenuController");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::TutorialReturnToMenuController::ReturnToMenu
// Il2CppName: ReturnToMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialReturnToMenuController::*)()>(&GlobalNamespace::TutorialReturnToMenuController::ReturnToMenu)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialReturnToMenuController*), "ReturnToMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialReturnToMenuController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
