// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: ColorChangeUIEventType
#include "GlobalNamespace/ColorChangeUIEventType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ColorGradientSlider
  class ColorGradientSlider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: RGBPanelController
  class RGBPanelController : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.ColorGradientSlider _redSlider
    // Size: 0x8
    // Offset: 0x18
    HMUI::ColorGradientSlider* redSlider;
    // Field size check
    static_assert(sizeof(HMUI::ColorGradientSlider*) == 0x8);
    // private HMUI.ColorGradientSlider _greenSlider
    // Size: 0x8
    // Offset: 0x20
    HMUI::ColorGradientSlider* greenSlider;
    // Field size check
    static_assert(sizeof(HMUI::ColorGradientSlider*) == 0x8);
    // private HMUI.ColorGradientSlider _blueSlider
    // Size: 0x8
    // Offset: 0x28
    HMUI::ColorGradientSlider* blueSlider;
    // Field size check
    static_assert(sizeof(HMUI::ColorGradientSlider*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE21244
    // private System.Action`2<UnityEngine.Color,ColorChangeUIEventType> colorDidChangeEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>*) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x38
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: RGBPanelController
    RGBPanelController(HMUI::ColorGradientSlider* redSlider_ = {}, HMUI::ColorGradientSlider* greenSlider_ = {}, HMUI::ColorGradientSlider* blueSlider_ = {}, System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent_ = {}, UnityEngine::Color color_ = {}) noexcept : redSlider{redSlider_}, greenSlider{greenSlider_}, blueSlider{blueSlider_}, colorDidChangeEvent{colorDidChangeEvent_}, color{color_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_colorDidChangeEvent(System.Action`2<UnityEngine.Color,ColorChangeUIEventType> value)
    // Offset: 0x10AE59C
    void add_colorDidChangeEvent(System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* value);
    // public System.Void remove_colorDidChangeEvent(System.Action`2<UnityEngine.Color,ColorChangeUIEventType> value)
    // Offset: 0x10AE640
    void remove_colorDidChangeEvent(System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* value);
    // public UnityEngine.Color get_color()
    // Offset: 0x10AE6E4
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x10AE6F0
    void set_color(UnityEngine::Color value);
    // protected System.Void Awake()
    // Offset: 0x10AE8F0
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x10AE9F4
    void OnDestroy();
    // private System.Void HandleSliderColorDidChange(HMUI.ColorGradientSlider slider, UnityEngine.Color color, ColorChangeUIEventType colorChangeUIEventType)
    // Offset: 0x10AEBC8
    void HandleSliderColorDidChange(HMUI::ColorGradientSlider* slider, UnityEngine::Color color, GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);
    // private System.Void RefreshSlidersValues()
    // Offset: 0x10AE898
    void RefreshSlidersValues();
    // private System.Void RefreshSlidersColors()
    // Offset: 0x10AE71C
    void RefreshSlidersColors();
    // public System.Void .ctor()
    // Offset: 0x10AEC6C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RGBPanelController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RGBPanelController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RGBPanelController*, creationType>()));
    }
  }; // RGBPanelController
  #pragma pack(pop)
  static check_size<sizeof(RGBPanelController), 56 + sizeof(UnityEngine::Color)> __GlobalNamespace_RGBPanelControllerSizeCheck;
  static_assert(sizeof(RGBPanelController) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RGBPanelController*, "", "RGBPanelController");
// Writing includes for template specializations
#include "System/Action_2.hpp"
#include "HMUI/ColorGradientSlider.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RGBPanelController::add_colorDidChangeEvent
// Il2CppName: add_colorDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RGBPanelController::*)(System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>*)>(&GlobalNamespace::RGBPanelController::add_colorDidChangeEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RGBPanelController*), "add_colorDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RGBPanelController::remove_colorDidChangeEvent
// Il2CppName: remove_colorDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RGBPanelController::*)(System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>*)>(&GlobalNamespace::RGBPanelController::remove_colorDidChangeEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RGBPanelController*), "remove_colorDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RGBPanelController::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::RGBPanelController::*)()>(&GlobalNamespace::RGBPanelController::get_color)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RGBPanelController*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RGBPanelController::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RGBPanelController::*)(UnityEngine::Color)>(&GlobalNamespace::RGBPanelController::set_color)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RGBPanelController*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RGBPanelController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RGBPanelController::*)()>(&GlobalNamespace::RGBPanelController::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RGBPanelController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RGBPanelController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RGBPanelController::*)()>(&GlobalNamespace::RGBPanelController::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RGBPanelController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RGBPanelController::HandleSliderColorDidChange
// Il2CppName: HandleSliderColorDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RGBPanelController::*)(HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType)>(&GlobalNamespace::RGBPanelController::HandleSliderColorDidChange)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RGBPanelController*), "HandleSliderColorDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::ColorGradientSlider*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::ColorChangeUIEventType>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RGBPanelController::RefreshSlidersValues
// Il2CppName: RefreshSlidersValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RGBPanelController::*)()>(&GlobalNamespace::RGBPanelController::RefreshSlidersValues)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RGBPanelController*), "RefreshSlidersValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RGBPanelController::RefreshSlidersColors
// Il2CppName: RefreshSlidersColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RGBPanelController::*)()>(&GlobalNamespace::RGBPanelController::RefreshSlidersColors)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RGBPanelController*), "RefreshSlidersColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RGBPanelController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
