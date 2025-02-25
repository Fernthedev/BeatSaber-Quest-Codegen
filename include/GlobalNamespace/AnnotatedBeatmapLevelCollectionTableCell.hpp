// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: AnnotatedBeatmapLevelCollectionTableCell
  // [TokenAttribute] Offset: FFFFFFFF
  class AnnotatedBeatmapLevelCollectionTableCell : public HMUI::TableCell {
    public:
    // Nested type: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::$RefreshAvailabilityAsync$d__18
    struct $RefreshAvailabilityAsync$d__18;
    // private TMPro.TextMeshProUGUI _infoText
    // Size: 0x8
    // Offset: 0x50
    TMPro::TextMeshProUGUI* infoText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _coverImage
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::UI::Image* coverImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private HMUI.ImageView _selectionImage
    // Size: 0x8
    // Offset: 0x60
    HMUI::ImageView* selectionImage;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private UnityEngine.GameObject[] _newPromoRibbonObjects
    // Size: 0x8
    // Offset: 0x68
    ::Array<UnityEngine::GameObject*>* newPromoRibbonObjects;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GameObject*>*) == 0x8);
    // [SpaceAttribute] Offset: 0xE43E7C
    // private UnityEngine.Color _selectedColor0
    // Size: 0x10
    // Offset: 0x70
    UnityEngine::Color selectedColor0;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _selectedColor1
    // Size: 0x10
    // Offset: 0x80
    UnityEngine::Color selectedColor1;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _highlightedColor0
    // Size: 0x10
    // Offset: 0x90
    UnityEngine::Color highlightedColor0;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _highlightedColor1
    // Size: 0x10
    // Offset: 0xA0
    UnityEngine::Color highlightedColor1;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private IAnnotatedBeatmapLevelCollection _annotatedBeatmapLevelCollection
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAnnotatedBeatmapLevelCollection*) == 0x8);
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0xB8
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // Creating value type constructor for type: AnnotatedBeatmapLevelCollectionTableCell
    AnnotatedBeatmapLevelCollectionTableCell(TMPro::TextMeshProUGUI* infoText_ = {}, UnityEngine::UI::Image* coverImage_ = {}, HMUI::ImageView* selectionImage_ = {}, ::Array<UnityEngine::GameObject*>* newPromoRibbonObjects_ = {}, UnityEngine::Color selectedColor0_ = {}, UnityEngine::Color selectedColor1_ = {}, UnityEngine::Color highlightedColor0_ = {}, UnityEngine::Color highlightedColor1_ = {}, GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection_ = {}, System::Threading::CancellationTokenSource* cancellationTokenSource_ = {}) noexcept : infoText{infoText_}, coverImage{coverImage_}, selectionImage{selectionImage_}, newPromoRibbonObjects{newPromoRibbonObjects_}, selectedColor0{selectedColor0_}, selectedColor1{selectedColor1_}, highlightedColor0{highlightedColor0_}, highlightedColor1{highlightedColor1_}, annotatedBeatmapLevelCollection{annotatedBeatmapLevelCollection_}, cancellationTokenSource{cancellationTokenSource_} {}
    // Get instance field reference: private TMPro.TextMeshProUGUI _infoText
    TMPro::TextMeshProUGUI*& dyn__infoText();
    // Get instance field reference: private UnityEngine.UI.Image _coverImage
    UnityEngine::UI::Image*& dyn__coverImage();
    // Get instance field reference: private HMUI.ImageView _selectionImage
    HMUI::ImageView*& dyn__selectionImage();
    // Get instance field reference: private UnityEngine.GameObject[] _newPromoRibbonObjects
    ::Array<UnityEngine::GameObject*>*& dyn__newPromoRibbonObjects();
    // Get instance field reference: private UnityEngine.Color _selectedColor0
    UnityEngine::Color& dyn__selectedColor0();
    // Get instance field reference: private UnityEngine.Color _selectedColor1
    UnityEngine::Color& dyn__selectedColor1();
    // Get instance field reference: private UnityEngine.Color _highlightedColor0
    UnityEngine::Color& dyn__highlightedColor0();
    // Get instance field reference: private UnityEngine.Color _highlightedColor1
    UnityEngine::Color& dyn__highlightedColor1();
    // Get instance field reference: private IAnnotatedBeatmapLevelCollection _annotatedBeatmapLevelCollection
    GlobalNamespace::IAnnotatedBeatmapLevelCollection*& dyn__annotatedBeatmapLevelCollection();
    // Get instance field reference: private System.Threading.CancellationTokenSource _cancellationTokenSource
    System::Threading::CancellationTokenSource*& dyn__cancellationTokenSource();
    // public System.Void set_showNewRibbon(System.Boolean value)
    // Offset: 0x1172E74
    void set_showNewRibbon(bool value);
    // public System.Void SetData(IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection)
    // Offset: 0x1172EF0
    void SetData(GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection);
    // private System.Void RefreshVisuals()
    // Offset: 0x1173220
    void RefreshVisuals();
    // private System.String GetInfoText(System.String name, System.Int32 songs, System.Int32 purchased)
    // Offset: 0x1173134
    ::Il2CppString* GetInfoText(::Il2CppString* name, int songs, int purchased);
    // public System.Void RefreshAvailabilityAsync(AdditionalContentModel contentModel)
    // Offset: 0x1173348
    void RefreshAvailabilityAsync(GlobalNamespace::AdditionalContentModel* contentModel);
    // public System.Void CancelAsyncOperations()
    // Offset: 0x1173334
    void CancelAsyncOperations();
    // public System.Void .ctor()
    // Offset: 0x1173410
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnnotatedBeatmapLevelCollectionTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnnotatedBeatmapLevelCollectionTableCell*, creationType>()));
    }
    // protected override System.Void SelectionDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x117321C
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::SelectionDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    void SelectionDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x117331C
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::HighlightDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    void HighlightDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void WasPreparedForReuse()
    // Offset: 0x1173320
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::WasPreparedForReuse()
    void WasPreparedForReuse();
  }; // AnnotatedBeatmapLevelCollectionTableCell
  #pragma pack(pop)
  static check_size<sizeof(AnnotatedBeatmapLevelCollectionTableCell), 184 + sizeof(System::Threading::CancellationTokenSource*)> __GlobalNamespace_AnnotatedBeatmapLevelCollectionTableCellSizeCheck;
  static_assert(sizeof(AnnotatedBeatmapLevelCollectionTableCell) == 0xC0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell*, "", "AnnotatedBeatmapLevelCollectionTableCell");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::set_showNewRibbon
// Il2CppName: set_showNewRibbon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::*)(bool)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::set_showNewRibbon)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell*), "set_showNewRibbon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::*)(GlobalNamespace::IAnnotatedBeatmapLevelCollection*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::SetData)> {
  static const MethodInfo* get() {
    static auto* annotatedBeatmapLevelCollection = &::il2cpp_utils::GetClassFromName("", "IAnnotatedBeatmapLevelCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{annotatedBeatmapLevelCollection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::RefreshVisuals
// Il2CppName: RefreshVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::RefreshVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell*), "RefreshVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::GetInfoText
// Il2CppName: GetInfoText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::*)(::Il2CppString*, int, int)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::GetInfoText)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* songs = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* purchased = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell*), "GetInfoText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, songs, purchased});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::RefreshAvailabilityAsync
// Il2CppName: RefreshAvailabilityAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::*)(GlobalNamespace::AdditionalContentModel*)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::RefreshAvailabilityAsync)> {
  static const MethodInfo* get() {
    static auto* contentModel = &::il2cpp_utils::GetClassFromName("", "AdditionalContentModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell*), "RefreshAvailabilityAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{contentModel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::CancelAsyncOperations
// Il2CppName: CancelAsyncOperations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::CancelAsyncOperations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell*), "CancelAsyncOperations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::SelectionDidChange
// Il2CppName: SelectionDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::*)(HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::SelectionDidChange)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell*), "SelectionDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::HighlightDidChange
// Il2CppName: HighlightDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::*)(HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::HighlightDidChange)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell*), "HighlightDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::WasPreparedForReuse
// Il2CppName: WasPreparedForReuse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::*)()>(&GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::WasPreparedForReuse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell*), "WasPreparedForReuse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
