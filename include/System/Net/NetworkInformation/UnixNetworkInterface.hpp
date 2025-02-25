// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.NetworkInformation.NetworkInterface
#include "System/Net/NetworkInformation/NetworkInterface.hpp"
// Including type: System.Net.NetworkInformation.NetworkInterfaceType
#include "System/Net/NetworkInformation/NetworkInterfaceType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: IPInterfaceProperties
  class IPInterfaceProperties;
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
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.UnixNetworkInterface
  // [TokenAttribute] Offset: FFFFFFFF
  class UnixNetworkInterface : public System::Net::NetworkInformation::NetworkInterface {
    public:
    // protected System.Net.NetworkInformation.IPInterfaceProperties ipproperties
    // Size: 0x8
    // Offset: 0x10
    System::Net::NetworkInformation::IPInterfaceProperties* ipproperties;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::IPInterfaceProperties*) == 0x8);
    // private System.String name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected System.Collections.Generic.List`1<System.Net.IPAddress> addresses
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<System::Net::IPAddress*>* addresses;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Net::IPAddress*>*) == 0x8);
    // private System.Byte[] macAddress
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* macAddress;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Net.NetworkInformation.NetworkInterfaceType type
    // Size: 0x4
    // Offset: 0x30
    System::Net::NetworkInformation::NetworkInterfaceType type;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::NetworkInterfaceType) == 0x4);
    // Creating value type constructor for type: UnixNetworkInterface
    UnixNetworkInterface(System::Net::NetworkInformation::IPInterfaceProperties* ipproperties_ = {}, ::Il2CppString* name_ = {}, System::Collections::Generic::List_1<System::Net::IPAddress*>* addresses_ = {}, ::Array<uint8_t>* macAddress_ = {}, System::Net::NetworkInformation::NetworkInterfaceType type_ = {}) noexcept : ipproperties{ipproperties_}, name{name_}, addresses{addresses_}, macAddress{macAddress_}, type{type_} {}
    // Get instance field reference: protected System.Net.NetworkInformation.IPInterfaceProperties ipproperties
    System::Net::NetworkInformation::IPInterfaceProperties*& dyn_ipproperties();
    // Get instance field reference: private System.String name
    ::Il2CppString*& dyn_name();
    // Get instance field reference: protected System.Collections.Generic.List`1<System.Net.IPAddress> addresses
    System::Collections::Generic::List_1<System::Net::IPAddress*>*& dyn_addresses();
    // Get instance field reference: private System.Byte[] macAddress
    ::Array<uint8_t>*& dyn_macAddress();
    // Get instance field reference: private System.Net.NetworkInformation.NetworkInterfaceType type
    System::Net::NetworkInformation::NetworkInterfaceType& dyn_type();
    // System.Void .ctor(System.String name)
    // Offset: 0x14A0560
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnixNetworkInterface* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::UnixNetworkInterface::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnixNetworkInterface*, creationType>(name)));
    }
    // System.Void AddAddress(System.Net.IPAddress address)
    // Offset: 0x14A20A4
    void AddAddress(System::Net::IPAddress* address);
    // System.Void SetLinkLayerInfo(System.Int32 index, System.Byte[] macAddress, System.Net.NetworkInformation.NetworkInterfaceType type)
    // Offset: 0x14A210C
    void SetLinkLayerInfo(int index, ::Array<uint8_t>* macAddress, System::Net::NetworkInformation::NetworkInterfaceType type);
    // public override System.String get_Name()
    // Offset: 0x14A3720
    // Implemented from: System.Net.NetworkInformation.NetworkInterface
    // Base method: System.String NetworkInterface::get_Name()
    ::Il2CppString* get_Name();
    // public override System.Net.NetworkInformation.NetworkInterfaceType get_NetworkInterfaceType()
    // Offset: 0x14A3728
    // Implemented from: System.Net.NetworkInformation.NetworkInterface
    // Base method: System.Net.NetworkInformation.NetworkInterfaceType NetworkInterface::get_NetworkInterfaceType()
    System::Net::NetworkInformation::NetworkInterfaceType get_NetworkInterfaceType();
  }; // System.Net.NetworkInformation.UnixNetworkInterface
  #pragma pack(pop)
  static check_size<sizeof(UnixNetworkInterface), 48 + sizeof(System::Net::NetworkInformation::NetworkInterfaceType)> __System_Net_NetworkInformation_UnixNetworkInterfaceSizeCheck;
  static_assert(sizeof(UnixNetworkInterface) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnixNetworkInterface*, "System.Net.NetworkInformation", "UnixNetworkInterface");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnixNetworkInterface::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnixNetworkInterface::AddAddress
// Il2CppName: AddAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::UnixNetworkInterface::*)(System::Net::IPAddress*)>(&System::Net::NetworkInformation::UnixNetworkInterface::AddAddress)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnixNetworkInterface*), "AddAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnixNetworkInterface::SetLinkLayerInfo
// Il2CppName: SetLinkLayerInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::UnixNetworkInterface::*)(int, ::Array<uint8_t>*, System::Net::NetworkInformation::NetworkInterfaceType)>(&System::Net::NetworkInformation::UnixNetworkInterface::SetLinkLayerInfo)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* macAddress = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Net.NetworkInformation", "NetworkInterfaceType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnixNetworkInterface*), "SetLinkLayerInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, macAddress, type});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnixNetworkInterface::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::NetworkInformation::UnixNetworkInterface::*)()>(&System::Net::NetworkInformation::UnixNetworkInterface::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnixNetworkInterface*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnixNetworkInterface::get_NetworkInterfaceType
// Il2CppName: get_NetworkInterfaceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::NetworkInterfaceType (System::Net::NetworkInformation::UnixNetworkInterface::*)()>(&System::Net::NetworkInformation::UnixNetworkInterface::get_NetworkInterfaceType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnixNetworkInterface*), "get_NetworkInterfaceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
