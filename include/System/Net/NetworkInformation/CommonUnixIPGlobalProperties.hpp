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
  // Autogenerated type: System.Net.NetworkInformation.CommonUnixIPGlobalProperties
  class CommonUnixIPGlobalProperties : public System::Net::NetworkInformation::IPGlobalProperties {
    public:
    // Creating value type constructor for type: CommonUnixIPGlobalProperties
    CommonUnixIPGlobalProperties() noexcept {}
    // static private System.Int32 getdomainname(System.Byte[] name, System.Int32 len)
    // Offset: 0x165D2F4
    static int getdomainname(::Array<uint8_t>* name, int len);
    // public override System.String get_DomainName()
    // Offset: 0x165D38C
    // Implemented from: System.Net.NetworkInformation.IPGlobalProperties
    // Base method: System.String IPGlobalProperties::get_DomainName()
    ::Il2CppString* get_DomainName();
    // protected System.Void .ctor()
    // Offset: 0x165D4F8
    // Implemented from: System.Net.NetworkInformation.IPGlobalProperties
    // Base method: System.Void IPGlobalProperties::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommonUnixIPGlobalProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::CommonUnixIPGlobalProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommonUnixIPGlobalProperties*, creationType>()));
    }
  }; // System.Net.NetworkInformation.CommonUnixIPGlobalProperties
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::CommonUnixIPGlobalProperties*, "System.Net.NetworkInformation", "CommonUnixIPGlobalProperties");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Net::NetworkInformation::CommonUnixIPGlobalProperties::getdomainname
// Il2CppName: getdomainname
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<uint8_t>*, int)>(&System::Net::NetworkInformation::CommonUnixIPGlobalProperties::getdomainname)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::CommonUnixIPGlobalProperties*), "getdomainname", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::CommonUnixIPGlobalProperties::get_DomainName
// Il2CppName: get_DomainName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::NetworkInformation::CommonUnixIPGlobalProperties::*)()>(&System::Net::NetworkInformation::CommonUnixIPGlobalProperties::get_DomainName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::CommonUnixIPGlobalProperties*), "get_DomainName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::CommonUnixIPGlobalProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
