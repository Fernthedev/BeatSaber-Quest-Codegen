// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.ServerIdentity
#include "System/Runtime/Remoting/ServerIdentity.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
  // Forward declaring type: IMessageSink
  class IMessageSink;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.ClientActivatedIdentity
  class ClientActivatedIdentity : public System::Runtime::Remoting::ServerIdentity {
    public:
    // private System.MarshalByRefObject _targetThis
    // Size: 0x8
    // Offset: 0x70
    System::MarshalByRefObject* targetThis;
    // Field size check
    static_assert(sizeof(System::MarshalByRefObject*) == 0x8);
    // Creating value type constructor for type: ClientActivatedIdentity
    ClientActivatedIdentity(System::MarshalByRefObject* targetThis_ = {}) noexcept : targetThis{targetThis_} {}
    // Creating conversion operator: operator System::MarshalByRefObject*
    constexpr operator System::MarshalByRefObject*() const noexcept {
      return targetThis;
    }
    // public System.Void .ctor(System.String objectUri, System.Type objectType)
    // Offset: 0x142700C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClientActivatedIdentity* New_ctor(::Il2CppString* objectUri, System::Type* objectType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ClientActivatedIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClientActivatedIdentity*, creationType>(objectUri, objectType)));
    }
    // public System.MarshalByRefObject GetServerObject()
    // Offset: 0x142701C
    System::MarshalByRefObject* GetServerObject();
    // public System.Void SetClientProxy(System.MarshalByRefObject obj)
    // Offset: 0x1427024
    void SetClientProxy(System::MarshalByRefObject* obj);
    // public override System.Void OnLifetimeExpired()
    // Offset: 0x142702C
    // Implemented from: System.Runtime.Remoting.ServerIdentity
    // Base method: System.Void ServerIdentity::OnLifetimeExpired()
    void OnLifetimeExpired();
    // public override System.Runtime.Remoting.Messaging.IMessage SyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x14270A0
    // Implemented from: System.Runtime.Remoting.ServerIdentity
    // Base method: System.Runtime.Remoting.Messaging.IMessage ServerIdentity::SyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public override System.Runtime.Remoting.Messaging.IMessageCtrl AsyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x1427320
    // Implemented from: System.Runtime.Remoting.ServerIdentity
    // Base method: System.Runtime.Remoting.Messaging.IMessageCtrl ServerIdentity::AsyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
  }; // System.Runtime.Remoting.ClientActivatedIdentity
  #pragma pack(pop)
  static check_size<sizeof(ClientActivatedIdentity), 112 + sizeof(System::MarshalByRefObject*)> __System_Runtime_Remoting_ClientActivatedIdentitySizeCheck;
  static_assert(sizeof(ClientActivatedIdentity) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ClientActivatedIdentity*, "System.Runtime.Remoting", "ClientActivatedIdentity");
// Writing includes for template specializations
#include "System/Type.hpp"
#include "System/MarshalByRefObject.hpp"
#include "System/Runtime/Remoting/Messaging/IMessage.hpp"
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::ClientActivatedIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::ClientActivatedIdentity::GetServerObject
// Il2CppName: GetServerObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::MarshalByRefObject* (System::Runtime::Remoting::ClientActivatedIdentity::*)()>(&System::Runtime::Remoting::ClientActivatedIdentity::GetServerObject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ClientActivatedIdentity*), "GetServerObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ClientActivatedIdentity::SetClientProxy
// Il2CppName: SetClientProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ClientActivatedIdentity::*)(System::MarshalByRefObject*)>(&System::Runtime::Remoting::ClientActivatedIdentity::SetClientProxy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ClientActivatedIdentity*), "SetClientProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::MarshalByRefObject*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ClientActivatedIdentity::OnLifetimeExpired
// Il2CppName: OnLifetimeExpired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ClientActivatedIdentity::*)()>(&System::Runtime::Remoting::ClientActivatedIdentity::OnLifetimeExpired)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ClientActivatedIdentity*), "OnLifetimeExpired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ClientActivatedIdentity::SyncObjectProcessMessage
// Il2CppName: SyncObjectProcessMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage* (System::Runtime::Remoting::ClientActivatedIdentity::*)(System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::ClientActivatedIdentity::SyncObjectProcessMessage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ClientActivatedIdentity*), "SyncObjectProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Messaging::IMessage*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ClientActivatedIdentity::AsyncObjectProcessMessage
// Il2CppName: AsyncObjectProcessMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageCtrl* (System::Runtime::Remoting::ClientActivatedIdentity::*)(System::Runtime::Remoting::Messaging::IMessage*, System::Runtime::Remoting::Messaging::IMessageSink*)>(&System::Runtime::Remoting::ClientActivatedIdentity::AsyncObjectProcessMessage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ClientActivatedIdentity*), "AsyncObjectProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Messaging::IMessage*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Messaging::IMessageSink*>()});
  }
};
