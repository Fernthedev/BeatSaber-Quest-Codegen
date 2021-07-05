// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerSpecificSettingsNetSerializable
  class PlayerSpecificSettingsNetSerializable;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSpecificSettingsAtStartNetSerializable
  // [PreserveAttribute] Offset: DF03C0
  class PlayerSpecificSettingsAtStartNetSerializable : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDF0F60
    // private System.Collections.Generic.IReadOnlyList`1<PlayerSpecificSettingsNetSerializable> <activePlayerSpecificSettingsAtGameStart>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* activePlayerSpecificSettingsAtGameStart;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*) == 0x8);
    // private System.Collections.Generic.List`1<IConnectedPlayer> _activePlayersAtGameStart
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* activePlayersAtGameStart;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // Creating value type constructor for type: PlayerSpecificSettingsAtStartNetSerializable
    PlayerSpecificSettingsAtStartNetSerializable(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* activePlayerSpecificSettingsAtGameStart_ = {}, System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* activePlayersAtGameStart_ = {}) noexcept : activePlayerSpecificSettingsAtGameStart{activePlayerSpecificSettingsAtGameStart_}, activePlayersAtGameStart{activePlayersAtGameStart_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // public System.Collections.Generic.List`1<IConnectedPlayer> get_activePlayersAtGameStart()
    // Offset: 0x1509BCC
    System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* get_activePlayersAtGameStart();
    // public System.Collections.Generic.IReadOnlyList`1<PlayerSpecificSettingsNetSerializable> get_activePlayerSpecificSettingsAtGameStart()
    // Offset: 0x1509DBC
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* get_activePlayerSpecificSettingsAtGameStart();
    // private System.Void set_activePlayerSpecificSettingsAtGameStart(System.Collections.Generic.IReadOnlyList`1<PlayerSpecificSettingsNetSerializable> value)
    // Offset: 0x1509DC4
    void set_activePlayerSpecificSettingsAtGameStart(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);
    // public System.Void .ctor(System.Collections.Generic.List`1<PlayerSpecificSettingsNetSerializable> activePlayerSpecificSettingsAtGameStart)
    // Offset: 0x1509DD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSpecificSettingsAtStartNetSerializable* New_ctor(System::Collections::Generic::List_1<GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* activePlayerSpecificSettingsAtGameStart) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSpecificSettingsAtStartNetSerializable*, creationType>(activePlayerSpecificSettingsAtGameStart)));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1509E00
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x150A17C
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void .ctor()
    // Offset: 0x1509DCC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSpecificSettingsAtStartNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSpecificSettingsAtStartNetSerializable*, creationType>()));
    }
  }; // PlayerSpecificSettingsAtStartNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(PlayerSpecificSettingsAtStartNetSerializable), 24 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>*)> __GlobalNamespace_PlayerSpecificSettingsAtStartNetSerializableSizeCheck;
  static_assert(sizeof(PlayerSpecificSettingsAtStartNetSerializable) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, "", "PlayerSpecificSettingsAtStartNetSerializable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::get_activePlayersAtGameStart
// Il2CppName: get_activePlayersAtGameStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* (GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::*)()>(&GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::get_activePlayersAtGameStart)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*), "get_activePlayersAtGameStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::get_activePlayerSpecificSettingsAtGameStart
// Il2CppName: get_activePlayerSpecificSettingsAtGameStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* (GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::*)()>(&GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::get_activePlayerSpecificSettingsAtGameStart)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*), "get_activePlayerSpecificSettingsAtGameStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::set_activePlayerSpecificSettingsAtGameStart
// Il2CppName: set_activePlayerSpecificSettingsAtGameStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::*)(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*)>(&GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::set_activePlayerSpecificSettingsAtGameStart)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettingsNetSerializable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*), "set_activePlayerSpecificSettingsAtGameStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::Serialize)> {
  const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::Deserialize)> {
  const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
