// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnifiedNetworkPlayerModel
#include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
// Including type: INetworkPlayer
#include "GlobalNamespace/INetworkPlayer.hpp"
// Including type: BeatmapLevelSelectionMask
#include "GlobalNamespace/BeatmapLevelSelectionMask.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: UnifiedNetworkPlayerModel/UnifiedNetworkServer
  // [TokenAttribute] Offset: FFFFFFFF
  class UnifiedNetworkPlayerModel::UnifiedNetworkServer : public ::Il2CppObject/*, public GlobalNamespace::INetworkPlayer*/ {
    public:
    // private readonly UnifiedNetworkPlayerModel _playerModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::UnifiedNetworkPlayerModel* playerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UnifiedNetworkPlayerModel*) == 0x8);
    // private readonly System.String _code
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* code;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly BeatmapLevelSelectionMask _selectionMask
    // Size: 0x18
    // Offset: 0x20
    GlobalNamespace::BeatmapLevelSelectionMask selectionMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // private readonly GameplayServerConfiguration _configuration
    // Size: 0x18
    // Offset: 0x38
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // private System.Int32 _currentPlayerCount
    // Size: 0x4
    // Offset: 0x50
    int currentPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _lastUpdateTime
    // Size: 0x4
    // Offset: 0x54
    float lastUpdateTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: UnifiedNetworkServer
    UnifiedNetworkServer(GlobalNamespace::UnifiedNetworkPlayerModel* playerModel_ = {}, ::Il2CppString* code_ = {}, GlobalNamespace::BeatmapLevelSelectionMask selectionMask_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}, int currentPlayerCount_ = {}, float lastUpdateTime_ = {}) noexcept : playerModel{playerModel_}, code{code_}, selectionMask{selectionMask_}, configuration{configuration_}, currentPlayerCount{currentPlayerCount_}, lastUpdateTime{lastUpdateTime_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayer
    operator GlobalNamespace::INetworkPlayer() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayer*>(this);
    }
    // Get instance field: private readonly UnifiedNetworkPlayerModel _playerModel
    GlobalNamespace::UnifiedNetworkPlayerModel* _get__playerModel();
    // Set instance field: private readonly UnifiedNetworkPlayerModel _playerModel
    void _set__playerModel(GlobalNamespace::UnifiedNetworkPlayerModel* value);
    // Get instance field: private readonly System.String _code
    ::Il2CppString* _get__code();
    // Set instance field: private readonly System.String _code
    void _set__code(::Il2CppString* value);
    // Get instance field: private readonly BeatmapLevelSelectionMask _selectionMask
    GlobalNamespace::BeatmapLevelSelectionMask _get__selectionMask();
    // Set instance field: private readonly BeatmapLevelSelectionMask _selectionMask
    void _set__selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value);
    // Get instance field: private readonly GameplayServerConfiguration _configuration
    GlobalNamespace::GameplayServerConfiguration _get__configuration();
    // Set instance field: private readonly GameplayServerConfiguration _configuration
    void _set__configuration(GlobalNamespace::GameplayServerConfiguration value);
    // Get instance field: private System.Int32 _currentPlayerCount
    int _get__currentPlayerCount();
    // Set instance field: private System.Int32 _currentPlayerCount
    void _set__currentPlayerCount(int value);
    // Get instance field: private System.Single _lastUpdateTime
    float _get__lastUpdateTime();
    // Set instance field: private System.Single _lastUpdateTime
    void _set__lastUpdateTime(float value);
    // private System.String INetworkPlayer.get_userId()
    // Offset: 0x1358718
    ::Il2CppString* INetworkPlayer_get_userId();
    // public System.String get_code()
    // Offset: 0x1358720
    ::Il2CppString* get_code();
    // private System.String INetworkPlayer.get_userName()
    // Offset: 0x1358728
    ::Il2CppString* INetworkPlayer_get_userName();
    // public System.String get_serverName()
    // Offset: 0x1358730
    ::Il2CppString* get_serverName();
    // public System.Boolean get_isMe()
    // Offset: 0x1358738
    bool get_isMe();
    // public System.Int32 get_currentPartySize()
    // Offset: 0x1358740
    int get_currentPartySize();
    // public BeatmapLevelSelectionMask get_selectionMask()
    // Offset: 0x1358748
    GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();
    // public GameplayServerConfiguration get_configuration()
    // Offset: 0x135875C
    GlobalNamespace::GameplayServerConfiguration get_configuration();
    // public IConnectedPlayer get_connectedPlayer()
    // Offset: 0x1358770
    GlobalNamespace::IConnectedPlayer* get_connectedPlayer();
    // public System.Boolean get_isMyPartyOwner()
    // Offset: 0x1358778
    bool get_isMyPartyOwner();
    // public System.Boolean get_hasTimedOut()
    // Offset: 0x1354BF4
    bool get_hasTimedOut();
    // public System.Boolean get_canJoin()
    // Offset: 0x1358780
    bool get_canJoin();
    // public System.Boolean get_requiresPassword()
    // Offset: 0x1358834
    bool get_requiresPassword();
    // public System.Boolean get_isWaitingOnJoin()
    // Offset: 0x1358840
    bool get_isWaitingOnJoin();
    // public System.Boolean get_canInvite()
    // Offset: 0x1358848
    bool get_canInvite();
    // public System.Boolean get_isWaitingOnInvite()
    // Offset: 0x1358854
    bool get_isWaitingOnInvite();
    // public System.Boolean get_canKick()
    // Offset: 0x135885C
    bool get_canKick();
    // public System.Boolean get_canLeave()
    // Offset: 0x1358868
    bool get_canLeave();
    // public System.Boolean get_canBlock()
    // Offset: 0x1358874
    bool get_canBlock();
    // public System.Boolean get_canUnblock()
    // Offset: 0x1358880
    bool get_canUnblock();
    // public System.Void .ctor(UnifiedNetworkPlayerModel playerModel, System.String code, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration)
    // Offset: 0x13567A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnifiedNetworkPlayerModel::UnifiedNetworkServer* New_ctor(GlobalNamespace::UnifiedNetworkPlayerModel* playerModel, ::Il2CppString* code, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnifiedNetworkPlayerModel::UnifiedNetworkServer*, creationType>(playerModel, code, selectionMask, configuration)));
    }
    // public System.Void Update(System.Int32 currentPlayerCount)
    // Offset: 0x1356808
    void Update(int currentPlayerCount);
    // public System.Void Join()
    // Offset: 0x1358788
    void Join();
    // public System.Void Join(System.String password)
    // Offset: 0x135883C
    void Join(::Il2CppString* password);
    // public System.Void Invite()
    // Offset: 0x1358850
    void Invite();
    // public System.Void Kick()
    // Offset: 0x1358864
    void Kick();
    // public System.Void Leave()
    // Offset: 0x1358870
    void Leave();
    // public System.Void Block()
    // Offset: 0x135887C
    void Block();
    // public System.Void Unblock()
    // Offset: 0x1358888
    void Unblock();
    // public System.Void SendJoinResponse(System.Boolean accept)
    // Offset: 0x135888C
    void SendJoinResponse(bool accept);
    // public System.Void SendInviteResponse(System.Boolean accept)
    // Offset: 0x1358890
    void SendInviteResponse(bool accept);
  }; // UnifiedNetworkPlayerModel/UnifiedNetworkServer
  #pragma pack(pop)
  static check_size<sizeof(UnifiedNetworkPlayerModel::UnifiedNetworkServer), 84 + sizeof(float)> __GlobalNamespace_UnifiedNetworkPlayerModel_UnifiedNetworkServerSizeCheck;
  static_assert(sizeof(UnifiedNetworkPlayerModel::UnifiedNetworkServer) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*, "", "UnifiedNetworkPlayerModel/UnifiedNetworkServer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::INetworkPlayer_get_userId
// Il2CppName: INetworkPlayer.get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::INetworkPlayer_get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "INetworkPlayer.get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_code
// Il2CppName: get_code
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_code)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_code", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::INetworkPlayer_get_userName
// Il2CppName: INetworkPlayer.get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::INetworkPlayer_get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "INetworkPlayer.get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_serverName
// Il2CppName: get_serverName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_serverName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_serverName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_isMe
// Il2CppName: get_isMe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_isMe)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_isMe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_currentPartySize
// Il2CppName: get_currentPartySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_currentPartySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_currentPartySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_selectionMask
// Il2CppName: get_selectionMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelSelectionMask (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_selectionMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_selectionMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_configuration
// Il2CppName: get_configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerConfiguration (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_configuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_connectedPlayer
// Il2CppName: get_connectedPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnectedPlayer* (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_connectedPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_connectedPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_isMyPartyOwner
// Il2CppName: get_isMyPartyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_isMyPartyOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_isMyPartyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_hasTimedOut
// Il2CppName: get_hasTimedOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_hasTimedOut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_hasTimedOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canJoin
// Il2CppName: get_canJoin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canJoin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_canJoin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_requiresPassword
// Il2CppName: get_requiresPassword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_requiresPassword)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_requiresPassword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_isWaitingOnJoin
// Il2CppName: get_isWaitingOnJoin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_isWaitingOnJoin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_isWaitingOnJoin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canInvite
// Il2CppName: get_canInvite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canInvite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_canInvite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_isWaitingOnInvite
// Il2CppName: get_isWaitingOnInvite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_isWaitingOnInvite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_isWaitingOnInvite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canKick
// Il2CppName: get_canKick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canKick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_canKick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canLeave
// Il2CppName: get_canLeave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canLeave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_canLeave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canBlock
// Il2CppName: get_canBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_canBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canUnblock
// Il2CppName: get_canUnblock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::get_canUnblock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "get_canUnblock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)(int)>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Update)> {
  static const MethodInfo* get() {
    static auto* currentPlayerCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentPlayerCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Join
// Il2CppName: Join
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Join)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "Join", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Join
// Il2CppName: Join
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)(::Il2CppString*)>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Join)> {
  static const MethodInfo* get() {
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "Join", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Invite
// Il2CppName: Invite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Invite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "Invite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Kick
// Il2CppName: Kick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Kick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "Kick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Leave
// Il2CppName: Leave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Leave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "Leave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Block
// Il2CppName: Block
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Block)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "Block", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Unblock
// Il2CppName: Unblock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::Unblock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "Unblock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::SendJoinResponse
// Il2CppName: SendJoinResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)(bool)>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::SendJoinResponse)> {
  static const MethodInfo* get() {
    static auto* accept = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "SendJoinResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{accept});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::SendInviteResponse
// Il2CppName: SendInviteResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::*)(bool)>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer::SendInviteResponse)> {
  static const MethodInfo* get() {
    static auto* accept = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*), "SendInviteResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{accept});
  }
};
