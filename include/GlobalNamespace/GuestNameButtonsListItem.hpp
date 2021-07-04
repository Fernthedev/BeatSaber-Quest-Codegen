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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: GuestNameButtonsListItem
  class GuestNameButtonsListItem : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _nameText
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* nameText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button _button
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Button* button;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private System.Action _buttonPressed
    // Size: 0x8
    // Offset: 0x28
    System::Action* buttonPressed;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: GuestNameButtonsListItem
    GuestNameButtonsListItem(TMPro::TextMeshProUGUI* nameText_ = {}, UnityEngine::UI::Button* button_ = {}, System::Action* buttonPressed_ = {}) noexcept : nameText{nameText_}, button{button_}, buttonPressed{buttonPressed_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_nameText(System.String value)
    // Offset: 0x108FB1C
    void set_nameText(::Il2CppString* value);
    // public System.Void set_buttonPressed(System.Action value)
    // Offset: 0x108FB38
    void set_buttonPressed(System::Action* value);
    // private System.Void Awake()
    // Offset: 0x108FB40
    void Awake();
    // private System.Void <Awake>b__7_0()
    // Offset: 0x108FBDC
    void $Awake$b__7_0();
    // public System.Void .ctor()
    // Offset: 0x108FBD4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GuestNameButtonsListItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GuestNameButtonsListItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GuestNameButtonsListItem*, creationType>()));
    }
  }; // GuestNameButtonsListItem
  #pragma pack(pop)
  static check_size<sizeof(GuestNameButtonsListItem), 40 + sizeof(System::Action*)> __GlobalNamespace_GuestNameButtonsListItemSizeCheck;
  static_assert(sizeof(GuestNameButtonsListItem) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GuestNameButtonsListItem*, "", "GuestNameButtonsListItem");
// Writing includes for template specializations
#include "System/Action.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GuestNameButtonsListItem::set_nameText
// Il2CppName: set_nameText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GuestNameButtonsListItem::*)(::Il2CppString*)>(&GlobalNamespace::GuestNameButtonsListItem::set_nameText)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GuestNameButtonsListItem*), "set_nameText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GuestNameButtonsListItem::set_buttonPressed
// Il2CppName: set_buttonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GuestNameButtonsListItem::*)(System::Action*)>(&GlobalNamespace::GuestNameButtonsListItem::set_buttonPressed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GuestNameButtonsListItem*), "set_buttonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GuestNameButtonsListItem::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GuestNameButtonsListItem::*)()>(&GlobalNamespace::GuestNameButtonsListItem::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GuestNameButtonsListItem*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GuestNameButtonsListItem::$Awake$b__7_0
// Il2CppName: <Awake>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GuestNameButtonsListItem::*)()>(&GlobalNamespace::GuestNameButtonsListItem::$Awake$b__7_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GuestNameButtonsListItem*), "<Awake>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GuestNameButtonsListItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
