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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ResultObjectiveListItem
  class ResultObjectiveListItem : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Image _icon
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Image* icon;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _iconGlow
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Image* iconGlow;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private TMPro.TextMeshProUGUI _titleText
    // Size: 0x8
    // Offset: 0x28
    TMPro::TextMeshProUGUI* titleText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _conditionText
    // Size: 0x8
    // Offset: 0x30
    TMPro::TextMeshProUGUI* conditionText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _valueText
    // Size: 0x8
    // Offset: 0x38
    TMPro::TextMeshProUGUI* valueText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // Creating value type constructor for type: ResultObjectiveListItem
    ResultObjectiveListItem(UnityEngine::UI::Image* icon_ = {}, UnityEngine::UI::Image* iconGlow_ = {}, TMPro::TextMeshProUGUI* titleText_ = {}, TMPro::TextMeshProUGUI* conditionText_ = {}, TMPro::TextMeshProUGUI* valueText_ = {}) noexcept : icon{icon_}, iconGlow{iconGlow_}, titleText{titleText_}, conditionText{conditionText_}, valueText{valueText_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_iconColor(UnityEngine.Color value)
    // Offset: 0x10AFA1C
    void set_iconColor(UnityEngine::Color value);
    // public System.Void set_icon(UnityEngine.Sprite value)
    // Offset: 0x10AFA40
    void set_icon(UnityEngine::Sprite* value);
    // public System.Void set_iconGlow(UnityEngine.Sprite value)
    // Offset: 0x10AFA5C
    void set_iconGlow(UnityEngine::Sprite* value);
    // public System.Void set_title(System.String value)
    // Offset: 0x10AFA78
    void set_title(::Il2CppString* value);
    // public System.Void set_conditionText(System.String value)
    // Offset: 0x10AFA94
    void set_conditionText(::Il2CppString* value);
    // public System.Void set_hideConditionText(System.Boolean value)
    // Offset: 0x10AFAB0
    void set_hideConditionText(bool value);
    // public System.Void set_valueText(System.String value)
    // Offset: 0x10AFAF0
    void set_valueText(::Il2CppString* value);
    // public System.Void set_hideValueText(System.Boolean value)
    // Offset: 0x10AFB0C
    void set_hideValueText(bool value);
    // public System.Void .ctor()
    // Offset: 0x10AFB4C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultObjectiveListItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ResultObjectiveListItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultObjectiveListItem*, creationType>()));
    }
  }; // ResultObjectiveListItem
  #pragma pack(pop)
  static check_size<sizeof(ResultObjectiveListItem), 56 + sizeof(TMPro::TextMeshProUGUI*)> __GlobalNamespace_ResultObjectiveListItemSizeCheck;
  static_assert(sizeof(ResultObjectiveListItem) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResultObjectiveListItem*, "", "ResultObjectiveListItem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ResultObjectiveListItem::set_iconColor
// Il2CppName: set_iconColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultObjectiveListItem::*)(UnityEngine::Color)>(&GlobalNamespace::ResultObjectiveListItem::set_iconColor)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultObjectiveListItem*), "set_iconColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultObjectiveListItem::set_icon
// Il2CppName: set_icon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultObjectiveListItem::*)(UnityEngine::Sprite*)>(&GlobalNamespace::ResultObjectiveListItem::set_icon)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultObjectiveListItem*), "set_icon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultObjectiveListItem::set_iconGlow
// Il2CppName: set_iconGlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultObjectiveListItem::*)(UnityEngine::Sprite*)>(&GlobalNamespace::ResultObjectiveListItem::set_iconGlow)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultObjectiveListItem*), "set_iconGlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultObjectiveListItem::set_title
// Il2CppName: set_title
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultObjectiveListItem::*)(::Il2CppString*)>(&GlobalNamespace::ResultObjectiveListItem::set_title)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultObjectiveListItem*), "set_title", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultObjectiveListItem::set_conditionText
// Il2CppName: set_conditionText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultObjectiveListItem::*)(::Il2CppString*)>(&GlobalNamespace::ResultObjectiveListItem::set_conditionText)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultObjectiveListItem*), "set_conditionText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultObjectiveListItem::set_hideConditionText
// Il2CppName: set_hideConditionText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultObjectiveListItem::*)(bool)>(&GlobalNamespace::ResultObjectiveListItem::set_hideConditionText)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultObjectiveListItem*), "set_hideConditionText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultObjectiveListItem::set_valueText
// Il2CppName: set_valueText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultObjectiveListItem::*)(::Il2CppString*)>(&GlobalNamespace::ResultObjectiveListItem::set_valueText)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultObjectiveListItem*), "set_valueText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultObjectiveListItem::set_hideValueText
// Il2CppName: set_hideValueText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ResultObjectiveListItem::*)(bool)>(&GlobalNamespace::ResultObjectiveListItem::set_hideValueText)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ResultObjectiveListItem*), "set_hideValueText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ResultObjectiveListItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
