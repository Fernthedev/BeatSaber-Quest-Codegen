// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: IDynamicMessageSink
  class IDynamicMessageSink;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Contexts.IContributeDynamicSink
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA34A4
  class IContributeDynamicSink {
    public:
    // Creating value type constructor for type: IContributeDynamicSink
    IContributeDynamicSink() noexcept {}
    // public System.Runtime.Remoting.Contexts.IDynamicMessageSink GetDynamicSink()
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Contexts::IDynamicMessageSink* GetDynamicSink();
  }; // System.Runtime.Remoting.Contexts.IContributeDynamicSink
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::IContributeDynamicSink*, "System.Runtime.Remoting.Contexts", "IContributeDynamicSink");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::IContributeDynamicSink::GetDynamicSink
// Il2CppName: GetDynamicSink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Contexts::IDynamicMessageSink* (System::Runtime::Remoting::Contexts::IContributeDynamicSink::*)()>(&System::Runtime::Remoting::Contexts::IContributeDynamicSink::GetDynamicSink)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::IContributeDynamicSink*), "GetDynamicSink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
