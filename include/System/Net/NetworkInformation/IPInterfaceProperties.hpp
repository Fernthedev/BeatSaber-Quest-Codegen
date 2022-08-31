// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: UnicastIPAddressInformationCollection
  class UnicastIPAddressInformationCollection;
  // Forward declaring type: GatewayIPAddressInformationCollection
  class GatewayIPAddressInformationCollection;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: IPInterfaceProperties
  class IPInterfaceProperties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetworkInformation::IPInterfaceProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::IPInterfaceProperties*, "System.Net.NetworkInformation", "IPInterfaceProperties");
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.IPInterfaceProperties
  // [TokenAttribute] Offset: FFFFFFFF
  class IPInterfaceProperties : public ::Il2CppObject {
    public:
    // public System.Net.NetworkInformation.UnicastIPAddressInformationCollection get_UnicastAddresses()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* get_UnicastAddresses();
    // public System.Net.NetworkInformation.GatewayIPAddressInformationCollection get_GatewayAddresses()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* get_GatewayAddresses();
    // protected System.Void .ctor()
    // Offset: 0x1AC167C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IPInterfaceProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::NetworkInformation::IPInterfaceProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IPInterfaceProperties*, creationType>()));
    }
  }; // System.Net.NetworkInformation.IPInterfaceProperties
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::IPInterfaceProperties::get_UnicastAddresses
// Il2CppName: get_UnicastAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* (System::Net::NetworkInformation::IPInterfaceProperties::*)()>(&System::Net::NetworkInformation::IPInterfaceProperties::get_UnicastAddresses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::IPInterfaceProperties*), "get_UnicastAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::IPInterfaceProperties::get_GatewayAddresses
// Il2CppName: get_GatewayAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* (System::Net::NetworkInformation::IPInterfaceProperties::*)()>(&System::Net::NetworkInformation::IPInterfaceProperties::get_GatewayAddresses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::IPInterfaceProperties*), "get_GatewayAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::IPInterfaceProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
