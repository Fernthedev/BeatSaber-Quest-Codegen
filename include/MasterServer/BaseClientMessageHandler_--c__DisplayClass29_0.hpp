// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.BaseClientMessageHandler
#include "MasterServer/BaseClientMessageHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: HelloVerifyRequest
  class HelloVerifyRequest;
  // Forward declaring type: IMasterServerReliableRequest
  class IMasterServerReliableRequest;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDiffieHellmanKeyPair
  class IDiffieHellmanKeyPair;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.BaseClientMessageHandler/<>c__DisplayClass29_0
  // [CompilerGeneratedAttribute] Offset: DF0730
  class BaseClientMessageHandler::$$c__DisplayClass29_0 : public ::Il2CppObject {
    public:
    // public MasterServer.BaseClientMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x10
    MasterServer::BaseClientMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::BaseClientMessageHandler*) == 0x8);
    // public System.Byte[] serverPublicKey
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* serverPublicKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass29_0
    $$c__DisplayClass29_0(MasterServer::BaseClientMessageHandler* $$4__this_ = {}, ::Array<uint8_t>* serverPublicKey_ = {}) noexcept : $$4__this{$$4__this_}, serverPublicKey{serverPublicKey_} {}
    // System.Threading.Tasks.Task`1<MasterServer.HelloVerifyRequest> <AuthenticateWithMasterServerAsyncInternal>b__0(System.UInt32 protocolVersion, System.Net.IPEndPoint ep, MasterServer.IMasterServerReliableRequest request, System.Threading.CancellationToken ct)
    // Offset: 0x12D5384
    System::Threading::Tasks::Task_1<MasterServer::HelloVerifyRequest*>* $AuthenticateWithMasterServerAsyncInternal$b__0(uint protocolVersion, System::Net::IPEndPoint* ep, MasterServer::IMasterServerReliableRequest* request, System::Threading::CancellationToken ct);
    // System.Threading.Tasks.Task`1<System.Byte[]> <AuthenticateWithMasterServerAsyncInternal>b__1(System.Threading.Tasks.Task`1<IDiffieHellmanKeyPair> result)
    // Offset: 0x12D543C
    System::Threading::Tasks::Task_1<::Array<uint8_t>*>* $AuthenticateWithMasterServerAsyncInternal$b__1(System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair*>* result);
    // public System.Void .ctor()
    // Offset: 0x12D537C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseClientMessageHandler::$$c__DisplayClass29_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::BaseClientMessageHandler::$$c__DisplayClass29_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseClientMessageHandler::$$c__DisplayClass29_0*, creationType>()));
    }
  }; // MasterServer.BaseClientMessageHandler/<>c__DisplayClass29_0
  #pragma pack(pop)
  static check_size<sizeof(BaseClientMessageHandler::$$c__DisplayClass29_0), 24 + sizeof(::Array<uint8_t>*)> __MasterServer_BaseClientMessageHandler_$$c__DisplayClass29_0SizeCheck;
  static_assert(sizeof(BaseClientMessageHandler::$$c__DisplayClass29_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BaseClientMessageHandler::$$c__DisplayClass29_0*, "MasterServer", "BaseClientMessageHandler/<>c__DisplayClass29_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::$$c__DisplayClass29_0::$AuthenticateWithMasterServerAsyncInternal$b__0
// Il2CppName: <AuthenticateWithMasterServerAsyncInternal>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<MasterServer::HelloVerifyRequest*>* (MasterServer::BaseClientMessageHandler::$$c__DisplayClass29_0::*)(uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken)>(&MasterServer::BaseClientMessageHandler::$$c__DisplayClass29_0::$AuthenticateWithMasterServerAsyncInternal$b__0)> {
  const MethodInfo* get() {
    static auto* protocolVersion = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* ep = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* request = &::il2cpp_utils::GetClassFromName("MasterServer", "IMasterServerReliableRequest")->byval_arg;
    static auto* ct = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler::$$c__DisplayClass29_0*), "<AuthenticateWithMasterServerAsyncInternal>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{protocolVersion, ep, request, ct});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::$$c__DisplayClass29_0::$AuthenticateWithMasterServerAsyncInternal$b__1
// Il2CppName: <AuthenticateWithMasterServerAsyncInternal>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<::Array<uint8_t>*>* (MasterServer::BaseClientMessageHandler::$$c__DisplayClass29_0::*)(System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair*>*)>(&MasterServer::BaseClientMessageHandler::$$c__DisplayClass29_0::$AuthenticateWithMasterServerAsyncInternal$b__1)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IDiffieHellmanKeyPair")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler::$$c__DisplayClass29_0*), "<AuthenticateWithMasterServerAsyncInternal>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::$$c__DisplayClass29_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
