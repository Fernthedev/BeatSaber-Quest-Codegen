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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
  // Forward declaring type: Button
  class Button;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: TextButton
  // [TokenAttribute] Offset: FFFFFFFF
  class TextButton : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Text _text
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Text* text;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Text*) == 0x8);
    // private UnityEngine.UI.Button _button
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Button* button;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // Creating value type constructor for type: TextButton
    TextButton(UnityEngine::UI::Text* text_ = {}, UnityEngine::UI::Button* button_ = {}) noexcept : text{text_}, button{button_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.UI.Text _text
    UnityEngine::UI::Text* _get__text();
    // Set instance field: private UnityEngine.UI.Text _text
    void _set__text(UnityEngine::UI::Text* value);
    // Get instance field: private UnityEngine.UI.Button _button
    UnityEngine::UI::Button* _get__button();
    // Set instance field: private UnityEngine.UI.Button _button
    void _set__button(UnityEngine::UI::Button* value);
    // public UnityEngine.UI.Text get_text()
    // Offset: 0x1095238
    UnityEngine::UI::Text* get_text();
    // public UnityEngine.UI.Button get_button()
    // Offset: 0x1095240
    UnityEngine::UI::Button* get_button();
    // public System.Void .ctor()
    // Offset: 0x1095248
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TextButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextButton*, creationType>()));
    }
  }; // TextButton
  #pragma pack(pop)
  static check_size<sizeof(TextButton), 32 + sizeof(UnityEngine::UI::Button*)> __GlobalNamespace_TextButtonSizeCheck;
  static_assert(sizeof(TextButton) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TextButton*, "", "TextButton");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TextButton::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Text* (GlobalNamespace::TextButton::*)()>(&GlobalNamespace::TextButton::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TextButton*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TextButton::get_button
// Il2CppName: get_button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Button* (GlobalNamespace::TextButton::*)()>(&GlobalNamespace::TextButton::get_button)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TextButton*), "get_button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TextButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
