// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Net.NetworkInformation.MacOsStructs.in6_addr
#include "System/Net/NetworkInformation/MacOsStructs/in6_addr.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation.MacOsStructs
namespace System::Net::NetworkInformation::MacOsStructs {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
  struct sockaddr_in6/*, public System::ValueType*/ {
    public:
    // public System.Byte sin6_len
    // Size: 0x1
    // Offset: 0x0
    uint8_t sin6_len;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte sin6_family
    // Size: 0x1
    // Offset: 0x1
    uint8_t sin6_family;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.UInt16 sin6_port
    // Size: 0x2
    // Offset: 0x2
    uint16_t sin6_port;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.UInt32 sin6_flowinfo
    // Size: 0x4
    // Offset: 0x4
    uint sin6_flowinfo;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Net.NetworkInformation.MacOsStructs.in6_addr sin6_addr
    // Size: 0x8
    // Offset: 0x8
    System::Net::NetworkInformation::MacOsStructs::in6_addr sin6_addr;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::MacOsStructs::in6_addr) == 0x8);
    // public System.UInt32 sin6_scope_id
    // Size: 0x4
    // Offset: 0x10
    uint sin6_scope_id;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: sockaddr_in6
    constexpr sockaddr_in6(uint8_t sin6_len_ = {}, uint8_t sin6_family_ = {}, uint16_t sin6_port_ = {}, uint sin6_flowinfo_ = {}, System::Net::NetworkInformation::MacOsStructs::in6_addr sin6_addr_ = {}, uint sin6_scope_id_ = {}) noexcept : sin6_len{sin6_len_}, sin6_family{sin6_family_}, sin6_port{sin6_port_}, sin6_flowinfo{sin6_flowinfo_}, sin6_addr{sin6_addr_}, sin6_scope_id{sin6_scope_id_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
  #pragma pack(pop)
  static check_size<sizeof(sockaddr_in6), 16 + sizeof(uint)> __System_Net_NetworkInformation_MacOsStructs_sockaddr_in6SizeCheck;
  static_assert(sizeof(sockaddr_in6) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::MacOsStructs::sockaddr_in6, "System.Net.NetworkInformation.MacOsStructs", "sockaddr_in6");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
