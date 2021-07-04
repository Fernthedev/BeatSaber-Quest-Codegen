// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.UnixIPGlobalProperties
#include "System/Net/NetworkInformation/UnixIPGlobalProperties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.MibIPGlobalProperties
  class MibIPGlobalProperties : public System::Net::NetworkInformation::UnixIPGlobalProperties {
    public:
    // public readonly System.String StatisticsFile
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* StatisticsFile;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String StatisticsFileIPv6
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* StatisticsFileIPv6;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String TcpFile
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* TcpFile;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String Tcp6File
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* Tcp6File;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String UdpFile
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* UdpFile;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String Udp6File
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* Udp6File;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MibIPGlobalProperties
    MibIPGlobalProperties(::Il2CppString* StatisticsFile_ = {}, ::Il2CppString* StatisticsFileIPv6_ = {}, ::Il2CppString* TcpFile_ = {}, ::Il2CppString* Tcp6File_ = {}, ::Il2CppString* UdpFile_ = {}, ::Il2CppString* Udp6File_ = {}) noexcept : StatisticsFile{StatisticsFile_}, StatisticsFileIPv6{StatisticsFileIPv6_}, TcpFile{TcpFile_}, Tcp6File{Tcp6File_}, UdpFile{UdpFile_}, Udp6File{Udp6File_} {}
    // Get static field: static private readonly System.Char[] wsChars
    static ::Array<::Il2CppChar>* _get_wsChars();
    // Set static field: static private readonly System.Char[] wsChars
    static void _set_wsChars(::Array<::Il2CppChar>* value);
    // public System.Void .ctor(System.String procDir)
    // Offset: 0x148DD18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MibIPGlobalProperties* New_ctor(::Il2CppString* procDir) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::MibIPGlobalProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MibIPGlobalProperties*, creationType>(procDir)));
    }
    // static private System.Void .cctor()
    // Offset: 0x148F1A0
    static void _cctor();
  }; // System.Net.NetworkInformation.MibIPGlobalProperties
  #pragma pack(pop)
  static check_size<sizeof(MibIPGlobalProperties), 56 + sizeof(::Il2CppString*)> __System_Net_NetworkInformation_MibIPGlobalPropertiesSizeCheck;
  static_assert(sizeof(MibIPGlobalProperties) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::MibIPGlobalProperties*, "System.Net.NetworkInformation", "MibIPGlobalProperties");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Net::NetworkInformation::MibIPGlobalProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::MibIPGlobalProperties::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::NetworkInformation::MibIPGlobalProperties::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::MibIPGlobalProperties*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
