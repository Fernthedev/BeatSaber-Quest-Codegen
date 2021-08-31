// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.TextSlider
#include "HMUI/TextSlider.hpp"
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
  // Forward declaring type: ImageView
  class ImageView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.ColorGradientSlider
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorGradientSlider : public HMUI::TextSlider {
    public:
    // private System.String _textPrefix
    // Size: 0x8
    // Offset: 0x140
    ::Il2CppString* textPrefix;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [SpaceAttribute] Offset: 0xE16B64
    // private UnityEngine.Color _color0
    // Size: 0x10
    // Offset: 0x148
    UnityEngine::Color color0;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _color1
    // Size: 0x10
    // Offset: 0x158
    UnityEngine::Color color1;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private HMUI.ImageView[] _gradientImages
    // Size: 0x8
    // Offset: 0x168
    ::Array<HMUI::ImageView*>* gradientImages;
    // Field size check
    static_assert(sizeof(::Array<HMUI::ImageView*>*) == 0x8);
    // private UnityEngine.Color _darkColor
    // Size: 0x10
    // Offset: 0x170
    UnityEngine::Color darkColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _lightColor
    // Size: 0x10
    // Offset: 0x180
    UnityEngine::Color lightColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Action`3<HMUI.ColorGradientSlider,UnityEngine.Color,ColorChangeUIEventType> colorDidChangeEvent
    // Size: 0x8
    // Offset: 0x190
    System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>*) == 0x8);
    // Creating value type constructor for type: ColorGradientSlider
    ColorGradientSlider(::Il2CppString* textPrefix_ = {}, UnityEngine::Color color0_ = {}, UnityEngine::Color color1_ = {}, ::Array<HMUI::ImageView*>* gradientImages_ = {}, UnityEngine::Color darkColor_ = {}, UnityEngine::Color lightColor_ = {}, System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent_ = {}) noexcept : textPrefix{textPrefix_}, color0{color0_}, color1{color1_}, gradientImages{gradientImages_}, darkColor{darkColor_}, lightColor{lightColor_}, colorDidChangeEvent{colorDidChangeEvent_} {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE16BEC
    // Get static field: static private readonly System.Text.StringBuilder _stringBuilder
    static System::Text::StringBuilder* _get__stringBuilder();
    // Set static field: static private readonly System.Text.StringBuilder _stringBuilder
    static void _set__stringBuilder(System::Text::StringBuilder* value);
    // Get instance field reference: private System.String _textPrefix
    ::Il2CppString*& dyn__textPrefix();
    // Get instance field reference: private UnityEngine.Color _color0
    UnityEngine::Color& dyn__color0();
    // Get instance field reference: private UnityEngine.Color _color1
    UnityEngine::Color& dyn__color1();
    // Get instance field reference: private HMUI.ImageView[] _gradientImages
    ::Array<HMUI::ImageView*>*& dyn__gradientImages();
    // Get instance field reference: private UnityEngine.Color _darkColor
    UnityEngine::Color& dyn__darkColor();
    // Get instance field reference: private UnityEngine.Color _lightColor
    UnityEngine::Color& dyn__lightColor();
    // Get instance field reference: private System.Action`3<HMUI.ColorGradientSlider,UnityEngine.Color,ColorChangeUIEventType> colorDidChangeEvent
    System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>*& dyn_colorDidChangeEvent();
    // public System.Void add_colorDidChangeEvent(System.Action`3<HMUI.ColorGradientSlider,UnityEngine.Color,ColorChangeUIEventType> value)
    // Offset: 0x1368108
    void add_colorDidChangeEvent(System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* value);
    // public System.Void remove_colorDidChangeEvent(System.Action`3<HMUI.ColorGradientSlider,UnityEngine.Color,ColorChangeUIEventType> value)
    // Offset: 0x13681B0
    void remove_colorDidChangeEvent(System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* value);
    // public System.Void SetColors(UnityEngine.Color color0, UnityEngine.Color color1)
    // Offset: 0x1368380
    void SetColors(UnityEngine::Color color0, UnityEngine::Color color1);
    // private System.Void HandleNormalizedValueDidChange(HMUI.TextSlider slider, System.Single normalizedValue)
    // Offset: 0x136868C
    void HandleNormalizedValueDidChange(HMUI::TextSlider* slider, float normalizedValue);
    // public System.Void .ctor()
    // Offset: 0x1368860
    // Implemented from: HMUI.TextSlider
    // Base method: System.Void TextSlider::.ctor()
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorGradientSlider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ColorGradientSlider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorGradientSlider*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1368868
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
    // protected override System.Void Awake()
    // Offset: 0x1368258
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x13682F4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDestroy()
    void OnDestroy();
    // protected override System.Void UpdateVisuals()
    // Offset: 0x13683B0
    // Implemented from: HMUI.TextSlider
    // Base method: System.Void TextSlider::UpdateVisuals()
    void UpdateVisuals();
    // protected override System.String TextForNormalizedValue(System.Single normalizedValue)
    // Offset: 0x136857C
    // Implemented from: HMUI.TextSlider
    // Base method: System.String TextSlider::TextForNormalizedValue(System.Single normalizedValue)
    ::Il2CppString* TextForNormalizedValue(float normalizedValue);
    // public override System.Void OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1368740
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerUp(UnityEngine::EventSystems::PointerEventData* eventData);
  }; // HMUI.ColorGradientSlider
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ColorGradientSlider*, "HMUI", "ColorGradientSlider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ColorGradientSlider::add_colorDidChangeEvent
// Il2CppName: add_colorDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ColorGradientSlider::*)(System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>*)>(&HMUI::ColorGradientSlider::add_colorDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ColorGradientSlider"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), ::il2cpp_utils::GetClassFromName("", "ColorChangeUIEventType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ColorGradientSlider*), "add_colorDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::ColorGradientSlider::remove_colorDidChangeEvent
// Il2CppName: remove_colorDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ColorGradientSlider::*)(System::Action_3<HMUI::ColorGradientSlider*, UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>*)>(&HMUI::ColorGradientSlider::remove_colorDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ColorGradientSlider"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), ::il2cpp_utils::GetClassFromName("", "ColorChangeUIEventType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ColorGradientSlider*), "remove_colorDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::ColorGradientSlider::SetColors
// Il2CppName: SetColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ColorGradientSlider::*)(UnityEngine::Color, UnityEngine::Color)>(&HMUI::ColorGradientSlider::SetColors)> {
  static const MethodInfo* get() {
    static auto* color0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* color1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ColorGradientSlider*), "SetColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color0, color1});
  }
};
// Writing MetadataGetter for method: HMUI::ColorGradientSlider::HandleNormalizedValueDidChange
// Il2CppName: HandleNormalizedValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ColorGradientSlider::*)(HMUI::TextSlider*, float)>(&HMUI::ColorGradientSlider::HandleNormalizedValueDidChange)> {
  static const MethodInfo* get() {
    static auto* slider = &::il2cpp_utils::GetClassFromName("HMUI", "TextSlider")->byval_arg;
    static auto* normalizedValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ColorGradientSlider*), "HandleNormalizedValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slider, normalizedValue});
  }
};
// Writing MetadataGetter for method: HMUI::ColorGradientSlider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ColorGradientSlider::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HMUI::ColorGradientSlider::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ColorGradientSlider*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ColorGradientSlider::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ColorGradientSlider::*)()>(&HMUI::ColorGradientSlider::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ColorGradientSlider*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ColorGradientSlider::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ColorGradientSlider::*)()>(&HMUI::ColorGradientSlider::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ColorGradientSlider*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ColorGradientSlider::UpdateVisuals
// Il2CppName: UpdateVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ColorGradientSlider::*)()>(&HMUI::ColorGradientSlider::UpdateVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ColorGradientSlider*), "UpdateVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ColorGradientSlider::TextForNormalizedValue
// Il2CppName: TextForNormalizedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (HMUI::ColorGradientSlider::*)(float)>(&HMUI::ColorGradientSlider::TextForNormalizedValue)> {
  static const MethodInfo* get() {
    static auto* normalizedValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ColorGradientSlider*), "TextForNormalizedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{normalizedValue});
  }
};
// Writing MetadataGetter for method: HMUI::ColorGradientSlider::OnPointerUp
// Il2CppName: OnPointerUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ColorGradientSlider::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::ColorGradientSlider::OnPointerUp)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ColorGradientSlider*), "OnPointerUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
