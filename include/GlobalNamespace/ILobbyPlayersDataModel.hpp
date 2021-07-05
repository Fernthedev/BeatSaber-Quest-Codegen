// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IReadOnlyDictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ILobbyPlayerDataModel
  class ILobbyPlayerDataModel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ILobbyPlayersDataModel
  class ILobbyPlayersDataModel {
    public:
    // Creating value type constructor for type: ILobbyPlayersDataModel
    ILobbyPlayersDataModel() noexcept {}
    // public System.Void add_didChangeEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void add_didChangeEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_didChangeEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void remove_didChangeEvent(System::Action_1<::Il2CppString*>* value);
    // public System.String get_localUserId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_localUserId();
    // public System.String get_hostUserId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_hostUserId();
    // public System.Collections.Generic.IReadOnlyDictionary`2<System.String,ILobbyPlayerDataModel> get_playersData()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IReadOnlyDictionary_2<::Il2CppString*, GlobalNamespace::ILobbyPlayerDataModel*>* get_playersData();
    // public ILobbyPlayerDataModel GetLobbyPlayerDataModel(System.String userId)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::ILobbyPlayerDataModel* GetLobbyPlayerDataModel(::Il2CppString* userId);
    // public IPreviewBeatmapLevel GetPlayerBeatmapLevel(System.String userId)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IPreviewBeatmapLevel* GetPlayerBeatmapLevel(::Il2CppString* userId);
    // public BeatmapDifficulty GetPlayerBeatmapDifficulty(System.String userId)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapDifficulty GetPlayerBeatmapDifficulty(::Il2CppString* userId);
    // public BeatmapCharacteristicSO GetPlayerBeatmapCharacteristic(System.String userId)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapCharacteristicSO* GetPlayerBeatmapCharacteristic(::Il2CppString* userId);
    // public GameplayModifiers GetPlayerGameplayModifiers(System.String userId)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::GameplayModifiers* GetPlayerGameplayModifiers(::Il2CppString* userId);
    // public System.Boolean GetPlayerIsActive(System.String userId)
    // Offset: 0xFFFFFFFF
    bool GetPlayerIsActive(::Il2CppString* userId);
    // public System.Boolean GetPlayerIsReady(System.String userId)
    // Offset: 0xFFFFFFFF
    bool GetPlayerIsReady(::Il2CppString* userId);
    // public System.Boolean GetPlayerIsInLobby(System.String userId)
    // Offset: 0xFFFFFFFF
    bool GetPlayerIsInLobby(::Il2CppString* userId);
    // public System.Void SetLocalPlayerBeatmapLevel(System.String levelId, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO characteristic)
    // Offset: 0xFFFFFFFF
    void SetLocalPlayerBeatmapLevel(::Il2CppString* levelId, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* characteristic);
    // public System.Void ClearLocalPlayerBeatmapLevel()
    // Offset: 0xFFFFFFFF
    void ClearLocalPlayerBeatmapLevel();
    // public System.Void SetLocalPlayerGameplayModifiers(GameplayModifiers modifiers)
    // Offset: 0xFFFFFFFF
    void SetLocalPlayerGameplayModifiers(GlobalNamespace::GameplayModifiers* modifiers);
    // public System.Void ClearLocalPlayerGameplayModifiers()
    // Offset: 0xFFFFFFFF
    void ClearLocalPlayerGameplayModifiers();
    // public System.Void SetLocalPlayerIsActive(System.Boolean isActive)
    // Offset: 0xFFFFFFFF
    void SetLocalPlayerIsActive(bool isActive);
    // public System.Void SetLocalPlayerIsReady(System.Boolean isReady)
    // Offset: 0xFFFFFFFF
    void SetLocalPlayerIsReady(bool isReady);
    // public System.Void SetLocalPlayerIsInLobby(System.Boolean isInLobby)
    // Offset: 0xFFFFFFFF
    void SetLocalPlayerIsInLobby(bool isInLobby);
    // public System.Void ClearData()
    // Offset: 0xFFFFFFFF
    void ClearData();
    // public System.Void ClearRecommendations()
    // Offset: 0xFFFFFFFF
    void ClearRecommendations();
    // public System.Void Activate()
    // Offset: 0xFFFFFFFF
    void Activate();
    // public System.Void Deactivate()
    // Offset: 0xFFFFFFFF
    void Deactivate();
  }; // ILobbyPlayersDataModel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ILobbyPlayersDataModel*, "", "ILobbyPlayersDataModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::add_didChangeEvent
// Il2CppName: add_didChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayersDataModel::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::ILobbyPlayersDataModel::add_didChangeEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "add_didChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::remove_didChangeEvent
// Il2CppName: remove_didChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayersDataModel::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::ILobbyPlayersDataModel::remove_didChangeEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "remove_didChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::get_localUserId
// Il2CppName: get_localUserId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::ILobbyPlayersDataModel::*)()>(&GlobalNamespace::ILobbyPlayersDataModel::get_localUserId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "get_localUserId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::get_hostUserId
// Il2CppName: get_hostUserId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::ILobbyPlayersDataModel::*)()>(&GlobalNamespace::ILobbyPlayersDataModel::get_hostUserId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "get_hostUserId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::get_playersData
// Il2CppName: get_playersData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyDictionary_2<::Il2CppString*, GlobalNamespace::ILobbyPlayerDataModel*>* (GlobalNamespace::ILobbyPlayersDataModel::*)()>(&GlobalNamespace::ILobbyPlayersDataModel::get_playersData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "get_playersData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::GetLobbyPlayerDataModel
// Il2CppName: GetLobbyPlayerDataModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ILobbyPlayerDataModel* (GlobalNamespace::ILobbyPlayersDataModel::*)(::Il2CppString*)>(&GlobalNamespace::ILobbyPlayersDataModel::GetLobbyPlayerDataModel)> {
  const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "GetLobbyPlayerDataModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::GetPlayerBeatmapLevel
// Il2CppName: GetPlayerBeatmapLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IPreviewBeatmapLevel* (GlobalNamespace::ILobbyPlayersDataModel::*)(::Il2CppString*)>(&GlobalNamespace::ILobbyPlayersDataModel::GetPlayerBeatmapLevel)> {
  const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "GetPlayerBeatmapLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::GetPlayerBeatmapDifficulty
// Il2CppName: GetPlayerBeatmapDifficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapDifficulty (GlobalNamespace::ILobbyPlayersDataModel::*)(::Il2CppString*)>(&GlobalNamespace::ILobbyPlayersDataModel::GetPlayerBeatmapDifficulty)> {
  const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "GetPlayerBeatmapDifficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::GetPlayerBeatmapCharacteristic
// Il2CppName: GetPlayerBeatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::ILobbyPlayersDataModel::*)(::Il2CppString*)>(&GlobalNamespace::ILobbyPlayersDataModel::GetPlayerBeatmapCharacteristic)> {
  const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "GetPlayerBeatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::GetPlayerGameplayModifiers
// Il2CppName: GetPlayerGameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers* (GlobalNamespace::ILobbyPlayersDataModel::*)(::Il2CppString*)>(&GlobalNamespace::ILobbyPlayersDataModel::GetPlayerGameplayModifiers)> {
  const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "GetPlayerGameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::GetPlayerIsActive
// Il2CppName: GetPlayerIsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ILobbyPlayersDataModel::*)(::Il2CppString*)>(&GlobalNamespace::ILobbyPlayersDataModel::GetPlayerIsActive)> {
  const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "GetPlayerIsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::GetPlayerIsReady
// Il2CppName: GetPlayerIsReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ILobbyPlayersDataModel::*)(::Il2CppString*)>(&GlobalNamespace::ILobbyPlayersDataModel::GetPlayerIsReady)> {
  const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "GetPlayerIsReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::GetPlayerIsInLobby
// Il2CppName: GetPlayerIsInLobby
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ILobbyPlayersDataModel::*)(::Il2CppString*)>(&GlobalNamespace::ILobbyPlayersDataModel::GetPlayerIsInLobby)> {
  const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "GetPlayerIsInLobby", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::SetLocalPlayerBeatmapLevel
// Il2CppName: SetLocalPlayerBeatmapLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayersDataModel::*)(::Il2CppString*, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::ILobbyPlayersDataModel::SetLocalPlayerBeatmapLevel)> {
  const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* beatmapDifficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    static auto* characteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "SetLocalPlayerBeatmapLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId, beatmapDifficulty, characteristic});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::ClearLocalPlayerBeatmapLevel
// Il2CppName: ClearLocalPlayerBeatmapLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayersDataModel::*)()>(&GlobalNamespace::ILobbyPlayersDataModel::ClearLocalPlayerBeatmapLevel)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "ClearLocalPlayerBeatmapLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::SetLocalPlayerGameplayModifiers
// Il2CppName: SetLocalPlayerGameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayersDataModel::*)(GlobalNamespace::GameplayModifiers*)>(&GlobalNamespace::ILobbyPlayersDataModel::SetLocalPlayerGameplayModifiers)> {
  const MethodInfo* get() {
    static auto* modifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "SetLocalPlayerGameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{modifiers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::ClearLocalPlayerGameplayModifiers
// Il2CppName: ClearLocalPlayerGameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayersDataModel::*)()>(&GlobalNamespace::ILobbyPlayersDataModel::ClearLocalPlayerGameplayModifiers)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "ClearLocalPlayerGameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::SetLocalPlayerIsActive
// Il2CppName: SetLocalPlayerIsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayersDataModel::*)(bool)>(&GlobalNamespace::ILobbyPlayersDataModel::SetLocalPlayerIsActive)> {
  const MethodInfo* get() {
    static auto* isActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "SetLocalPlayerIsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isActive});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::SetLocalPlayerIsReady
// Il2CppName: SetLocalPlayerIsReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayersDataModel::*)(bool)>(&GlobalNamespace::ILobbyPlayersDataModel::SetLocalPlayerIsReady)> {
  const MethodInfo* get() {
    static auto* isReady = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "SetLocalPlayerIsReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isReady});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::SetLocalPlayerIsInLobby
// Il2CppName: SetLocalPlayerIsInLobby
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayersDataModel::*)(bool)>(&GlobalNamespace::ILobbyPlayersDataModel::SetLocalPlayerIsInLobby)> {
  const MethodInfo* get() {
    static auto* isInLobby = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "SetLocalPlayerIsInLobby", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isInLobby});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::ClearData
// Il2CppName: ClearData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayersDataModel::*)()>(&GlobalNamespace::ILobbyPlayersDataModel::ClearData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "ClearData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::ClearRecommendations
// Il2CppName: ClearRecommendations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayersDataModel::*)()>(&GlobalNamespace::ILobbyPlayersDataModel::ClearRecommendations)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "ClearRecommendations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayersDataModel::*)()>(&GlobalNamespace::ILobbyPlayersDataModel::Activate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ILobbyPlayersDataModel::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ILobbyPlayersDataModel::*)()>(&GlobalNamespace::ILobbyPlayersDataModel::Deactivate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ILobbyPlayersDataModel*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
