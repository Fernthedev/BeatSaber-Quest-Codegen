// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Net.NetworkInformation.NetworkInterfaceType
#include "System/Net/NetworkInformation/NetworkInterfaceType.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x70
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.Win32_MIB_IFROW
  // [TokenAttribute] Offset: FFFFFFFF
  struct Win32_MIB_IFROW/*, public System::ValueType*/ {
    public:
    // public System.Char[] Name
    // Size: 0x8
    // Offset: 0x0
    ::Array<::Il2CppChar>* Name;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // public System.Int32 Index
    // Size: 0x4
    // Offset: 0x8
    int Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Net.NetworkInformation.NetworkInterfaceType Type
    // Size: 0x4
    // Offset: 0xC
    System::Net::NetworkInformation::NetworkInterfaceType Type;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::NetworkInterfaceType) == 0x4);
    // public System.Int32 Mtu
    // Size: 0x4
    // Offset: 0x10
    int Mtu;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.UInt32 Speed
    // Size: 0x4
    // Offset: 0x14
    uint Speed;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Int32 PhysAddrLen
    // Size: 0x4
    // Offset: 0x18
    int PhysAddrLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: PhysAddrLen and: PhysAddr
    char __padding5[0x4] = {};
    // public System.Byte[] PhysAddr
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* PhysAddr;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.UInt32 AdminStatus
    // Size: 0x4
    // Offset: 0x28
    uint AdminStatus;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 OperStatus
    // Size: 0x4
    // Offset: 0x2C
    uint OperStatus;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 LastChange
    // Size: 0x4
    // Offset: 0x30
    uint LastChange;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Int32 InOctets
    // Size: 0x4
    // Offset: 0x34
    int InOctets;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 InUcastPkts
    // Size: 0x4
    // Offset: 0x38
    int InUcastPkts;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 InNUcastPkts
    // Size: 0x4
    // Offset: 0x3C
    int InNUcastPkts;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 InDiscards
    // Size: 0x4
    // Offset: 0x40
    int InDiscards;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 InErrors
    // Size: 0x4
    // Offset: 0x44
    int InErrors;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 InUnknownProtos
    // Size: 0x4
    // Offset: 0x48
    int InUnknownProtos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 OutOctets
    // Size: 0x4
    // Offset: 0x4C
    int OutOctets;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 OutUcastPkts
    // Size: 0x4
    // Offset: 0x50
    int OutUcastPkts;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 OutNUcastPkts
    // Size: 0x4
    // Offset: 0x54
    int OutNUcastPkts;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 OutDiscards
    // Size: 0x4
    // Offset: 0x58
    int OutDiscards;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 OutErrors
    // Size: 0x4
    // Offset: 0x5C
    int OutErrors;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 OutQLen
    // Size: 0x4
    // Offset: 0x60
    int OutQLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 DescrLen
    // Size: 0x4
    // Offset: 0x64
    int DescrLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Byte[] Descr
    // Size: 0x8
    // Offset: 0x68
    ::Array<uint8_t>* Descr;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: Win32_MIB_IFROW
    constexpr Win32_MIB_IFROW(::Array<::Il2CppChar>* Name_ = {}, int Index_ = {}, System::Net::NetworkInformation::NetworkInterfaceType Type_ = {}, int Mtu_ = {}, uint Speed_ = {}, int PhysAddrLen_ = {}, ::Array<uint8_t>* PhysAddr_ = {}, uint AdminStatus_ = {}, uint OperStatus_ = {}, uint LastChange_ = {}, int InOctets_ = {}, int InUcastPkts_ = {}, int InNUcastPkts_ = {}, int InDiscards_ = {}, int InErrors_ = {}, int InUnknownProtos_ = {}, int OutOctets_ = {}, int OutUcastPkts_ = {}, int OutNUcastPkts_ = {}, int OutDiscards_ = {}, int OutErrors_ = {}, int OutQLen_ = {}, int DescrLen_ = {}, ::Array<uint8_t>* Descr_ = {}) noexcept : Name{Name_}, Index{Index_}, Type{Type_}, Mtu{Mtu_}, Speed{Speed_}, PhysAddrLen{PhysAddrLen_}, PhysAddr{PhysAddr_}, AdminStatus{AdminStatus_}, OperStatus{OperStatus_}, LastChange{LastChange_}, InOctets{InOctets_}, InUcastPkts{InUcastPkts_}, InNUcastPkts{InNUcastPkts_}, InDiscards{InDiscards_}, InErrors{InErrors_}, InUnknownProtos{InUnknownProtos_}, OutOctets{OutOctets_}, OutUcastPkts{OutUcastPkts_}, OutNUcastPkts{OutNUcastPkts_}, OutDiscards{OutDiscards_}, OutErrors{OutErrors_}, OutQLen{OutQLen_}, DescrLen{DescrLen_}, Descr{Descr_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Char[] Name
    ::Array<::Il2CppChar>*& dyn_Name();
    // Get instance field reference: public System.Int32 Index
    int& dyn_Index();
    // Get instance field reference: public System.Net.NetworkInformation.NetworkInterfaceType Type
    System::Net::NetworkInformation::NetworkInterfaceType& dyn_Type();
    // Get instance field reference: public System.Int32 Mtu
    int& dyn_Mtu();
    // Get instance field reference: public System.UInt32 Speed
    uint& dyn_Speed();
    // Get instance field reference: public System.Int32 PhysAddrLen
    int& dyn_PhysAddrLen();
    // Get instance field reference: public System.Byte[] PhysAddr
    ::Array<uint8_t>*& dyn_PhysAddr();
    // Get instance field reference: public System.UInt32 AdminStatus
    uint& dyn_AdminStatus();
    // Get instance field reference: public System.UInt32 OperStatus
    uint& dyn_OperStatus();
    // Get instance field reference: public System.UInt32 LastChange
    uint& dyn_LastChange();
    // Get instance field reference: public System.Int32 InOctets
    int& dyn_InOctets();
    // Get instance field reference: public System.Int32 InUcastPkts
    int& dyn_InUcastPkts();
    // Get instance field reference: public System.Int32 InNUcastPkts
    int& dyn_InNUcastPkts();
    // Get instance field reference: public System.Int32 InDiscards
    int& dyn_InDiscards();
    // Get instance field reference: public System.Int32 InErrors
    int& dyn_InErrors();
    // Get instance field reference: public System.Int32 InUnknownProtos
    int& dyn_InUnknownProtos();
    // Get instance field reference: public System.Int32 OutOctets
    int& dyn_OutOctets();
    // Get instance field reference: public System.Int32 OutUcastPkts
    int& dyn_OutUcastPkts();
    // Get instance field reference: public System.Int32 OutNUcastPkts
    int& dyn_OutNUcastPkts();
    // Get instance field reference: public System.Int32 OutDiscards
    int& dyn_OutDiscards();
    // Get instance field reference: public System.Int32 OutErrors
    int& dyn_OutErrors();
    // Get instance field reference: public System.Int32 OutQLen
    int& dyn_OutQLen();
    // Get instance field reference: public System.Int32 DescrLen
    int& dyn_DescrLen();
    // Get instance field reference: public System.Byte[] Descr
    ::Array<uint8_t>*& dyn_Descr();
  }; // System.Net.NetworkInformation.Win32_MIB_IFROW
  #pragma pack(pop)
  static check_size<sizeof(Win32_MIB_IFROW), 104 + sizeof(::Array<uint8_t>*)> __System_Net_NetworkInformation_Win32_MIB_IFROWSizeCheck;
  static_assert(sizeof(Win32_MIB_IFROW) == 0x70);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32_MIB_IFROW, "System.Net.NetworkInformation", "Win32_MIB_IFROW");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
