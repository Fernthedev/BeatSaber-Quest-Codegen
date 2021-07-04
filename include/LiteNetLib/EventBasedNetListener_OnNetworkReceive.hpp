// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.EventBasedNetListener
#include "LiteNetLib/EventBasedNetListener.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
  // Forward declaring type: NetPacketReader
  class NetPacketReader;
  // Forward declaring type: DeliveryMethod
  struct DeliveryMethod;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.EventBasedNetListener/OnNetworkReceive
  class EventBasedNetListener::OnNetworkReceive : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: OnNetworkReceive
    OnNetworkReceive() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B3D128
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventBasedNetListener::OnNetworkReceive* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::EventBasedNetListener::OnNetworkReceive::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventBasedNetListener::OnNetworkReceive*, creationType>(object, method)));
    }
    // public System.Void Invoke(LiteNetLib.NetPeer peer, LiteNetLib.NetPacketReader reader, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0x1B3BB3C
    void Invoke(LiteNetLib::NetPeer* peer, LiteNetLib::NetPacketReader* reader, LiteNetLib::DeliveryMethod deliveryMethod);
    // public System.IAsyncResult BeginInvoke(LiteNetLib.NetPeer peer, LiteNetLib.NetPacketReader reader, LiteNetLib.DeliveryMethod deliveryMethod, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B3D138
    System::IAsyncResult* BeginInvoke(LiteNetLib::NetPeer* peer, LiteNetLib::NetPacketReader* reader, LiteNetLib::DeliveryMethod deliveryMethod, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1B3D1D8
    void EndInvoke(System::IAsyncResult* result);
  }; // LiteNetLib.EventBasedNetListener/OnNetworkReceive
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::EventBasedNetListener::OnNetworkReceive*, "LiteNetLib", "EventBasedNetListener/OnNetworkReceive");
// Writing includes for template specializations
#include "LiteNetLib/NetPeer.hpp"
#include "LiteNetLib/NetPacketReader.hpp"
#include "LiteNetLib/DeliveryMethod.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: LiteNetLib::EventBasedNetListener::OnNetworkReceive::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::EventBasedNetListener::OnNetworkReceive::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::OnNetworkReceive::*)(LiteNetLib::NetPeer*, LiteNetLib::NetPacketReader*, LiteNetLib::DeliveryMethod)>(&LiteNetLib::EventBasedNetListener::OnNetworkReceive::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNetListener::OnNetworkReceive*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::NetPeer*>(), ::il2cpp_utils::ExtractIndependentType<LiteNetLib::NetPacketReader*>(), ::il2cpp_utils::ExtractIndependentType<LiteNetLib::DeliveryMethod>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNetListener::OnNetworkReceive::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (LiteNetLib::EventBasedNetListener::OnNetworkReceive::*)(LiteNetLib::NetPeer*, LiteNetLib::NetPacketReader*, LiteNetLib::DeliveryMethod, System::AsyncCallback*, ::Il2CppObject*)>(&LiteNetLib::EventBasedNetListener::OnNetworkReceive::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNetListener::OnNetworkReceive*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::NetPeer*>(), ::il2cpp_utils::ExtractIndependentType<LiteNetLib::NetPacketReader*>(), ::il2cpp_utils::ExtractIndependentType<LiteNetLib::DeliveryMethod>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: LiteNetLib::EventBasedNetListener::OnNetworkReceive::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::EventBasedNetListener::OnNetworkReceive::*)(System::IAsyncResult*)>(&LiteNetLib::EventBasedNetListener::OnNetworkReceive::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::EventBasedNetListener::OnNetworkReceive*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
