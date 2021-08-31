// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.NetworkInformation.IPInterfaceProperties
#include "System/Net/NetworkInformation/IPInterfaceProperties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: UnixNetworkInterface
  class UnixNetworkInterface;
  // Forward declaring type: UnicastIPAddressInformationCollection
  class UnicastIPAddressInformationCollection;
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
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.UnixIPInterfaceProperties
  // [TokenAttribute] Offset: FFFFFFFF
  class UnixIPInterfaceProperties : public System::Net::NetworkInformation::IPInterfaceProperties {
    public:
    // protected System.Net.NetworkInformation.UnixNetworkInterface iface
    // Size: 0x8
    // Offset: 0x10
    System::Net::NetworkInformation::UnixNetworkInterface* iface;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::UnixNetworkInterface*) == 0x8);
    // private System.Collections.Generic.List`1<System.Net.IPAddress> addresses
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Net::IPAddress*>* addresses;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Net::IPAddress*>*) == 0x8);
    // Creating value type constructor for type: UnixIPInterfaceProperties
    UnixIPInterfaceProperties(System::Net::NetworkInformation::UnixNetworkInterface* iface_ = {}, System::Collections::Generic::List_1<System::Net::IPAddress*>* addresses_ = {}) noexcept : iface{iface_}, addresses{addresses_} {}
    // Get static field: static private System.Text.RegularExpressions.Regex ns
    static System::Text::RegularExpressions::Regex* _get_ns();
    // Set static field: static private System.Text.RegularExpressions.Regex ns
    static void _set_ns(System::Text::RegularExpressions::Regex* value);
    // Get static field: static private System.Text.RegularExpressions.Regex search
    static System::Text::RegularExpressions::Regex* _get_search();
    // Set static field: static private System.Text.RegularExpressions.Regex search
    static void _set_search(System::Text::RegularExpressions::Regex* value);
    // Get instance field reference: protected System.Net.NetworkInformation.UnixNetworkInterface iface
    System::Net::NetworkInformation::UnixNetworkInterface*& dyn_iface();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Net.IPAddress> addresses
    System::Collections::Generic::List_1<System::Net::IPAddress*>*& dyn_addresses();
    // public System.Void .ctor(System.Net.NetworkInformation.UnixNetworkInterface iface, System.Collections.Generic.List`1<System.Net.IPAddress> addresses)
    // Offset: 0x1497D8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnixIPInterfaceProperties* New_ctor(System::Net::NetworkInformation::UnixNetworkInterface* iface, System::Collections::Generic::List_1<System::Net::IPAddress*>* addresses) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::UnixIPInterfaceProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnixIPInterfaceProperties*, creationType>(iface, addresses)));
    }
    // static private System.Void .cctor()
    // Offset: 0x149B6B8
    static void _cctor();
    // public override System.Net.NetworkInformation.UnicastIPAddressInformationCollection get_UnicastAddresses()
    // Offset: 0x149B4B0
    // Implemented from: System.Net.NetworkInformation.IPInterfaceProperties
    // Base method: System.Net.NetworkInformation.UnicastIPAddressInformationCollection IPInterfaceProperties::get_UnicastAddresses()
    System::Net::NetworkInformation::UnicastIPAddressInformationCollection* get_UnicastAddresses();
  }; // System.Net.NetworkInformation.UnixIPInterfaceProperties
  #pragma pack(pop)
  static check_size<sizeof(UnixIPInterfaceProperties), 24 + sizeof(System::Collections::Generic::List_1<System::Net::IPAddress*>*)> __System_Net_NetworkInformation_UnixIPInterfacePropertiesSizeCheck;
  static_assert(sizeof(UnixIPInterfaceProperties) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnixIPInterfaceProperties*, "System.Net.NetworkInformation", "UnixIPInterfaceProperties");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnixIPInterfaceProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnixIPInterfaceProperties::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::NetworkInformation::UnixIPInterfaceProperties::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnixIPInterfaceProperties*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::UnixIPInterfaceProperties::get_UnicastAddresses
// Il2CppName: get_UnicastAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::UnicastIPAddressInformationCollection* (System::Net::NetworkInformation::UnixIPInterfaceProperties::*)()>(&System::Net::NetworkInformation::UnixIPInterfaceProperties::get_UnicastAddresses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::UnixIPInterfaceProperties*), "get_UnicastAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
