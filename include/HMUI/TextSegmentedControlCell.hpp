// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.SegmentedControlCell
#include "HMUI/SegmentedControlCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.TextSegmentedControlCell
  // [TokenAttribute] Offset: FFFFFFFF
  class TextSegmentedControlCell : public HMUI::SegmentedControlCell {
    public:
    // protected TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x48
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.GameObject _backgroundGameObject
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::GameObject* backgroundGameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // Creating value type constructor for type: TextSegmentedControlCell
    TextSegmentedControlCell(TMPro::TextMeshProUGUI* text_ = {}, UnityEngine::GameObject* backgroundGameObject_ = {}) noexcept : text{text_}, backgroundGameObject{backgroundGameObject_} {}
    // Get instance field: protected TMPro.TextMeshProUGUI _text
    TMPro::TextMeshProUGUI* _get__text();
    // Set instance field: protected TMPro.TextMeshProUGUI _text
    void _set__text(TMPro::TextMeshProUGUI* value);
    // Get instance field: private UnityEngine.GameObject _backgroundGameObject
    UnityEngine::GameObject* _get__backgroundGameObject();
    // Set instance field: private UnityEngine.GameObject _backgroundGameObject
    void _set__backgroundGameObject(UnityEngine::GameObject* value);
    // public System.String get_text()
    // Offset: 0x13063D8
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x1306364
    void set_text(::Il2CppString* value);
    // public System.Single get_fontSize()
    // Offset: 0x13063F4
    float get_fontSize();
    // public System.Void set_fontSize(System.Single value)
    // Offset: 0x1306348
    void set_fontSize(float value);
    // public System.Void set_hideBackgroundImage(System.Boolean value)
    // Offset: 0x1306380
    void set_hideBackgroundImage(bool value);
    // public System.Single get_preferredWidth()
    // Offset: 0x13063A4
    float get_preferredWidth();
    // public System.Void .ctor()
    // Offset: 0x1306410
    // Implemented from: HMUI.SegmentedControlCell
    // Base method: System.Void SegmentedControlCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextSegmentedControlCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::TextSegmentedControlCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextSegmentedControlCell*, creationType>()));
    }
  }; // HMUI.TextSegmentedControlCell
  #pragma pack(pop)
  static check_size<sizeof(TextSegmentedControlCell), 80 + sizeof(UnityEngine::GameObject*)> __HMUI_TextSegmentedControlCellSizeCheck;
  static_assert(sizeof(TextSegmentedControlCell) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::TextSegmentedControlCell*, "HMUI", "TextSegmentedControlCell");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::TextSegmentedControlCell::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (HMUI::TextSegmentedControlCell::*)()>(&HMUI::TextSegmentedControlCell::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSegmentedControlCell*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSegmentedControlCell::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSegmentedControlCell::*)(::Il2CppString*)>(&HMUI::TextSegmentedControlCell::set_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSegmentedControlCell*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::TextSegmentedControlCell::get_fontSize
// Il2CppName: get_fontSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::TextSegmentedControlCell::*)()>(&HMUI::TextSegmentedControlCell::get_fontSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSegmentedControlCell*), "get_fontSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSegmentedControlCell::set_fontSize
// Il2CppName: set_fontSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSegmentedControlCell::*)(float)>(&HMUI::TextSegmentedControlCell::set_fontSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSegmentedControlCell*), "set_fontSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::TextSegmentedControlCell::set_hideBackgroundImage
// Il2CppName: set_hideBackgroundImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSegmentedControlCell::*)(bool)>(&HMUI::TextSegmentedControlCell::set_hideBackgroundImage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSegmentedControlCell*), "set_hideBackgroundImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::TextSegmentedControlCell::get_preferredWidth
// Il2CppName: get_preferredWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::TextSegmentedControlCell::*)()>(&HMUI::TextSegmentedControlCell::get_preferredWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSegmentedControlCell*), "get_preferredWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSegmentedControlCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
