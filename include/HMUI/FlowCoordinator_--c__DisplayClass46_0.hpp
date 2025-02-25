// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: NavigationController
  class NavigationController;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.FlowCoordinator/HMUI.<>c__DisplayClass46_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FlowCoordinator::$$c__DisplayClass46_0 : public ::Il2CppObject {
    public:
    // public System.Boolean immediately
    // Size: 0x1
    // Offset: 0x10
    bool immediately;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: immediately and: $$4__this
    char __padding0[0x7] = {};
    // public HMUI.FlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x18
    HMUI::FlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(HMUI::FlowCoordinator*) == 0x8);
    // public System.Action finishedCallback
    // Size: 0x8
    // Offset: 0x20
    System::Action* finishedCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // public HMUI.NavigationController navigationController
    // Size: 0x8
    // Offset: 0x28
    HMUI::NavigationController* navigationController;
    // Field size check
    static_assert(sizeof(HMUI::NavigationController*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass46_0
    $$c__DisplayClass46_0(bool immediately_ = {}, HMUI::FlowCoordinator* $$4__this_ = {}, System::Action* finishedCallback_ = {}, HMUI::NavigationController* navigationController_ = {}) noexcept : immediately{immediately_}, $$4__this{$$4__this_}, finishedCallback{finishedCallback_}, navigationController{navigationController_} {}
    // Get instance field reference: public System.Boolean immediately
    bool& dyn_immediately();
    // Get instance field reference: public HMUI.FlowCoordinator <>4__this
    HMUI::FlowCoordinator*& dyn_$$4__this();
    // Get instance field reference: public System.Action finishedCallback
    System::Action*& dyn_finishedCallback();
    // Get instance field reference: public HMUI.NavigationController navigationController
    HMUI::NavigationController*& dyn_navigationController();
    // System.Void <PopViewControllersFromNavigationController>b__0()
    // Offset: 0x1374188
    void $PopViewControllersFromNavigationController$b__0();
    // public System.Void .ctor()
    // Offset: 0x1373624
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlowCoordinator::$$c__DisplayClass46_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::FlowCoordinator::$$c__DisplayClass46_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlowCoordinator::$$c__DisplayClass46_0*, creationType>()));
    }
  }; // HMUI.FlowCoordinator/HMUI.<>c__DisplayClass46_0
  #pragma pack(pop)
  static check_size<sizeof(FlowCoordinator::$$c__DisplayClass46_0), 40 + sizeof(HMUI::NavigationController*)> __HMUI_FlowCoordinator_$$c__DisplayClass46_0SizeCheck;
  static_assert(sizeof(FlowCoordinator::$$c__DisplayClass46_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::FlowCoordinator::$$c__DisplayClass46_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass46_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::FlowCoordinator::$$c__DisplayClass46_0::$PopViewControllersFromNavigationController$b__0
// Il2CppName: <PopViewControllersFromNavigationController>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::FlowCoordinator::$$c__DisplayClass46_0::*)()>(&HMUI::FlowCoordinator::$$c__DisplayClass46_0::$PopViewControllersFromNavigationController$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::FlowCoordinator::$$c__DisplayClass46_0*), "<PopViewControllersFromNavigationController>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::FlowCoordinator::$$c__DisplayClass46_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
