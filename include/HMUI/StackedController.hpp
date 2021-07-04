// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ContainerViewController
#include "HMUI/ContainerViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.StackedController
  class StackedController : public HMUI::ContainerViewController {
    public:
    // Nested type: HMUI::StackedController::$$c
    class $$c;
    // Nested type: HMUI::StackedController::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Creating value type constructor for type: StackedController
    StackedController() noexcept {}
    // public HMUI.ViewController get_topStackedViewController()
    // Offset: 0x12BD228
    HMUI::ViewController* get_topStackedViewController();
    // public System.Void PushViewController(HMUI.ViewController viewController, System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0x12BD45C
    void PushViewController(HMUI::ViewController* viewController, System::Action* finishedCallback, bool immediately);
    // public System.Void PopViewController(System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0x12BD530
    void PopViewController(System::Action* finishedCallback, bool immediately);
    // public System.Void PopViewControllers(System.Int32 numberOfViewControllersToPop, System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0x12BD544
    void PopViewControllers(int numberOfViewControllersToPop, System::Action* finishedCallback, bool immediately);
    // static private System.Void SetupViewControllerRect(HMUI.ViewController viewController, System.Int32 index)
    // Offset: 0x12BD3D8
    static void SetupViewControllerRect(HMUI::ViewController* viewController, int index);
    // protected override System.Void LayoutViewControllers(System.Collections.Generic.List`1<HMUI.ViewController> viewControllers)
    // Offset: 0x12BD294
    // Implemented from: HMUI.ContainerViewController
    // Base method: System.Void ContainerViewController::LayoutViewControllers(System.Collections.Generic.List`1<HMUI.ViewController> viewControllers)
    void LayoutViewControllers(System::Collections::Generic::List_1<HMUI::ViewController*>* viewControllers);
    // public System.Void .ctor()
    // Offset: 0x12BD6DC
    // Implemented from: HMUI.ContainerViewController
    // Base method: System.Void ContainerViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackedController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::StackedController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackedController*, creationType>()));
    }
  }; // HMUI.StackedController
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::StackedController*, "HMUI", "StackedController");
// Writing includes for template specializations
#include "System/Action.hpp"
#include "System/Collections/Generic/List_1.hpp"
// Writing MetadataGetter for method: HMUI::StackedController::get_topStackedViewController
// Il2CppName: get_topStackedViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::ViewController* (HMUI::StackedController::*)()>(&HMUI::StackedController::get_topStackedViewController)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackedController*), "get_topStackedViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::StackedController::PushViewController
// Il2CppName: PushViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackedController::*)(HMUI::ViewController*, System::Action*, bool)>(&HMUI::StackedController::PushViewController)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackedController*), "PushViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::ViewController*>(), ::il2cpp_utils::ExtractIndependentType<System::Action*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: HMUI::StackedController::PopViewController
// Il2CppName: PopViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackedController::*)(System::Action*, bool)>(&HMUI::StackedController::PopViewController)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackedController*), "PopViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: HMUI::StackedController::PopViewControllers
// Il2CppName: PopViewControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackedController::*)(int, System::Action*, bool)>(&HMUI::StackedController::PopViewControllers)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackedController*), "PopViewControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::Action*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: HMUI::StackedController::SetupViewControllerRect
// Il2CppName: SetupViewControllerRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(HMUI::ViewController*, int)>(&HMUI::StackedController::SetupViewControllerRect)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackedController*), "SetupViewControllerRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::ViewController*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: HMUI::StackedController::LayoutViewControllers
// Il2CppName: LayoutViewControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::StackedController::*)(System::Collections::Generic::List_1<HMUI::ViewController*>*)>(&HMUI::StackedController::LayoutViewControllers)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::StackedController*), "LayoutViewControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<HMUI::ViewController*>*>()});
  }
};
// Writing MetadataGetter for method: HMUI::StackedController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
