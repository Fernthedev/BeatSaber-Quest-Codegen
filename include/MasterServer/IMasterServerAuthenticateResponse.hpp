// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: MasterServer.IMasterServerReliableResponse
#include "MasterServer/IMasterServerReliableResponse.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IMasterServerAuthenticateResponse
  class IMasterServerAuthenticateResponse/*, public MasterServer::IMasterServerReliableResponse*/ {
    public:
    // Creating value type constructor for type: IMasterServerAuthenticateResponse
    IMasterServerAuthenticateResponse() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerReliableResponse
    operator MasterServer::IMasterServerReliableResponse() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerReliableResponse*>(this);
    }
    // public System.Boolean get_isAuthenticated()
    // Offset: 0xFFFFFFFF
    bool get_isAuthenticated();
  }; // MasterServer.IMasterServerAuthenticateResponse
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IMasterServerAuthenticateResponse*, "MasterServer", "IMasterServerAuthenticateResponse");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::IMasterServerAuthenticateResponse::get_isAuthenticated
// Il2CppName: get_isAuthenticated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MasterServer::IMasterServerAuthenticateResponse::*)()>(&MasterServer::IMasterServerAuthenticateResponse::get_isAuthenticated)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IMasterServerAuthenticateResponse*), "get_isAuthenticated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
