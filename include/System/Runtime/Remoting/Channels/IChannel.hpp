// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Channels.IChannel
  // [ComVisibleAttribute] Offset: D7E374
  class IChannel {
    public:
    // Creating value type constructor for type: IChannel
    IChannel() noexcept {}
    // public System.String get_ChannelName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_ChannelName();
    // public System.Int32 get_ChannelPriority()
    // Offset: 0xFFFFFFFF
    int get_ChannelPriority();
  }; // System.Runtime.Remoting.Channels.IChannel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::IChannel*, "System.Runtime.Remoting.Channels", "IChannel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::IChannel::get_ChannelName
// Il2CppName: get_ChannelName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::Channels::IChannel::*)()>(&System::Runtime::Remoting::Channels::IChannel::get_ChannelName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::IChannel*), "get_ChannelName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::IChannel::get_ChannelPriority
// Il2CppName: get_ChannelPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Remoting::Channels::IChannel::*)()>(&System::Runtime::Remoting::Channels::IChannel::get_ChannelPriority)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::IChannel*), "get_ChannelPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
