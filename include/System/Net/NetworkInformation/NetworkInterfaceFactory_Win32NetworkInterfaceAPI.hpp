// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.NetworkInformation.NetworkInterfaceFactory
#include "System/Net/NetworkInformation/NetworkInterfaceFactory.hpp"
// Including type: System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
#include "System/Net/NetworkInformation/Win32_IP_ADAPTER_ADDRESSES.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: NetworkInterface
  class NetworkInterface;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI*, "System.Net.NetworkInformation", "NetworkInterfaceFactory/Win32NetworkInterfaceAPI");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterfaceFactory/System.Net.NetworkInformation.Win32NetworkInterfaceAPI
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkInterfaceFactory::Win32NetworkInterfaceAPI : public ::System::Net::NetworkInformation::NetworkInterfaceFactory {
    public:
    // static private System.Int32 GetAdaptersAddresses(System.UInt32 family, System.UInt32 flags, System.IntPtr reserved, System.IntPtr info, ref System.Int32 size)
    // Offset: 0x1B6FEB0
    static int GetAdaptersAddresses(uint family, uint flags, ::System::IntPtr reserved, ::System::IntPtr info, ByRef<int> size);
    // static private System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES[] GetAdaptersAddresses()
    // Offset: 0x1B6FF6C
    static ::ArrayW<::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES> GetAdaptersAddresses();
    // public System.Void .ctor()
    // Offset: 0x1B6EB0C
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory
    // Base method: System.Void NetworkInterfaceFactory::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkInterfaceFactory::Win32NetworkInterfaceAPI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkInterfaceFactory::Win32NetworkInterfaceAPI*, creationType>()));
    }
    // public override System.Net.NetworkInformation.NetworkInterface[] GetAllNetworkInterfaces()
    // Offset: 0x1B701F0
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory
    // Base method: System.Net.NetworkInformation.NetworkInterface[] NetworkInterfaceFactory::GetAllNetworkInterfaces()
    ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> GetAllNetworkInterfaces();
  }; // System.Net.NetworkInformation.NetworkInterfaceFactory/System.Net.NetworkInformation.Win32NetworkInterfaceAPI
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI::GetAdaptersAddresses
// Il2CppName: GetAdaptersAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint, uint, ::System::IntPtr, ::System::IntPtr, ByRef<int>)>(&System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI::GetAdaptersAddresses)> {
  static const MethodInfo* get() {
    static auto* family = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* reserved = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI*), "GetAdaptersAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{family, flags, reserved, info, size});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI::GetAdaptersAddresses
// Il2CppName: GetAdaptersAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES> (*)()>(&System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI::GetAdaptersAddresses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI*), "GetAdaptersAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI::GetAllNetworkInterfaces
// Il2CppName: GetAllNetworkInterfaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> (System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI::*)()>(&System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI::GetAllNetworkInterfaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI*), "GetAllNetworkInterfaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
