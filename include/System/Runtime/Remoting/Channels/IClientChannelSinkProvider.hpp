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
  // Autogenerated type: System.Runtime.Remoting.Channels.IClientChannelSinkProvider
  // [ComVisibleAttribute] Offset: D7E400
  class IClientChannelSinkProvider {
    public:
    // Creating value type constructor for type: IClientChannelSinkProvider
    IClientChannelSinkProvider() noexcept {}
    // public System.Void set_Next(System.Runtime.Remoting.Channels.IClientChannelSinkProvider value)
    // Offset: 0xFFFFFFFF
    void set_Next(System::Runtime::Remoting::Channels::IClientChannelSinkProvider* value);
  }; // System.Runtime.Remoting.Channels.IClientChannelSinkProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::IClientChannelSinkProvider*, "System.Runtime.Remoting.Channels", "IClientChannelSinkProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::IClientChannelSinkProvider::set_Next
// Il2CppName: set_Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Channels::IClientChannelSinkProvider::*)(System::Runtime::Remoting::Channels::IClientChannelSinkProvider*)>(&System::Runtime::Remoting::Channels::IClientChannelSinkProvider::set_Next)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Channels", "IClientChannelSinkProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::IClientChannelSinkProvider*), "set_Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
