// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: PanelAnimationSO
  class PanelAnimationSO;
  // Forward declaring type: ViewController
  class ViewController;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ModalView
  class ModalView : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::ModalView::$$c__DisplayClass17_0
    class $$c__DisplayClass17_0;
    // Nested type: HMUI::ModalView::$$c__DisplayClass21_0
    class $$c__DisplayClass21_0;
    // private HMUI.PanelAnimationSO _presentPanelAnimations
    // Size: 0x8
    // Offset: 0x18
    HMUI::PanelAnimationSO* presentPanelAnimations;
    // Field size check
    static_assert(sizeof(HMUI::PanelAnimationSO*) == 0x8);
    // private HMUI.PanelAnimationSO _dismissPanelAnimation
    // Size: 0x8
    // Offset: 0x20
    HMUI::PanelAnimationSO* dismissPanelAnimation;
    // Field size check
    static_assert(sizeof(HMUI::PanelAnimationSO*) == 0x8);
    // private System.Boolean _animateParentCanvas
    // Size: 0x1
    // Offset: 0x28
    bool animateParentCanvas;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: animateParentCanvas and: container
    char __padding2[0x7] = {};
    // [InjectAttribute] Offset: 0xDF93A0
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x30
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDF93B0
    // private System.Action blockerClickedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* blockerClickedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private UnityEngine.Transform _previousParent
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Transform* previousParent;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Boolean _isShown
    // Size: 0x1
    // Offset: 0x48
    bool isShown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _viewIsValid
    // Size: 0x1
    // Offset: 0x49
    bool viewIsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: viewIsValid and: mainCanvas
    char __padding7[0x6] = {};
    // private UnityEngine.Canvas _mainCanvas
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Canvas* mainCanvas;
    // Field size check
    static_assert(sizeof(UnityEngine::Canvas*) == 0x8);
    // private UnityEngine.CanvasGroup _parentCanvasGroup
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::CanvasGroup* parentCanvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // private UnityEngine.GameObject _blockerGO
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::GameObject* blockerGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Int32 _test
    // Size: 0x4
    // Offset: 0x68
    int test;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ModalView
    ModalView(HMUI::PanelAnimationSO* presentPanelAnimations_ = {}, HMUI::PanelAnimationSO* dismissPanelAnimation_ = {}, bool animateParentCanvas_ = {}, Zenject::DiContainer* container_ = {}, System::Action* blockerClickedEvent_ = {}, UnityEngine::Transform* previousParent_ = {}, bool isShown_ = {}, bool viewIsValid_ = {}, UnityEngine::Canvas* mainCanvas_ = {}, UnityEngine::CanvasGroup* parentCanvasGroup_ = {}, UnityEngine::GameObject* blockerGO_ = {}, int test_ = {}) noexcept : presentPanelAnimations{presentPanelAnimations_}, dismissPanelAnimation{dismissPanelAnimation_}, animateParentCanvas{animateParentCanvas_}, container{container_}, blockerClickedEvent{blockerClickedEvent_}, previousParent{previousParent_}, isShown{isShown_}, viewIsValid{viewIsValid_}, mainCanvas{mainCanvas_}, parentCanvasGroup{parentCanvasGroup_}, blockerGO{blockerGO_}, test{test_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_blockerClickedEvent(System.Action value)
    // Offset: 0x12B157C
    void add_blockerClickedEvent(System::Action* value);
    // public System.Void remove_blockerClickedEvent(System.Action value)
    // Offset: 0x12B1620
    void remove_blockerClickedEvent(System::Action* value);
    // private System.Void OnDisable()
    // Offset: 0x12B16C4
    void OnDisable();
    // private System.Void OnDestroy()
    // Offset: 0x12B18A4
    void OnDestroy();
    // private System.Void SetupView(UnityEngine.Transform screenTransform)
    // Offset: 0x12B1954
    void SetupView(UnityEngine::Transform* screenTransform);
    // public System.Void Hide(System.Boolean animated, System.Action finishedCallback)
    // Offset: 0x12B16D0
    void Hide(bool animated, System::Action* finishedCallback);
    // public System.Void Show(System.Boolean animated, System.Boolean moveToCenter, System.Action finishedCallback)
    // Offset: 0x12B1D38
    void Show(bool animated, bool moveToCenter, System::Action* finishedCallback);
    // private UnityEngine.GameObject CreateBlocker()
    // Offset: 0x12B21F0
    UnityEngine::GameObject* CreateBlocker();
    // private System.Void HandleBlockerButtonClicked()
    // Offset: 0x12B25D8
    void HandleBlockerButtonClicked();
    // private System.Void HandleParentViewControllerDidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x12B25EC
    void HandleParentViewControllerDidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // static private UnityEngine.Transform GetModalRootTransform(UnityEngine.Transform transform, out UnityEngine.Canvas canvas, out HMUI.ViewController viewController)
    // Offset: 0x12B2060
    static UnityEngine::Transform* GetModalRootTransform(UnityEngine::Transform* transform, UnityEngine::Canvas*& canvas, HMUI::ViewController*& viewController);
    // public System.Void .ctor()
    // Offset: 0x12B26B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ModalView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ModalView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ModalView*, creationType>()));
    }
  }; // HMUI.ModalView
  #pragma pack(pop)
  static check_size<sizeof(ModalView), 104 + sizeof(int)> __HMUI_ModalViewSizeCheck;
  static_assert(sizeof(ModalView) == 0x6C);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ModalView*, "HMUI", "ModalView");
// Writing includes for template specializations
#include "System/Action.hpp"
#include "UnityEngine/Transform.hpp"
#include "UnityEngine/Canvas.hpp"
#include "HMUI/ViewController.hpp"
// Writing MetadataGetter for method: HMUI::ModalView::add_blockerClickedEvent
// Il2CppName: add_blockerClickedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)(System::Action*)>(&HMUI::ModalView::add_blockerClickedEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "add_blockerClickedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::remove_blockerClickedEvent
// Il2CppName: remove_blockerClickedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)(System::Action*)>(&HMUI::ModalView::remove_blockerClickedEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "remove_blockerClickedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)()>(&HMUI::ModalView::OnDisable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)()>(&HMUI::ModalView::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::SetupView
// Il2CppName: SetupView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)(UnityEngine::Transform*)>(&HMUI::ModalView::SetupView)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "SetupView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>()});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)(bool, System::Action*)>(&HMUI::ModalView::Hide)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::Show
// Il2CppName: Show
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)(bool, bool, System::Action*)>(&HMUI::ModalView::Show)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "Show", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::CreateBlocker
// Il2CppName: CreateBlocker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (HMUI::ModalView::*)()>(&HMUI::ModalView::CreateBlocker)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "CreateBlocker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::HandleBlockerButtonClicked
// Il2CppName: HandleBlockerButtonClicked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)()>(&HMUI::ModalView::HandleBlockerButtonClicked)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "HandleBlockerButtonClicked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::HandleParentViewControllerDidDeactivate
// Il2CppName: HandleParentViewControllerDidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)(bool, bool)>(&HMUI::ModalView::HandleParentViewControllerDidDeactivate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "HandleParentViewControllerDidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::GetModalRootTransform
// Il2CppName: GetModalRootTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (*)(UnityEngine::Transform*, UnityEngine::Canvas*&, HMUI::ViewController*&)>(&HMUI::ModalView::GetModalRootTransform)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "GetModalRootTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Canvas*&>(), ::il2cpp_utils::ExtractIndependentType<HMUI::ViewController*&>()});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
