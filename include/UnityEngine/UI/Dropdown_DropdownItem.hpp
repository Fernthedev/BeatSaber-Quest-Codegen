// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Dropdown
#include "UnityEngine/UI/Dropdown.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.ICancelHandler
#include "UnityEngine/EventSystems/ICancelHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
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
  // Forward declaring type: Image
  class Image;
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Dropdown/UnityEngine.UI.DropdownItem
  // [TokenAttribute] Offset: FFFFFFFF
  class Dropdown::DropdownItem : public UnityEngine::MonoBehaviour/*, public UnityEngine::EventSystems::ICancelHandler, public UnityEngine::EventSystems::IPointerEnterHandler*/ {
    public:
    // private UnityEngine.UI.Text m_Text
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Text* m_Text;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Text*) == 0x8);
    // private UnityEngine.UI.Image m_Image
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Image* m_Image;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.RectTransform m_RectTransform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::RectTransform* m_RectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.UI.Toggle m_Toggle
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::UI::Toggle* m_Toggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // Creating value type constructor for type: DropdownItem
    DropdownItem(UnityEngine::UI::Text* m_Text_ = {}, UnityEngine::UI::Image* m_Image_ = {}, UnityEngine::RectTransform* m_RectTransform_ = {}, UnityEngine::UI::Toggle* m_Toggle_ = {}) noexcept : m_Text{m_Text_}, m_Image{m_Image_}, m_RectTransform{m_RectTransform_}, m_Toggle{m_Toggle_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::ICancelHandler
    operator UnityEngine::EventSystems::ICancelHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::ICancelHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerEnterHandler
    operator UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.Text m_Text
    UnityEngine::UI::Text*& dyn_m_Text();
    // Get instance field reference: private UnityEngine.UI.Image m_Image
    UnityEngine::UI::Image*& dyn_m_Image();
    // Get instance field reference: private UnityEngine.RectTransform m_RectTransform
    UnityEngine::RectTransform*& dyn_m_RectTransform();
    // Get instance field reference: private UnityEngine.UI.Toggle m_Toggle
    UnityEngine::UI::Toggle*& dyn_m_Toggle();
    // public UnityEngine.UI.Text get_text()
    // Offset: 0x193D160
    UnityEngine::UI::Text* get_text();
    // public System.Void set_text(UnityEngine.UI.Text value)
    // Offset: 0x193D168
    void set_text(UnityEngine::UI::Text* value);
    // public UnityEngine.UI.Image get_image()
    // Offset: 0x193D170
    UnityEngine::UI::Image* get_image();
    // public System.Void set_image(UnityEngine.UI.Image value)
    // Offset: 0x193D178
    void set_image(UnityEngine::UI::Image* value);
    // public UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x193D180
    UnityEngine::RectTransform* get_rectTransform();
    // public System.Void set_rectTransform(UnityEngine.RectTransform value)
    // Offset: 0x193D188
    void set_rectTransform(UnityEngine::RectTransform* value);
    // public UnityEngine.UI.Toggle get_toggle()
    // Offset: 0x193D190
    UnityEngine::UI::Toggle* get_toggle();
    // public System.Void set_toggle(UnityEngine.UI.Toggle value)
    // Offset: 0x193D198
    void set_toggle(UnityEngine::UI::Toggle* value);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x193D1A0
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnCancel(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x193D22C
    void OnCancel(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x193D2D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::DropdownItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Dropdown::DropdownItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::DropdownItem*, creationType>()));
    }
  }; // UnityEngine.UI.Dropdown/UnityEngine.UI.DropdownItem
  #pragma pack(pop)
  static check_size<sizeof(Dropdown::DropdownItem), 48 + sizeof(UnityEngine::UI::Toggle*)> __UnityEngine_UI_Dropdown_DropdownItemSizeCheck;
  static_assert(sizeof(Dropdown::DropdownItem) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Dropdown::DropdownItem*, "UnityEngine.UI", "Dropdown/DropdownItem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::DropdownItem::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Text* (UnityEngine::UI::Dropdown::DropdownItem::*)()>(&UnityEngine::UI::Dropdown::DropdownItem::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::DropdownItem*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::DropdownItem::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Dropdown::DropdownItem::*)(UnityEngine::UI::Text*)>(&UnityEngine::UI::Dropdown::DropdownItem::set_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Text")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::DropdownItem*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::DropdownItem::get_image
// Il2CppName: get_image
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Image* (UnityEngine::UI::Dropdown::DropdownItem::*)()>(&UnityEngine::UI::Dropdown::DropdownItem::get_image)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::DropdownItem*), "get_image", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::DropdownItem::set_image
// Il2CppName: set_image
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Dropdown::DropdownItem::*)(UnityEngine::UI::Image*)>(&UnityEngine::UI::Dropdown::DropdownItem::set_image)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Image")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::DropdownItem*), "set_image", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::DropdownItem::get_rectTransform
// Il2CppName: get_rectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RectTransform* (UnityEngine::UI::Dropdown::DropdownItem::*)()>(&UnityEngine::UI::Dropdown::DropdownItem::get_rectTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::DropdownItem*), "get_rectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::DropdownItem::set_rectTransform
// Il2CppName: set_rectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Dropdown::DropdownItem::*)(UnityEngine::RectTransform*)>(&UnityEngine::UI::Dropdown::DropdownItem::set_rectTransform)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::DropdownItem*), "set_rectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::DropdownItem::get_toggle
// Il2CppName: get_toggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Toggle* (UnityEngine::UI::Dropdown::DropdownItem::*)()>(&UnityEngine::UI::Dropdown::DropdownItem::get_toggle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::DropdownItem*), "get_toggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::DropdownItem::set_toggle
// Il2CppName: set_toggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Dropdown::DropdownItem::*)(UnityEngine::UI::Toggle*)>(&UnityEngine::UI::Dropdown::DropdownItem::set_toggle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::DropdownItem*), "set_toggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::DropdownItem::OnPointerEnter
// Il2CppName: OnPointerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Dropdown::DropdownItem::*)(UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::UI::Dropdown::DropdownItem::OnPointerEnter)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::DropdownItem*), "OnPointerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::DropdownItem::OnCancel
// Il2CppName: OnCancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Dropdown::DropdownItem::*)(UnityEngine::EventSystems::BaseEventData*)>(&UnityEngine::UI::Dropdown::DropdownItem::OnCancel)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Dropdown::DropdownItem*), "OnCancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::DropdownItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
