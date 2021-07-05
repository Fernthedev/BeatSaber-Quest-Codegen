// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.NetworkInterfaceFactory
#include "System/Net/NetworkInformation/NetworkInterfaceFactory.hpp"
// Including type: System.Net.NetworkInformation.NetworkInterfaceFactory/UnixNetworkInterfaceAPI
#include "System/Net/NetworkInformation/NetworkInterfaceFactory_UnixNetworkInterfaceAPI.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: NetworkInterface
  class NetworkInterface;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterfaceFactory/LinuxNetworkInterfaceAPI
  class NetworkInterfaceFactory::LinuxNetworkInterfaceAPI : public System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI {
    public:
    // Creating value type constructor for type: LinuxNetworkInterfaceAPI
    LinuxNetworkInterfaceAPI() noexcept {}
    // static private System.Void FreeInterfaceAddresses(System.IntPtr ifap)
    // Offset: 0x148F800
    static void FreeInterfaceAddresses(System::IntPtr ifap);
    // static private System.Int32 GetInterfaceAddresses(out System.IntPtr ifap)
    // Offset: 0x148F884
    static int GetInterfaceAddresses(System::IntPtr& ifap);
    // public override System.Net.NetworkInformation.NetworkInterface[] GetAllNetworkInterfaces()
    // Offset: 0x148F908
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory
    // Base method: System.Net.NetworkInformation.NetworkInterface[] NetworkInterfaceFactory::GetAllNetworkInterfaces()
    ::Array<System::Net::NetworkInformation::NetworkInterface*>* GetAllNetworkInterfaces();
    // public System.Void .ctor()
    // Offset: 0x148F7E8
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory/UnixNetworkInterfaceAPI
    // Base method: System.Void UnixNetworkInterfaceAPI::.ctor()
    // Base method: System.Void NetworkInterfaceFactory::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkInterfaceFactory::LinuxNetworkInterfaceAPI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkInterfaceFactory::LinuxNetworkInterfaceAPI*, creationType>()));
    }
  }; // System.Net.NetworkInformation.NetworkInterfaceFactory/LinuxNetworkInterfaceAPI
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI*, "System.Net.NetworkInformation", "NetworkInterfaceFactory/LinuxNetworkInterfaceAPI");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::FreeInterfaceAddresses
// Il2CppName: FreeInterfaceAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr)>(&System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::FreeInterfaceAddresses)> {
  const MethodInfo* get() {
    static auto* ifap = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI*), "FreeInterfaceAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ifap});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::GetInterfaceAddresses
// Il2CppName: GetInterfaceAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IntPtr&)>(&System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::GetInterfaceAddresses)> {
  const MethodInfo* get() {
    static auto* ifap = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI*), "GetInterfaceAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ifap});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::GetAllNetworkInterfaces
// Il2CppName: GetAllNetworkInterfaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Net::NetworkInformation::NetworkInterface*>* (System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::*)()>(&System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::GetAllNetworkInterfaces)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI*), "GetAllNetworkInterfaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
