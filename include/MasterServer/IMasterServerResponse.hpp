// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.IMasterServerMessage
#include "MasterServer/IMasterServerMessage.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IMasterServerResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class IMasterServerResponse/*, public MasterServer::IMasterServerMessage*/ {
    public:
    // Creating value type constructor for type: IMasterServerResponse
    IMasterServerResponse() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerMessage
    operator MasterServer::IMasterServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerMessage*>(this);
    }
    // public System.UInt32 get_responseId()
    // Offset: 0xFFFFFFFF
    uint get_responseId();
    // public System.Byte get_resultCode()
    // Offset: 0xFFFFFFFF
    uint8_t get_resultCode();
    // public System.String get_resultCodeString()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_resultCodeString();
    // public MasterServer.IMasterServerResponse WithResponseId(System.UInt32 responseId)
    // Offset: 0xFFFFFFFF
    MasterServer::IMasterServerResponse* WithResponseId(uint responseId);
  }; // MasterServer.IMasterServerResponse
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IMasterServerResponse*, "MasterServer", "IMasterServerResponse");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::IMasterServerResponse::get_responseId
// Il2CppName: get_responseId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (MasterServer::IMasterServerResponse::*)()>(&MasterServer::IMasterServerResponse::get_responseId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServerResponse*), "get_responseId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServerResponse::get_resultCode
// Il2CppName: get_resultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (MasterServer::IMasterServerResponse::*)()>(&MasterServer::IMasterServerResponse::get_resultCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServerResponse*), "get_resultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServerResponse::get_resultCodeString
// Il2CppName: get_resultCodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::IMasterServerResponse::*)()>(&MasterServer::IMasterServerResponse::get_resultCodeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServerResponse*), "get_resultCodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::IMasterServerResponse::WithResponseId
// Il2CppName: WithResponseId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::IMasterServerResponse* (MasterServer::IMasterServerResponse::*)(uint)>(&MasterServer::IMasterServerResponse::WithResponseId)> {
  static const MethodInfo* get() {
    static auto* responseId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServerResponse*), "WithResponseId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{responseId});
  }
};
