// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Net.NetworkInformation.Win32LengthFlagsUnion
#include "System/Net/NetworkInformation/Win32LengthFlagsUnion.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Net.NetworkInformation.Win32_SOCKET_ADDRESS
#include "System/Net/NetworkInformation/Win32_SOCKET_ADDRESS.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.Win32_IP_ADAPTER_GATEWAY_ADDRESS
  // [TokenAttribute] Offset: FFFFFFFF
  struct Win32_IP_ADAPTER_GATEWAY_ADDRESS/*, public System::ValueType*/ {
    public:
    // public System.Net.NetworkInformation.Win32LengthFlagsUnion LengthFlags
    // Size: 0x8
    // Offset: 0x0
    System::Net::NetworkInformation::Win32LengthFlagsUnion LengthFlags;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::Win32LengthFlagsUnion) == 0x8);
    // public System.IntPtr Next
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr Next;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.Net.NetworkInformation.Win32_SOCKET_ADDRESS Address
    // Size: 0xC
    // Offset: 0x10
    System::Net::NetworkInformation::Win32_SOCKET_ADDRESS Address;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::Win32_SOCKET_ADDRESS) == 0xC);
    // Creating value type constructor for type: Win32_IP_ADAPTER_GATEWAY_ADDRESS
    constexpr Win32_IP_ADAPTER_GATEWAY_ADDRESS(System::Net::NetworkInformation::Win32LengthFlagsUnion LengthFlags_ = {}, System::IntPtr Next_ = {}, System::Net::NetworkInformation::Win32_SOCKET_ADDRESS Address_ = {}) noexcept : LengthFlags{LengthFlags_}, Next{Next_}, Address{Address_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Net.NetworkInformation.Win32LengthFlagsUnion LengthFlags
    System::Net::NetworkInformation::Win32LengthFlagsUnion& dyn_LengthFlags();
    // Get instance field reference: public System.IntPtr Next
    System::IntPtr& dyn_Next();
    // Get instance field reference: public System.Net.NetworkInformation.Win32_SOCKET_ADDRESS Address
    System::Net::NetworkInformation::Win32_SOCKET_ADDRESS& dyn_Address();
  }; // System.Net.NetworkInformation.Win32_IP_ADAPTER_GATEWAY_ADDRESS
  #pragma pack(pop)
  static check_size<sizeof(Win32_IP_ADAPTER_GATEWAY_ADDRESS), 16 + sizeof(System::Net::NetworkInformation::Win32_SOCKET_ADDRESS)> __System_Net_NetworkInformation_Win32_IP_ADAPTER_GATEWAY_ADDRESSSizeCheck;
  static_assert(sizeof(Win32_IP_ADAPTER_GATEWAY_ADDRESS) == 0x1C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32_IP_ADAPTER_GATEWAY_ADDRESS, "System.Net.NetworkInformation", "Win32_IP_ADAPTER_GATEWAY_ADDRESS");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
