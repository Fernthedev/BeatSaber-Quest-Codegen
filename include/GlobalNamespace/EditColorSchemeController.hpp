// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeColorsToggleGroup
  class ColorSchemeColorsToggleGroup;
  // Forward declaring type: RGBPanelController
  class RGBPanelController;
  // Forward declaring type: HSVPanelController
  class HSVPanelController;
  // Forward declaring type: PreviousColorPanelController
  class PreviousColorPanelController;
  // Forward declaring type: ColorScheme
  class ColorScheme;
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
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: EditColorSchemeController
  // [TokenAttribute] Offset: FFFFFFFF
  class EditColorSchemeController : public UnityEngine::MonoBehaviour {
    public:
    // private ColorSchemeColorsToggleGroup _colorSchemeColorsToggleGroup
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSchemeColorsToggleGroup* colorSchemeColorsToggleGroup;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeColorsToggleGroup*) == 0x8);
    // private RGBPanelController _rgbPanelController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::RGBPanelController* rgbPanelController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RGBPanelController*) == 0x8);
    // private HSVPanelController _hsvPanelController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::HSVPanelController* hsvPanelController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HSVPanelController*) == 0x8);
    // private PreviousColorPanelController _previousColorPanelController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::PreviousColorPanelController* previousColorPanelController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PreviousColorPanelController*) == 0x8);
    // private UnityEngine.UI.Button _closeButton
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::UI::Button* closeButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private System.Action didFinishEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action`1<ColorScheme> didChangeColorSchemeEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action_1<GlobalNamespace::ColorScheme*>* didChangeColorSchemeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ColorScheme*>*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x50
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // Creating value type constructor for type: EditColorSchemeController
    EditColorSchemeController(GlobalNamespace::ColorSchemeColorsToggleGroup* colorSchemeColorsToggleGroup_ = {}, GlobalNamespace::RGBPanelController* rgbPanelController_ = {}, GlobalNamespace::HSVPanelController* hsvPanelController_ = {}, GlobalNamespace::PreviousColorPanelController* previousColorPanelController_ = {}, UnityEngine::UI::Button* closeButton_ = {}, System::Action* didFinishEvent_ = {}, System::Action_1<GlobalNamespace::ColorScheme*>* didChangeColorSchemeEvent_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}) noexcept : colorSchemeColorsToggleGroup{colorSchemeColorsToggleGroup_}, rgbPanelController{rgbPanelController_}, hsvPanelController{hsvPanelController_}, previousColorPanelController{previousColorPanelController_}, closeButton{closeButton_}, didFinishEvent{didFinishEvent_}, didChangeColorSchemeEvent{didChangeColorSchemeEvent_}, buttonBinder{buttonBinder_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private ColorSchemeColorsToggleGroup _colorSchemeColorsToggleGroup
    GlobalNamespace::ColorSchemeColorsToggleGroup*& dyn__colorSchemeColorsToggleGroup();
    // Get instance field reference: private RGBPanelController _rgbPanelController
    GlobalNamespace::RGBPanelController*& dyn__rgbPanelController();
    // Get instance field reference: private HSVPanelController _hsvPanelController
    GlobalNamespace::HSVPanelController*& dyn__hsvPanelController();
    // Get instance field reference: private PreviousColorPanelController _previousColorPanelController
    GlobalNamespace::PreviousColorPanelController*& dyn__previousColorPanelController();
    // Get instance field reference: private UnityEngine.UI.Button _closeButton
    UnityEngine::UI::Button*& dyn__closeButton();
    // Get instance field reference: private System.Action didFinishEvent
    System::Action*& dyn_didFinishEvent();
    // Get instance field reference: private System.Action`1<ColorScheme> didChangeColorSchemeEvent
    System::Action_1<GlobalNamespace::ColorScheme*>*& dyn_didChangeColorSchemeEvent();
    // Get instance field reference: private HMUI.ButtonBinder _buttonBinder
    HMUI::ButtonBinder*& dyn__buttonBinder();
    // public System.Void add_didFinishEvent(System.Action value)
    // Offset: 0x104EDC0
    void add_didFinishEvent(System::Action* value);
    // public System.Void remove_didFinishEvent(System.Action value)
    // Offset: 0x104EE64
    void remove_didFinishEvent(System::Action* value);
    // public System.Void add_didChangeColorSchemeEvent(System.Action`1<ColorScheme> value)
    // Offset: 0x104EF08
    void add_didChangeColorSchemeEvent(System::Action_1<GlobalNamespace::ColorScheme*>* value);
    // public System.Void remove_didChangeColorSchemeEvent(System.Action`1<ColorScheme> value)
    // Offset: 0x104EFAC
    void remove_didChangeColorSchemeEvent(System::Action_1<GlobalNamespace::ColorScheme*>* value);
    // public System.Void SetColorScheme(ColorScheme colorScheme)
    // Offset: 0x104F050
    void SetColorScheme(GlobalNamespace::ColorScheme* colorScheme);
    // protected System.Void Start()
    // Offset: 0x104F06C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x104F2A8
    void OnDestroy();
    // private System.Void HandleColorSchemeColorsToggleGroupSelectedColorDidChange(UnityEngine.Color color)
    // Offset: 0x104F47C
    void HandleColorSchemeColorsToggleGroupSelectedColorDidChange(UnityEngine::Color color);
    // private System.Void HandleRGBPanelControllerColorDidChange(UnityEngine.Color color, ColorChangeUIEventType colorChangeUIEventType)
    // Offset: 0x104F508
    void HandleRGBPanelControllerColorDidChange(UnityEngine::Color color, GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);
    // private System.Void HandleHSVPanelControllerColorDidChange(UnityEngine.Color color, ColorChangeUIEventType colorChangeUIEventType)
    // Offset: 0x104F624
    void HandleHSVPanelControllerColorDidChange(UnityEngine::Color color, GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);
    // private System.Void HandlePreviousColorPanelControllerColorWasSelected(UnityEngine.Color color)
    // Offset: 0x104F740
    void HandlePreviousColorPanelControllerColorWasSelected(UnityEngine::Color color);
    // private System.Void <Start>b__13_0()
    // Offset: 0x104F84C
    void $Start$b__13_0();
    // public System.Void .ctor()
    // Offset: 0x104F844
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditColorSchemeController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EditColorSchemeController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditColorSchemeController*, creationType>()));
    }
  }; // EditColorSchemeController
  #pragma pack(pop)
  static check_size<sizeof(EditColorSchemeController), 80 + sizeof(HMUI::ButtonBinder*)> __GlobalNamespace_EditColorSchemeControllerSizeCheck;
  static_assert(sizeof(EditColorSchemeController) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EditColorSchemeController*, "", "EditColorSchemeController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(System::Action*)>(&GlobalNamespace::EditColorSchemeController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(System::Action*)>(&GlobalNamespace::EditColorSchemeController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::add_didChangeColorSchemeEvent
// Il2CppName: add_didChangeColorSchemeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(System::Action_1<GlobalNamespace::ColorScheme*>*)>(&GlobalNamespace::EditColorSchemeController::add_didChangeColorSchemeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ColorScheme")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "add_didChangeColorSchemeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::remove_didChangeColorSchemeEvent
// Il2CppName: remove_didChangeColorSchemeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(System::Action_1<GlobalNamespace::ColorScheme*>*)>(&GlobalNamespace::EditColorSchemeController::remove_didChangeColorSchemeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ColorScheme")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "remove_didChangeColorSchemeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::SetColorScheme
// Il2CppName: SetColorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(GlobalNamespace::ColorScheme*)>(&GlobalNamespace::EditColorSchemeController::SetColorScheme)> {
  static const MethodInfo* get() {
    static auto* colorScheme = &::il2cpp_utils::GetClassFromName("", "ColorScheme")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "SetColorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorScheme});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)()>(&GlobalNamespace::EditColorSchemeController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)()>(&GlobalNamespace::EditColorSchemeController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::HandleColorSchemeColorsToggleGroupSelectedColorDidChange
// Il2CppName: HandleColorSchemeColorsToggleGroupSelectedColorDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(UnityEngine::Color)>(&GlobalNamespace::EditColorSchemeController::HandleColorSchemeColorsToggleGroupSelectedColorDidChange)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "HandleColorSchemeColorsToggleGroupSelectedColorDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::HandleRGBPanelControllerColorDidChange
// Il2CppName: HandleRGBPanelControllerColorDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType)>(&GlobalNamespace::EditColorSchemeController::HandleRGBPanelControllerColorDidChange)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* colorChangeUIEventType = &::il2cpp_utils::GetClassFromName("", "ColorChangeUIEventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "HandleRGBPanelControllerColorDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, colorChangeUIEventType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::HandleHSVPanelControllerColorDidChange
// Il2CppName: HandleHSVPanelControllerColorDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType)>(&GlobalNamespace::EditColorSchemeController::HandleHSVPanelControllerColorDidChange)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* colorChangeUIEventType = &::il2cpp_utils::GetClassFromName("", "ColorChangeUIEventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "HandleHSVPanelControllerColorDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, colorChangeUIEventType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::HandlePreviousColorPanelControllerColorWasSelected
// Il2CppName: HandlePreviousColorPanelControllerColorWasSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)(UnityEngine::Color)>(&GlobalNamespace::EditColorSchemeController::HandlePreviousColorPanelControllerColorWasSelected)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "HandlePreviousColorPanelControllerColorWasSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::$Start$b__13_0
// Il2CppName: <Start>b__13_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditColorSchemeController::*)()>(&GlobalNamespace::EditColorSchemeController::$Start$b__13_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditColorSchemeController*), "<Start>b__13_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditColorSchemeController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
