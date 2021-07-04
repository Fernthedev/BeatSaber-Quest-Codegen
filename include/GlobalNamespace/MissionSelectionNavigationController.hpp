// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.NavigationController
#include "HMUI/NavigationController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionSelectionMapViewController
  class MissionSelectionMapViewController;
  // Forward declaring type: MissionLevelDetailViewController
  class MissionLevelDetailViewController;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: MissionSelectionNavigationController
  class MissionSelectionNavigationController : public HMUI::NavigationController {
    public:
    // Writing base type padding for base size: 0x94 to desired offset: 0x98
    char ___base_padding[0x4] = {};
    // Nested type: GlobalNamespace::MissionSelectionNavigationController::$$c__DisplayClass11_0
    class $$c__DisplayClass11_0;
    // [InjectAttribute] Offset: 0xE25A04
    // private MissionSelectionMapViewController _missionSelectionMapViewController
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::MissionSelectionMapViewController* missionSelectionMapViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionSelectionMapViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE25A14
    // private MissionLevelDetailViewController _missionLevelDetailViewController
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::MissionLevelDetailViewController* missionLevelDetailViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionLevelDetailViewController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE25A24
    // private System.Action`1<MissionSelectionNavigationController> didPressPlayButtonEvent
    // Size: 0x8
    // Offset: 0xA8
    System::Action_1<GlobalNamespace::MissionSelectionNavigationController*>* didPressPlayButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MissionSelectionNavigationController*>*) == 0x8);
    // Creating value type constructor for type: MissionSelectionNavigationController
    MissionSelectionNavigationController(GlobalNamespace::MissionSelectionMapViewController* missionSelectionMapViewController_ = {}, GlobalNamespace::MissionLevelDetailViewController* missionLevelDetailViewController_ = {}, System::Action_1<GlobalNamespace::MissionSelectionNavigationController*>* didPressPlayButtonEvent_ = {}) noexcept : missionSelectionMapViewController{missionSelectionMapViewController_}, missionLevelDetailViewController{missionLevelDetailViewController_}, didPressPlayButtonEvent{didPressPlayButtonEvent_} {}
    // public System.Void add_didPressPlayButtonEvent(System.Action`1<MissionSelectionNavigationController> value)
    // Offset: 0x109C928
    void add_didPressPlayButtonEvent(System::Action_1<GlobalNamespace::MissionSelectionNavigationController*>* value);
    // public System.Void remove_didPressPlayButtonEvent(System.Action`1<MissionSelectionNavigationController> value)
    // Offset: 0x109C9CC
    void remove_didPressPlayButtonEvent(System::Action_1<GlobalNamespace::MissionSelectionNavigationController*>* value);
    // public MissionNode get_selectedMissionNode()
    // Offset: 0x109CA70
    GlobalNamespace::MissionNode* get_selectedMissionNode();
    // private System.Void HandleMissionSelectionMapViewControllerDidSelectMissionLevel(MissionSelectionMapViewController viewController, MissionNode _missionNode)
    // Offset: 0x109CCD8
    void HandleMissionSelectionMapViewControllerDidSelectMissionLevel(GlobalNamespace::MissionSelectionMapViewController* viewController, GlobalNamespace::MissionNode* _missionNode);
    // private System.Void HandleMissionLevelDetailViewControllerDidPressPlayButton(MissionLevelDetailViewController viewController)
    // Offset: 0x109CD50
    void HandleMissionLevelDetailViewControllerDidPressPlayButton(GlobalNamespace::MissionLevelDetailViewController* viewController);
    // public System.Void PresentMissionClearedIfNeeded(System.Action`1<System.Boolean> finishedCallback)
    // Offset: 0x109CDB4
    void PresentMissionClearedIfNeeded(System::Action_1<bool>* finishedCallback);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x109CA8C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x109CBE8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x109CEBC
    // Implemented from: HMUI.NavigationController
    // Base method: System.Void NavigationController::.ctor()
    // Base method: System.Void ContainerViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionSelectionNavigationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionSelectionNavigationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionSelectionNavigationController*, creationType>()));
    }
  }; // MissionSelectionNavigationController
  #pragma pack(pop)
  static check_size<sizeof(MissionSelectionNavigationController), 168 + sizeof(System::Action_1<GlobalNamespace::MissionSelectionNavigationController*>*)> __GlobalNamespace_MissionSelectionNavigationControllerSizeCheck;
  static_assert(sizeof(MissionSelectionNavigationController) == 0xB0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionSelectionNavigationController*, "", "MissionSelectionNavigationController");
// Writing includes for template specializations
#include "System/Action_1.hpp"
#include "GlobalNamespace/MissionSelectionMapViewController.hpp"
#include "GlobalNamespace/MissionNode.hpp"
#include "GlobalNamespace/MissionLevelDetailViewController.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionNavigationController::add_didPressPlayButtonEvent
// Il2CppName: add_didPressPlayButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionNavigationController::*)(System::Action_1<GlobalNamespace::MissionSelectionNavigationController*>*)>(&GlobalNamespace::MissionSelectionNavigationController::add_didPressPlayButtonEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionNavigationController*), "add_didPressPlayButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::MissionSelectionNavigationController*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionNavigationController::remove_didPressPlayButtonEvent
// Il2CppName: remove_didPressPlayButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionNavigationController::*)(System::Action_1<GlobalNamespace::MissionSelectionNavigationController*>*)>(&GlobalNamespace::MissionSelectionNavigationController::remove_didPressPlayButtonEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionNavigationController*), "remove_didPressPlayButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::MissionSelectionNavigationController*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionNavigationController::get_selectedMissionNode
// Il2CppName: get_selectedMissionNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionNode* (GlobalNamespace::MissionSelectionNavigationController::*)()>(&GlobalNamespace::MissionSelectionNavigationController::get_selectedMissionNode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionNavigationController*), "get_selectedMissionNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionNavigationController::HandleMissionSelectionMapViewControllerDidSelectMissionLevel
// Il2CppName: HandleMissionSelectionMapViewControllerDidSelectMissionLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionNavigationController::*)(GlobalNamespace::MissionSelectionMapViewController*, GlobalNamespace::MissionNode*)>(&GlobalNamespace::MissionSelectionNavigationController::HandleMissionSelectionMapViewControllerDidSelectMissionLevel)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionNavigationController*), "HandleMissionSelectionMapViewControllerDidSelectMissionLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MissionSelectionMapViewController*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MissionNode*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionNavigationController::HandleMissionLevelDetailViewControllerDidPressPlayButton
// Il2CppName: HandleMissionLevelDetailViewControllerDidPressPlayButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionNavigationController::*)(GlobalNamespace::MissionLevelDetailViewController*)>(&GlobalNamespace::MissionSelectionNavigationController::HandleMissionLevelDetailViewControllerDidPressPlayButton)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionNavigationController*), "HandleMissionLevelDetailViewControllerDidPressPlayButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MissionLevelDetailViewController*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionNavigationController::PresentMissionClearedIfNeeded
// Il2CppName: PresentMissionClearedIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionNavigationController::*)(System::Action_1<bool>*)>(&GlobalNamespace::MissionSelectionNavigationController::PresentMissionClearedIfNeeded)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionNavigationController*), "PresentMissionClearedIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<bool>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionNavigationController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionNavigationController::*)(bool, bool, bool)>(&GlobalNamespace::MissionSelectionNavigationController::DidActivate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionNavigationController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionNavigationController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionSelectionNavigationController::*)(bool, bool)>(&GlobalNamespace::MissionSelectionNavigationController::DidDeactivate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionSelectionNavigationController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionSelectionNavigationController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
