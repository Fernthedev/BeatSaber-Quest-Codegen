// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SelectableStateController`1
#include "GlobalNamespace/SelectableStateController_1.hpp"
// Including type: HMUI.NoTransitionsButton
#include "HMUI/NoTransitionsButton.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NoTransitionButtonSelectableStateController
  class NoTransitionButtonSelectableStateController : public GlobalNamespace::SelectableStateController_1<HMUI::NoTransitionsButton*> {
    public:
    // Creating value type constructor for type: NoTransitionButtonSelectableStateController
    NoTransitionButtonSelectableStateController() noexcept {}
    // protected System.Void OnEnable()
    // Offset: 0x11D10F8
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x11D118C
    void OnDisable();
    // private System.Void HandleNoTransitionButtonSelectionStateDidChange(HMUI.NoTransitionsButton/SelectionState state)
    // Offset: 0x11D1220
    void HandleNoTransitionButtonSelectionStateDidChange(HMUI::NoTransitionsButton::SelectionState state);
    // public System.Void .ctor()
    // Offset: 0x11D1244
    // Implemented from: SelectableStateController`1
    // Base method: System.Void SelectableStateController_1::.ctor()
    // Base method: System.Void SelectableStateController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoTransitionButtonSelectableStateController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoTransitionButtonSelectableStateController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoTransitionButtonSelectableStateController*, creationType>()));
    }
  }; // NoTransitionButtonSelectableStateController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoTransitionButtonSelectableStateController*, "", "NoTransitionButtonSelectableStateController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoTransitionButtonSelectableStateController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoTransitionButtonSelectableStateController::*)()>(&GlobalNamespace::NoTransitionButtonSelectableStateController::OnEnable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoTransitionButtonSelectableStateController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoTransitionButtonSelectableStateController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoTransitionButtonSelectableStateController::*)()>(&GlobalNamespace::NoTransitionButtonSelectableStateController::OnDisable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoTransitionButtonSelectableStateController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoTransitionButtonSelectableStateController::HandleNoTransitionButtonSelectionStateDidChange
// Il2CppName: HandleNoTransitionButtonSelectionStateDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoTransitionButtonSelectableStateController::*)(HMUI::NoTransitionsButton::SelectionState)>(&GlobalNamespace::NoTransitionButtonSelectableStateController::HandleNoTransitionButtonSelectionStateDidChange)> {
  const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("HMUI", "NoTransitionsButton/SelectionState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoTransitionButtonSelectableStateController*), "HandleNoTransitionButtonSelectionStateDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoTransitionButtonSelectableStateController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
