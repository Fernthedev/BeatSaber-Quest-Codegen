// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MenuRpcManager
#include "GlobalNamespace/MenuRpcManager.hpp"
// Including type: RemoteProcedureCall`1
#include "GlobalNamespace/RemoteProcedureCall_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayersLobbyPermissionConfigurationNetSerializable
  class PlayersLobbyPermissionConfigurationNetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MenuRpcManager/SetPlayersPermissionConfigurationRpc
  // [TokenAttribute] Offset: FFFFFFFF
  class MenuRpcManager::SetPlayersPermissionConfigurationRpc : public GlobalNamespace::RemoteProcedureCall_1<GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*> {
    public:
    // Creating value type constructor for type: SetPlayersPermissionConfigurationRpc
    SetPlayersPermissionConfigurationRpc() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x16E99DC
    // Implemented from: RemoteProcedureCall`1
    // Base method: System.Void RemoteProcedureCall_1::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuRpcManager::SetPlayersPermissionConfigurationRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuRpcManager::SetPlayersPermissionConfigurationRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuRpcManager::SetPlayersPermissionConfigurationRpc*, creationType>()));
    }
  }; // MenuRpcManager/SetPlayersPermissionConfigurationRpc
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuRpcManager::SetPlayersPermissionConfigurationRpc*, "", "MenuRpcManager/SetPlayersPermissionConfigurationRpc");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuRpcManager::SetPlayersPermissionConfigurationRpc::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
