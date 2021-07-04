// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: PlayersSpecificSettingsAtGameStartModel
  class PlayersSpecificSettingsAtGameStartModel;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: SongStartHandler
  class SongStartHandler : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // private readonly IGameplayRpcManager _gameplayRpcManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // private readonly PlayersSpecificSettingsAtGameStartModel _playersAtGameStartModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<System.String> _readyPlayers
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::HashSet_1<::Il2CppString*>* readyPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*) == 0x8);
    // private System.Boolean _started
    // Size: 0x1
    // Offset: 0x30
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: started and: startTime
    char __padding4[0x3] = {};
    // private System.Single _startTime
    // Size: 0x4
    // Offset: 0x34
    float startTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDF0FD0
    // private System.Action`1<System.Single> setSongStartSyncTimeEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<float>* setSongStartSyncTimeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<float>*) == 0x8);
    // Creating value type constructor for type: SongStartHandler
    SongStartHandler(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager_ = {}, GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel_ = {}, System::Collections::Generic::HashSet_1<::Il2CppString*>* readyPlayers_ = {}, bool started_ = {}, float startTime_ = {}, System::Action_1<float>* setSongStartSyncTimeEvent_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_}, gameplayRpcManager{gameplayRpcManager_}, playersAtGameStartModel{playersAtGameStartModel_}, readyPlayers{readyPlayers_}, started{started_}, startTime{startTime_}, setSongStartSyncTimeEvent{setSongStartSyncTimeEvent_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // static field const value: static private System.Single kFixedStartDelay
    static constexpr const float kFixedStartDelay = 0.25;
    // Get static field: static private System.Single kFixedStartDelay
    static float _get_kFixedStartDelay();
    // Set static field: static private System.Single kFixedStartDelay
    static void _set_kFixedStartDelay(float value);
    // public System.Single get_songStartSyncTime()
    // Offset: 0x237B210
    float get_songStartSyncTime();
    // public System.Void add_setSongStartSyncTimeEvent(System.Action`1<System.Single> value)
    // Offset: 0x237B218
    void add_setSongStartSyncTimeEvent(System::Action_1<float>* value);
    // public System.Void remove_setSongStartSyncTimeEvent(System.Action`1<System.Single> value)
    // Offset: 0x237B2BC
    void remove_setSongStartSyncTimeEvent(System::Action_1<float>* value);
    // public System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager, IGameplayRpcManager gameplayRpcManager, PlayersSpecificSettingsAtGameStartModel playersAtGameStartModel)
    // Offset: 0x237B360
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongStartHandler* New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongStartHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongStartHandler*, creationType>(multiplayerSessionManager, gameplayRpcManager, playersAtGameStartModel)));
    }
    // public System.Void GetLevelStartTimeOffset()
    // Offset: 0x237B3F8
    void GetLevelStartTimeOffset();
    // public System.Void Dispose()
    // Offset: 0x237B908
    void Dispose();
    // public System.Void ForceStart(System.String sessionGameId)
    // Offset: 0x237BB3C
    void ForceStart(::Il2CppString* sessionGameId);
    // private System.Void StartSong()
    // Offset: 0x237C158
    void StartSong();
    // private System.Void HandleSetGameplaySongReady(System.String user)
    // Offset: 0x237C418
    void HandleSetGameplaySongReady(::Il2CppString* user);
    // private System.Void HandleGetGameplaySongReady(System.String user)
    // Offset: 0x237C6D8
    void HandleGetGameplaySongReady(::Il2CppString* user);
    // private System.Void HandleSetSongStartTime(System.String user, System.Single time)
    // Offset: 0x237C78C
    void HandleSetSongStartTime(::Il2CppString* user, float time);
    // private System.Void Log(System.String message)
    // Offset: 0x237C80C
    void Log(::Il2CppString* message);
  }; // SongStartHandler
  #pragma pack(pop)
  static check_size<sizeof(SongStartHandler), 56 + sizeof(System::Action_1<float>*)> __GlobalNamespace_SongStartHandlerSizeCheck;
  static_assert(sizeof(SongStartHandler) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongStartHandler*, "", "SongStartHandler");
// Writing includes for template specializations
#include "System/Action_1.hpp"
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
#include "GlobalNamespace/IGameplayRpcManager.hpp"
#include "GlobalNamespace/PlayersSpecificSettingsAtGameStartModel.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SongStartHandler::get_songStartSyncTime
// Il2CppName: get_songStartSyncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SongStartHandler::*)()>(&GlobalNamespace::SongStartHandler::get_songStartSyncTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartHandler*), "get_songStartSyncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartHandler::add_setSongStartSyncTimeEvent
// Il2CppName: add_setSongStartSyncTimeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartHandler::*)(System::Action_1<float>*)>(&GlobalNamespace::SongStartHandler::add_setSongStartSyncTimeEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartHandler*), "add_setSongStartSyncTimeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<float>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartHandler::remove_setSongStartSyncTimeEvent
// Il2CppName: remove_setSongStartSyncTimeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartHandler::*)(System::Action_1<float>*)>(&GlobalNamespace::SongStartHandler::remove_setSongStartSyncTimeEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartHandler*), "remove_setSongStartSyncTimeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<float>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SongStartHandler::GetLevelStartTimeOffset
// Il2CppName: GetLevelStartTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartHandler::*)()>(&GlobalNamespace::SongStartHandler::GetLevelStartTimeOffset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartHandler*), "GetLevelStartTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartHandler::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartHandler::*)()>(&GlobalNamespace::SongStartHandler::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartHandler*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartHandler::ForceStart
// Il2CppName: ForceStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartHandler::*)(::Il2CppString*)>(&GlobalNamespace::SongStartHandler::ForceStart)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartHandler*), "ForceStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartHandler::StartSong
// Il2CppName: StartSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartHandler::*)()>(&GlobalNamespace::SongStartHandler::StartSong)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartHandler*), "StartSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartHandler::HandleSetGameplaySongReady
// Il2CppName: HandleSetGameplaySongReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartHandler::*)(::Il2CppString*)>(&GlobalNamespace::SongStartHandler::HandleSetGameplaySongReady)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartHandler*), "HandleSetGameplaySongReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartHandler::HandleGetGameplaySongReady
// Il2CppName: HandleGetGameplaySongReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartHandler::*)(::Il2CppString*)>(&GlobalNamespace::SongStartHandler::HandleGetGameplaySongReady)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartHandler*), "HandleGetGameplaySongReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartHandler::HandleSetSongStartTime
// Il2CppName: HandleSetSongStartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartHandler::*)(::Il2CppString*, float)>(&GlobalNamespace::SongStartHandler::HandleSetSongStartTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartHandler*), "HandleSetSongStartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongStartHandler::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongStartHandler::*)(::Il2CppString*)>(&GlobalNamespace::SongStartHandler::Log)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongStartHandler*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
