// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusNetworkPlayerModel
#include "GlobalNamespace/OculusNetworkPlayerModel.hpp"
// Including type: INetworkPlayer
#include "GlobalNamespace/INetworkPlayer.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
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
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Room
  class Room;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OculusNetworkPlayerModel/OculusNetworkPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusNetworkPlayerModel::OculusNetworkPlayer : public ::Il2CppObject/*, public GlobalNamespace::INetworkPlayer*/ {
    public:
    // private readonly OculusNetworkPlayerModel _playerModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::OculusNetworkPlayerModel* playerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusNetworkPlayerModel*) == 0x8);
    // private readonly System.UInt64 _id
    // Size: 0x8
    // Offset: 0x18
    uint64_t id;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private readonly System.String _userId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String _userName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Boolean _isMe
    // Size: 0x1
    // Offset: 0x30
    bool isMe;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private Oculus.Platform.Models.Room _room
    // Size: 0x8
    // Offset: 0x38
    Oculus::Platform::Models::Room* room;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::Room*) == 0x8);
    // private System.Nullable`1<BeatmapLevelSelectionMask> _cachedSelectionMask
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    System::Nullable_1<GlobalNamespace::BeatmapLevelSelectionMask> cachedSelectionMask;
    // private System.Nullable`1<GameplayServerConfiguration> _cachedConfiguration
    // Size: 0xFFFFFFFF
    // Offset: 0x60
    System::Nullable_1<GlobalNamespace::GameplayServerConfiguration> cachedConfiguration;
    // public System.Boolean removed
    // Size: 0x1
    // Offset: 0x7C
    bool removed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.String inviteToken
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppString* inviteToken;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private IConnectedPlayer <connectedPlayer>k__BackingField
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // private System.Boolean <isWaitingOnJoin>k__BackingField
    // Size: 0x1
    // Offset: 0x90
    bool isWaitingOnJoin;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <isWaitingOnInvite>k__BackingField
    // Size: 0x1
    // Offset: 0x91
    bool isWaitingOnInvite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OculusNetworkPlayer
    OculusNetworkPlayer(GlobalNamespace::OculusNetworkPlayerModel* playerModel_ = {}, uint64_t id_ = {}, ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, bool isMe_ = {}, Oculus::Platform::Models::Room* room_ = {}, System::Nullable_1<GlobalNamespace::BeatmapLevelSelectionMask> cachedSelectionMask_ = {}, System::Nullable_1<GlobalNamespace::GameplayServerConfiguration> cachedConfiguration_ = {}, bool removed_ = {}, ::Il2CppString* inviteToken_ = {}, GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}, bool isWaitingOnJoin_ = {}, bool isWaitingOnInvite_ = {}) noexcept : playerModel{playerModel_}, id{id_}, userId{userId_}, userName{userName_}, isMe{isMe_}, room{room_}, cachedSelectionMask{cachedSelectionMask_}, cachedConfiguration{cachedConfiguration_}, removed{removed_}, inviteToken{inviteToken_}, connectedPlayer{connectedPlayer_}, isWaitingOnJoin{isWaitingOnJoin_}, isWaitingOnInvite{isWaitingOnInvite_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayer
    operator GlobalNamespace::INetworkPlayer() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayer*>(this);
    }
    // Get instance field reference: private readonly OculusNetworkPlayerModel _playerModel
    GlobalNamespace::OculusNetworkPlayerModel*& dyn__playerModel();
    // Get instance field reference: private readonly System.UInt64 _id
    uint64_t& dyn__id();
    // Get instance field reference: private readonly System.String _userId
    ::Il2CppString*& dyn__userId();
    // Get instance field reference: private readonly System.String _userName
    ::Il2CppString*& dyn__userName();
    // Get instance field reference: private readonly System.Boolean _isMe
    bool& dyn__isMe();
    // Get instance field reference: private Oculus.Platform.Models.Room _room
    Oculus::Platform::Models::Room*& dyn__room();
    // Get instance field reference: private System.Nullable`1<BeatmapLevelSelectionMask> _cachedSelectionMask
    System::Nullable_1<GlobalNamespace::BeatmapLevelSelectionMask>& dyn__cachedSelectionMask();
    // Get instance field reference: private System.Nullable`1<GameplayServerConfiguration> _cachedConfiguration
    System::Nullable_1<GlobalNamespace::GameplayServerConfiguration>& dyn__cachedConfiguration();
    // Get instance field reference: public System.Boolean removed
    bool& dyn_removed();
    // Get instance field reference: public System.String inviteToken
    ::Il2CppString*& dyn_inviteToken();
    // Get instance field reference: private IConnectedPlayer <connectedPlayer>k__BackingField
    GlobalNamespace::IConnectedPlayer*& dyn_$connectedPlayer$k__BackingField();
    // Get instance field reference: private System.Boolean <isWaitingOnJoin>k__BackingField
    bool& dyn_$isWaitingOnJoin$k__BackingField();
    // Get instance field reference: private System.Boolean <isWaitingOnInvite>k__BackingField
    bool& dyn_$isWaitingOnInvite$k__BackingField();
    // public System.UInt64 get_id()
    // Offset: 0x125A95C
    uint64_t get_id();
    // public System.String get_userId()
    // Offset: 0x125A964
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x125A96C
    ::Il2CppString* get_userName();
    // public System.Boolean get_isMe()
    // Offset: 0x125A974
    bool get_isMe();
    // public System.Boolean get_isPartyOwner()
    // Offset: 0x1257C50
    bool get_isPartyOwner();
    // public System.Boolean get_isRoomOwner()
    // Offset: 0x125A97C
    bool get_isRoomOwner();
    // public System.Int32 get_currentPartySize()
    // Offset: 0x125AA18
    int get_currentPartySize();
    // public BeatmapLevelSelectionMask get_selectionMask()
    // Offset: 0x125AAE4
    GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();
    // public GameplayServerConfiguration get_configuration()
    // Offset: 0x125ACDC
    GlobalNamespace::GameplayServerConfiguration get_configuration();
    // public Oculus.Platform.Models.Room get_room()
    // Offset: 0x125B020
    Oculus::Platform::Models::Room* get_room();
    // public System.Void set_room(Oculus.Platform.Models.Room value)
    // Offset: 0x1258EBC
    void set_room(Oculus::Platform::Models::Room* value);
    // public IConnectedPlayer get_connectedPlayer()
    // Offset: 0x125B028
    GlobalNamespace::IConnectedPlayer* get_connectedPlayer();
    // public System.Void set_connectedPlayer(IConnectedPlayer value)
    // Offset: 0x125B030
    void set_connectedPlayer(GlobalNamespace::IConnectedPlayer* value);
    // public System.Boolean get_isMyPartyOwner()
    // Offset: 0x125B038
    bool get_isMyPartyOwner();
    // public System.Boolean get_canJoin()
    // Offset: 0x125B0B4
    bool get_canJoin();
    // public System.Boolean get_requiresPassword()
    // Offset: 0x125B1B8
    bool get_requiresPassword();
    // public System.Boolean get_isWaitingOnJoin()
    // Offset: 0x125B1C4
    bool get_isWaitingOnJoin();
    // private System.Void set_isWaitingOnJoin(System.Boolean value)
    // Offset: 0x125B1CC
    void set_isWaitingOnJoin(bool value);
    // public System.Boolean get_canInvite()
    // Offset: 0x125B1D8
    bool get_canInvite();
    // public System.Boolean get_isWaitingOnInvite()
    // Offset: 0x125B2C4
    bool get_isWaitingOnInvite();
    // public System.Void set_isWaitingOnInvite(System.Boolean value)
    // Offset: 0x125B2CC
    void set_isWaitingOnInvite(bool value);
    // public System.Boolean get_canKick()
    // Offset: 0x125B2D8
    bool get_canKick();
    // public System.Boolean get_canLeave()
    // Offset: 0x125B470
    bool get_canLeave();
    // public System.Boolean get_canBlock()
    // Offset: 0x125B530
    bool get_canBlock();
    // public System.Boolean get_canUnblock()
    // Offset: 0x125B53C
    bool get_canUnblock();
    // public System.Void .ctor(OculusNetworkPlayerModel playerModel, System.UInt64 id, System.String userName, System.Boolean isMe)
    // Offset: 0x1258F70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusNetworkPlayerModel::OculusNetworkPlayer* New_ctor(GlobalNamespace::OculusNetworkPlayerModel* playerModel, uint64_t id, ::Il2CppString* userName, bool isMe) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusNetworkPlayerModel::OculusNetworkPlayer*, creationType>(playerModel, id, userName, isMe)));
    }
    // public System.Void Join()
    // Offset: 0x125B0D4
    void Join();
    // public System.Void Join(System.String password)
    // Offset: 0x125B1C0
    void Join(::Il2CppString* password);
    // public System.Void Invite()
    // Offset: 0x125B258
    void Invite();
    // public System.Void Kick()
    // Offset: 0x125B354
    void Kick();
    // public System.Void Leave()
    // Offset: 0x125B50C
    void Leave();
    // public System.Void Block()
    // Offset: 0x125B538
    void Block();
    // public System.Void Unblock()
    // Offset: 0x125B544
    void Unblock();
    // public System.Void SendJoinResponse(System.Boolean accept)
    // Offset: 0x125B548
    void SendJoinResponse(bool accept);
    // public System.Void SendInviteResponse(System.Boolean accept)
    // Offset: 0x125B5A8
    void SendInviteResponse(bool accept);
    // public System.Boolean SameRoomAs(OculusNetworkPlayerModel/OculusNetworkPlayer other)
    // Offset: 0x1259578
    bool SameRoomAs(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer* other);
    // private System.Void <Join>b__40_0(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> result)
    // Offset: 0x125B5B4
    void $Join$b__40_0(Oculus::Platform::Message_1<Oculus::Platform::Models::Room*>* result);
  }; // OculusNetworkPlayerModel/OculusNetworkPlayer
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*, "", "OculusNetworkPlayerModel/OculusNetworkPlayer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isMe
// Il2CppName: get_isMe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isMe)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_isMe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isPartyOwner
// Il2CppName: get_isPartyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isPartyOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_isPartyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isRoomOwner
// Il2CppName: get_isRoomOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isRoomOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_isRoomOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_currentPartySize
// Il2CppName: get_currentPartySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_currentPartySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_currentPartySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_selectionMask
// Il2CppName: get_selectionMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelSelectionMask (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_selectionMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_selectionMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_configuration
// Il2CppName: get_configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerConfiguration (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_configuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_room
// Il2CppName: get_room
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::Room* (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_room)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_room", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::set_room
// Il2CppName: set_room
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)(Oculus::Platform::Models::Room*)>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::set_room)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Room")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "set_room", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_connectedPlayer
// Il2CppName: get_connectedPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnectedPlayer* (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_connectedPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_connectedPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::set_connectedPlayer
// Il2CppName: set_connectedPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)(GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::set_connectedPlayer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "set_connectedPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isMyPartyOwner
// Il2CppName: get_isMyPartyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isMyPartyOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_isMyPartyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canJoin
// Il2CppName: get_canJoin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canJoin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_canJoin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_requiresPassword
// Il2CppName: get_requiresPassword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_requiresPassword)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_requiresPassword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isWaitingOnJoin
// Il2CppName: get_isWaitingOnJoin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isWaitingOnJoin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_isWaitingOnJoin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::set_isWaitingOnJoin
// Il2CppName: set_isWaitingOnJoin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)(bool)>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::set_isWaitingOnJoin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "set_isWaitingOnJoin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canInvite
// Il2CppName: get_canInvite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canInvite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_canInvite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isWaitingOnInvite
// Il2CppName: get_isWaitingOnInvite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_isWaitingOnInvite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_isWaitingOnInvite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::set_isWaitingOnInvite
// Il2CppName: set_isWaitingOnInvite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)(bool)>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::set_isWaitingOnInvite)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "set_isWaitingOnInvite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canKick
// Il2CppName: get_canKick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canKick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_canKick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canLeave
// Il2CppName: get_canLeave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canLeave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_canLeave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canBlock
// Il2CppName: get_canBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_canBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canUnblock
// Il2CppName: get_canUnblock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::get_canUnblock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "get_canUnblock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Join
// Il2CppName: Join
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Join)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "Join", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Join
// Il2CppName: Join
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)(::Il2CppString*)>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Join)> {
  static const MethodInfo* get() {
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "Join", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Invite
// Il2CppName: Invite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Invite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "Invite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Kick
// Il2CppName: Kick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Kick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "Kick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Leave
// Il2CppName: Leave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Leave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "Leave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Block
// Il2CppName: Block
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Block)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "Block", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Unblock
// Il2CppName: Unblock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)()>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::Unblock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "Unblock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::SendJoinResponse
// Il2CppName: SendJoinResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)(bool)>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::SendJoinResponse)> {
  static const MethodInfo* get() {
    static auto* accept = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "SendJoinResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{accept});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::SendInviteResponse
// Il2CppName: SendInviteResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)(bool)>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::SendInviteResponse)> {
  static const MethodInfo* get() {
    static auto* accept = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "SendInviteResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{accept});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::SameRoomAs
// Il2CppName: SameRoomAs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*)>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::SameRoomAs)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "OculusNetworkPlayerModel/OculusNetworkPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "SameRoomAs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::$Join$b__40_0
// Il2CppName: <Join>b__40_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::Room*>*)>(&GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer::$Join$b__40_0)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Room")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*), "<Join>b__40_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
