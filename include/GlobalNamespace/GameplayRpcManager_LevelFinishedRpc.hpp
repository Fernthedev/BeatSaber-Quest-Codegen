// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameplayRpcManager
#include "GlobalNamespace/GameplayRpcManager.hpp"
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
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: GameplayRpcManager/LevelFinishedRpc
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplayRpcManager::LevelFinishedRpc : public GlobalNamespace::RemoteProcedureCall_1<GlobalNamespace::MultiplayerLevelCompletionResults*> {
    public:
    // Creating value type constructor for type: LevelFinishedRpc
    LevelFinishedRpc() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1329A50
    // Implemented from: RemoteProcedureCall`1
    // Base method: System.Void RemoteProcedureCall_1::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayRpcManager::LevelFinishedRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayRpcManager::LevelFinishedRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayRpcManager::LevelFinishedRpc*, creationType>()));
    }
  }; // GameplayRpcManager/LevelFinishedRpc
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayRpcManager::LevelFinishedRpc*, "", "GameplayRpcManager/LevelFinishedRpc");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayRpcManager::LevelFinishedRpc::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
