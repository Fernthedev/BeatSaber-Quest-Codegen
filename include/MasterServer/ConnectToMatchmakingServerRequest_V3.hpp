// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: MasterServer.ConnectToMatchmakingServerRequest
#include "MasterServer/ConnectToMatchmakingServerRequest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.ConnectToMatchmakingServerRequest/V3
  class ConnectToMatchmakingServerRequest::V3 : public MasterServer::ConnectToMatchmakingServerRequest {
    public:
    // Creating value type constructor for type: V3
    V3() noexcept {}
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12D9010
    // Implemented from: MasterServer.ConnectToMatchmakingServerRequest
    // Base method: System.Void ConnectToMatchmakingServerRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12D9058
    // Implemented from: MasterServer.ConnectToMatchmakingServerRequest
    // Base method: System.Void ConnectToMatchmakingServerRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void .ctor()
    // Offset: 0x12D90A4
    // Implemented from: MasterServer.ConnectToMatchmakingServerRequest
    // Base method: System.Void ConnectToMatchmakingServerRequest::.ctor()
    // Base method: System.Void BaseConnectToServerRequest::.ctor()
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectToMatchmakingServerRequest::V3* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::ConnectToMatchmakingServerRequest::V3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectToMatchmakingServerRequest::V3*, creationType>()));
    }
  }; // MasterServer.ConnectToMatchmakingServerRequest/V3
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::ConnectToMatchmakingServerRequest::V3*, "MasterServer", "ConnectToMatchmakingServerRequest/V3");
// Writing includes for template specializations
#include "LiteNetLib/Utils/NetDataWriter.hpp"
#include "LiteNetLib/Utils/NetDataReader.hpp"
// Writing MetadataGetter for method: MasterServer::ConnectToMatchmakingServerRequest::V3::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::ConnectToMatchmakingServerRequest::V3::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::ConnectToMatchmakingServerRequest::V3::Serialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ConnectToMatchmakingServerRequest::V3*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataWriter*>()});
  }
};
// Writing MetadataGetter for method: MasterServer::ConnectToMatchmakingServerRequest::V3::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::ConnectToMatchmakingServerRequest::V3::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::ConnectToMatchmakingServerRequest::V3::Deserialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ConnectToMatchmakingServerRequest::V3*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataReader*>()});
  }
};
// Writing MetadataGetter for method: MasterServer::ConnectToMatchmakingServerRequest::V3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
