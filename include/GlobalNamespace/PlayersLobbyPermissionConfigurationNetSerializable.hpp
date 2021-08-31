// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerLobbyPermissionConfigurationNetSerializable
  class PlayerLobbyPermissionConfigurationNetSerializable;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayersLobbyPermissionConfigurationNetSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayersLobbyPermissionConfigurationNetSerializable : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable*/ {
    public:
    // private System.Collections.Generic.List`1<PlayerLobbyPermissionConfigurationNetSerializable> _playersPermission
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* playersPermission;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>*) == 0x8);
    // Creating value type constructor for type: PlayersLobbyPermissionConfigurationNetSerializable
    PlayersLobbyPermissionConfigurationNetSerializable(System::Collections::Generic::List_1<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* playersPermission_ = {}) noexcept : playersPermission{playersPermission_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating conversion operator: operator System::Collections::Generic::List_1<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>*
    constexpr operator System::Collections::Generic::List_1<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>*() const noexcept {
      return playersPermission;
    }
    // Get instance field: private System.Collections.Generic.List`1<PlayerLobbyPermissionConfigurationNetSerializable> _playersPermission
    System::Collections::Generic::List_1<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* _get__playersPermission();
    // Set instance field: private System.Collections.Generic.List`1<PlayerLobbyPermissionConfigurationNetSerializable> _playersPermission
    void _set__playersPermission(System::Collections::Generic::List_1<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* value);
    // public System.Collections.Generic.List`1<PlayerLobbyPermissionConfigurationNetSerializable> get_playersPermission()
    // Offset: 0x237C314
    System::Collections::Generic::List_1<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* get_playersPermission();
    // public System.Void .ctor(System.Collections.Generic.List`1<PlayerLobbyPermissionConfigurationNetSerializable> playersPermission)
    // Offset: 0x237C31C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayersLobbyPermissionConfigurationNetSerializable* New_ctor(System::Collections::Generic::List_1<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* playersPermission) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayersLobbyPermissionConfigurationNetSerializable*, creationType>(playersPermission)));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x237C350
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x237C470
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void .ctor()
    // Offset: 0x237C348
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayersLobbyPermissionConfigurationNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayersLobbyPermissionConfigurationNetSerializable*, creationType>()));
    }
  }; // PlayersLobbyPermissionConfigurationNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(PlayersLobbyPermissionConfigurationNetSerializable), 16 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>*)> __GlobalNamespace_PlayersLobbyPermissionConfigurationNetSerializableSizeCheck;
  static_assert(sizeof(PlayersLobbyPermissionConfigurationNetSerializable) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*, "", "PlayersLobbyPermissionConfigurationNetSerializable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::get_playersPermission
// Il2CppName: get_playersPermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* (GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::*)()>(&GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::get_playersPermission)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*), "get_playersPermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
