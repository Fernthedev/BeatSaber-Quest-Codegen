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
  // Forward declaring type: BeatmapLevelSelectionMask
  struct BeatmapLevelSelectionMask;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnifiedNetworkPlayerModel/UnifiedNetworkPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class UnifiedNetworkPlayerModel::UnifiedNetworkPlayer : public ::Il2CppObject/*, public GlobalNamespace::INetworkPlayer*/ {
    public:
    // private readonly UnifiedNetworkPlayerModel _playerModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::UnifiedNetworkPlayerModel* playerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UnifiedNetworkPlayerModel*) == 0x8);
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // Creating value type constructor for type: UnifiedNetworkPlayer
    UnifiedNetworkPlayer(GlobalNamespace::UnifiedNetworkPlayerModel* playerModel_ = {}, GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}) noexcept : playerModel{playerModel_}, connectedPlayer{connectedPlayer_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayer
    operator GlobalNamespace::INetworkPlayer() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayer*>(this);
    }
    // Get instance field: private readonly UnifiedNetworkPlayerModel _playerModel
    GlobalNamespace::UnifiedNetworkPlayerModel* _get__playerModel();
    // Set instance field: private readonly UnifiedNetworkPlayerModel _playerModel
    void _set__playerModel(GlobalNamespace::UnifiedNetworkPlayerModel* value);
    // Get instance field: private readonly IConnectedPlayer _connectedPlayer
    GlobalNamespace::IConnectedPlayer* _get__connectedPlayer();
    // Set instance field: private readonly IConnectedPlayer _connectedPlayer
    void _set__connectedPlayer(GlobalNamespace::IConnectedPlayer* value);
    // public System.String get_userId()
    // Offset: 0x1355E54
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x1358374
    ::Il2CppString* get_userName();
    // public System.Boolean get_isMe()
    // Offset: 0x1358428
    bool get_isMe();
    // public System.Int32 get_sortIndex()
    // Offset: 0x13551D0
    int get_sortIndex();
    // public System.Int32 get_currentPartySize()
    // Offset: 0x13584D8
    int get_currentPartySize();
    // public BeatmapLevelSelectionMask get_selectionMask()
    // Offset: 0x13584FC
    GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();
    // public GameplayServerConfiguration get_configuration()
    // Offset: 0x1358520
    GlobalNamespace::GameplayServerConfiguration get_configuration();
    // public System.Boolean get_isMyPartyOwner()
    // Offset: 0x1353E80
    bool get_isMyPartyOwner();
    // public IConnectedPlayer get_connectedPlayer()
    // Offset: 0x1358544
    GlobalNamespace::IConnectedPlayer* get_connectedPlayer();
    // public System.Boolean get_canJoin()
    // Offset: 0x135854C
    bool get_canJoin();
    // public System.Boolean get_requiresPassword()
    // Offset: 0x1358558
    bool get_requiresPassword();
    // public System.Boolean get_isWaitingOnJoin()
    // Offset: 0x1358564
    bool get_isWaitingOnJoin();
    // public System.Boolean get_canInvite()
    // Offset: 0x135856C
    bool get_canInvite();
    // public System.Boolean get_isWaitingOnInvite()
    // Offset: 0x1358578
    bool get_isWaitingOnInvite();
    // public System.Boolean get_canKick()
    // Offset: 0x1358580
    bool get_canKick();
    // public System.Boolean get_canLeave()
    // Offset: 0x13586B8
    bool get_canLeave();
    // public System.Boolean get_canBlock()
    // Offset: 0x13586F8
    bool get_canBlock();
    // public System.Boolean get_canUnblock()
    // Offset: 0x1358704
    bool get_canUnblock();
    // public System.Void .ctor(UnifiedNetworkPlayerModel playerModel, IConnectedPlayer connectedPlayer)
    // Offset: 0x1355C18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnifiedNetworkPlayerModel::UnifiedNetworkPlayer* New_ctor(GlobalNamespace::UnifiedNetworkPlayerModel* playerModel, GlobalNamespace::IConnectedPlayer* connectedPlayer) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*, creationType>(playerModel, connectedPlayer)));
    }
    // public System.Void Join()
    // Offset: 0x1358554
    void Join();
    // public System.Void Join(System.String password)
    // Offset: 0x1358560
    void Join(::Il2CppString* password);
    // public System.Void Invite()
    // Offset: 0x1358574
    void Invite();
    // public System.Void Kick()
    // Offset: 0x13585D4
    void Kick();
    // public System.Void Leave()
    // Offset: 0x13586D4
    void Leave();
    // public System.Void Block()
    // Offset: 0x1358700
    void Block();
    // public System.Void Unblock()
    // Offset: 0x135870C
    void Unblock();
    // public System.Void SendJoinResponse(System.Boolean accept)
    // Offset: 0x1358710
    void SendJoinResponse(bool accept);
    // public System.Void SendInviteResponse(System.Boolean accept)
    // Offset: 0x1358714
    void SendInviteResponse(bool accept);
  }; // UnifiedNetworkPlayerModel/UnifiedNetworkPlayer
  #pragma pack(pop)
  static check_size<sizeof(UnifiedNetworkPlayerModel::UnifiedNetworkPlayer), 24 + sizeof(GlobalNamespace::IConnectedPlayer*)> __GlobalNamespace_UnifiedNetworkPlayerModel_UnifiedNetworkPlayerSizeCheck;
  static_assert(sizeof(UnifiedNetworkPlayerModel::UnifiedNetworkPlayer) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*, "", "UnifiedNetworkPlayerModel/UnifiedNetworkPlayer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isMe
// Il2CppName: get_isMe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isMe)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_isMe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_sortIndex
// Il2CppName: get_sortIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_sortIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_sortIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_currentPartySize
// Il2CppName: get_currentPartySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_currentPartySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_currentPartySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_selectionMask
// Il2CppName: get_selectionMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelSelectionMask (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_selectionMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_selectionMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_configuration
// Il2CppName: get_configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerConfiguration (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_configuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isMyPartyOwner
// Il2CppName: get_isMyPartyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isMyPartyOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_isMyPartyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_connectedPlayer
// Il2CppName: get_connectedPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnectedPlayer* (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_connectedPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_connectedPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canJoin
// Il2CppName: get_canJoin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canJoin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_canJoin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_requiresPassword
// Il2CppName: get_requiresPassword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_requiresPassword)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_requiresPassword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isWaitingOnJoin
// Il2CppName: get_isWaitingOnJoin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isWaitingOnJoin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_isWaitingOnJoin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canInvite
// Il2CppName: get_canInvite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canInvite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_canInvite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isWaitingOnInvite
// Il2CppName: get_isWaitingOnInvite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isWaitingOnInvite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_isWaitingOnInvite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canKick
// Il2CppName: get_canKick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canKick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_canKick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canLeave
// Il2CppName: get_canLeave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canLeave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_canLeave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canBlock
// Il2CppName: get_canBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_canBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canUnblock
// Il2CppName: get_canUnblock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canUnblock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_canUnblock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Join
// Il2CppName: Join
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Join)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "Join", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Join
// Il2CppName: Join
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)(::Il2CppString*)>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Join)> {
  static const MethodInfo* get() {
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "Join", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Invite
// Il2CppName: Invite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Invite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "Invite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Kick
// Il2CppName: Kick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Kick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "Kick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Leave
// Il2CppName: Leave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Leave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "Leave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Block
// Il2CppName: Block
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Block)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "Block", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Unblock
// Il2CppName: Unblock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Unblock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "Unblock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::SendJoinResponse
// Il2CppName: SendJoinResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)(bool)>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::SendJoinResponse)> {
  static const MethodInfo* get() {
    static auto* accept = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "SendJoinResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{accept});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::SendInviteResponse
// Il2CppName: SendInviteResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)(bool)>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::SendInviteResponse)> {
  static const MethodInfo* get() {
    static auto* accept = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "SendInviteResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{accept});
  }
};
