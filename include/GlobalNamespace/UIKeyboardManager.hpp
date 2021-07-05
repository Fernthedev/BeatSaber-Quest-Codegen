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
  // Forward declaring type: UIKeyboard
  class UIKeyboard;
  // Forward declaring type: ModalView
  class ModalView;
  // Forward declaring type: InputFieldView
  class InputFieldView;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: VRInputModule
  class VRInputModule;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UIKeyboardManager
  class UIKeyboardManager : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.UIKeyboard _uiKeyboard
    // Size: 0x8
    // Offset: 0x18
    HMUI::UIKeyboard* uiKeyboard;
    // Field size check
    static_assert(sizeof(HMUI::UIKeyboard*) == 0x8);
    // private HMUI.ModalView _keyboardModalView
    // Size: 0x8
    // Offset: 0x20
    HMUI::ModalView* keyboardModalView;
    // Field size check
    static_assert(sizeof(HMUI::ModalView*) == 0x8);
    // private UnityEngine.RectTransform _keyboardContainerTransform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::RectTransform* keyboardContainerTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.Transform _parentContainerTransform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* parentContainerTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0xE22198
    // private readonly VRUIControls.VRInputModule _vrInputModule
    // Size: 0x8
    // Offset: 0x38
    VRUIControls::VRInputModule* vrInputModule;
    // Field size check
    static_assert(sizeof(VRUIControls::VRInputModule*) == 0x8);
    // private HMUI.InputFieldView _selectedInput
    // Size: 0x8
    // Offset: 0x40
    HMUI::InputFieldView* selectedInput;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldView*) == 0x8);
    // Creating value type constructor for type: UIKeyboardManager
    UIKeyboardManager(HMUI::UIKeyboard* uiKeyboard_ = {}, HMUI::ModalView* keyboardModalView_ = {}, UnityEngine::RectTransform* keyboardContainerTransform_ = {}, UnityEngine::Transform* parentContainerTransform_ = {}, VRUIControls::VRInputModule* vrInputModule_ = {}, HMUI::InputFieldView* selectedInput_ = {}) noexcept : uiKeyboard{uiKeyboard_}, keyboardModalView{keyboardModalView_}, keyboardContainerTransform{keyboardContainerTransform_}, parentContainerTransform{parentContainerTransform_}, vrInputModule{vrInputModule_}, selectedInput{selectedInput_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kKeyboardTopOffset
    static constexpr const float kKeyboardTopOffset = 5;
    // Get static field: static private System.Single kKeyboardTopOffset
    static float _get_kKeyboardTopOffset();
    // Set static field: static private System.Single kKeyboardTopOffset
    static void _set_kKeyboardTopOffset(float value);
    // public HMUI.UIKeyboard get_keyboard()
    // Offset: 0x112353C
    HMUI::UIKeyboard* get_keyboard();
    // protected System.Void Start()
    // Offset: 0x1123544
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x11235D8
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1123664
    void OnDisable();
    // protected System.Void OnDestroy()
    // Offset: 0x11236F0
    void OnDestroy();
    // public System.Void OpenKeyboardFor(HMUI.InputFieldView input)
    // Offset: 0x11237C8
    void OpenKeyboardFor(HMUI::InputFieldView* input);
    // public System.Void CloseKeyboard()
    // Offset: 0x1123A5C
    void CloseKeyboard();
    // private System.Void TransferKeyboardTo(HMUI.InputFieldView nextInput)
    // Offset: 0x1123B04
    void TransferKeyboardTo(HMUI::InputFieldView* nextInput);
    // private System.Boolean ShouldCloseKeyboard(UnityEngine.GameObject root)
    // Offset: 0x1123BA8
    bool ShouldCloseKeyboard(UnityEngine::GameObject* root);
    // private System.Void ProcessMousePress(UnityEngine.GameObject currentOverGo)
    // Offset: 0x1123C0C
    void ProcessMousePress(UnityEngine::GameObject* currentOverGo);
    // private System.Void HandleKeyboardOkButton()
    // Offset: 0x1123DA4
    void HandleKeyboardOkButton();
    // public System.Void .ctor()
    // Offset: 0x1123F28
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIKeyboardManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UIKeyboardManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIKeyboardManager*, creationType>()));
    }
  }; // UIKeyboardManager
  #pragma pack(pop)
  static check_size<sizeof(UIKeyboardManager), 64 + sizeof(HMUI::InputFieldView*)> __GlobalNamespace_UIKeyboardManagerSizeCheck;
  static_assert(sizeof(UIKeyboardManager) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UIKeyboardManager*, "", "UIKeyboardManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboardManager::get_keyboard
// Il2CppName: get_keyboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::UIKeyboard* (GlobalNamespace::UIKeyboardManager::*)()>(&GlobalNamespace::UIKeyboardManager::get_keyboard)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboardManager*), "get_keyboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboardManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboardManager::*)()>(&GlobalNamespace::UIKeyboardManager::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboardManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboardManager::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboardManager::*)()>(&GlobalNamespace::UIKeyboardManager::OnEnable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboardManager*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboardManager::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboardManager::*)()>(&GlobalNamespace::UIKeyboardManager::OnDisable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboardManager*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboardManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboardManager::*)()>(&GlobalNamespace::UIKeyboardManager::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboardManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboardManager::OpenKeyboardFor
// Il2CppName: OpenKeyboardFor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboardManager::*)(HMUI::InputFieldView*)>(&GlobalNamespace::UIKeyboardManager::OpenKeyboardFor)> {
  const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("HMUI", "InputFieldView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboardManager*), "OpenKeyboardFor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboardManager::CloseKeyboard
// Il2CppName: CloseKeyboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboardManager::*)()>(&GlobalNamespace::UIKeyboardManager::CloseKeyboard)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboardManager*), "CloseKeyboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboardManager::TransferKeyboardTo
// Il2CppName: TransferKeyboardTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboardManager::*)(HMUI::InputFieldView*)>(&GlobalNamespace::UIKeyboardManager::TransferKeyboardTo)> {
  const MethodInfo* get() {
    static auto* nextInput = &::il2cpp_utils::GetClassFromName("HMUI", "InputFieldView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboardManager*), "TransferKeyboardTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nextInput});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboardManager::ShouldCloseKeyboard
// Il2CppName: ShouldCloseKeyboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UIKeyboardManager::*)(UnityEngine::GameObject*)>(&GlobalNamespace::UIKeyboardManager::ShouldCloseKeyboard)> {
  const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboardManager*), "ShouldCloseKeyboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboardManager::ProcessMousePress
// Il2CppName: ProcessMousePress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboardManager::*)(UnityEngine::GameObject*)>(&GlobalNamespace::UIKeyboardManager::ProcessMousePress)> {
  const MethodInfo* get() {
    static auto* currentOverGo = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboardManager*), "ProcessMousePress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentOverGo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboardManager::HandleKeyboardOkButton
// Il2CppName: HandleKeyboardOkButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboardManager::*)()>(&GlobalNamespace::UIKeyboardManager::HandleKeyboardOkButton)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboardManager*), "HandleKeyboardOkButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboardManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
