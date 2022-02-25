// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ContainerViewController
#include "HMUI/ContainerViewController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17*, "HMUI", "ContainerViewController/<RemoveViewControllersCoroutine>d__17");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ContainerViewController/HMUI.<RemoveViewControllersCoroutine>d__17
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ContainerViewController::$RemoveViewControllersCoroutine$d__17 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public HMUI.ContainerViewController <>4__this
    // Size: 0x8
    // Offset: 0x20
    HMUI::ContainerViewController* $$4__this;
    // Field size check
    static_assert(sizeof(HMUI::ContainerViewController*) == 0x8);
    // public HMUI.ViewController[] viewControllersToRemove
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<HMUI::ViewController*> viewControllersToRemove;
    // Field size check
    static_assert(sizeof(::ArrayW<HMUI::ViewController*>) == 0x8);
    // public System.Boolean immediately
    // Size: 0x1
    // Offset: 0x30
    bool immediately;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: immediately and: animationLayouter
    char __padding4[0x7] = {};
    // public System.Action`3<System.Single,HMUI.ViewController[],System.Collections.Generic.HashSet`1<HMUI.ViewController>> animationLayouter
    // Size: 0x8
    // Offset: 0x38
    System::Action_3<float, ::ArrayW<HMUI::ViewController*>, System::Collections::Generic::HashSet_1<HMUI::ViewController*>*>* animationLayouter;
    // Field size check
    static_assert(sizeof(System::Action_3<float, ::ArrayW<HMUI::ViewController*>, System::Collections::Generic::HashSet_1<HMUI::ViewController*>*>*) == 0x8);
    // public System.Action finishedCallback
    // Size: 0x8
    // Offset: 0x40
    System::Action* finishedCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private HMUI.ViewController[] <viewControllers>5__2
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<HMUI::ViewController*> $viewControllers$5__2;
    // Field size check
    static_assert(sizeof(::ArrayW<HMUI::ViewController*>) == 0x8);
    // private System.Collections.Generic.HashSet`1<HMUI.ViewController> <viewControllersToRemoveSet>5__3
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::HashSet_1<HMUI::ViewController*>* $viewControllersToRemoveSet$5__3;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<HMUI::ViewController*>*) == 0x8);
    // private System.Single <transitionDuration>5__4
    // Size: 0x4
    // Offset: 0x58
    float $transitionDuration$5__4;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <elapsedTime>5__5
    // Size: 0x4
    // Offset: 0x5C
    float $elapsedTime$5__5;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public HMUI.ContainerViewController <>4__this
    HMUI::ContainerViewController*& dyn_$$4__this();
    // Get instance field reference: public HMUI.ViewController[] viewControllersToRemove
    ::ArrayW<HMUI::ViewController*>& dyn_viewControllersToRemove();
    // Get instance field reference: public System.Boolean immediately
    bool& dyn_immediately();
    // Get instance field reference: public System.Action`3<System.Single,HMUI.ViewController[],System.Collections.Generic.HashSet`1<HMUI.ViewController>> animationLayouter
    System::Action_3<float, ::ArrayW<HMUI::ViewController*>, System::Collections::Generic::HashSet_1<HMUI::ViewController*>*>*& dyn_animationLayouter();
    // Get instance field reference: public System.Action finishedCallback
    System::Action*& dyn_finishedCallback();
    // Get instance field reference: private HMUI.ViewController[] <viewControllers>5__2
    ::ArrayW<HMUI::ViewController*>& dyn_$viewControllers$5__2();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<HMUI.ViewController> <viewControllersToRemoveSet>5__3
    System::Collections::Generic::HashSet_1<HMUI::ViewController*>*& dyn_$viewControllersToRemoveSet$5__3();
    // Get instance field reference: private System.Single <transitionDuration>5__4
    float& dyn_$transitionDuration$5__4();
    // Get instance field reference: private System.Single <elapsedTime>5__5
    float& dyn_$elapsedTime$5__5();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x166B884
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x166B8EC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x166B090
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContainerViewController::$RemoveViewControllersCoroutine$d__17* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContainerViewController::$RemoveViewControllersCoroutine$d__17*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x166B594
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x166B598
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x166B88C
    void System_Collections_IEnumerator_Reset();
  }; // HMUI.ContainerViewController/HMUI.<RemoveViewControllersCoroutine>d__17
  #pragma pack(pop)
  static check_size<sizeof(ContainerViewController::$RemoveViewControllersCoroutine$d__17), 92 + sizeof(float)> __HMUI_ContainerViewController_$RemoveViewControllersCoroutine$d__17SizeCheck;
  static_assert(sizeof(ContainerViewController::$RemoveViewControllersCoroutine$d__17) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::*)()>(&HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::*)()>(&HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::*)()>(&HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::*)()>(&HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::*)()>(&HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
