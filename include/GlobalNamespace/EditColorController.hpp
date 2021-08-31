// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HSVPanelController
  class HSVPanelController;
  // Forward declaring type: PreviousColorPanelController
  class PreviousColorPanelController;
  // Forward declaring type: ColorChangeUIEventType
  struct ColorChangeUIEventType;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
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
  // Size: 0xB9
  #pragma pack(push, 1)
  // Autogenerated type: EditColorController
  // [TokenAttribute] Offset: FFFFFFFF
  class EditColorController : public HMUI::ViewController {
    public:
    // private HSVPanelController _hsvPanelController
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::HSVPanelController* hsvPanelController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HSVPanelController*) == 0x8);
    // private PreviousColorPanelController _previousColorPanelController
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::PreviousColorPanelController* previousColorPanelController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PreviousColorPanelController*) == 0x8);
    // [SpaceAttribute] Offset: 0xE3DD44
    // private UnityEngine.UI.Button _cancelButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* cancelButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _applyButton
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Button* applyButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private System.Action`1<UnityEngine.Color> didChangeColorEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action_1<UnityEngine::Color>* didChangeColorEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Color>*) == 0x8);
    // private System.Action`1<System.Boolean> didFinishEvent
    // Size: 0x8
    // Offset: 0x98
    System::Action_1<bool>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // private System.Action`1<UnityEngine.Color> _colorCallback
    // Size: 0x8
    // Offset: 0xA0
    System::Action_1<UnityEngine::Color>* colorCallback;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Color>*) == 0x8);
    // private UnityEngine.Color _initialColor
    // Size: 0x10
    // Offset: 0xA8
    UnityEngine::Color initialColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Boolean _colorChanged
    // Size: 0x1
    // Offset: 0xB8
    bool colorChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EditColorController
    EditColorController(GlobalNamespace::HSVPanelController* hsvPanelController_ = {}, GlobalNamespace::PreviousColorPanelController* previousColorPanelController_ = {}, UnityEngine::UI::Button* cancelButton_ = {}, UnityEngine::UI::Button* applyButton_ = {}, System::Action_1<UnityEngine::Color>* didChangeColorEvent_ = {}, System::Action_1<bool>* didFinishEvent_ = {}, System::Action_1<UnityEngine::Color>* colorCallback_ = {}, UnityEngine::Color initialColor_ = {}, bool colorChanged_ = {}) noexcept : hsvPanelController{hsvPanelController_}, previousColorPanelController{previousColorPanelController_}, cancelButton{cancelButton_}, applyButton{applyButton_}, didChangeColorEvent{didChangeColorEvent_}, didFinishEvent{didFinishEvent_}, colorCallback{colorCallback_}, initialColor{initialColor_}, colorChanged{colorChanged_} {}
    // Get instance field: private HSVPanelController _hsvPanelController
    GlobalNamespace::HSVPanelController* _get__hsvPanelController();
    // Set instance field: private HSVPanelController _hsvPanelController
    void _set__hsvPanelController(GlobalNamespace::HSVPanelController* value);
    // Get instance field: private PreviousColorPanelController _previousColorPanelController
    GlobalNamespace::PreviousColorPanelController* _get__previousColorPanelController();
    // Set instance field: private PreviousColorPanelController _previousColorPanelController
    void _set__previousColorPanelController(GlobalNamespace::PreviousColorPanelController* value);
    // Get instance field: private UnityEngine.UI.Button _cancelButton
    UnityEngine::UI::Button* _get__cancelButton();
    // Set instance field: private UnityEngine.UI.Button _cancelButton
    void _set__cancelButton(UnityEngine::UI::Button* value);
    // Get instance field: private UnityEngine.UI.Button _applyButton
    UnityEngine::UI::Button* _get__applyButton();
    // Set instance field: private UnityEngine.UI.Button _applyButton
    void _set__applyButton(UnityEngine::UI::Button* value);
    // Get instance field: private System.Action`1<UnityEngine.Color> didChangeColorEvent
    System::Action_1<UnityEngine::Color>* _get_didChangeColorEvent();
    // Set instance field: private System.Action`1<UnityEngine.Color> didChangeColorEvent
    void _set_didChangeColorEvent(System::Action_1<UnityEngine::Color>* value);
    // Get instance field: private System.Action`1<System.Boolean> didFinishEvent
    System::Action_1<bool>* _get_didFinishEvent();
    // Set instance field: private System.Action`1<System.Boolean> didFinishEvent
    void _set_didFinishEvent(System::Action_1<bool>* value);
    // Get instance field: private System.Action`1<UnityEngine.Color> _colorCallback
    System::Action_1<UnityEngine::Color>* _get__colorCallback();
    // Set instance field: private System.Action`1<UnityEngine.Color> _colorCallback
    void _set__colorCallback(System::Action_1<UnityEngine::Color>* value);
    // Get instance field: private UnityEngine.Color _initialColor
    UnityEngine::Color _get__initialColor();
    // Set instance field: private UnityEngine.Color _initialColor
    void _set__initialColor(UnityEngine::Color value);
    // Get instance field: private System.Boolean _colorChanged
    bool _get__colorChanged();
    // Set instance field: private System.Boolean _colorChanged
    void _set__colorChanged(bool value);
    // public System.Void add_didChangeColorEvent(System.Action`1<UnityEngine.Color> value)
    // Offset: 0x104C7E0
    void add_didChangeColorEvent(System::Action_1<UnityEngine::Color>* value);
    // public System.Void remove_didChangeColorEvent(System.Action`1<UnityEngine.Color> value)
    // Offset: 0x104CD2C
    void remove_didChangeColorEvent(System::Action_1<UnityEngine::Color>* value);
    // public System.Void add_didFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x104C884
    void add_didFinishEvent(System::Action_1<bool>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x104CDD0
    void remove_didFinishEvent(System::Action_1<bool>* value);
    // public System.Void SetColorCallback(System.Action`1<UnityEngine.Color> colorCallback)
    // Offset: 0x104E88C
    void SetColorCallback(System::Action_1<UnityEngine::Color>* colorCallback);
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x104CEF0
    void SetColor(UnityEngine::Color color);
    // private System.Void HandleHSVPanelControllerColorDidChange(UnityEngine.Color color, ColorChangeUIEventType colorChangeUIEventType)
    // Offset: 0x104EAFC
    void HandleHSVPanelControllerColorDidChange(UnityEngine::Color color, GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);
    // private System.Void HandlePreviousColorPanelControllerColorWasSelected(UnityEngine.Color color)
    // Offset: 0x104EC40
    void HandlePreviousColorPanelControllerColorWasSelected(UnityEngine::Color color);
    // private System.Void HandleCancelButtonWasPressed()
    // Offset: 0x104ECC4
    void HandleCancelButtonWasPressed();
    // private System.Void HandleApplyButtonWasPressed()
    // Offset: 0x104ED54
    void HandleApplyButtonWasPressed();
    // private System.Void ChangeColor(UnityEngine.Color color)
    // Offset: 0x104EB78
    void ChangeColor(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x104EDB8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditColorController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EditColorController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditColorController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x104E894
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x104EA1C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // EditColorController
  #pragma pack(pop)
  static check_size<sizeof(EditColorController), 184 + sizeof(bool)> __GlobalNamespace_EditColorControllerSizeCheck;
  static_assert(sizeof(EditColorController) == 0xB9);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EditColorController*, "", "EditColorController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EditColorController::add_didChangeColorEvent
// Il2CppName: add_didChangeColorEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorController::*)(System::Action_1<UnityEngine::Color>*)>(&GlobalNamespace::EditColorController::add_didChangeColorEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorController*), "add_didChangeColorEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorController::remove_didChangeColorEvent
// Il2CppName: remove_didChangeColorEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorController::*)(System::Action_1<UnityEngine::Color>*)>(&GlobalNamespace::EditColorController::remove_didChangeColorEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorController*), "remove_didChangeColorEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorController::*)(System::Action_1<bool>*)>(&GlobalNamespace::EditColorController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorController::*)(System::Action_1<bool>*)>(&GlobalNamespace::EditColorController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorController::SetColorCallback
// Il2CppName: SetColorCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorController::*)(System::Action_1<UnityEngine::Color>*)>(&GlobalNamespace::EditColorController::SetColorCallback)> {
  static const MethodInfo* get() {
    static auto* colorCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorController*), "SetColorCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorController::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorController::*)(UnityEngine::Color)>(&GlobalNamespace::EditColorController::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorController*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorController::HandleHSVPanelControllerColorDidChange
// Il2CppName: HandleHSVPanelControllerColorDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorController::*)(UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType)>(&GlobalNamespace::EditColorController::HandleHSVPanelControllerColorDidChange)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* colorChangeUIEventType = &::il2cpp_utils::GetClassFromName("", "ColorChangeUIEventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorController*), "HandleHSVPanelControllerColorDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, colorChangeUIEventType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorController::HandlePreviousColorPanelControllerColorWasSelected
// Il2CppName: HandlePreviousColorPanelControllerColorWasSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorController::*)(UnityEngine::Color)>(&GlobalNamespace::EditColorController::HandlePreviousColorPanelControllerColorWasSelected)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorController*), "HandlePreviousColorPanelControllerColorWasSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorController::HandleCancelButtonWasPressed
// Il2CppName: HandleCancelButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorController::*)()>(&GlobalNamespace::EditColorController::HandleCancelButtonWasPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorController*), "HandleCancelButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorController::HandleApplyButtonWasPressed
// Il2CppName: HandleApplyButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorController::*)()>(&GlobalNamespace::EditColorController::HandleApplyButtonWasPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorController*), "HandleApplyButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorController::ChangeColor
// Il2CppName: ChangeColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorController::*)(UnityEngine::Color)>(&GlobalNamespace::EditColorController::ChangeColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorController*), "ChangeColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EditColorController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorController::*)(bool, bool, bool)>(&GlobalNamespace::EditColorController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorController::*)(bool, bool)>(&GlobalNamespace::EditColorController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
