// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IScoreSyncStateManager
  class IScoreSyncStateManager;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerScoreProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerScoreProvider : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerScoreProvider::RankedPlayer
    class RankedPlayer;
    // Nested type: GlobalNamespace::MultiplayerScoreProvider::$$c
    class $$c;
    // Nested type: GlobalNamespace::MultiplayerScoreProvider::$$c__DisplayClass18_0
    class $$c__DisplayClass18_0;
    // [InjectAttribute] Offset: 0xE41834
    // private readonly IScoreSyncStateManager _scoreSyncStateManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IScoreSyncStateManager* scoreSyncStateManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreSyncStateManager*) == 0x8);
    // private MultiplayerScoreProvider/RankedPlayer <firstPlayer>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* firstPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*) == 0x8);
    // private System.Action`1<MultiplayerScoreProvider/RankedPlayer> firstPlayerDidChangeEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* firstPlayerDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*) == 0x8);
    // private System.Single _sharedOffsetSyncTime
    // Size: 0x4
    // Offset: 0x30
    float sharedOffsetSyncTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: sharedOffsetSyncTime and: rankedPlayers
    char __padding3[0x4] = {};
    // private readonly System.Collections.Generic.List`1<MultiplayerScoreProvider/RankedPlayer> _rankedPlayers
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* rankedPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,MultiplayerScoreProvider/RankedPlayer> _players
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* players;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*) == 0x8);
    // Creating value type constructor for type: MultiplayerScoreProvider
    MultiplayerScoreProvider(GlobalNamespace::IScoreSyncStateManager* scoreSyncStateManager_ = {}, GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* firstPlayer_ = {}, System::Action_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* firstPlayerDidChangeEvent_ = {}, float sharedOffsetSyncTime_ = {}, System::Collections::Generic::List_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* rankedPlayers_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* players_ = {}) noexcept : scoreSyncStateManager{scoreSyncStateManager_}, firstPlayer{firstPlayer_}, firstPlayerDidChangeEvent{firstPlayerDidChangeEvent_}, sharedOffsetSyncTime{sharedOffsetSyncTime_}, rankedPlayers{rankedPlayers_}, players{players_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly IScoreSyncStateManager _scoreSyncStateManager
    GlobalNamespace::IScoreSyncStateManager*& dyn__scoreSyncStateManager();
    // Get instance field reference: private MultiplayerScoreProvider/RankedPlayer <firstPlayer>k__BackingField
    GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*& dyn_$firstPlayer$k__BackingField();
    // Get instance field reference: private System.Action`1<MultiplayerScoreProvider/RankedPlayer> firstPlayerDidChangeEvent
    System::Action_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*& dyn_firstPlayerDidChangeEvent();
    // Get instance field reference: private System.Single _sharedOffsetSyncTime
    float& dyn__sharedOffsetSyncTime();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<MultiplayerScoreProvider/RankedPlayer> _rankedPlayers
    System::Collections::Generic::List_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*& dyn__rankedPlayers();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,MultiplayerScoreProvider/RankedPlayer> _players
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*& dyn__players();
    // public System.Boolean get_scoresAvailable()
    // Offset: 0x103B554
    bool get_scoresAvailable();
    // public MultiplayerScoreProvider/RankedPlayer get_firstPlayer()
    // Offset: 0x103FBF0
    GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* get_firstPlayer();
    // private System.Void set_firstPlayer(MultiplayerScoreProvider/RankedPlayer value)
    // Offset: 0x103FBF8
    void set_firstPlayer(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* value);
    // public System.Collections.Generic.IReadOnlyList`1<MultiplayerScoreProvider/RankedPlayer> get_rankedPlayers()
    // Offset: 0x103FC00
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* get_rankedPlayers();
    // public System.Void add_firstPlayerDidChangeEvent(System.Action`1<MultiplayerScoreProvider/RankedPlayer> value)
    // Offset: 0x103B578
    void add_firstPlayerDidChangeEvent(System::Action_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* value);
    // public System.Void remove_firstPlayerDidChangeEvent(System.Action`1<MultiplayerScoreProvider/RankedPlayer> value)
    // Offset: 0x103B704
    void remove_firstPlayerDidChangeEvent(System::Action_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* value);
    // protected System.Void Update()
    // Offset: 0x103FC08
    void Update();
    // public System.Boolean TryGetScore(System.String userId, out MultiplayerScoreProvider/RankedPlayer data)
    // Offset: 0x1040430
    bool TryGetScore(::Il2CppString* userId, ByRef<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*> data);
    // public System.Int32 GetPositionOfPlayer(System.String userId)
    // Offset: 0x103BABC
    int GetPositionOfPlayer(::Il2CppString* userId);
    // public System.Void .ctor()
    // Offset: 0x10404A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerScoreProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerScoreProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerScoreProvider*, creationType>()));
    }
  }; // MultiplayerScoreProvider
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerScoreProvider), 64 + sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*)> __GlobalNamespace_MultiplayerScoreProviderSizeCheck;
  static_assert(sizeof(MultiplayerScoreProvider) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerScoreProvider*, "", "MultiplayerScoreProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::get_scoresAvailable
// Il2CppName: get_scoresAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerScoreProvider::*)()>(&GlobalNamespace::MultiplayerScoreProvider::get_scoresAvailable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider*), "get_scoresAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::get_firstPlayer
// Il2CppName: get_firstPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* (GlobalNamespace::MultiplayerScoreProvider::*)()>(&GlobalNamespace::MultiplayerScoreProvider::get_firstPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider*), "get_firstPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::set_firstPlayer
// Il2CppName: set_firstPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreProvider::*)(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*)>(&GlobalNamespace::MultiplayerScoreProvider::set_firstPlayer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "MultiplayerScoreProvider/RankedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider*), "set_firstPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::get_rankedPlayers
// Il2CppName: get_rankedPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* (GlobalNamespace::MultiplayerScoreProvider::*)()>(&GlobalNamespace::MultiplayerScoreProvider::get_rankedPlayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider*), "get_rankedPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::add_firstPlayerDidChangeEvent
// Il2CppName: add_firstPlayerDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreProvider::*)(System::Action_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*)>(&GlobalNamespace::MultiplayerScoreProvider::add_firstPlayerDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerScoreProvider/RankedPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider*), "add_firstPlayerDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::remove_firstPlayerDidChangeEvent
// Il2CppName: remove_firstPlayerDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreProvider::*)(System::Action_1<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*)>(&GlobalNamespace::MultiplayerScoreProvider::remove_firstPlayerDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerScoreProvider/RankedPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider*), "remove_firstPlayerDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerScoreProvider::*)()>(&GlobalNamespace::MultiplayerScoreProvider::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::TryGetScore
// Il2CppName: TryGetScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerScoreProvider::*)(::Il2CppString*, ByRef<GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>)>(&GlobalNamespace::MultiplayerScoreProvider::TryGetScore)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("", "MultiplayerScoreProvider/RankedPlayer")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider*), "TryGetScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::GetPositionOfPlayer
// Il2CppName: GetPositionOfPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MultiplayerScoreProvider::*)(::Il2CppString*)>(&GlobalNamespace::MultiplayerScoreProvider::GetPositionOfPlayer)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider*), "GetPositionOfPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
