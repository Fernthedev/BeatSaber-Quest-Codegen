// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Channels.IServerChannelSinkProvider
  // [ComVisibleAttribute] Offset: D7E414
  class IServerChannelSinkProvider {
    public:
    // Creating value type constructor for type: IServerChannelSinkProvider
    IServerChannelSinkProvider() noexcept {}
    // public System.Void set_Next(System.Runtime.Remoting.Channels.IServerChannelSinkProvider value)
    // Offset: 0xFFFFFFFF
    void set_Next(System::Runtime::Remoting::Channels::IServerChannelSinkProvider* value);
  }; // System.Runtime.Remoting.Channels.IServerChannelSinkProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::IServerChannelSinkProvider*, "System.Runtime.Remoting.Channels", "IServerChannelSinkProvider");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::IServerChannelSinkProvider::set_Next
// Il2CppName: set_Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Channels::IServerChannelSinkProvider::*)(System::Runtime::Remoting::Channels::IServerChannelSinkProvider*)>(&System::Runtime::Remoting::Channels::IServerChannelSinkProvider::set_Next)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::IServerChannelSinkProvider*), "set_Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Remoting::Channels::IServerChannelSinkProvider*>()});
  }
};
