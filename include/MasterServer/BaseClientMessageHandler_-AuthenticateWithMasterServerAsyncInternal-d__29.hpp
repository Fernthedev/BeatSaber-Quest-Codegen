// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.BaseClientMessageHandler
#include "MasterServer/BaseClientMessageHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IMasterServerAuthenticateRequest
  class IMasterServerAuthenticateRequest;
  // Forward declaring type: ServerCertificateRequest
  class ServerCertificateRequest;
  // Forward declaring type: HelloVerifyRequest
  class HelloVerifyRequest;
  // Forward declaring type: ServerHelloRequest
  class ServerHelloRequest;
  // Forward declaring type: ChangeCipherSpecRequest
  class ChangeCipherSpecRequest;
  // Forward declaring type: IMasterServerAuthenticateResponse
  class IMasterServerAuthenticateResponse;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDiffieHellmanKeyPair
  class IDiffieHellmanKeyPair;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServer.BaseClientMessageHandler/MasterServer.<AuthenticateWithMasterServerAsyncInternal>d__29
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BaseClientMessageHandler::$AuthenticateWithMasterServerAsyncInternal$d__29/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public MasterServer.BaseClientMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x20
    MasterServer::BaseClientMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::BaseClientMessageHandler*) == 0x8);
    // private MasterServer.BaseClientMessageHandler/MasterServer.<>c__DisplayClass29_0 <>8__1
    // Size: 0x8
    // Offset: 0x28
    MasterServer::BaseClientMessageHandler::$$c__DisplayClass29_0* $$8__1;
    // Field size check
    static_assert(sizeof(MasterServer::BaseClientMessageHandler::$$c__DisplayClass29_0*) == 0x8);
    // private System.Net.IPEndPoint <endPoint>5__2
    // Size: 0x8
    // Offset: 0x30
    System::Net::IPEndPoint* $endPoint$5__2;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // private MasterServer.IMasterServerAuthenticateRequest <authenticationRequest>5__3
    // Size: 0x8
    // Offset: 0x38
    MasterServer::IMasterServerAuthenticateRequest* $authenticationRequest$5__3;
    // Field size check
    static_assert(sizeof(MasterServer::IMasterServerAuthenticateRequest*) == 0x8);
    // private System.Byte[] <clientRandom>5__4
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* $clientRandom$5__4;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Threading.Tasks.Task`1<IDiffieHellmanKeyPair> <generateKeysTask>5__5
    // Size: 0x8
    // Offset: 0x48
    System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair*>* $generateKeysTask$5__5;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair*>*) == 0x8);
    // private System.Threading.Tasks.Task`1<MasterServer.ServerCertificateRequest> <serverCertificateTask>5__6
    // Size: 0x8
    // Offset: 0x50
    System::Threading::Tasks::Task_1<MasterServer::ServerCertificateRequest*>* $serverCertificateTask$5__6;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task_1<MasterServer::ServerCertificateRequest*>*) == 0x8);
    // private System.Byte[] <serverRandom>5__7
    // Size: 0x8
    // Offset: 0x58
    ::Array<uint8_t>* $serverRandom$5__7;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] <signature>5__8
    // Size: 0x8
    // Offset: 0x60
    ::Array<uint8_t>* $signature$5__8;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.UInt32 <responseId>5__9
    // Size: 0x4
    // Offset: 0x68
    uint $responseId$5__9;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Threading.Tasks.Task`1<System.Byte[]> <getPreMasterSecretTask>5__10
    // Size: 0x8
    // Offset: 0x70
    System::Threading::Tasks::Task_1<::Array<uint8_t>*>* $getPreMasterSecretTask$5__10;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task_1<::Array<uint8_t>*>*) == 0x8);
    // private System.Threading.Tasks.Task`1<System.Boolean> <verifySignatureTask>5__11
    // Size: 0x8
    // Offset: 0x78
    System::Threading::Tasks::Task_1<bool>* $verifySignatureTask$5__11;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task_1<bool>*) == 0x8);
    // private IDiffieHellmanKeyPair <clientKeys>5__12
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::IDiffieHellmanKeyPair* $clientKeys$5__12;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDiffieHellmanKeyPair*) == 0x8);
    // private EncryptionUtility/IEncryptionState <encryptionState>5__13
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::EncryptionUtility::IEncryptionState* $encryptionState$5__13;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EncryptionUtility::IEncryptionState*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.IPEndPoint> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x90
    System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::IPEndPoint*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.IMasterServerAuthenticateRequest> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x98
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerAuthenticateRequest*> $$u__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.HelloVerifyRequest> <>u__3
    // Size: 0xFFFFFFFF
    // Offset: 0xA0
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::HelloVerifyRequest*> $$u__3;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.ServerHelloRequest> <>u__4
    // Size: 0xFFFFFFFF
    // Offset: 0xA8
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ServerHelloRequest*> $$u__4;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.ServerCertificateRequest> <>u__5
    // Size: 0xFFFFFFFF
    // Offset: 0xB0
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ServerCertificateRequest*> $$u__5;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<IDiffieHellmanKeyPair> <>u__6
    // Size: 0xFFFFFFFF
    // Offset: 0xB8
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair*> $$u__6;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__7
    // Size: 0xFFFFFFFF
    // Offset: 0xC0
    System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__7;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.ChangeCipherSpecRequest> <>u__8
    // Size: 0xFFFFFFFF
    // Offset: 0xC8
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ChangeCipherSpecRequest*> $$u__8;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> <>u__9
    // Size: 0xFFFFFFFF
    // Offset: 0xD0
    System::Runtime::CompilerServices::TaskAwaiter_1<::Array<uint8_t>*> $$u__9;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<EncryptionUtility/IEncryptionState> <>u__10
    // Size: 0xFFFFFFFF
    // Offset: 0xD8
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EncryptionUtility::IEncryptionState*> $$u__10;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.IMasterServerAuthenticateResponse> <>u__11
    // Size: 0xFFFFFFFF
    // Offset: 0xE0
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerAuthenticateResponse*> $$u__11;
    // Creating value type constructor for type: $AuthenticateWithMasterServerAsyncInternal$d__29
    constexpr $AuthenticateWithMasterServerAsyncInternal$d__29(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, MasterServer::BaseClientMessageHandler* $$4__this_ = {}, MasterServer::BaseClientMessageHandler::$$c__DisplayClass29_0* $$8__1_ = {}, System::Net::IPEndPoint* $endPoint$5__2_ = {}, MasterServer::IMasterServerAuthenticateRequest* $authenticationRequest$5__3_ = {}, ::Array<uint8_t>* $clientRandom$5__4_ = {}, System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair*>* $generateKeysTask$5__5_ = {}, System::Threading::Tasks::Task_1<MasterServer::ServerCertificateRequest*>* $serverCertificateTask$5__6_ = {}, ::Array<uint8_t>* $serverRandom$5__7_ = {}, ::Array<uint8_t>* $signature$5__8_ = {}, uint $responseId$5__9_ = {}, System::Threading::Tasks::Task_1<::Array<uint8_t>*>* $getPreMasterSecretTask$5__10_ = {}, System::Threading::Tasks::Task_1<bool>* $verifySignatureTask$5__11_ = {}, GlobalNamespace::IDiffieHellmanKeyPair* $clientKeys$5__12_ = {}, GlobalNamespace::EncryptionUtility::IEncryptionState* $encryptionState$5__13_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::IPEndPoint*> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerAuthenticateRequest*> $$u__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::HelloVerifyRequest*> $$u__3_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ServerHelloRequest*> $$u__4_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ServerCertificateRequest*> $$u__5_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair*> $$u__6_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__7_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ChangeCipherSpecRequest*> $$u__8_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Array<uint8_t>*> $$u__9_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EncryptionUtility::IEncryptionState*> $$u__10_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerAuthenticateResponse*> $$u__11_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$8__1{$$8__1_}, $endPoint$5__2{$endPoint$5__2_}, $authenticationRequest$5__3{$authenticationRequest$5__3_}, $clientRandom$5__4{$clientRandom$5__4_}, $generateKeysTask$5__5{$generateKeysTask$5__5_}, $serverCertificateTask$5__6{$serverCertificateTask$5__6_}, $serverRandom$5__7{$serverRandom$5__7_}, $signature$5__8{$signature$5__8_}, $responseId$5__9{$responseId$5__9_}, $getPreMasterSecretTask$5__10{$getPreMasterSecretTask$5__10_}, $verifySignatureTask$5__11{$verifySignatureTask$5__11_}, $clientKeys$5__12{$clientKeys$5__12_}, $encryptionState$5__13{$encryptionState$5__13_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$u__3{$$u__3_}, $$u__4{$$u__4_}, $$u__5{$$u__5_}, $$u__6{$$u__6_}, $$u__7{$$u__7_}, $$u__8{$$u__8_}, $$u__9{$$u__9_}, $$u__10{$$u__10_}, $$u__11{$$u__11_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field: public System.Int32 <>1__state
    int _get_$$1__state();
    // Set instance field: public System.Int32 <>1__state
    void _set_$$1__state(int value);
    // Get instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder _get_$$t__builder();
    // Set instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    void _set_$$t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value);
    // Get instance field: public MasterServer.BaseClientMessageHandler <>4__this
    MasterServer::BaseClientMessageHandler* _get_$$4__this();
    // Set instance field: public MasterServer.BaseClientMessageHandler <>4__this
    void _set_$$4__this(MasterServer::BaseClientMessageHandler* value);
    // Get instance field: private MasterServer.BaseClientMessageHandler/MasterServer.<>c__DisplayClass29_0 <>8__1
    MasterServer::BaseClientMessageHandler::$$c__DisplayClass29_0* _get_$$8__1();
    // Set instance field: private MasterServer.BaseClientMessageHandler/MasterServer.<>c__DisplayClass29_0 <>8__1
    void _set_$$8__1(MasterServer::BaseClientMessageHandler::$$c__DisplayClass29_0* value);
    // Get instance field: private System.Net.IPEndPoint <endPoint>5__2
    System::Net::IPEndPoint* _get_$endPoint$5__2();
    // Set instance field: private System.Net.IPEndPoint <endPoint>5__2
    void _set_$endPoint$5__2(System::Net::IPEndPoint* value);
    // Get instance field: private MasterServer.IMasterServerAuthenticateRequest <authenticationRequest>5__3
    MasterServer::IMasterServerAuthenticateRequest* _get_$authenticationRequest$5__3();
    // Set instance field: private MasterServer.IMasterServerAuthenticateRequest <authenticationRequest>5__3
    void _set_$authenticationRequest$5__3(MasterServer::IMasterServerAuthenticateRequest* value);
    // Get instance field: private System.Byte[] <clientRandom>5__4
    ::Array<uint8_t>* _get_$clientRandom$5__4();
    // Set instance field: private System.Byte[] <clientRandom>5__4
    void _set_$clientRandom$5__4(::Array<uint8_t>* value);
    // Get instance field: private System.Threading.Tasks.Task`1<IDiffieHellmanKeyPair> <generateKeysTask>5__5
    System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair*>* _get_$generateKeysTask$5__5();
    // Set instance field: private System.Threading.Tasks.Task`1<IDiffieHellmanKeyPair> <generateKeysTask>5__5
    void _set_$generateKeysTask$5__5(System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair*>* value);
    // Get instance field: private System.Threading.Tasks.Task`1<MasterServer.ServerCertificateRequest> <serverCertificateTask>5__6
    System::Threading::Tasks::Task_1<MasterServer::ServerCertificateRequest*>* _get_$serverCertificateTask$5__6();
    // Set instance field: private System.Threading.Tasks.Task`1<MasterServer.ServerCertificateRequest> <serverCertificateTask>5__6
    void _set_$serverCertificateTask$5__6(System::Threading::Tasks::Task_1<MasterServer::ServerCertificateRequest*>* value);
    // Get instance field: private System.Byte[] <serverRandom>5__7
    ::Array<uint8_t>* _get_$serverRandom$5__7();
    // Set instance field: private System.Byte[] <serverRandom>5__7
    void _set_$serverRandom$5__7(::Array<uint8_t>* value);
    // Get instance field: private System.Byte[] <signature>5__8
    ::Array<uint8_t>* _get_$signature$5__8();
    // Set instance field: private System.Byte[] <signature>5__8
    void _set_$signature$5__8(::Array<uint8_t>* value);
    // Get instance field: private System.UInt32 <responseId>5__9
    uint _get_$responseId$5__9();
    // Set instance field: private System.UInt32 <responseId>5__9
    void _set_$responseId$5__9(uint value);
    // Get instance field: private System.Threading.Tasks.Task`1<System.Byte[]> <getPreMasterSecretTask>5__10
    System::Threading::Tasks::Task_1<::Array<uint8_t>*>* _get_$getPreMasterSecretTask$5__10();
    // Set instance field: private System.Threading.Tasks.Task`1<System.Byte[]> <getPreMasterSecretTask>5__10
    void _set_$getPreMasterSecretTask$5__10(System::Threading::Tasks::Task_1<::Array<uint8_t>*>* value);
    // Get instance field: private System.Threading.Tasks.Task`1<System.Boolean> <verifySignatureTask>5__11
    System::Threading::Tasks::Task_1<bool>* _get_$verifySignatureTask$5__11();
    // Set instance field: private System.Threading.Tasks.Task`1<System.Boolean> <verifySignatureTask>5__11
    void _set_$verifySignatureTask$5__11(System::Threading::Tasks::Task_1<bool>* value);
    // Get instance field: private IDiffieHellmanKeyPair <clientKeys>5__12
    GlobalNamespace::IDiffieHellmanKeyPair* _get_$clientKeys$5__12();
    // Set instance field: private IDiffieHellmanKeyPair <clientKeys>5__12
    void _set_$clientKeys$5__12(GlobalNamespace::IDiffieHellmanKeyPair* value);
    // Get instance field: private EncryptionUtility/IEncryptionState <encryptionState>5__13
    GlobalNamespace::EncryptionUtility::IEncryptionState* _get_$encryptionState$5__13();
    // Set instance field: private EncryptionUtility/IEncryptionState <encryptionState>5__13
    void _set_$encryptionState$5__13(GlobalNamespace::EncryptionUtility::IEncryptionState* value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.IPEndPoint> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::IPEndPoint*> _get_$$u__1();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.IPEndPoint> <>u__1
    void _set_$$u__1(System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::IPEndPoint*> value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.IMasterServerAuthenticateRequest> <>u__2
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerAuthenticateRequest*> _get_$$u__2();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.IMasterServerAuthenticateRequest> <>u__2
    void _set_$$u__2(System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerAuthenticateRequest*> value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.HelloVerifyRequest> <>u__3
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::HelloVerifyRequest*> _get_$$u__3();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.HelloVerifyRequest> <>u__3
    void _set_$$u__3(System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::HelloVerifyRequest*> value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.ServerHelloRequest> <>u__4
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ServerHelloRequest*> _get_$$u__4();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.ServerHelloRequest> <>u__4
    void _set_$$u__4(System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ServerHelloRequest*> value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.ServerCertificateRequest> <>u__5
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ServerCertificateRequest*> _get_$$u__5();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.ServerCertificateRequest> <>u__5
    void _set_$$u__5(System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ServerCertificateRequest*> value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<IDiffieHellmanKeyPair> <>u__6
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair*> _get_$$u__6();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<IDiffieHellmanKeyPair> <>u__6
    void _set_$$u__6(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair*> value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__7
    System::Runtime::CompilerServices::TaskAwaiter_1<bool> _get_$$u__7();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__7
    void _set_$$u__7(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.ChangeCipherSpecRequest> <>u__8
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ChangeCipherSpecRequest*> _get_$$u__8();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.ChangeCipherSpecRequest> <>u__8
    void _set_$$u__8(System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ChangeCipherSpecRequest*> value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> <>u__9
    System::Runtime::CompilerServices::TaskAwaiter_1<::Array<uint8_t>*> _get_$$u__9();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> <>u__9
    void _set_$$u__9(System::Runtime::CompilerServices::TaskAwaiter_1<::Array<uint8_t>*> value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<EncryptionUtility/IEncryptionState> <>u__10
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EncryptionUtility::IEncryptionState*> _get_$$u__10();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<EncryptionUtility/IEncryptionState> <>u__10
    void _set_$$u__10(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EncryptionUtility::IEncryptionState*> value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.IMasterServerAuthenticateResponse> <>u__11
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerAuthenticateResponse*> _get_$$u__11();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.IMasterServerAuthenticateResponse> <>u__11
    void _set_$$u__11(System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerAuthenticateResponse*> value);
    // private System.Void MoveNext()
    // Offset: 0x12122D0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1213784
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MasterServer.BaseClientMessageHandler/MasterServer.<AuthenticateWithMasterServerAsyncInternal>d__29
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServerAsyncInternal$d__29, "MasterServer", "BaseClientMessageHandler/<AuthenticateWithMasterServerAsyncInternal>d__29");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServerAsyncInternal$d__29::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServerAsyncInternal$d__29::*)()>(&MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServerAsyncInternal$d__29::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServerAsyncInternal$d__29), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServerAsyncInternal$d__29::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServerAsyncInternal$d__29::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServerAsyncInternal$d__29::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServerAsyncInternal$d__29), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
