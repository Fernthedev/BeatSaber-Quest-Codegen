// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.Win32_FIXED_INFO
#include "System/Net/NetworkInformation/Win32_FIXED_INFO.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.Win32NetworkInterface
  class Win32NetworkInterface : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Win32NetworkInterface
    Win32NetworkInterface() noexcept {}
    // Get static field: static private System.Net.NetworkInformation.Win32_FIXED_INFO fixedInfo
    static System::Net::NetworkInformation::Win32_FIXED_INFO _get_fixedInfo();
    // Set static field: static private System.Net.NetworkInformation.Win32_FIXED_INFO fixedInfo
    static void _set_fixedInfo(System::Net::NetworkInformation::Win32_FIXED_INFO value);
    // Get static field: static private System.Boolean initialized
    static bool _get_initialized();
    // Set static field: static private System.Boolean initialized
    static void _set_initialized(bool value);
    // static private System.Int32 GetNetworkParams(System.IntPtr ptr, ref System.Int32 size)
    // Offset: 0x1492150
    static int GetNetworkParams(System::IntPtr ptr, int& size);
    // static public System.Net.NetworkInformation.Win32_FIXED_INFO get_FixedInfo()
    // Offset: 0x1491940
    static System::Net::NetworkInformation::Win32_FIXED_INFO get_FixedInfo();
  }; // System.Net.NetworkInformation.Win32NetworkInterface
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32NetworkInterface*, "System.Net.NetworkInformation", "Win32NetworkInterface");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::Win32NetworkInterface::GetNetworkParams
// Il2CppName: GetNetworkParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IntPtr, int&)>(&System::Net::NetworkInformation::Win32NetworkInterface::GetNetworkParams)> {
  const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::Win32NetworkInterface*), "GetNetworkParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr, size});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::Win32NetworkInterface::get_FixedInfo
// Il2CppName: get_FixedInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::Win32_FIXED_INFO (*)()>(&System::Net::NetworkInformation::Win32NetworkInterface::get_FixedInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::Win32NetworkInterface*), "get_FixedInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
