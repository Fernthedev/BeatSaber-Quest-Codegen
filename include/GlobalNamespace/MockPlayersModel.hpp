// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockPlayer
  class MockPlayer;
  // Forward declaring type: MockServer
  class MockServer;
  // Forward declaring type: MockPlayerSettings
  class MockPlayerSettings;
  // Forward declaring type: MockServerSettings
  class MockServerSettings;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MockPlayersModel
  class MockPlayersModel : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::MockPlayersModel::$get_quickplayServers$d__13
    class $get_quickplayServers$d__13;
    // [CompilerGeneratedAttribute] Offset: 0xE1DA84
    // private MockPlayer <localPlayer>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MockPlayer* localPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockPlayer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1DA94
    // private MockServer <quickplayServer>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MockServer* quickplayServer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockServer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1DAA4
    // private System.Collections.Generic.List`1<MockPlayer> <otherPlayers>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>* otherPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>*) == 0x8);
    // Creating value type constructor for type: MockPlayersModel
    MockPlayersModel(GlobalNamespace::MockPlayer* localPlayer_ = {}, GlobalNamespace::MockServer* quickplayServer_ = {}, System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>* otherPlayers_ = {}) noexcept : localPlayer{localPlayer_}, quickplayServer{quickplayServer_}, otherPlayers{otherPlayers_} {}
    // public MockPlayer get_localPlayer()
    // Offset: 0x1142094
    GlobalNamespace::MockPlayer* get_localPlayer();
    // private System.Void set_localPlayer(MockPlayer value)
    // Offset: 0x114209C
    void set_localPlayer(GlobalNamespace::MockPlayer* value);
    // public MockServer get_quickplayServer()
    // Offset: 0x11420A4
    GlobalNamespace::MockServer* get_quickplayServer();
    // private System.Void set_quickplayServer(MockServer value)
    // Offset: 0x11420AC
    void set_quickplayServer(GlobalNamespace::MockServer* value);
    // public System.Collections.Generic.List`1<MockPlayer> get_otherPlayers()
    // Offset: 0x11420B4
    System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>* get_otherPlayers();
    // private System.Void set_otherPlayers(System.Collections.Generic.List`1<MockPlayer> value)
    // Offset: 0x11420BC
    void set_otherPlayers(System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>* value);
    // public System.Collections.Generic.IEnumerable`1<MockServer> get_quickplayServers()
    // Offset: 0x11420C4
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::MockServer*>* get_quickplayServers();
    // public System.Void .ctor(MockPlayerSettings localPlayer, MockServerSettings quickplayServer, System.Collections.Generic.IReadOnlyList`1<MockPlayerSettings> otherPlayers)
    // Offset: 0x114217C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockPlayersModel* New_ctor(GlobalNamespace::MockPlayerSettings* localPlayer, GlobalNamespace::MockServerSettings* quickplayServer, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MockPlayerSettings*>* otherPlayers) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockPlayersModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockPlayersModel*, creationType>(localPlayer, quickplayServer, otherPlayers)));
    }
  }; // MockPlayersModel
  #pragma pack(pop)
  static check_size<sizeof(MockPlayersModel), 32 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>*)> __GlobalNamespace_MockPlayersModelSizeCheck;
  static_assert(sizeof(MockPlayersModel) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayersModel*, "", "MockPlayersModel");
// Writing includes for template specializations
#include "GlobalNamespace/MockPlayer.hpp"
#include "GlobalNamespace/MockServer.hpp"
#include "System/Collections/Generic/List_1.hpp"
#include "GlobalNamespace/MockPlayerSettings.hpp"
#include "GlobalNamespace/MockServerSettings.hpp"
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockPlayersModel::get_localPlayer
// Il2CppName: get_localPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MockPlayer* (GlobalNamespace::MockPlayersModel::*)()>(&GlobalNamespace::MockPlayersModel::get_localPlayer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayersModel*), "get_localPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayersModel::set_localPlayer
// Il2CppName: set_localPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayersModel::*)(GlobalNamespace::MockPlayer*)>(&GlobalNamespace::MockPlayersModel::set_localPlayer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayersModel*), "set_localPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MockPlayer*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayersModel::get_quickplayServer
// Il2CppName: get_quickplayServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MockServer* (GlobalNamespace::MockPlayersModel::*)()>(&GlobalNamespace::MockPlayersModel::get_quickplayServer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayersModel*), "get_quickplayServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayersModel::set_quickplayServer
// Il2CppName: set_quickplayServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayersModel::*)(GlobalNamespace::MockServer*)>(&GlobalNamespace::MockPlayersModel::set_quickplayServer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayersModel*), "set_quickplayServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MockServer*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayersModel::get_otherPlayers
// Il2CppName: get_otherPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>* (GlobalNamespace::MockPlayersModel::*)()>(&GlobalNamespace::MockPlayersModel::get_otherPlayers)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayersModel*), "get_otherPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayersModel::set_otherPlayers
// Il2CppName: set_otherPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayersModel::*)(System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>*)>(&GlobalNamespace::MockPlayersModel::set_otherPlayers)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayersModel*), "set_otherPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayersModel::get_quickplayServers
// Il2CppName: get_quickplayServers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::MockServer*>* (GlobalNamespace::MockPlayersModel::*)()>(&GlobalNamespace::MockPlayersModel::get_quickplayServers)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayersModel*), "get_quickplayServers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayersModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
