// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Contexts.IContributeEnvoySink
  // [ComVisibleAttribute] Offset: D7E2C4
  class IContributeEnvoySink {
    public:
    // Creating value type constructor for type: IContributeEnvoySink
    IContributeEnvoySink() noexcept {}
    // public System.Runtime.Remoting.Messaging.IMessageSink GetEnvoySink(System.MarshalByRefObject obj, System.Runtime.Remoting.Messaging.IMessageSink nextSink)
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Messaging::IMessageSink* GetEnvoySink(System::MarshalByRefObject* obj, System::Runtime::Remoting::Messaging::IMessageSink* nextSink);
  }; // System.Runtime.Remoting.Contexts.IContributeEnvoySink
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::IContributeEnvoySink*, "System.Runtime.Remoting.Contexts", "IContributeEnvoySink");
// Writing includes for template specializations
#include "System/MarshalByRefObject.hpp"
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::IContributeEnvoySink::GetEnvoySink
// Il2CppName: GetEnvoySink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageSink* (System::Runtime::Remoting::Contexts::IContributeEnvoySink::*)(System::MarshalByRefObject*, System::Runtime::Remoting::Messaging::IMessageSink*)>(&System::Runtime::Remoting::Contexts::IContributeEnvoySink::GetEnvoySink)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::IContributeEnvoySink*), "GetEnvoySink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::MarshalByRefObject*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Messaging::IMessageSink*>()});
  }
};
