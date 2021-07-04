// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: BeatmapDifficultyMask
  struct BeatmapDifficultyMask;
  // Forward declaring type: GameplayModifierMask
  struct GameplayModifierMask;
  // Forward declaring type: SongPackMask
  struct SongPackMask;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x33
  #pragma pack(push, 1)
  // Autogenerated type: UnifiedNetworkPlayerModel/UnifiedNetworkPlayer
  class UnifiedNetworkPlayerModel::UnifiedNetworkPlayer : public ::Il2CppObject/*, public GlobalNamespace::INetworkPlayer*/ {
    public:
    // private readonly UnifiedNetworkPlayerModel _playerModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::UnifiedNetworkPlayerModel* playerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UnifiedNetworkPlayerModel*) == 0x8);
    // private readonly System.String _userId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String _userName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Boolean _isMe
    // Size: 0x1
    // Offset: 0x28
    bool isMe;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isConnectionOwner
    // Size: 0x1
    // Offset: 0x29
    bool isConnectionOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isConnectionOwner and: sortIndex
    char __padding4[0x2] = {};
    // private System.Int32 _sortIndex
    // Size: 0x4
    // Offset: 0x2C
    int sortIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE2A0F0
    // private System.Boolean <isPlayer>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool isPlayer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xE2A100
    // private System.Boolean <isDedicatedServer>k__BackingField
    // Size: 0x1
    // Offset: 0x31
    bool isDedicatedServer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xE2A110
    // private System.Boolean <isSpectating>k__BackingField
    // Size: 0x1
    // Offset: 0x32
    bool isSpectating;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: UnifiedNetworkPlayer
    UnifiedNetworkPlayer(GlobalNamespace::UnifiedNetworkPlayerModel* playerModel_ = {}, ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, bool isMe_ = {}, bool isConnectionOwner_ = {}, int sortIndex_ = {}, bool isPlayer_ = {}, bool isDedicatedServer_ = {}, bool isSpectating_ = {}) noexcept : playerModel{playerModel_}, userId{userId_}, userName{userName_}, isMe{isMe_}, isConnectionOwner{isConnectionOwner_}, sortIndex{sortIndex_}, isPlayer{isPlayer_}, isDedicatedServer{isDedicatedServer_}, isSpectating{isSpectating_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayer
    operator GlobalNamespace::INetworkPlayer() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayer*>(this);
    }
    // public System.Void .ctor(UnifiedNetworkPlayerModel playerModel, System.String userId, System.String userName, System.Boolean isConnectionOwner, System.Boolean isMe)
    // Offset: 0x11269AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnifiedNetworkPlayerModel::UnifiedNetworkPlayer* New_ctor(GlobalNamespace::UnifiedNetworkPlayerModel* playerModel, ::Il2CppString* userId, ::Il2CppString* userName, bool isConnectionOwner, bool isMe) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*, creationType>(playerModel, userId, userName, isConnectionOwner, isMe)));
    }
    // public System.String get_userId()
    // Offset: 0x1129370
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x1129378
    ::Il2CppString* get_userName();
    // public System.Boolean get_isMe()
    // Offset: 0x1129380
    bool get_isMe();
    // public System.Int32 get_sortIndex()
    // Offset: 0x1129388
    int get_sortIndex();
    // public System.Void set_sortIndex(System.Int32 value)
    // Offset: 0x1129390
    void set_sortIndex(int value);
    // public System.Int32 get_currentPartySize()
    // Offset: 0x1129398
    int get_currentPartySize();
    // public System.Int32 get_maxPartySize()
    // Offset: 0x11293BC
    int get_maxPartySize();
    // public System.Boolean get_isMyPartyOwner()
    // Offset: 0x11293E0
    bool get_isMyPartyOwner();
    // public BeatmapDifficultyMask get_difficulties()
    // Offset: 0x11293E8
    GlobalNamespace::BeatmapDifficultyMask get_difficulties();
    // public GameplayModifierMask get_modifiers()
    // Offset: 0x1129424
    GlobalNamespace::GameplayModifierMask get_modifiers();
    // public SongPackMask get_songPacks()
    // Offset: 0x1129460
    GlobalNamespace::SongPackMask get_songPacks();
    // public System.Boolean get_isOpenParty()
    // Offset: 0x112949C
    bool get_isOpenParty();
    // public System.Boolean get_isConnected()
    // Offset: 0x11294CC
    bool get_isConnected();
    // public System.Boolean get_isPlayer()
    // Offset: 0x11294D4
    bool get_isPlayer();
    // public System.Void set_isPlayer(System.Boolean value)
    // Offset: 0x11294DC
    void set_isPlayer(bool value);
    // public System.Boolean get_isDedicatedServer()
    // Offset: 0x11294E8
    bool get_isDedicatedServer();
    // public System.Void set_isDedicatedServer(System.Boolean value)
    // Offset: 0x11294F0
    void set_isDedicatedServer(bool value);
    // public System.Boolean get_isSpectating()
    // Offset: 0x11294FC
    bool get_isSpectating();
    // public System.Void set_isSpectating(System.Boolean value)
    // Offset: 0x1129504
    void set_isSpectating(bool value);
    // public System.Boolean get_canJoin()
    // Offset: 0x1129510
    bool get_canJoin();
    // public System.Void Join()
    // Offset: 0x1129518
    void Join();
    // public System.Boolean get_requiresPassword()
    // Offset: 0x112951C
    bool get_requiresPassword();
    // public System.Void Join(System.String password)
    // Offset: 0x1129524
    void Join(::Il2CppString* password);
    // public System.Boolean get_isWaitingOnJoin()
    // Offset: 0x1129528
    bool get_isWaitingOnJoin();
    // public System.Boolean get_canInvite()
    // Offset: 0x1129530
    bool get_canInvite();
    // public System.Void Invite()
    // Offset: 0x1129538
    void Invite();
    // public System.Boolean get_isWaitingOnInvite()
    // Offset: 0x112953C
    bool get_isWaitingOnInvite();
    // public System.Boolean get_canKick()
    // Offset: 0x1129544
    bool get_canKick();
    // public System.Void Kick()
    // Offset: 0x1129584
    void Kick();
    // public System.Boolean get_canLeave()
    // Offset: 0x11295B8
    bool get_canLeave();
    // public System.Void Leave()
    // Offset: 0x11295D4
    void Leave();
    // public System.Boolean get_canBlock()
    // Offset: 0x11295F8
    bool get_canBlock();
    // public System.Void Block()
    // Offset: 0x1129600
    void Block();
    // public System.Boolean get_canUnblock()
    // Offset: 0x1129604
    bool get_canUnblock();
    // public System.Void Unblock()
    // Offset: 0x112960C
    void Unblock();
    // public System.Void SendJoinResponse(System.Boolean accept)
    // Offset: 0x1129610
    void SendJoinResponse(bool accept);
    // public System.Void SendInviteResponse(System.Boolean accept)
    // Offset: 0x1129614
    void SendInviteResponse(bool accept);
    // public System.Void SetIsConnectionOwner(System.Boolean isConnectionOwner)
    // Offset: 0x1129618
    void SetIsConnectionOwner(bool isConnectionOwner);
  }; // UnifiedNetworkPlayerModel/UnifiedNetworkPlayer
  #pragma pack(pop)
  static check_size<sizeof(UnifiedNetworkPlayerModel::UnifiedNetworkPlayer), 50 + sizeof(bool)> __GlobalNamespace_UnifiedNetworkPlayerModel_UnifiedNetworkPlayerSizeCheck;
  static_assert(sizeof(UnifiedNetworkPlayerModel::UnifiedNetworkPlayer) == 0x33);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*, "", "UnifiedNetworkPlayerModel/UnifiedNetworkPlayer");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_userId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_userName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isMe
// Il2CppName: get_isMe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isMe)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_isMe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_sortIndex
// Il2CppName: get_sortIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_sortIndex)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_sortIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::set_sortIndex
// Il2CppName: set_sortIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)(int)>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::set_sortIndex)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "set_sortIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_currentPartySize
// Il2CppName: get_currentPartySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_currentPartySize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_currentPartySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_maxPartySize
// Il2CppName: get_maxPartySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_maxPartySize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_maxPartySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isMyPartyOwner
// Il2CppName: get_isMyPartyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isMyPartyOwner)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_isMyPartyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_difficulties
// Il2CppName: get_difficulties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapDifficultyMask (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_difficulties)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_difficulties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_modifiers
// Il2CppName: get_modifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifierMask (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_modifiers)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_modifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_songPacks
// Il2CppName: get_songPacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SongPackMask (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_songPacks)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_songPacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isOpenParty
// Il2CppName: get_isOpenParty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isOpenParty)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_isOpenParty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isConnected
// Il2CppName: get_isConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isConnected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_isConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isPlayer
// Il2CppName: get_isPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isPlayer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_isPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::set_isPlayer
// Il2CppName: set_isPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)(bool)>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::set_isPlayer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "set_isPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isDedicatedServer
// Il2CppName: get_isDedicatedServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isDedicatedServer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_isDedicatedServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::set_isDedicatedServer
// Il2CppName: set_isDedicatedServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)(bool)>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::set_isDedicatedServer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "set_isDedicatedServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isSpectating
// Il2CppName: get_isSpectating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isSpectating)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_isSpectating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::set_isSpectating
// Il2CppName: set_isSpectating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)(bool)>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::set_isSpectating)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "set_isSpectating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canJoin
// Il2CppName: get_canJoin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canJoin)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_canJoin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Join
// Il2CppName: Join
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Join)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "Join", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_requiresPassword
// Il2CppName: get_requiresPassword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_requiresPassword)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_requiresPassword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Join
// Il2CppName: Join
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)(::Il2CppString*)>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Join)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "Join", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isWaitingOnJoin
// Il2CppName: get_isWaitingOnJoin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isWaitingOnJoin)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_isWaitingOnJoin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canInvite
// Il2CppName: get_canInvite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canInvite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_canInvite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Invite
// Il2CppName: Invite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Invite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "Invite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isWaitingOnInvite
// Il2CppName: get_isWaitingOnInvite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_isWaitingOnInvite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_isWaitingOnInvite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canKick
// Il2CppName: get_canKick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canKick)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_canKick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Kick
// Il2CppName: Kick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Kick)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "Kick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canLeave
// Il2CppName: get_canLeave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canLeave)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_canLeave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Leave
// Il2CppName: Leave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Leave)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "Leave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canBlock
// Il2CppName: get_canBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canBlock)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_canBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Block
// Il2CppName: Block
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Block)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "Block", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canUnblock
// Il2CppName: get_canUnblock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::get_canUnblock)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "get_canUnblock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Unblock
// Il2CppName: Unblock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::Unblock)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "Unblock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::SendJoinResponse
// Il2CppName: SendJoinResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)(bool)>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::SendJoinResponse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "SendJoinResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::SendInviteResponse
// Il2CppName: SendInviteResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)(bool)>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::SendInviteResponse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "SendInviteResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::SetIsConnectionOwner
// Il2CppName: SetIsConnectionOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::*)(bool)>(&GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer::SetIsConnectionOwner)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*), "SetIsConnectionOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
