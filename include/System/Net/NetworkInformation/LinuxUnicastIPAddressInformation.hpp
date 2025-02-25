// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.NetworkInformation.UnicastIPAddressInformation
#include "System/Net/NetworkInformation/UnicastIPAddressInformation.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.LinuxUnicastIPAddressInformation
  // [TokenAttribute] Offset: FFFFFFFF
  class LinuxUnicastIPAddressInformation : public System::Net::NetworkInformation::UnicastIPAddressInformation {
    public:
    // private System.Net.IPAddress address
    // Size: 0x8
    // Offset: 0x10
    System::Net::IPAddress* address;
    // Field size check
    static_assert(sizeof(System::Net::IPAddress*) == 0x8);
    // Creating value type constructor for type: LinuxUnicastIPAddressInformation
    LinuxUnicastIPAddressInformation(System::Net::IPAddress* address_ = {}) noexcept : address{address_} {}
    // Creating conversion operator: operator System::Net::IPAddress*
    constexpr operator System::Net::IPAddress*() const noexcept {
      return address;
    }
    // Get instance field reference: private System.Net.IPAddress address
    System::Net::IPAddress*& dyn_address();
    // public System.Void .ctor(System.Net.IPAddress address)
    // Offset: 0x14A0ACC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinuxUnicastIPAddressInformation* New_ctor(System::Net::IPAddress* address) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinuxUnicastIPAddressInformation*, creationType>(address)));
    }
    // public override System.Net.IPAddress get_Address()
    // Offset: 0x14A0B00
    // Implemented from: System.Net.NetworkInformation.IPAddressInformation
    // Base method: System.Net.IPAddress IPAddressInformation::get_Address()
    System::Net::IPAddress* get_Address();
  }; // System.Net.NetworkInformation.LinuxUnicastIPAddressInformation
  #pragma pack(pop)
  static check_size<sizeof(LinuxUnicastIPAddressInformation), 16 + sizeof(System::Net::IPAddress*)> __System_Net_NetworkInformation_LinuxUnicastIPAddressInformationSizeCheck;
  static_assert(sizeof(LinuxUnicastIPAddressInformation) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*, "System.Net.NetworkInformation", "LinuxUnicastIPAddressInformation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::get_Address
// Il2CppName: get_Address
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPAddress* (System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::*)()>(&System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::get_Address)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*), "get_Address", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
