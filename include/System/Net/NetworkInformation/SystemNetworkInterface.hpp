// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: NetworkInterfaceFactory
  class NetworkInterfaceFactory;
  // Forward declaring type: NetworkInterface
  class NetworkInterface;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.SystemNetworkInterface
  class SystemNetworkInterface : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SystemNetworkInterface
    SystemNetworkInterface() noexcept {}
    // Get static field: static private readonly System.Net.NetworkInformation.NetworkInterfaceFactory nif
    static System::Net::NetworkInformation::NetworkInterfaceFactory* _get_nif();
    // Set static field: static private readonly System.Net.NetworkInformation.NetworkInterfaceFactory nif
    static void _set_nif(System::Net::NetworkInformation::NetworkInterfaceFactory* value);
    // static public System.Net.NetworkInformation.NetworkInterface[] GetNetworkInterfaces()
    // Offset: 0x148F438
    static ::Array<System::Net::NetworkInformation::NetworkInterface*>* GetNetworkInterfaces();
    // static private System.Void .cctor()
    // Offset: 0x14911BC
    static void _cctor();
  }; // System.Net.NetworkInformation.SystemNetworkInterface
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::SystemNetworkInterface*, "System.Net.NetworkInformation", "SystemNetworkInterface");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::SystemNetworkInterface::GetNetworkInterfaces
// Il2CppName: GetNetworkInterfaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Net::NetworkInformation::NetworkInterface*>* (*)()>(&System::Net::NetworkInformation::SystemNetworkInterface::GetNetworkInterfaces)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::SystemNetworkInterface*), "GetNetworkInterfaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::SystemNetworkInterface::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::NetworkInformation::SystemNetworkInterface::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::SystemNetworkInterface*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
