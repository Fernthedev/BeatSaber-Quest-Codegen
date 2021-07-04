// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: LevelCollectionTableView
  class LevelCollectionTableView : public UnityEngine::MonoBehaviour/*, public HMUI::TableView::IDataSource*/ {
    public:
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x18
    HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(HMUI::TableView*) == 0x8);
    // private HMUI.AlphabetScrollbar _alphabetScrollbar
    // Size: 0x8
    // Offset: 0x20
    HMUI::AlphabetScrollbar* alphabetScrollbar;
    // Field size check
    static_assert(sizeof(HMUI::AlphabetScrollbar*) == 0x8);
    // private LevelListTableCell _levelCellPrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::LevelListTableCell* levelCellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelListTableCell*) == 0x8);
    // private System.String _levelCellsReuseIdentifier
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* levelCellsReuseIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private LevelPackHeaderTableCell _packCellPrefab
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::LevelPackHeaderTableCell* packCellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelPackHeaderTableCell*) == 0x8);
    // private System.String _packCellsReuseIdentifier
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* packCellsReuseIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
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
    // [InjectAttribute] Offset: 0xE27438
    // private AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE27448
    // private System.Action`2<LevelCollectionTableView,IPreviewBeatmapLevel> didSelectLevelEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_2<GlobalNamespace::LevelCollectionTableView*, GlobalNamespace::IPreviewBeatmapLevel*>* didSelectLevelEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::LevelCollectionTableView*, GlobalNamespace::IPreviewBeatmapLevel*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE27458
    // private System.Action`1<LevelCollectionTableView> didSelectHeaderEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action_1<GlobalNamespace::LevelCollectionTableView*>* didSelectHeaderEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::LevelCollectionTableView*>*) == 0x8);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x68
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInitialized and: previewBeatmapLevels
    char __padding11[0x7] = {};
    // private IPreviewBeatmapLevel[] _previewBeatmapLevels
    // Size: 0x8
    // Offset: 0x70
    ::Array<GlobalNamespace::IPreviewBeatmapLevel*>* previewBeatmapLevels;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IPreviewBeatmapLevel*>*) == 0x8);
    // private UnityEngine.Sprite _headerSprite
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Sprite* headerSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private System.String _headerText
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppString* headerText;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
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
    System::Collections::Generic::HashSet_1<::Il2CppString*>* favoriteLevelIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*) == 0x8);
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
    GlobalNamespace::IPreviewBeatmapLevel* selectedPreviewBeatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // Creating value type constructor for type: LevelCollectionTableView
    LevelCollectionTableView(HMUI::TableView* tableView_ = {}, HMUI::AlphabetScrollbar* alphabetScrollbar_ = {}, GlobalNamespace::LevelListTableCell* levelCellPrefab_ = {}, ::Il2CppString* levelCellsReuseIdentifier_ = {}, GlobalNamespace::LevelPackHeaderTableCell* packCellPrefab_ = {}, ::Il2CppString* packCellsReuseIdentifier_ = {}, float cellHeight_ = {}, int showAlphabetScrollbarLevelCountThreshold_ = {}, GlobalNamespace::AdditionalContentModel* additionalContentModel_ = {}, System::Action_2<GlobalNamespace::LevelCollectionTableView*, GlobalNamespace::IPreviewBeatmapLevel*>* didSelectLevelEvent_ = {}, System::Action_1<GlobalNamespace::LevelCollectionTableView*>* didSelectHeaderEvent_ = {}, bool isInitialized_ = {}, ::Array<GlobalNamespace::IPreviewBeatmapLevel*>* previewBeatmapLevels_ = {}, UnityEngine::Sprite* headerSprite_ = {}, ::Il2CppString* headerText_ = {}, bool showLevelPackHeader_ = {}, System::Collections::Generic::HashSet_1<::Il2CppString*>* favoriteLevelIds_ = {}, int selectedRow_ = {}, GlobalNamespace::IPreviewBeatmapLevel* selectedPreviewBeatmapLevel_ = {}) noexcept : tableView{tableView_}, alphabetScrollbar{alphabetScrollbar_}, levelCellPrefab{levelCellPrefab_}, levelCellsReuseIdentifier{levelCellsReuseIdentifier_}, packCellPrefab{packCellPrefab_}, packCellsReuseIdentifier{packCellsReuseIdentifier_}, cellHeight{cellHeight_}, showAlphabetScrollbarLevelCountThreshold{showAlphabetScrollbarLevelCountThreshold_}, additionalContentModel{additionalContentModel_}, didSelectLevelEvent{didSelectLevelEvent_}, didSelectHeaderEvent{didSelectHeaderEvent_}, isInitialized{isInitialized_}, previewBeatmapLevels{previewBeatmapLevels_}, headerSprite{headerSprite_}, headerText{headerText_}, showLevelPackHeader{showLevelPackHeader_}, favoriteLevelIds{favoriteLevelIds_}, selectedRow{selectedRow_}, selectedPreviewBeatmapLevel{selectedPreviewBeatmapLevel_} {}
    // Creating interface conversion operator: operator HMUI::TableView::IDataSource
    operator HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::TableView::IDataSource*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didSelectLevelEvent(System.Action`2<LevelCollectionTableView,IPreviewBeatmapLevel> value)
    // Offset: 0x10CB130
    void add_didSelectLevelEvent(System::Action_2<GlobalNamespace::LevelCollectionTableView*, GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // public System.Void remove_didSelectLevelEvent(System.Action`2<LevelCollectionTableView,IPreviewBeatmapLevel> value)
    // Offset: 0x10CB1D4
    void remove_didSelectLevelEvent(System::Action_2<GlobalNamespace::LevelCollectionTableView*, GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // public System.Void add_didSelectHeaderEvent(System.Action`1<LevelCollectionTableView> value)
    // Offset: 0x10CB278
    void add_didSelectHeaderEvent(System::Action_1<GlobalNamespace::LevelCollectionTableView*>* value);
    // public System.Void remove_didSelectHeaderEvent(System.Action`1<LevelCollectionTableView> value)
    // Offset: 0x10CB31C
    void remove_didSelectHeaderEvent(System::Action_1<GlobalNamespace::LevelCollectionTableView*>* value);
    // public System.Void Init(System.String headerText, UnityEngine.Sprite headerSprite)
    // Offset: 0x10CB3C0
    void Init(::Il2CppString* headerText, UnityEngine::Sprite* headerSprite);
    // private System.Void Init()
    // Offset: 0x10CB40C
    void Init();
    // public System.Void SetData(IPreviewBeatmapLevel[] previewBeatmapLevels, System.Collections.Generic.HashSet`1<System.String> favoriteLevelIds, System.Boolean beatmapLevelsAreSorted)
    // Offset: 0x10CB4D8
    void SetData(::Array<GlobalNamespace::IPreviewBeatmapLevel*>* previewBeatmapLevels, System::Collections::Generic::HashSet_1<::Il2CppString*>* favoriteLevelIds, bool beatmapLevelsAreSorted);
    // public System.Void RefreshFavorites(System.Collections.Generic.HashSet`1<System.String> favoriteLevelIds)
    // Offset: 0x10CB6DC
    void RefreshFavorites(System::Collections::Generic::HashSet_1<::Il2CppString*>* favoriteLevelIds);
    // protected System.Void OnEnable()
    // Offset: 0x10CB788
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x10CB814
    void OnDisable();
    // protected System.Void OnDestroy()
    // Offset: 0x10CB8A0
    void OnDestroy();
    // public System.Single CellSize()
    // Offset: 0x10CB97C
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x10CB984
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0x10CB9A4
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int row);
    // private System.Void HandleDidSelectRowEvent(HMUI.TableView tableView, System.Int32 row)
    // Offset: 0x10CBD0C
    void HandleDidSelectRowEvent(HMUI::TableView* tableView, int row);
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0x10CBDF4
    void HandleAdditionalContentModelDidInvalidateData();
    // public System.Void CancelAsyncOperations()
    // Offset: 0x10CBEC0
    void CancelAsyncOperations();
    // public System.Void RefreshLevelsAvailability()
    // Offset: 0x10CC1AC
    void RefreshLevelsAvailability();
    // public System.Void SelectLevelPackHeaderCell()
    // Offset: 0x10CC588
    void SelectLevelPackHeaderCell();
    // public System.Void ClearSelection()
    // Offset: 0x10CC5B4
    void ClearSelection();
    // public System.Void SelectLevel(IPreviewBeatmapLevel beatmapLevel)
    // Offset: 0x10CC5E4
    void SelectLevel(GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);
    // public System.Void .ctor()
    // Offset: 0x10CC7B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelCollectionTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelCollectionTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelCollectionTableView*, creationType>()));
    }
  }; // LevelCollectionTableView
  #pragma pack(pop)
  static check_size<sizeof(LevelCollectionTableView), 160 + sizeof(GlobalNamespace::IPreviewBeatmapLevel*)> __GlobalNamespace_LevelCollectionTableViewSizeCheck;
  static_assert(sizeof(LevelCollectionTableView) == 0xA8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelCollectionTableView*, "", "LevelCollectionTableView");
// Writing includes for template specializations
#include "System/Action_2.hpp"
#include "System/Action_1.hpp"
#include "UnityEngine/Sprite.hpp"
#include "System/Collections/Generic/HashSet_1.hpp"
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::add_didSelectLevelEvent
// Il2CppName: add_didSelectLevelEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(System::Action_2<GlobalNamespace::LevelCollectionTableView*, GlobalNamespace::IPreviewBeatmapLevel*>*)>(&GlobalNamespace::LevelCollectionTableView::add_didSelectLevelEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "add_didSelectLevelEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<GlobalNamespace::LevelCollectionTableView*, GlobalNamespace::IPreviewBeatmapLevel*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::remove_didSelectLevelEvent
// Il2CppName: remove_didSelectLevelEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(System::Action_2<GlobalNamespace::LevelCollectionTableView*, GlobalNamespace::IPreviewBeatmapLevel*>*)>(&GlobalNamespace::LevelCollectionTableView::remove_didSelectLevelEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "remove_didSelectLevelEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<GlobalNamespace::LevelCollectionTableView*, GlobalNamespace::IPreviewBeatmapLevel*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::add_didSelectHeaderEvent
// Il2CppName: add_didSelectHeaderEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(System::Action_1<GlobalNamespace::LevelCollectionTableView*>*)>(&GlobalNamespace::LevelCollectionTableView::add_didSelectHeaderEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "add_didSelectHeaderEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::LevelCollectionTableView*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::remove_didSelectHeaderEvent
// Il2CppName: remove_didSelectHeaderEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(System::Action_1<GlobalNamespace::LevelCollectionTableView*>*)>(&GlobalNamespace::LevelCollectionTableView::remove_didSelectHeaderEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "remove_didSelectHeaderEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::LevelCollectionTableView*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(::Il2CppString*, UnityEngine::Sprite*)>(&GlobalNamespace::LevelCollectionTableView::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Sprite*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(::Array<GlobalNamespace::IPreviewBeatmapLevel*>*, System::Collections::Generic::HashSet_1<::Il2CppString*>*, bool)>(&GlobalNamespace::LevelCollectionTableView::SetData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<GlobalNamespace::IPreviewBeatmapLevel*>*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::HashSet_1<::Il2CppString*>*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::RefreshFavorites
// Il2CppName: RefreshFavorites
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(System::Collections::Generic::HashSet_1<::Il2CppString*>*)>(&GlobalNamespace::LevelCollectionTableView::RefreshFavorites)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "RefreshFavorites", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::HashSet_1<::Il2CppString*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::OnEnable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::OnDisable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::CellSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::NumberOfCells)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TableCell* (GlobalNamespace::LevelCollectionTableView::*)(HMUI::TableView*, int)>(&GlobalNamespace::LevelCollectionTableView::CellForIdx)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::TableView*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::HandleDidSelectRowEvent
// Il2CppName: HandleDidSelectRowEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(HMUI::TableView*, int)>(&GlobalNamespace::LevelCollectionTableView::HandleDidSelectRowEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "HandleDidSelectRowEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::TableView*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::HandleAdditionalContentModelDidInvalidateData
// Il2CppName: HandleAdditionalContentModelDidInvalidateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::HandleAdditionalContentModelDidInvalidateData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "HandleAdditionalContentModelDidInvalidateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::CancelAsyncOperations
// Il2CppName: CancelAsyncOperations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::CancelAsyncOperations)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "CancelAsyncOperations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::RefreshLevelsAvailability
// Il2CppName: RefreshLevelsAvailability
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::RefreshLevelsAvailability)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "RefreshLevelsAvailability", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::SelectLevelPackHeaderCell
// Il2CppName: SelectLevelPackHeaderCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::SelectLevelPackHeaderCell)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "SelectLevelPackHeaderCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::ClearSelection
// Il2CppName: ClearSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)()>(&GlobalNamespace::LevelCollectionTableView::ClearSelection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "ClearSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::SelectLevel
// Il2CppName: SelectLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionTableView::*)(GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::LevelCollectionTableView::SelectLevel)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionTableView*), "SelectLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IPreviewBeatmapLevel*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionTableView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
