// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ILevelEndActions
#include "GlobalNamespace/ILevelEndActions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: GameEnergyCounter
  class GameEnergyCounter;
  // Forward declaring type: PauseController
  class PauseController;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelGameplayManager
  class MissionLevelGameplayManager : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::ILevelEndActions*/ {
    public:
    // Nested type: GlobalNamespace::MissionLevelGameplayManager::InitData
    class InitData;
    // Nested type: GlobalNamespace::MissionLevelGameplayManager::GameState
    struct GameState;
    // Nested type: GlobalNamespace::MissionLevelGameplayManager::$Start$d__16
    class $Start$d__16;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MissionLevelGameplayManager/GameState
    struct GameState/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: GameState
      constexpr GameState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MissionLevelGameplayManager/GameState Intro
      static constexpr const int Intro = 0;
      // Get static field: static public MissionLevelGameplayManager/GameState Intro
      static GlobalNamespace::MissionLevelGameplayManager::GameState _get_Intro();
      // Set static field: static public MissionLevelGameplayManager/GameState Intro
      static void _set_Intro(GlobalNamespace::MissionLevelGameplayManager::GameState value);
      // static field const value: static public MissionLevelGameplayManager/GameState Playing
      static constexpr const int Playing = 1;
      // Get static field: static public MissionLevelGameplayManager/GameState Playing
      static GlobalNamespace::MissionLevelGameplayManager::GameState _get_Playing();
      // Set static field: static public MissionLevelGameplayManager/GameState Playing
      static void _set_Playing(GlobalNamespace::MissionLevelGameplayManager::GameState value);
      // static field const value: static public MissionLevelGameplayManager/GameState Paused
      static constexpr const int Paused = 2;
      // Get static field: static public MissionLevelGameplayManager/GameState Paused
      static GlobalNamespace::MissionLevelGameplayManager::GameState _get_Paused();
      // Set static field: static public MissionLevelGameplayManager/GameState Paused
      static void _set_Paused(GlobalNamespace::MissionLevelGameplayManager::GameState value);
      // static field const value: static public MissionLevelGameplayManager/GameState Finished
      static constexpr const int Finished = 3;
      // Get static field: static public MissionLevelGameplayManager/GameState Finished
      static GlobalNamespace::MissionLevelGameplayManager::GameState _get_Finished();
      // Set static field: static public MissionLevelGameplayManager/GameState Finished
      static void _set_Finished(GlobalNamespace::MissionLevelGameplayManager::GameState value);
      // static field const value: static public MissionLevelGameplayManager/GameState Failed
      static constexpr const int Failed = 4;
      // Get static field: static public MissionLevelGameplayManager/GameState Failed
      static GlobalNamespace::MissionLevelGameplayManager::GameState _get_Failed();
      // Set static field: static public MissionLevelGameplayManager/GameState Failed
      static void _set_Failed(GlobalNamespace::MissionLevelGameplayManager::GameState value);
    }; // MissionLevelGameplayManager/GameState
    #pragma pack(pop)
    static check_size<sizeof(MissionLevelGameplayManager::GameState), 0 + sizeof(int)> __GlobalNamespace_MissionLevelGameplayManager_GameStateSizeCheck;
    static_assert(sizeof(MissionLevelGameplayManager::GameState) == 0x4);
    // private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionObjectiveCheckersManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE1BD7C
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE1BD8C
    // private readonly GameSongController _gameSongController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameSongController* gameSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1BD9C
    // private readonly GameEnergyCounter _gameEnergyCounter
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::GameEnergyCounter* gameEnergyCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameEnergyCounter*) == 0x8);
    // [InjectAttribute] Offset: 0xE1BDAC
    // private readonly PauseController _pauseController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::PauseController* pauseController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PauseController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1BDBC
    // private readonly MissionLevelGameplayManager/InitData _initData
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MissionLevelGameplayManager::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionLevelGameplayManager::InitData*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1BDCC
    // private System.Action levelFailedEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action* levelFailedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1BDDC
    // private System.Action levelFinishedEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action* levelFinishedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private MissionLevelGameplayManager/GameState _gameState
    // Size: 0x4
    // Offset: 0x58
    GlobalNamespace::MissionLevelGameplayManager::GameState gameState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionLevelGameplayManager::GameState) == 0x4);
    // Creating value type constructor for type: MissionLevelGameplayManager
    MissionLevelGameplayManager(GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, GlobalNamespace::GameSongController* gameSongController_ = {}, GlobalNamespace::GameEnergyCounter* gameEnergyCounter_ = {}, GlobalNamespace::PauseController* pauseController_ = {}, GlobalNamespace::MissionLevelGameplayManager::InitData* initData_ = {}, System::Action* levelFailedEvent_ = {}, System::Action* levelFinishedEvent_ = {}, GlobalNamespace::MissionLevelGameplayManager::GameState gameState_ = {}) noexcept : missionObjectiveCheckersManager{missionObjectiveCheckersManager_}, gameScenesManager{gameScenesManager_}, gameSongController{gameSongController_}, gameEnergyCounter{gameEnergyCounter_}, pauseController{pauseController_}, initData{initData_}, levelFailedEvent{levelFailedEvent_}, levelFinishedEvent{levelFinishedEvent_}, gameState{gameState_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ILevelEndActions
    operator GlobalNamespace::ILevelEndActions() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILevelEndActions*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_levelFailedEvent(System.Action value)
    // Offset: 0x1095448
    void add_levelFailedEvent(System::Action* value);
    // public System.Void remove_levelFailedEvent(System.Action value)
    // Offset: 0x10954EC
    void remove_levelFailedEvent(System::Action* value);
    // public System.Void add_levelFinishedEvent(System.Action value)
    // Offset: 0x1095590
    void add_levelFinishedEvent(System::Action* value);
    // public System.Void remove_levelFinishedEvent(System.Action value)
    // Offset: 0x1095634
    void remove_levelFinishedEvent(System::Action* value);
    // protected System.Void Awake()
    // Offset: 0x10956D8
    void Awake();
    // private System.Collections.IEnumerator Start()
    // Offset: 0x10956E0
    System::Collections::IEnumerator* Start();
    // protected System.Void OnDestroy()
    // Offset: 0x109577C
    void OnDestroy();
    // private System.Void HandleGameEnergyDidReach0()
    // Offset: 0x1095AD4
    void HandleGameEnergyDidReach0();
    // private System.Void HandleMissionObjectiveCheckersManagerObjectiveDidFail()
    // Offset: 0x1095B20
    void HandleMissionObjectiveCheckersManagerObjectiveDidFail();
    // private System.Void HandleSongDidFinish()
    // Offset: 0x1095B50
    void HandleSongDidFinish();
    // private System.Void HandlePauseControllerCanPause(System.Action`1<System.Boolean> canPause)
    // Offset: 0x1095B80
    void HandlePauseControllerCanPause(System::Action_1<bool>* canPause);
    // private System.Void HandlePauseControllerDidPause()
    // Offset: 0x1095BFC
    void HandlePauseControllerDidPause();
    // private System.Void HandlePauseControllerDidResume()
    // Offset: 0x1095C14
    void HandlePauseControllerDidResume();
    // public System.Void .ctor()
    // Offset: 0x1095C2C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelGameplayManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionLevelGameplayManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelGameplayManager*, creationType>()));
    }
  }; // MissionLevelGameplayManager
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelGameplayManager), 88 + sizeof(GlobalNamespace::MissionLevelGameplayManager::GameState)> __GlobalNamespace_MissionLevelGameplayManagerSizeCheck;
  static_assert(sizeof(MissionLevelGameplayManager) == 0x5C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelGameplayManager*, "", "MissionLevelGameplayManager");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelGameplayManager::GameState, "", "MissionLevelGameplayManager/GameState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelGameplayManager::add_levelFailedEvent
// Il2CppName: add_levelFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelGameplayManager::*)(System::Action*)>(&GlobalNamespace::MissionLevelGameplayManager::add_levelFailedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelGameplayManager*), "add_levelFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelGameplayManager::remove_levelFailedEvent
// Il2CppName: remove_levelFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelGameplayManager::*)(System::Action*)>(&GlobalNamespace::MissionLevelGameplayManager::remove_levelFailedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelGameplayManager*), "remove_levelFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelGameplayManager::add_levelFinishedEvent
// Il2CppName: add_levelFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelGameplayManager::*)(System::Action*)>(&GlobalNamespace::MissionLevelGameplayManager::add_levelFinishedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelGameplayManager*), "add_levelFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelGameplayManager::remove_levelFinishedEvent
// Il2CppName: remove_levelFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelGameplayManager::*)(System::Action*)>(&GlobalNamespace::MissionLevelGameplayManager::remove_levelFinishedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelGameplayManager*), "remove_levelFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelGameplayManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelGameplayManager::*)()>(&GlobalNamespace::MissionLevelGameplayManager::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelGameplayManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelGameplayManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::MissionLevelGameplayManager::*)()>(&GlobalNamespace::MissionLevelGameplayManager::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelGameplayManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelGameplayManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelGameplayManager::*)()>(&GlobalNamespace::MissionLevelGameplayManager::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelGameplayManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelGameplayManager::HandleGameEnergyDidReach0
// Il2CppName: HandleGameEnergyDidReach0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelGameplayManager::*)()>(&GlobalNamespace::MissionLevelGameplayManager::HandleGameEnergyDidReach0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelGameplayManager*), "HandleGameEnergyDidReach0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelGameplayManager::HandleMissionObjectiveCheckersManagerObjectiveDidFail
// Il2CppName: HandleMissionObjectiveCheckersManagerObjectiveDidFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelGameplayManager::*)()>(&GlobalNamespace::MissionLevelGameplayManager::HandleMissionObjectiveCheckersManagerObjectiveDidFail)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelGameplayManager*), "HandleMissionObjectiveCheckersManagerObjectiveDidFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelGameplayManager::HandleSongDidFinish
// Il2CppName: HandleSongDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelGameplayManager::*)()>(&GlobalNamespace::MissionLevelGameplayManager::HandleSongDidFinish)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelGameplayManager*), "HandleSongDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerCanPause
// Il2CppName: HandlePauseControllerCanPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelGameplayManager::*)(System::Action_1<bool>*)>(&GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerCanPause)> {
  const MethodInfo* get() {
    static auto* canPause = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelGameplayManager*), "HandlePauseControllerCanPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canPause});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerDidPause
// Il2CppName: HandlePauseControllerDidPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelGameplayManager::*)()>(&GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerDidPause)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelGameplayManager*), "HandlePauseControllerDidPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerDidResume
// Il2CppName: HandlePauseControllerDidResume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelGameplayManager::*)()>(&GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerDidResume)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelGameplayManager*), "HandlePauseControllerDidResume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelGameplayManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
