// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.IPGlobalProperties
#include "System/Net/NetworkInformation/IPGlobalProperties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.Win32IPGlobalProperties
  class Win32IPGlobalProperties : public System::Net::NetworkInformation::IPGlobalProperties {
    public:
    // Creating value type constructor for type: Win32IPGlobalProperties
    Win32IPGlobalProperties() noexcept {}
    // public override System.String get_DomainName()
    // Offset: 0x149191C
    // Implemented from: System.Net.NetworkInformation.IPGlobalProperties
    // Base method: System.String IPGlobalProperties::get_DomainName()
    ::Il2CppString* get_DomainName();
    // public System.Void .ctor()
    // Offset: 0x148DE40
    // Implemented from: System.Net.NetworkInformation.IPGlobalProperties
    // Base method: System.Void IPGlobalProperties::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Win32IPGlobalProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::Win32IPGlobalProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Win32IPGlobalProperties*, creationType>()));
    }
  }; // System.Net.NetworkInformation.Win32IPGlobalProperties
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32IPGlobalProperties*, "System.Net.NetworkInformation", "Win32IPGlobalProperties");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Net::NetworkInformation::Win32IPGlobalProperties::get_DomainName
// Il2CppName: get_DomainName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::NetworkInformation::Win32IPGlobalProperties::*)()>(&System::Net::NetworkInformation::Win32IPGlobalProperties::get_DomainName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::Win32IPGlobalProperties*), "get_DomainName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::Win32IPGlobalProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
