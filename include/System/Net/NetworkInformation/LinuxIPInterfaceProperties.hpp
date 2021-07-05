// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.UnixIPInterfaceProperties
#include "System/Net/NetworkInformation/UnixIPInterfaceProperties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: LinuxNetworkInterface
  class LinuxNetworkInterface;
  // Forward declaring type: IPAddressCollection
  class IPAddressCollection;
  // Forward declaring type: GatewayIPAddressInformationCollection
  class GatewayIPAddressInformationCollection;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.LinuxIPInterfaceProperties
  class LinuxIPInterfaceProperties : public System::Net::NetworkInformation::UnixIPInterfaceProperties {
    public:
    // Creating value type constructor for type: LinuxIPInterfaceProperties
    LinuxIPInterfaceProperties() noexcept {}
    // public System.Void .ctor(System.Net.NetworkInformation.LinuxNetworkInterface iface, System.Collections.Generic.List`1<System.Net.IPAddress> addresses)
    // Offset: 0x148DE64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinuxIPInterfaceProperties* New_ctor(System::Net::NetworkInformation::LinuxNetworkInterface* iface, System::Collections::Generic::List_1<System::Net::IPAddress*>* addresses) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::LinuxIPInterfaceProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinuxIPInterfaceProperties*, creationType>(iface, addresses)));
    }
    // private System.Net.NetworkInformation.IPAddressCollection ParseRouteInfo(System.String iface)
    // Offset: 0x148DF1C
    System::Net::NetworkInformation::IPAddressCollection* ParseRouteInfo(::Il2CppString* iface);
    // public override System.Net.NetworkInformation.GatewayIPAddressInformationCollection get_GatewayAddresses()
    // Offset: 0x148E3A4
    // Implemented from: System.Net.NetworkInformation.IPInterfaceProperties
    // Base method: System.Net.NetworkInformation.GatewayIPAddressInformationCollection IPInterfaceProperties::get_GatewayAddresses()
    System::Net::NetworkInformation::GatewayIPAddressInformationCollection* get_GatewayAddresses();
  }; // System.Net.NetworkInformation.LinuxIPInterfaceProperties
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::LinuxIPInterfaceProperties*, "System.Net.NetworkInformation", "LinuxIPInterfaceProperties");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::LinuxIPInterfaceProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::LinuxIPInterfaceProperties::ParseRouteInfo
// Il2CppName: ParseRouteInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::IPAddressCollection* (System::Net::NetworkInformation::LinuxIPInterfaceProperties::*)(::Il2CppString*)>(&System::Net::NetworkInformation::LinuxIPInterfaceProperties::ParseRouteInfo)> {
  const MethodInfo* get() {
    static auto* iface = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::LinuxIPInterfaceProperties*), "ParseRouteInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{iface});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::LinuxIPInterfaceProperties::get_GatewayAddresses
// Il2CppName: get_GatewayAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::GatewayIPAddressInformationCollection* (System::Net::NetworkInformation::LinuxIPInterfaceProperties::*)()>(&System::Net::NetworkInformation::LinuxIPInterfaceProperties::get_GatewayAddresses)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::LinuxIPInterfaceProperties*), "get_GatewayAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
