// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodMessage
#include "System/Runtime/Remoting/Messaging/IMethodMessage.hpp"
// Completed includes
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMethodCallMessage
  class IMethodCallMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::IMethodCallMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::IMethodCallMessage*, "System.Runtime.Remoting.Messaging", "IMethodCallMessage");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.IMethodCallMessage
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 104444C
  class IMethodCallMessage/*, public ::System::Runtime::Remoting::Messaging::IMethodMessage*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Messaging::IMethodMessage
    operator ::System::Runtime::Remoting::Messaging::IMethodMessage() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Messaging::IMethodMessage*>(this);
    }
    // Creating interface conversion operator: i_IMethodMessage
    inline ::System::Runtime::Remoting::Messaging::IMethodMessage* i_IMethodMessage() noexcept {
      return reinterpret_cast<::System::Runtime::Remoting::Messaging::IMethodMessage*>(this);
    }
  }; // System.Runtime.Remoting.Messaging.IMethodCallMessage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
