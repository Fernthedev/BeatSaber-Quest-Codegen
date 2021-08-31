// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.Interactable
#include "HMUI/Interactable.hpp"
// Including type: UnityEngine.EventSystems.IPointerDownHandler
#include "UnityEngine/EventSystems/IPointerDownHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerUpHandler
#include "UnityEngine/EventSystems/IPointerUpHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: AlphabetScrollInfo
#include "GlobalNamespace/AlphabetScrollInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableView
  class TableView;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x6D
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.AlphabetScrollbar
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: E158F0
  class AlphabetScrollbar : public HMUI::Interactable/*, public UnityEngine::EventSystems::IPointerDownHandler, public UnityEngine::EventSystems::IPointerUpHandler, public UnityEngine::EventSystems::IPointerEnterHandler, public UnityEngine::EventSystems::IPointerExitHandler*/ {
    public:
    // Writing base type padding for base size: 0x19 to desired offset: 0x20
    char ___base_padding[0x7] = {};
    // Nested type: HMUI::AlphabetScrollbar::$PointerMoveInsideCoroutine$d__18
    class $PointerMoveInsideCoroutine$d__18;
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x20
    HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(HMUI::TableView*) == 0x8);
    // [SpaceAttribute] Offset: 0xE16474
    // private System.Single _characterHeight
    // Size: 0x4
    // Offset: 0x28
    float characterHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _normalColor
    // Size: 0x10
    // Offset: 0x2C
    UnityEngine::Color normalColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Padding between fields: normalColor and: textPrefab
    char __padding2[0x4] = {};
    // [SpaceAttribute] Offset: 0xE164BC
    // private TMPro.TextMeshProUGUI _textPrefab
    // Size: 0x8
    // Offset: 0x40
    TMPro::TextMeshProUGUI* textPrefab;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI[] _prealocatedTexts
    // Size: 0x8
    // Offset: 0x48
    ::Array<TMPro::TextMeshProUGUI*>* prealocatedTexts;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TextMeshProUGUI*>*) == 0x8);
    // private UnityEngine.UI.Image _highlightImage
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::UI::Image* highlightImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private AlphabetScrollInfo/Data[] _characterScrollData
    // Size: 0x8
    // Offset: 0x58
    ::Array<GlobalNamespace::AlphabetScrollInfo::Data*>* characterScrollData;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::AlphabetScrollInfo::Data*>*) == 0x8);
    // private System.Collections.Generic.List`1<TMPro.TextMeshProUGUI> _texts
    // Size: 0x8
    // Offset: 0x60
    System::Collections::Generic::List_1<TMPro::TextMeshProUGUI*>* texts;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TextMeshProUGUI*>*) == 0x8);
    // private System.Int32 _highlightedCharactedIndex
    // Size: 0x4
    // Offset: 0x68
    int highlightedCharactedIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _pointerIsDown
    // Size: 0x1
    // Offset: 0x6C
    bool pointerIsDown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AlphabetScrollbar
    AlphabetScrollbar(HMUI::TableView* tableView_ = {}, float characterHeight_ = {}, UnityEngine::Color normalColor_ = {}, TMPro::TextMeshProUGUI* textPrefab_ = {}, ::Array<TMPro::TextMeshProUGUI*>* prealocatedTexts_ = {}, UnityEngine::UI::Image* highlightImage_ = {}, ::Array<GlobalNamespace::AlphabetScrollInfo::Data*>* characterScrollData_ = {}, System::Collections::Generic::List_1<TMPro::TextMeshProUGUI*>* texts_ = {}, int highlightedCharactedIndex_ = {}, bool pointerIsDown_ = {}) noexcept : tableView{tableView_}, characterHeight{characterHeight_}, normalColor{normalColor_}, textPrefab{textPrefab_}, prealocatedTexts{prealocatedTexts_}, highlightImage{highlightImage_}, characterScrollData{characterScrollData_}, texts{texts_}, highlightedCharactedIndex{highlightedCharactedIndex_}, pointerIsDown{pointerIsDown_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerDownHandler
    operator UnityEngine::EventSystems::IPointerDownHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerDownHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerUpHandler
    operator UnityEngine::EventSystems::IPointerUpHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerUpHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerEnterHandler
    operator UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerExitHandler
    operator UnityEngine::EventSystems::IPointerExitHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // Get instance field: private HMUI.TableView _tableView
    HMUI::TableView* _get__tableView();
    // Set instance field: private HMUI.TableView _tableView
    void _set__tableView(HMUI::TableView* value);
    // Get instance field: private System.Single _characterHeight
    float _get__characterHeight();
    // Set instance field: private System.Single _characterHeight
    void _set__characterHeight(float value);
    // Get instance field: private UnityEngine.Color _normalColor
    UnityEngine::Color _get__normalColor();
    // Set instance field: private UnityEngine.Color _normalColor
    void _set__normalColor(UnityEngine::Color value);
    // Get instance field: private TMPro.TextMeshProUGUI _textPrefab
    TMPro::TextMeshProUGUI* _get__textPrefab();
    // Set instance field: private TMPro.TextMeshProUGUI _textPrefab
    void _set__textPrefab(TMPro::TextMeshProUGUI* value);
    // Get instance field: private TMPro.TextMeshProUGUI[] _prealocatedTexts
    ::Array<TMPro::TextMeshProUGUI*>* _get__prealocatedTexts();
    // Set instance field: private TMPro.TextMeshProUGUI[] _prealocatedTexts
    void _set__prealocatedTexts(::Array<TMPro::TextMeshProUGUI*>* value);
    // Get instance field: private UnityEngine.UI.Image _highlightImage
    UnityEngine::UI::Image* _get__highlightImage();
    // Set instance field: private UnityEngine.UI.Image _highlightImage
    void _set__highlightImage(UnityEngine::UI::Image* value);
    // Get instance field: private AlphabetScrollInfo/Data[] _characterScrollData
    ::Array<GlobalNamespace::AlphabetScrollInfo::Data*>* _get__characterScrollData();
    // Set instance field: private AlphabetScrollInfo/Data[] _characterScrollData
    void _set__characterScrollData(::Array<GlobalNamespace::AlphabetScrollInfo::Data*>* value);
    // Get instance field: private System.Collections.Generic.List`1<TMPro.TextMeshProUGUI> _texts
    System::Collections::Generic::List_1<TMPro::TextMeshProUGUI*>* _get__texts();
    // Set instance field: private System.Collections.Generic.List`1<TMPro.TextMeshProUGUI> _texts
    void _set__texts(System::Collections::Generic::List_1<TMPro::TextMeshProUGUI*>* value);
    // Get instance field: private System.Int32 _highlightedCharactedIndex
    int _get__highlightedCharactedIndex();
    // Set instance field: private System.Int32 _highlightedCharactedIndex
    void _set__highlightedCharactedIndex(int value);
    // Get instance field: private System.Boolean _pointerIsDown
    bool _get__pointerIsDown();
    // Set instance field: private System.Boolean _pointerIsDown
    void _set__pointerIsDown(bool value);
    // protected System.Void Awake()
    // Offset: 0x136424C
    void Awake();
    // public System.Void SetData(AlphabetScrollInfo/Data[] characterScrollData)
    // Offset: 0x136426C
    void SetData(::Array<GlobalNamespace::AlphabetScrollInfo::Data*>* characterScrollData);
    // public System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1364854
    void OnPointerDown(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1364A48
    void OnPointerUp(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1364A50
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1364AF8
    void OnPointerExit(UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Void PrepareTransforms()
    // Offset: 0x13644DC
    void PrepareTransforms();
    // private System.Void RefreshHighlight()
    // Offset: 0x1364B28
    void RefreshHighlight();
    // private System.Collections.IEnumerator PointerMoveInsideCoroutine(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1364A7C
    System::Collections::IEnumerator* PointerMoveInsideCoroutine(UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Int32 GetPointerCharacterIndex(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x13648C4
    int GetPointerCharacterIndex(UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Void InitText(TMPro.TextMeshProUGUI text, System.Char character)
    // Offset: 0x13643DC
    void InitText(TMPro::TextMeshProUGUI* text, ::Il2CppChar character);
    // public System.Void .ctor()
    // Offset: 0x1364C44
    // Implemented from: HMUI.Interactable
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AlphabetScrollbar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::AlphabetScrollbar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AlphabetScrollbar*, creationType>()));
    }
  }; // HMUI.AlphabetScrollbar
  #pragma pack(pop)
  static check_size<sizeof(AlphabetScrollbar), 108 + sizeof(bool)> __HMUI_AlphabetScrollbarSizeCheck;
  static_assert(sizeof(AlphabetScrollbar) == 0x6D);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::AlphabetScrollbar*, "HMUI", "AlphabetScrollbar");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)()>(&HMUI::AlphabetScrollbar::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)(::Array<GlobalNamespace::AlphabetScrollInfo::Data*>*)>(&HMUI::AlphabetScrollbar::SetData)> {
  static const MethodInfo* get() {
    static auto* characterScrollData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "AlphabetScrollInfo/Data"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{characterScrollData});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::OnPointerDown
// Il2CppName: OnPointerDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::AlphabetScrollbar::OnPointerDown)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "OnPointerDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::OnPointerUp
// Il2CppName: OnPointerUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::AlphabetScrollbar::OnPointerUp)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "OnPointerUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::OnPointerEnter
// Il2CppName: OnPointerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::AlphabetScrollbar::OnPointerEnter)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "OnPointerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::OnPointerExit
// Il2CppName: OnPointerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::AlphabetScrollbar::OnPointerExit)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "OnPointerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::PrepareTransforms
// Il2CppName: PrepareTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)()>(&HMUI::AlphabetScrollbar::PrepareTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "PrepareTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::RefreshHighlight
// Il2CppName: RefreshHighlight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)()>(&HMUI::AlphabetScrollbar::RefreshHighlight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "RefreshHighlight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::PointerMoveInsideCoroutine
// Il2CppName: PointerMoveInsideCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (HMUI::AlphabetScrollbar::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::AlphabetScrollbar::PointerMoveInsideCoroutine)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "PointerMoveInsideCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::GetPointerCharacterIndex
// Il2CppName: GetPointerCharacterIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::AlphabetScrollbar::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::AlphabetScrollbar::GetPointerCharacterIndex)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "GetPointerCharacterIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::InitText
// Il2CppName: InitText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)(TMPro::TextMeshProUGUI*, ::Il2CppChar)>(&HMUI::AlphabetScrollbar::InitText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("TMPro", "TextMeshProUGUI")->byval_arg;
    static auto* character = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "InitText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, character});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
