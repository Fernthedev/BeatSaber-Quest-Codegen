// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: MasterServer.IUserMessage
#include "MasterServer/IUserMessage.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IUserServerToClientMessage
  class IUserServerToClientMessage/*, public MasterServer::IUserMessage*/ {
    public:
    // Creating value type constructor for type: IUserServerToClientMessage
    IUserServerToClientMessage() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IUserMessage
    operator MasterServer::IUserMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserMessage*>(this);
    }
  }; // MasterServer.IUserServerToClientMessage
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IUserServerToClientMessage*, "MasterServer", "IUserServerToClientMessage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
