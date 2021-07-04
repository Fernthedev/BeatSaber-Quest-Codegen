// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.Runtime.Remoting.Channels.IChannel
#include "System/Runtime/Remoting/Channels/IChannel.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Channels.IChannelReceiver
  // [ComVisibleAttribute] Offset: D7E3D8
  class IChannelReceiver/*, public System::Runtime::Remoting::Channels::IChannel*/ {
    public:
    // Creating value type constructor for type: IChannelReceiver
    IChannelReceiver() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::Channels::IChannel
    operator System::Runtime::Remoting::Channels::IChannel() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Channels::IChannel*>(this);
    }
    // public System.Object get_ChannelData()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* get_ChannelData();
    // public System.Void StartListening(System.Object data)
    // Offset: 0xFFFFFFFF
    void StartListening(::Il2CppObject* data);
  }; // System.Runtime.Remoting.Channels.IChannelReceiver
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::IChannelReceiver*, "System.Runtime.Remoting.Channels", "IChannelReceiver");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::IChannelReceiver::get_ChannelData
// Il2CppName: get_ChannelData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Channels::IChannelReceiver::*)()>(&System::Runtime::Remoting::Channels::IChannelReceiver::get_ChannelData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::IChannelReceiver*), "get_ChannelData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::IChannelReceiver::StartListening
// Il2CppName: StartListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Channels::IChannelReceiver::*)(::Il2CppObject*)>(&System::Runtime::Remoting::Channels::IChannelReceiver::StartListening)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::IChannelReceiver*), "StartListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
