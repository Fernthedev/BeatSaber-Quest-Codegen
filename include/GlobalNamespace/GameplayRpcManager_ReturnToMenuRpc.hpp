// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameplayRpcManager
#include "GlobalNamespace/GameplayRpcManager.hpp"
// Including type: RemoteProcedureCall
#include "GlobalNamespace/RemoteProcedureCall.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: GameplayRpcManager/ReturnToMenuRpc
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplayRpcManager::ReturnToMenuRpc : public GlobalNamespace::RemoteProcedureCall {
    public:
    // Creating value type constructor for type: ReturnToMenuRpc
    ReturnToMenuRpc() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1342818
    // Implemented from: RemoteProcedureCall
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayRpcManager::ReturnToMenuRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayRpcManager::ReturnToMenuRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayRpcManager::ReturnToMenuRpc*, creationType>()));
    }
  }; // GameplayRpcManager/ReturnToMenuRpc
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayRpcManager::ReturnToMenuRpc*, "", "GameplayRpcManager/ReturnToMenuRpc");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayRpcManager::ReturnToMenuRpc::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
