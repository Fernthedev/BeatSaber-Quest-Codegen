// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.Slider2D
#include "HMUI/Slider2D.hpp"
// Including type: ColorChangeUIEventType
#include "GlobalNamespace/ColorChangeUIEventType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ColorSaturationValueSlider
  class ColorSaturationValueSlider : public HMUI::Slider2D {
    public:
    // private System.Single _hue
    // Size: 0x4
    // Offset: 0x124
    float hue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.UI.Graphic[] _graphics
    // Size: 0x8
    // Offset: 0x128
    ::Array<UnityEngine::UI::Graphic*>* graphics;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::UI::Graphic*>*) == 0x8);
    // private UnityEngine.Color _darkColor
    // Size: 0x10
    // Offset: 0x130
    UnityEngine::Color darkColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _lightColor
    // Size: 0x10
    // Offset: 0x140
    UnityEngine::Color lightColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [CompilerGeneratedAttribute] Offset: 0xE20EB4
    // private System.Action`3<ColorSaturationValueSlider,UnityEngine.Vector2,ColorChangeUIEventType> colorSaturationOrValueDidChangeEvent
    // Size: 0x8
    // Offset: 0x150
    System::Action_3<GlobalNamespace::ColorSaturationValueSlider*, UnityEngine::Vector2, GlobalNamespace::ColorChangeUIEventType>* colorSaturationOrValueDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_3<GlobalNamespace::ColorSaturationValueSlider*, UnityEngine::Vector2, GlobalNamespace::ColorChangeUIEventType>*) == 0x8);
    // Creating value type constructor for type: ColorSaturationValueSlider
    ColorSaturationValueSlider(float hue_ = {}, ::Array<UnityEngine::UI::Graphic*>* graphics_ = {}, UnityEngine::Color darkColor_ = {}, UnityEngine::Color lightColor_ = {}, System::Action_3<GlobalNamespace::ColorSaturationValueSlider*, UnityEngine::Vector2, GlobalNamespace::ColorChangeUIEventType>* colorSaturationOrValueDidChangeEvent_ = {}) noexcept : hue{hue_}, graphics{graphics_}, darkColor{darkColor_}, lightColor{lightColor_}, colorSaturationOrValueDidChangeEvent{colorSaturationOrValueDidChangeEvent_} {}
    // public System.Void add_colorSaturationOrValueDidChangeEvent(System.Action`3<ColorSaturationValueSlider,UnityEngine.Vector2,ColorChangeUIEventType> value)
    // Offset: 0x1191928
    void add_colorSaturationOrValueDidChangeEvent(System::Action_3<GlobalNamespace::ColorSaturationValueSlider*, UnityEngine::Vector2, GlobalNamespace::ColorChangeUIEventType>* value);
    // public System.Void remove_colorSaturationOrValueDidChangeEvent(System.Action`3<ColorSaturationValueSlider,UnityEngine.Vector2,ColorChangeUIEventType> value)
    // Offset: 0x11919D0
    void remove_colorSaturationOrValueDidChangeEvent(System::Action_3<GlobalNamespace::ColorSaturationValueSlider*, UnityEngine::Vector2, GlobalNamespace::ColorChangeUIEventType>* value);
    // public System.Void SetHue(System.Single hue)
    // Offset: 0x1191B90
    void SetHue(float hue);
    // private System.Void HandleNormalizedValueDidChange(HMUI.Slider2D slider, UnityEngine.Vector2 normalizedValue)
    // Offset: 0x1191CC0
    void HandleNormalizedValueDidChange(HMUI::Slider2D* slider, UnityEngine::Vector2 normalizedValue);
    // protected override System.Void Awake()
    // Offset: 0x1191A78
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x1191B04
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDestroy()
    void OnDestroy();
    // protected override System.Void UpdateVisuals()
    // Offset: 0x1191BA4
    // Implemented from: HMUI.Slider2D
    // Base method: System.Void Slider2D::UpdateVisuals()
    void UpdateVisuals();
    // public override System.Void OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1191D44
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerUp(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x1191DD4
    // Implemented from: HMUI.Slider2D
    // Base method: System.Void Slider2D::.ctor()
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSaturationValueSlider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorSaturationValueSlider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSaturationValueSlider*, creationType>()));
    }
  }; // ColorSaturationValueSlider
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSaturationValueSlider*, "", "ColorSaturationValueSlider");
// Writing includes for template specializations
#include "System/Action_3.hpp"
#include "UnityEngine/EventSystems/PointerEventData.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::add_colorSaturationOrValueDidChangeEvent
// Il2CppName: add_colorSaturationOrValueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSaturationValueSlider::*)(System::Action_3<GlobalNamespace::ColorSaturationValueSlider*, UnityEngine::Vector2, GlobalNamespace::ColorChangeUIEventType>*)>(&GlobalNamespace::ColorSaturationValueSlider::add_colorSaturationOrValueDidChangeEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSaturationValueSlider*), "add_colorSaturationOrValueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_3<GlobalNamespace::ColorSaturationValueSlider*, UnityEngine::Vector2, GlobalNamespace::ColorChangeUIEventType>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::remove_colorSaturationOrValueDidChangeEvent
// Il2CppName: remove_colorSaturationOrValueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSaturationValueSlider::*)(System::Action_3<GlobalNamespace::ColorSaturationValueSlider*, UnityEngine::Vector2, GlobalNamespace::ColorChangeUIEventType>*)>(&GlobalNamespace::ColorSaturationValueSlider::remove_colorSaturationOrValueDidChangeEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSaturationValueSlider*), "remove_colorSaturationOrValueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_3<GlobalNamespace::ColorSaturationValueSlider*, UnityEngine::Vector2, GlobalNamespace::ColorChangeUIEventType>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::SetHue
// Il2CppName: SetHue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSaturationValueSlider::*)(float)>(&GlobalNamespace::ColorSaturationValueSlider::SetHue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSaturationValueSlider*), "SetHue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::HandleNormalizedValueDidChange
// Il2CppName: HandleNormalizedValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSaturationValueSlider::*)(HMUI::Slider2D*, UnityEngine::Vector2)>(&GlobalNamespace::ColorSaturationValueSlider::HandleNormalizedValueDidChange)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSaturationValueSlider*), "HandleNormalizedValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::Slider2D*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSaturationValueSlider::*)()>(&GlobalNamespace::ColorSaturationValueSlider::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSaturationValueSlider*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSaturationValueSlider::*)()>(&GlobalNamespace::ColorSaturationValueSlider::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSaturationValueSlider*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::UpdateVisuals
// Il2CppName: UpdateVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSaturationValueSlider::*)()>(&GlobalNamespace::ColorSaturationValueSlider::UpdateVisuals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSaturationValueSlider*), "UpdateVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::OnPointerUp
// Il2CppName: OnPointerUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSaturationValueSlider::*)(UnityEngine::EventSystems::PointerEventData*)>(&GlobalNamespace::ColorSaturationValueSlider::OnPointerUp)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSaturationValueSlider*), "OnPointerUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::PointerEventData*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSaturationValueSlider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
