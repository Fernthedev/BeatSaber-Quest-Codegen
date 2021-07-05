// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "System/Runtime/Remoting/Channels/CrossAppDomainSink.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: CADMethodReturnMessage
  class CADMethodReturnMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes
  struct CrossAppDomainSink::ProcessMessageRes/*, public System::ValueType*/ {
    public:
    // public System.Byte[] arrResponse
    // Size: 0x8
    // Offset: 0x0
    ::Array<uint8_t>* arrResponse;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Runtime.Remoting.Messaging.CADMethodReturnMessage cadMrm
    // Size: 0x8
    // Offset: 0x8
    System::Runtime::Remoting::Messaging::CADMethodReturnMessage* cadMrm;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::CADMethodReturnMessage*) == 0x8);
    // Creating value type constructor for type: ProcessMessageRes
    constexpr ProcessMessageRes(::Array<uint8_t>* arrResponse_ = {}, System::Runtime::Remoting::Messaging::CADMethodReturnMessage* cadMrm_ = {}) noexcept : arrResponse{arrResponse_}, cadMrm{cadMrm_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes
  #pragma pack(pop)
  static check_size<sizeof(CrossAppDomainSink::ProcessMessageRes), 8 + sizeof(System::Runtime::Remoting::Messaging::CADMethodReturnMessage*)> __System_Runtime_Remoting_Channels_CrossAppDomainSink_ProcessMessageResSizeCheck;
  static_assert(sizeof(CrossAppDomainSink::ProcessMessageRes) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::CrossAppDomainSink::ProcessMessageRes, "System.Runtime.Remoting.Channels", "CrossAppDomainSink/ProcessMessageRes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
