// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Forward declaring type: IClientChannelSinkProvider
  class IClientChannelSinkProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Channels::IClientChannelSinkProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::IClientChannelSinkProvider*, "System.Runtime.Remoting.Channels", "IClientChannelSinkProvider");
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Channels.IClientChannelSinkProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 104418C
  class IClientChannelSinkProvider {
    public:
    // public System.Void set_Next(System.Runtime.Remoting.Channels.IClientChannelSinkProvider value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Next(::System::Runtime::Remoting::Channels::IClientChannelSinkProvider* value);
  }; // System.Runtime.Remoting.Channels.IClientChannelSinkProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::IClientChannelSinkProvider::set_Next
// Il2CppName: set_Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Channels::IClientChannelSinkProvider::*)(::System::Runtime::Remoting::Channels::IClientChannelSinkProvider*)>(&System::Runtime::Remoting::Channels::IClientChannelSinkProvider::set_Next)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Channels", "IClientChannelSinkProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::IClientChannelSinkProvider*), "set_Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
