// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ITickable
#include "Zenject/ITickable.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Including type: BeatmapLevelsModel/GetBeatmapLevelResult
#include "GlobalNamespace/BeatmapLevelsModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Skipping declaration: BeatmapLevelsModel because it is already included!
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`5<T1, T2, T3, T4, T5>
  template<typename T1, typename T2, typename T3, typename T4, typename T5>
  class Action_5;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLevelLoader
  class MultiplayerLevelLoader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MultiplayerLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelLoader*, "", "MultiplayerLevelLoader");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x75
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLevelLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLevelLoader : public ::Il2CppObject/*, public Zenject::ITickable*/ {
    public:
    // Nested type: GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState
    struct MultiplayerBeatmapLoaderState;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MultiplayerLevelLoader/MultiplayerBeatmapLoaderState
    // [TokenAttribute] Offset: FFFFFFFF
    struct MultiplayerBeatmapLoaderState/*, public System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: MultiplayerBeatmapLoaderState
      constexpr MultiplayerBeatmapLoaderState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState NotLoading
      static constexpr const int NotLoading = 0;
      // Get static field: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState NotLoading
      static GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState _get_NotLoading();
      // Set static field: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState NotLoading
      static void _set_NotLoading(GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState value);
      // static field const value: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState LoadingBeatmap
      static constexpr const int LoadingBeatmap = 1;
      // Get static field: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState LoadingBeatmap
      static GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState _get_LoadingBeatmap();
      // Set static field: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState LoadingBeatmap
      static void _set_LoadingBeatmap(GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState value);
      // static field const value: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState WaitingForCountdown
      static constexpr const int WaitingForCountdown = 2;
      // Get static field: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState WaitingForCountdown
      static GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState _get_WaitingForCountdown();
      // Set static field: static public MultiplayerLevelLoader/MultiplayerBeatmapLoaderState WaitingForCountdown
      static void _set_WaitingForCountdown(GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // MultiplayerLevelLoader/MultiplayerBeatmapLoaderState
    #pragma pack(pop)
    static check_size<sizeof(MultiplayerLevelLoader::MultiplayerBeatmapLoaderState), 0 + sizeof(int)> __GlobalNamespace_MultiplayerLevelLoader_MultiplayerBeatmapLoaderStateSizeCheck;
    static_assert(sizeof(MultiplayerLevelLoader::MultiplayerBeatmapLoaderState) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [InjectAttribute] Offset: 0x124AE24
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0x124AE34
    // private readonly BeatmapLevelsModel _beatmapLevelsModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelsModel*) == 0x8);
    // private System.Action stillDownloadingSongEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action* stillDownloadingSongEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action`5<IPreviewBeatmapLevel,BeatmapDifficulty,BeatmapCharacteristicSO,IDifficultyBeatmap,GameplayModifiers> countdownFinishedEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_5<GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*>* countdownFinishedEvent;
    // Field size check
    static_assert(sizeof(System::Action_5<GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*>*) == 0x8);
    // private MultiplayerLevelLoader/MultiplayerBeatmapLoaderState _loaderState
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState loaderState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState) == 0x4);
    // Padding between fields: loaderState and: getBeatmapCancellationTokenSource
    char __padding4[0x4] = {};
    // private System.Threading.CancellationTokenSource _getBeatmapCancellationTokenSource
    // Size: 0x8
    // Offset: 0x38
    System::Threading::CancellationTokenSource* getBeatmapCancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // private System.Threading.Tasks.Task`1<BeatmapLevelsModel/GetBeatmapLevelResult> _getBeatmapLevelResultTask
    // Size: 0x8
    // Offset: 0x40
    System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult>* getBeatmapLevelResultTask;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult>*) == 0x8);
    // private BeatmapIdentifierNetSerializable _beatmapId
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapIdentifierNetSerializable*) == 0x8);
    // private GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // private IDifficultyBeatmap _difficultyBeatmap
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private IPreviewBeatmapLevel _previewBeatmapLevel
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // private System.Single _startTime
    // Size: 0x4
    // Offset: 0x70
    float startTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _stillDownloadingCalled
    // Size: 0x1
    // Offset: 0x74
    bool stillDownloadingCalled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator Zenject::ITickable
    operator Zenject::ITickable() noexcept {
      return *reinterpret_cast<Zenject::ITickable*>(this);
    }
    // Get instance field reference: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // Get instance field reference: private readonly BeatmapLevelsModel _beatmapLevelsModel
    GlobalNamespace::BeatmapLevelsModel*& dyn__beatmapLevelsModel();
    // Get instance field reference: private System.Action stillDownloadingSongEvent
    System::Action*& dyn_stillDownloadingSongEvent();
    // Get instance field reference: private System.Action`5<IPreviewBeatmapLevel,BeatmapDifficulty,BeatmapCharacteristicSO,IDifficultyBeatmap,GameplayModifiers> countdownFinishedEvent
    System::Action_5<GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*>*& dyn_countdownFinishedEvent();
    // Get instance field reference: private MultiplayerLevelLoader/MultiplayerBeatmapLoaderState _loaderState
    GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState& dyn__loaderState();
    // Get instance field reference: private System.Threading.CancellationTokenSource _getBeatmapCancellationTokenSource
    System::Threading::CancellationTokenSource*& dyn__getBeatmapCancellationTokenSource();
    // Get instance field reference: private System.Threading.Tasks.Task`1<BeatmapLevelsModel/GetBeatmapLevelResult> _getBeatmapLevelResultTask
    System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult>*& dyn__getBeatmapLevelResultTask();
    // Get instance field reference: private BeatmapIdentifierNetSerializable _beatmapId
    GlobalNamespace::BeatmapIdentifierNetSerializable*& dyn__beatmapId();
    // Get instance field reference: private GameplayModifiers _gameplayModifiers
    GlobalNamespace::GameplayModifiers*& dyn__gameplayModifiers();
    // Get instance field reference: private IDifficultyBeatmap _difficultyBeatmap
    GlobalNamespace::IDifficultyBeatmap*& dyn__difficultyBeatmap();
    // Get instance field reference: private BeatmapCharacteristicSO _beatmapCharacteristic
    GlobalNamespace::BeatmapCharacteristicSO*& dyn__beatmapCharacteristic();
    // Get instance field reference: private IPreviewBeatmapLevel _previewBeatmapLevel
    GlobalNamespace::IPreviewBeatmapLevel*& dyn__previewBeatmapLevel();
    // Get instance field reference: private System.Single _startTime
    float& dyn__startTime();
    // Get instance field reference: private System.Boolean _stillDownloadingCalled
    bool& dyn__stillDownloadingCalled();
    // public System.Void add_stillDownloadingSongEvent(System.Action value)
    // Offset: 0x143F038
    void add_stillDownloadingSongEvent(System::Action* value);
    // public System.Void remove_stillDownloadingSongEvent(System.Action value)
    // Offset: 0x143F0DC
    void remove_stillDownloadingSongEvent(System::Action* value);
    // public System.Void add_countdownFinishedEvent(System.Action`5<IPreviewBeatmapLevel,BeatmapDifficulty,BeatmapCharacteristicSO,IDifficultyBeatmap,GameplayModifiers> value)
    // Offset: 0x143F180
    void add_countdownFinishedEvent(System::Action_5<GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*>* value);
    // public System.Void remove_countdownFinishedEvent(System.Action`5<IPreviewBeatmapLevel,BeatmapDifficulty,BeatmapCharacteristicSO,IDifficultyBeatmap,GameplayModifiers> value)
    // Offset: 0x143F224
    void remove_countdownFinishedEvent(System::Action_5<GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*>* value);
    // public System.Void LoadLevel(BeatmapIdentifierNetSerializable beatmapId, GameplayModifiers gameplayModifiers, System.Single initialStartTime)
    // Offset: 0x143F2C8
    void LoadLevel(GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId, GlobalNamespace::GameplayModifiers* gameplayModifiers, float initialStartTime);
    // public System.Void SetNewStartTime(System.Single newStartTime)
    // Offset: 0x143F490
    void SetNewStartTime(float newStartTime);
    // public System.Void ClearLoading()
    // Offset: 0x143F498
    void ClearLoading();
    // public System.Void Tick()
    // Offset: 0x143F4DC
    void Tick();
    // private System.Boolean <LoadLevel>b__19_0(PreviewDifficultyBeatmapSet set)
    // Offset: 0x143F780
    bool $LoadLevel$b__19_0(GlobalNamespace::PreviewDifficultyBeatmapSet* set);
    // public System.Void .ctor()
    // Offset: 0x143F778
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLevelLoader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLevelLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLevelLoader*, creationType>()));
    }
  }; // MultiplayerLevelLoader
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLevelLoader), 116 + sizeof(bool)> __GlobalNamespace_MultiplayerLevelLoaderSizeCheck;
  static_assert(sizeof(MultiplayerLevelLoader) == 0x75);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelLoader::MultiplayerBeatmapLoaderState, "", "MultiplayerLevelLoader/MultiplayerBeatmapLoaderState");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelLoader::add_stillDownloadingSongEvent
// Il2CppName: add_stillDownloadingSongEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelLoader::*)(System::Action*)>(&GlobalNamespace::MultiplayerLevelLoader::add_stillDownloadingSongEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelLoader*), "add_stillDownloadingSongEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelLoader::remove_stillDownloadingSongEvent
// Il2CppName: remove_stillDownloadingSongEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelLoader::*)(System::Action*)>(&GlobalNamespace::MultiplayerLevelLoader::remove_stillDownloadingSongEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelLoader*), "remove_stillDownloadingSongEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelLoader::add_countdownFinishedEvent
// Il2CppName: add_countdownFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelLoader::*)(System::Action_5<GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*>*)>(&GlobalNamespace::MultiplayerLevelLoader::add_countdownFinishedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`5"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel"), ::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty"), ::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO"), ::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap"), ::il2cpp_utils::GetClassFromName("", "GameplayModifiers")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelLoader*), "add_countdownFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelLoader::remove_countdownFinishedEvent
// Il2CppName: remove_countdownFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelLoader::*)(System::Action_5<GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::IDifficultyBeatmap*, GlobalNamespace::GameplayModifiers*>*)>(&GlobalNamespace::MultiplayerLevelLoader::remove_countdownFinishedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`5"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel"), ::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty"), ::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO"), ::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap"), ::il2cpp_utils::GetClassFromName("", "GameplayModifiers")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelLoader*), "remove_countdownFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelLoader::LoadLevel
// Il2CppName: LoadLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelLoader::*)(GlobalNamespace::BeatmapIdentifierNetSerializable*, GlobalNamespace::GameplayModifiers*, float)>(&GlobalNamespace::MultiplayerLevelLoader::LoadLevel)> {
  static const MethodInfo* get() {
    static auto* beatmapId = &::il2cpp_utils::GetClassFromName("", "BeatmapIdentifierNetSerializable")->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* initialStartTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelLoader*), "LoadLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapId, gameplayModifiers, initialStartTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelLoader::SetNewStartTime
// Il2CppName: SetNewStartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelLoader::*)(float)>(&GlobalNamespace::MultiplayerLevelLoader::SetNewStartTime)> {
  static const MethodInfo* get() {
    static auto* newStartTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelLoader*), "SetNewStartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newStartTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelLoader::ClearLoading
// Il2CppName: ClearLoading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelLoader::*)()>(&GlobalNamespace::MultiplayerLevelLoader::ClearLoading)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelLoader*), "ClearLoading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelLoader::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelLoader::*)()>(&GlobalNamespace::MultiplayerLevelLoader::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelLoader*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelLoader::$LoadLevel$b__19_0
// Il2CppName: <LoadLevel>b__19_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLevelLoader::*)(GlobalNamespace::PreviewDifficultyBeatmapSet*)>(&GlobalNamespace::MultiplayerLevelLoader::$LoadLevel$b__19_0)> {
  static const MethodInfo* get() {
    static auto* set = &::il2cpp_utils::GetClassFromName("", "PreviewDifficultyBeatmapSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelLoader*), "<LoadLevel>b__19_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{set});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelLoader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
