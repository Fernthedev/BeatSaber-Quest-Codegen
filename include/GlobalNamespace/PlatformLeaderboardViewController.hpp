// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LeaderboardViewController
#include "GlobalNamespace/LeaderboardViewController.hpp"
// Including type: LeaderboardTableView
#include "GlobalNamespace/LeaderboardTableView.hpp"
// Including type: PlatformLeaderboardsModel/ScoresScope
#include "GlobalNamespace/PlatformLeaderboardsModel_ScoresScope.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: LoadingControl
  class LoadingControl;
  // Forward declaring type: LevelStatsView
  class LevelStatsView;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: IconSegmentedControl
  class IconSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xE8
  #pragma pack(push, 1)
  // Autogenerated type: PlatformLeaderboardViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformLeaderboardViewController : public GlobalNamespace::LeaderboardViewController {
    public:
    // Nested type: GlobalNamespace::PlatformLeaderboardViewController::$RefreshDelayed$d__31
    class $RefreshDelayed$d__31;
    // private LeaderboardTableView _leaderboardTableView
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::LeaderboardTableView* leaderboardTableView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LeaderboardTableView*) == 0x8);
    // private HMUI.IconSegmentedControl _scopeSegmentedControl
    // Size: 0x8
    // Offset: 0x78
    HMUI::IconSegmentedControl* scopeSegmentedControl;
    // Field size check
    static_assert(sizeof(HMUI::IconSegmentedControl*) == 0x8);
    // private LoadingControl _loadingControl
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::LoadingControl* loadingControl;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LoadingControl*) == 0x8);
    // [SpaceAttribute] Offset: 0xE42FA0
    // private UnityEngine.Sprite _globalLeaderboardIcon
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::Sprite* globalLeaderboardIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _aroundPlayerLeaderboardIcon
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::Sprite* aroundPlayerLeaderboardIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _friendsLeaderboardIcon
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::Sprite* friendsLeaderboardIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private LevelStatsView _levelStatsView
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::LevelStatsView* levelStatsView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelStatsView*) == 0x8);
    // [InjectAttribute] Offset: 0xE43008
    // private readonly PlatformLeaderboardsModel _leaderboardsModel
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::PlatformLeaderboardsModel* leaderboardsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformLeaderboardsModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE43018
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // private HMAsyncRequest _getScoresAsyncRequest
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::HMAsyncRequest* getScoresAsyncRequest;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HMAsyncRequest*) == 0x8);
    // private System.Int32[] _playerScorePos
    // Size: 0x8
    // Offset: 0xC0
    ::Array<int>* playerScorePos;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    // Size: 0x8
    // Offset: 0xC8
    System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* scores;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>*) == 0x8);
    // private IDifficultyBeatmap _difficultyBeatmap
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private System.Boolean _refreshIsNeeded
    // Size: 0x1
    // Offset: 0xD8
    bool refreshIsNeeded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hasScoresData
    // Size: 0x1
    // Offset: 0xD9
    bool hasScoresData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasScoresData and: scoreScopes
    char __padding14[0x6] = {};
    // private PlatformLeaderboardsModel/ScoresScope[] _scoreScopes
    // Size: 0x8
    // Offset: 0xE0
    ::Array<GlobalNamespace::PlatformLeaderboardsModel::ScoresScope>* scoreScopes;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PlatformLeaderboardsModel::ScoresScope>*) == 0x8);
    // Creating value type constructor for type: PlatformLeaderboardViewController
    PlatformLeaderboardViewController(GlobalNamespace::LeaderboardTableView* leaderboardTableView_ = {}, HMUI::IconSegmentedControl* scopeSegmentedControl_ = {}, GlobalNamespace::LoadingControl* loadingControl_ = {}, UnityEngine::Sprite* globalLeaderboardIcon_ = {}, UnityEngine::Sprite* aroundPlayerLeaderboardIcon_ = {}, UnityEngine::Sprite* friendsLeaderboardIcon_ = {}, GlobalNamespace::LevelStatsView* levelStatsView_ = {}, GlobalNamespace::PlatformLeaderboardsModel* leaderboardsModel_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::HMAsyncRequest* getScoresAsyncRequest_ = {}, ::Array<int>* playerScorePos_ = {}, System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* scores_ = {}, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap_ = {}, bool refreshIsNeeded_ = {}, bool hasScoresData_ = {}, ::Array<GlobalNamespace::PlatformLeaderboardsModel::ScoresScope>* scoreScopes_ = {}) noexcept : leaderboardTableView{leaderboardTableView_}, scopeSegmentedControl{scopeSegmentedControl_}, loadingControl{loadingControl_}, globalLeaderboardIcon{globalLeaderboardIcon_}, aroundPlayerLeaderboardIcon{aroundPlayerLeaderboardIcon_}, friendsLeaderboardIcon{friendsLeaderboardIcon_}, levelStatsView{levelStatsView_}, leaderboardsModel{leaderboardsModel_}, playerDataModel{playerDataModel_}, getScoresAsyncRequest{getScoresAsyncRequest_}, playerScorePos{playerScorePos_}, scores{scores_}, difficultyBeatmap{difficultyBeatmap_}, refreshIsNeeded{refreshIsNeeded_}, hasScoresData{hasScoresData_}, scoreScopes{scoreScopes_} {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE43028
    // Get static field: static private PlatformLeaderboardsModel/ScoresScope _scoresScope
    static GlobalNamespace::PlatformLeaderboardsModel::ScoresScope _get__scoresScope();
    // Set static field: static private PlatformLeaderboardsModel/ScoresScope _scoresScope
    static void _set__scoresScope(GlobalNamespace::PlatformLeaderboardsModel::ScoresScope value);
    // Get instance field: private LeaderboardTableView _leaderboardTableView
    GlobalNamespace::LeaderboardTableView* _get__leaderboardTableView();
    // Set instance field: private LeaderboardTableView _leaderboardTableView
    void _set__leaderboardTableView(GlobalNamespace::LeaderboardTableView* value);
    // Get instance field: private HMUI.IconSegmentedControl _scopeSegmentedControl
    HMUI::IconSegmentedControl* _get__scopeSegmentedControl();
    // Set instance field: private HMUI.IconSegmentedControl _scopeSegmentedControl
    void _set__scopeSegmentedControl(HMUI::IconSegmentedControl* value);
    // Get instance field: private LoadingControl _loadingControl
    GlobalNamespace::LoadingControl* _get__loadingControl();
    // Set instance field: private LoadingControl _loadingControl
    void _set__loadingControl(GlobalNamespace::LoadingControl* value);
    // Get instance field: private UnityEngine.Sprite _globalLeaderboardIcon
    UnityEngine::Sprite* _get__globalLeaderboardIcon();
    // Set instance field: private UnityEngine.Sprite _globalLeaderboardIcon
    void _set__globalLeaderboardIcon(UnityEngine::Sprite* value);
    // Get instance field: private UnityEngine.Sprite _aroundPlayerLeaderboardIcon
    UnityEngine::Sprite* _get__aroundPlayerLeaderboardIcon();
    // Set instance field: private UnityEngine.Sprite _aroundPlayerLeaderboardIcon
    void _set__aroundPlayerLeaderboardIcon(UnityEngine::Sprite* value);
    // Get instance field: private UnityEngine.Sprite _friendsLeaderboardIcon
    UnityEngine::Sprite* _get__friendsLeaderboardIcon();
    // Set instance field: private UnityEngine.Sprite _friendsLeaderboardIcon
    void _set__friendsLeaderboardIcon(UnityEngine::Sprite* value);
    // Get instance field: private LevelStatsView _levelStatsView
    GlobalNamespace::LevelStatsView* _get__levelStatsView();
    // Set instance field: private LevelStatsView _levelStatsView
    void _set__levelStatsView(GlobalNamespace::LevelStatsView* value);
    // Get instance field: private readonly PlatformLeaderboardsModel _leaderboardsModel
    GlobalNamespace::PlatformLeaderboardsModel* _get__leaderboardsModel();
    // Set instance field: private readonly PlatformLeaderboardsModel _leaderboardsModel
    void _set__leaderboardsModel(GlobalNamespace::PlatformLeaderboardsModel* value);
    // Get instance field: private readonly PlayerDataModel _playerDataModel
    GlobalNamespace::PlayerDataModel* _get__playerDataModel();
    // Set instance field: private readonly PlayerDataModel _playerDataModel
    void _set__playerDataModel(GlobalNamespace::PlayerDataModel* value);
    // Get instance field: private HMAsyncRequest _getScoresAsyncRequest
    GlobalNamespace::HMAsyncRequest* _get__getScoresAsyncRequest();
    // Set instance field: private HMAsyncRequest _getScoresAsyncRequest
    void _set__getScoresAsyncRequest(GlobalNamespace::HMAsyncRequest* value);
    // Get instance field: private System.Int32[] _playerScorePos
    ::Array<int>* _get__playerScorePos();
    // Set instance field: private System.Int32[] _playerScorePos
    void _set__playerScorePos(::Array<int>* value);
    // Get instance field: private System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* _get__scores();
    // Set instance field: private System.Collections.Generic.List`1<LeaderboardTableView/ScoreData> _scores
    void _set__scores(System::Collections::Generic::List_1<GlobalNamespace::LeaderboardTableView::ScoreData*>* value);
    // Get instance field: private IDifficultyBeatmap _difficultyBeatmap
    GlobalNamespace::IDifficultyBeatmap* _get__difficultyBeatmap();
    // Set instance field: private IDifficultyBeatmap _difficultyBeatmap
    void _set__difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap* value);
    // Get instance field: private System.Boolean _refreshIsNeeded
    bool _get__refreshIsNeeded();
    // Set instance field: private System.Boolean _refreshIsNeeded
    void _set__refreshIsNeeded(bool value);
    // Get instance field: private System.Boolean _hasScoresData
    bool _get__hasScoresData();
    // Set instance field: private System.Boolean _hasScoresData
    void _set__hasScoresData(bool value);
    // Get instance field: private PlatformLeaderboardsModel/ScoresScope[] _scoreScopes
    ::Array<GlobalNamespace::PlatformLeaderboardsModel::ScoresScope>* _get__scoreScopes();
    // Set instance field: private PlatformLeaderboardsModel/ScoresScope[] _scoreScopes
    void _set__scoreScopes(::Array<GlobalNamespace::PlatformLeaderboardsModel::ScoresScope>* value);
    // public PlatformLeaderboardsModel get_leaderboardsModel()
    // Offset: 0x1132188
    GlobalNamespace::PlatformLeaderboardsModel* get_leaderboardsModel();
    // private System.Int32 ScoreScopeToScoreScopeIndex(PlatformLeaderboardsModel/ScoresScope scoresScope)
    // Offset: 0x1132840
    int ScoreScopeToScoreScopeIndex(GlobalNamespace::PlatformLeaderboardsModel::ScoresScope scoresScope);
    // private PlatformLeaderboardsModel/ScoresScope ScopeScopeIndexToScoreScope(System.Int32 scoreScopeIndex)
    // Offset: 0x1132CFC
    GlobalNamespace::PlatformLeaderboardsModel::ScoresScope ScopeScopeIndexToScoreScope(int scoreScopeIndex);
    // private System.Void HandleDidPressRefreshButton()
    // Offset: 0x1132D48
    void HandleDidPressRefreshButton();
    // private System.Void HandleLeaderboardsResultsReturned(PlatformLeaderboardsModel/GetScoresResult result, PlatformLeaderboardsModel/LeaderboardScore[] scores, System.Int32 playerScoreIndex)
    // Offset: 0x1132D54
    void HandleLeaderboardsResultsReturned(GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult result, ::Array<GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore*>* scores, int playerScoreIndex);
    // private System.Void HandleScopeSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellNumber)
    // Offset: 0x1132F78
    void HandleScopeSegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellNumber);
    // private System.Void HandlePlatformLeaderboardsModelAllScoresDidUpload()
    // Offset: 0x1133010
    void HandlePlatformLeaderboardsModelAllScoresDidUpload();
    // private System.Void Refresh(System.Boolean showLoadingIndicator, System.Boolean clear)
    // Offset: 0x11321F4
    void Refresh(bool showLoadingIndicator, bool clear);
    // private System.Collections.IEnumerator RefreshDelayed(System.Boolean showLoadingIndicator, System.Boolean clear)
    // Offset: 0x11330EC
    System::Collections::IEnumerator* RefreshDelayed(bool showLoadingIndicator, bool clear);
    // private System.Void ClearContent()
    // Offset: 0x113301C
    void ClearContent();
    // public System.Void .ctor()
    // Offset: 0x11331A8
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformLeaderboardViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlatformLeaderboardViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformLeaderboardViewController*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x113321C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
    // public override System.Void SetData(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x1132190
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::SetData(IDifficultyBeatmap difficultyBeatmap)
    void SetData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public override System.Void RefreshLevelStats()
    // Offset: 0x11323B4
    // Implemented from: LeaderboardViewController
    // Base method: System.Void LeaderboardViewController::RefreshLevelStats()
    void RefreshLevelStats();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x11323E8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x11329AC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x1132B54
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
  }; // PlatformLeaderboardViewController
  #pragma pack(pop)
  static check_size<sizeof(PlatformLeaderboardViewController), 224 + sizeof(::Array<GlobalNamespace::PlatformLeaderboardsModel::ScoresScope>*)> __GlobalNamespace_PlatformLeaderboardViewControllerSizeCheck;
  static_assert(sizeof(PlatformLeaderboardViewController) == 0xE8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformLeaderboardViewController*, "", "PlatformLeaderboardViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::get_leaderboardsModel
// Il2CppName: get_leaderboardsModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlatformLeaderboardsModel* (GlobalNamespace::PlatformLeaderboardViewController::*)()>(&GlobalNamespace::PlatformLeaderboardViewController::get_leaderboardsModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "get_leaderboardsModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::ScoreScopeToScoreScopeIndex
// Il2CppName: ScoreScopeToScoreScopeIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PlatformLeaderboardViewController::*)(GlobalNamespace::PlatformLeaderboardsModel::ScoresScope)>(&GlobalNamespace::PlatformLeaderboardViewController::ScoreScopeToScoreScopeIndex)> {
  static const MethodInfo* get() {
    static auto* scoresScope = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/ScoresScope")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "ScoreScopeToScoreScopeIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scoresScope});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::ScopeScopeIndexToScoreScope
// Il2CppName: ScopeScopeIndexToScoreScope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlatformLeaderboardsModel::ScoresScope (GlobalNamespace::PlatformLeaderboardViewController::*)(int)>(&GlobalNamespace::PlatformLeaderboardViewController::ScopeScopeIndexToScoreScope)> {
  static const MethodInfo* get() {
    static auto* scoreScopeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "ScopeScopeIndexToScoreScope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scoreScopeIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::HandleDidPressRefreshButton
// Il2CppName: HandleDidPressRefreshButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)()>(&GlobalNamespace::PlatformLeaderboardViewController::HandleDidPressRefreshButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "HandleDidPressRefreshButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::HandleLeaderboardsResultsReturned
// Il2CppName: HandleLeaderboardsResultsReturned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)(GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult, ::Array<GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore*>*, int)>(&GlobalNamespace::PlatformLeaderboardViewController::HandleLeaderboardsResultsReturned)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/GetScoresResult")->byval_arg;
    static auto* scores = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel/LeaderboardScore"), 1)->byval_arg;
    static auto* playerScoreIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "HandleLeaderboardsResultsReturned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, scores, playerScoreIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::HandleScopeSegmentedControlDidSelectCell
// Il2CppName: HandleScopeSegmentedControlDidSelectCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)(HMUI::SegmentedControl*, int)>(&GlobalNamespace::PlatformLeaderboardViewController::HandleScopeSegmentedControlDidSelectCell)> {
  static const MethodInfo* get() {
    static auto* segmentedControl = &::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl")->byval_arg;
    static auto* cellNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "HandleScopeSegmentedControlDidSelectCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentedControl, cellNumber});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::HandlePlatformLeaderboardsModelAllScoresDidUpload
// Il2CppName: HandlePlatformLeaderboardsModelAllScoresDidUpload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)()>(&GlobalNamespace::PlatformLeaderboardViewController::HandlePlatformLeaderboardsModelAllScoresDidUpload)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "HandlePlatformLeaderboardsModelAllScoresDidUpload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)(bool, bool)>(&GlobalNamespace::PlatformLeaderboardViewController::Refresh)> {
  static const MethodInfo* get() {
    static auto* showLoadingIndicator = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* clear = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{showLoadingIndicator, clear});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::RefreshDelayed
// Il2CppName: RefreshDelayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::PlatformLeaderboardViewController::*)(bool, bool)>(&GlobalNamespace::PlatformLeaderboardViewController::RefreshDelayed)> {
  static const MethodInfo* get() {
    static auto* showLoadingIndicator = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* clear = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "RefreshDelayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{showLoadingIndicator, clear});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::ClearContent
// Il2CppName: ClearContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)()>(&GlobalNamespace::PlatformLeaderboardViewController::ClearContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "ClearContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::PlatformLeaderboardViewController::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)(GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::PlatformLeaderboardViewController::SetData)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::RefreshLevelStats
// Il2CppName: RefreshLevelStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)()>(&GlobalNamespace::PlatformLeaderboardViewController::RefreshLevelStats)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "RefreshLevelStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)(bool, bool, bool)>(&GlobalNamespace::PlatformLeaderboardViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)(bool, bool)>(&GlobalNamespace::PlatformLeaderboardViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformLeaderboardViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformLeaderboardViewController::*)()>(&GlobalNamespace::PlatformLeaderboardViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformLeaderboardViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
