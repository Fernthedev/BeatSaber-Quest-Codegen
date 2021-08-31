// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.sockaddr_ll
  // [TokenAttribute] Offset: FFFFFFFF
  struct sockaddr_ll/*, public System::ValueType*/ {
    public:
    // public System.UInt16 sll_family
    // Size: 0x2
    // Offset: 0x0
    uint16_t sll_family;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.UInt16 sll_protocol
    // Size: 0x2
    // Offset: 0x2
    uint16_t sll_protocol;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.Int32 sll_ifindex
    // Size: 0x4
    // Offset: 0x4
    int sll_ifindex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.UInt16 sll_hatype
    // Size: 0x2
    // Offset: 0x8
    uint16_t sll_hatype;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.Byte sll_pkttype
    // Size: 0x1
    // Offset: 0xA
    uint8_t sll_pkttype;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte sll_halen
    // Size: 0x1
    // Offset: 0xB
    uint8_t sll_halen;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: sll_halen and: sll_addr
    char __padding5[0x4] = {};
    // public System.Byte[] sll_addr
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* sll_addr;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: sockaddr_ll
    constexpr sockaddr_ll(uint16_t sll_family_ = {}, uint16_t sll_protocol_ = {}, int sll_ifindex_ = {}, uint16_t sll_hatype_ = {}, uint8_t sll_pkttype_ = {}, uint8_t sll_halen_ = {}, ::Array<uint8_t>* sll_addr_ = {}) noexcept : sll_family{sll_family_}, sll_protocol{sll_protocol_}, sll_ifindex{sll_ifindex_}, sll_hatype{sll_hatype_}, sll_pkttype{sll_pkttype_}, sll_halen{sll_halen_}, sll_addr{sll_addr_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt16 sll_family
    uint16_t& dyn_sll_family();
    // Get instance field reference: public System.UInt16 sll_protocol
    uint16_t& dyn_sll_protocol();
    // Get instance field reference: public System.Int32 sll_ifindex
    int& dyn_sll_ifindex();
    // Get instance field reference: public System.UInt16 sll_hatype
    uint16_t& dyn_sll_hatype();
    // Get instance field reference: public System.Byte sll_pkttype
    uint8_t& dyn_sll_pkttype();
    // Get instance field reference: public System.Byte sll_halen
    uint8_t& dyn_sll_halen();
    // Get instance field reference: public System.Byte[] sll_addr
    ::Array<uint8_t>*& dyn_sll_addr();
  }; // System.Net.NetworkInformation.sockaddr_ll
  #pragma pack(pop)
  static check_size<sizeof(sockaddr_ll), 16 + sizeof(::Array<uint8_t>*)> __System_Net_NetworkInformation_sockaddr_llSizeCheck;
  static_assert(sizeof(sockaddr_ll) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::sockaddr_ll, "System.Net.NetworkInformation", "sockaddr_ll");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
