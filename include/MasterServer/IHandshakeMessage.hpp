// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: MasterServer.IMasterServerMessage
#include "MasterServer/IMasterServerMessage.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IHandshakeMessage
  class IHandshakeMessage/*, public MasterServer::IMasterServerMessage*/ {
    public:
    // Creating value type constructor for type: IHandshakeMessage
    IHandshakeMessage() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerMessage
    operator MasterServer::IMasterServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerMessage*>(this);
    }
  }; // MasterServer.IHandshakeMessage
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IHandshakeMessage*, "MasterServer", "IHandshakeMessage");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
