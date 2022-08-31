// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/HMUI.IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: AlphabetScrollbar
  class AlphabetScrollbar;
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelListTableCell
  class LevelListTableCell;
  // Forward declaring type: LevelPackHeaderTableCell
  class LevelPackHeaderTableCell;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LevelCollectionTableView
  class LevelCollectionTableView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LevelCollectionTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCollectionTableView*, "", "LevelCollectionTableView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: LevelCollectionTableView
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelCollectionTableView : public ::UnityEngine::MonoBehaviour/*, public ::HMUI::TableView::IDataSource*/ {
    public:
    public:
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x18
    ::HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(::HMUI::TableView*) == 0x8);
    // private HMUI.AlphabetScrollbar _alphabetScrollbar
    // Size: 0x8
    // Offset: 0x20
    ::HMUI::AlphabetScrollbar* alphabetScrollbar;
    // Field size check
    static_assert(sizeof(::HMUI::AlphabetScrollbar*) == 0x8);
    // private LevelListTableCell _levelCellPrefab
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::LevelListTableCell* levelCellPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelListTableCell*) == 0x8);
    // private System.String _levelCellsReuseIdentifier
    // Size: 0x8
    // Offset: 0x30
    ::StringW levelCellsReuseIdentifier;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private LevelPackHeaderTableCell _packCellPrefab
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::LevelPackHeaderTableCell* packCellPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelPackHeaderTableCell*) == 0x8);
    // private System.String _packCellsReuseIdentifier
    // Size: 0x8
    // Offset: 0x40
    ::StringW packCellsReuseIdentifier;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Single _cellHeight
    // Size: 0x4
    // Offset: 0x48
    float cellHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _showAlphabetScrollbarLevelCountThreshold
    // Size: 0x4
    // Offset: 0x4C
    int showAlphabetScrollbarLevelCountThreshold;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [InjectAttribute] Offset: 0x10F56E0
    // private readonly AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AdditionalContentModel*) == 0x8);
    // private System.Action`2<LevelCollectionTableView,IPreviewBeatmapLevel> didSelectLevelEvent
    // Size: 0x8
    // Offset: 0x58
    ::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>* didSelectLevelEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>*) == 0x8);
    // private System.Action`1<LevelCollectionTableView> didSelectHeaderEvent
    // Size: 0x8
    // Offset: 0x60
    ::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>* didSelectHeaderEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>*) == 0x8);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x68
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInitialized and: previewBeatmapLevels
    char __padding11[0x7] = {};
    // private System.Collections.Generic.IReadOnlyList`1<IPreviewBeatmapLevel> _previewBeatmapLevels
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* previewBeatmapLevels;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*) == 0x8);
    // private UnityEngine.Sprite _headerSprite
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::Sprite* headerSprite;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private System.String _headerText
    // Size: 0x8
    // Offset: 0x80
    ::StringW headerText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _showLevelPackHeader
    // Size: 0x1
    // Offset: 0x88
    bool showLevelPackHeader;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showLevelPackHeader and: favoriteLevelIds
    char __padding15[0x7] = {};
    // private System.Collections.Generic.HashSet`1<System.String> _favoriteLevelIds
    // Size: 0x8
    // Offset: 0x90
    ::System::Collections::Generic::HashSet_1<::StringW>* favoriteLevelIds;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::StringW>*) == 0x8);
    // private System.Int32 _selectedRow
    // Size: 0x4
    // Offset: 0x98
    int selectedRow;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: selectedRow and: selectedPreviewBeatmapLevel
    char __padding17[0x4] = {};
    // private IPreviewBeatmapLevel _selectedPreviewBeatmapLevel
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::IPreviewBeatmapLevel* selectedPreviewBeatmapLevel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::HMUI::TableView::IDataSource
    operator ::HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<::HMUI::TableView::IDataSource*>(this);
    }
    // Creating interface conversion operator: i_IDataSource
    inline ::HMUI::TableView::IDataSource* i_IDataSource() noexcept {
      return reinterpret_cast<::HMUI::TableView::IDataSource*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.TableView _tableView
    [[deprecated("Use field access instead!")]] ::HMUI::TableView*& dyn__tableView();
    // Get instance field reference: private HMUI.AlphabetScrollbar _alphabetScrollbar
    [[deprecated("Use field access instead!")]] ::HMUI::AlphabetScrollbar*& dyn__alphabetScrollbar();
    // Get instance field reference: private LevelListTableCell _levelCellPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LevelListTableCell*& dyn__levelCellPrefab();
    // Get instance field reference: private System.String _levelCellsReuseIdentifier
    [[deprecated("Use field access instead!")]] ::StringW& dyn__levelCellsReuseIdentifier();
    // Get instance field reference: private LevelPackHeaderTableCell _packCellPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LevelPackHeaderTableCell*& dyn__packCellPrefab();
    // Get instance field reference: private System.String _packCellsReuseIdentifier
    [[deprecated("Use field access instead!")]] ::StringW& dyn__packCellsReuseIdentifier();
    // Get instance field reference: private System.Single _cellHeight
    [[deprecated("Use field access instead!")]] float& dyn__cellHeight();
    // Get instance field reference: private System.Int32 _showAlphabetScrollbarLevelCountThreshold
    [[deprecated("Use field access instead!")]] int& dyn__showAlphabetScrollbarLevelCountThreshold();
    // Get instance field reference: private readonly AdditionalContentModel _additionalContentModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AdditionalContentModel*& dyn__additionalContentModel();
    // Get instance field reference: private System.Action`2<LevelCollectionTableView,IPreviewBeatmapLevel> didSelectLevelEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>*& dyn_didSelectLevelEvent();
    // Get instance field reference: private System.Action`1<LevelCollectionTableView> didSelectHeaderEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>*& dyn_didSelectHeaderEvent();
    // Get instance field reference: private System.Boolean _isInitialized
    [[deprecated("Use field access instead!")]] bool& dyn__isInitialized();
    // Get instance field reference: private System.Collections.Generic.IReadOnlyList`1<IPreviewBeatmapLevel> _previewBeatmapLevels
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*& dyn__previewBeatmapLevels();
    // Get instance field reference: private UnityEngine.Sprite _headerSprite
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__headerSprite();
    // Get instance field reference: private System.String _headerText
    [[deprecated("Use field access instead!")]] ::StringW& dyn__headerText();
    // Get instance field reference: private System.Boolean _showLevelPackHeader
    [[deprecated("Use field access instead!")]] bool& dyn__showLevelPackHeader();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.String> _favoriteLevelIds
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::StringW>*& dyn__favoriteLevelIds();
    // Get instance field reference: private System.Int32 _selectedRow
    [[deprecated("Use field access instead!")]] int& dyn__selectedRow();
    // Get instance field reference: private IPreviewBeatmapLevel _selectedPreviewBeatmapLevel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IPreviewBeatmapLevel*& dyn__selectedPreviewBeatmapLevel();
    // public System.Void add_didSelectLevelEvent(System.Action`2<LevelCollectionTableView,IPreviewBeatmapLevel> value)
    // Offset: 0x139DB48
    void add_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // public System.Void remove_didSelectLevelEvent(System.Action`2<LevelCollectionTableView,IPreviewBeatmapLevel> value)
    // Offset: 0x139DBEC
    void remove_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // public System.Void add_didSelectHeaderEvent(System.Action`1<LevelCollectionTableView> value)
    // Offset: 0x139DC90
    void add_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>* value);
    // public System.Void remove_didSelectHeaderEvent(System.Action`1<LevelCollectionTableView> value)
    // Offset: 0x139DD34
    void remove_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>* value);
    // public System.Void .ctor()
    // Offset: 0x139F5A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelCollectionTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LevelCollectionTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelCollectionTableView*, creationType>()));
    }
    // public System.Void Init(System.String headerText, UnityEngine.Sprite headerSprite)
    // Offset: 0x139DDD8
    void Init(::StringW headerText, ::UnityEngine::Sprite* headerSprite);
    // private System.Void Init()
    // Offset: 0x139DE24
    void Init();
    // public System.Void SetData(System.Collections.Generic.IReadOnlyList`1<IPreviewBeatmapLevel> previewBeatmapLevels, System.Collections.Generic.HashSet`1<System.String> favoriteLevelIds, System.Boolean beatmapLevelsAreSorted)
    // Offset: 0x139DEF0
    void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* previewBeatmapLevels, ::System::Collections::Generic::HashSet_1<::StringW>* favoriteLevelIds, bool beatmapLevelsAreSorted);
    // public System.Void RefreshFavorites(System.Collections.Generic.HashSet`1<System.String> favoriteLevelIds)
    // Offset: 0x139E158
    void RefreshFavorites(::System::Collections::Generic::HashSet_1<::StringW>* favoriteLevelIds);
    // protected System.Void OnEnable()
    // Offset: 0x139E298
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x139E324
    void OnDisable();
    // protected System.Void OnDestroy()
    // Offset: 0x139E3B0
    void OnDestroy();
    // public System.Single CellSize()
    // Offset: 0x139E48C
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x139E494
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0x139E554
    ::HMUI::TableCell* CellForIdx(::HMUI::TableView* tableView, int row);
    // private System.Void HandleDidSelectRowEvent(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0x139E90C
    void HandleDidSelectRowEvent(::HMUI::TableView* tableView, int row);
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0x139EA50
    void HandleAdditionalContentModelDidInvalidateData();
    // public System.Void CancelAsyncOperations()
    // Offset: 0x139EB0C
    void CancelAsyncOperations();
    // public System.Void RefreshLevelsAvailability()
    // Offset: 0x139EDF8
    void RefreshLevelsAvailability();
    // public System.Void SelectLevelPackHeaderCell()
    // Offset: 0x139F2A0
    void SelectLevelPackHeaderCell();
    // public System.Void ClearSelection()
    // Offset: 0x139F2CC
    void ClearSelection();
    // public System.Void SelectLevel(IPreviewBeatmapLevel beatmapLevel)
    // Offset: 0x139F2FC
    void SelectLevel(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);
  }; // LevelCollectionTableView
  #pragma pack(pop)
  static check_size<sizeof(LevelCollectionTableView), 160 + sizeof(::GlobalNamespace::IPreviewBeatmapLevel*)> __GlobalNamespace_LevelCollectionTableViewSizeCheck;
  static_assert(sizeof(LevelCollectionTableView) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::add_didSelectLevelEvent
// Il2CppName: add_didSelectLevelEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>*)>(&GlobalNamespace::LevelCollectionTableView::add_didSelectLevelEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelCollectionTableView"), ::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "add_didSelectLevelEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::remove_didSelectLevelEvent
// Il2CppName: remove_didSelectLevelEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>*)>(&GlobalNamespace::LevelCollectionTableView::remove_didSelectLevelEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelCollectionTableView"), ::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "remove_didSelectLevelEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::add_didSelectHeaderEvent
// Il2CppName: add_didSelectHeaderEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>*)>(&GlobalNamespace::LevelCollectionTableView::add_didSelectHeaderEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelCollectionTableView")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "add_didSelectHeaderEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::remove_didSelectHeaderEvent
// Il2CppName: remove_didSelectHeaderEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>*)>(&GlobalNamespace::LevelCollectionTableView::remove_didSelectHeaderEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelCollectionTableView")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "remove_didSelectHeaderEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(::StringW, ::UnityEngine::Sprite*)>(&GlobalNamespace::LevelCollectionTableView::Init)> {
  static const MethodInfo* get() {
    static auto* headerText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* headerSprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headerText, headerSprite});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, ::System::Collections::Generic::HashSet_1<::StringW>*, bool)>(&GlobalNamespace::LevelCollectionTableView::SetData)> {
  static const MethodInfo* get() {
    static auto* previewBeatmapLevels = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")})->byval_arg;
    static auto* favoriteLevelIds = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* beatmapLevelsAreSorted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previewBeatmapLevels, favoriteLevelIds, beatmapLevelsAreSorted});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::RefreshFavorites
// Il2CppName: RefreshFavorites
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(::System::Collections::Generic::HashSet_1<::StringW>*)>(&GlobalNamespace::LevelCollectionTableView::RefreshFavorites)> {
  static const MethodInfo* get() {
    static auto* favoriteLevelIds = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "RefreshFavorites", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{favoriteLevelIds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::CellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (GlobalNamespace::LevelCollectionTableView::*)(::HMUI::TableView*, int)>(&GlobalNamespace::LevelCollectionTableView::CellForIdx)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* row = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, row});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::HandleDidSelectRowEvent
// Il2CppName: HandleDidSelectRowEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(::HMUI::TableView*, int)>(&GlobalNamespace::LevelCollectionTableView::HandleDidSelectRowEvent)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* row = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "HandleDidSelectRowEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, row});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::HandleAdditionalContentModelDidInvalidateData
// Il2CppName: HandleAdditionalContentModelDidInvalidateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::HandleAdditionalContentModelDidInvalidateData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "HandleAdditionalContentModelDidInvalidateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::CancelAsyncOperations
// Il2CppName: CancelAsyncOperations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::CancelAsyncOperations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "CancelAsyncOperations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::RefreshLevelsAvailability
// Il2CppName: RefreshLevelsAvailability
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::RefreshLevelsAvailability)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "RefreshLevelsAvailability", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::SelectLevelPackHeaderCell
// Il2CppName: SelectLevelPackHeaderCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::SelectLevelPackHeaderCell)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "SelectLevelPackHeaderCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::ClearSelection
// Il2CppName: ClearSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::ClearSelection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "ClearSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::SelectLevel
// Il2CppName: SelectLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::LevelCollectionTableView::SelectLevel)> {
  static const MethodInfo* get() {
    static auto* beatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "SelectLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevel});
  }
};
