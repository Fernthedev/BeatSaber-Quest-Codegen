// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.AddressFamily
  // [TokenAttribute] Offset: FFFFFFFF
  struct AddressFamily/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AddressFamily
    constexpr AddressFamily(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Sockets.AddressFamily Unknown
    static constexpr const int Unknown = -1;
    // Get static field: static public System.Net.Sockets.AddressFamily Unknown
    static System::Net::Sockets::AddressFamily _get_Unknown();
    // Set static field: static public System.Net.Sockets.AddressFamily Unknown
    static void _set_Unknown(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily Unspecified
    static constexpr const int Unspecified = 0;
    // Get static field: static public System.Net.Sockets.AddressFamily Unspecified
    static System::Net::Sockets::AddressFamily _get_Unspecified();
    // Set static field: static public System.Net.Sockets.AddressFamily Unspecified
    static void _set_Unspecified(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily Unix
    static constexpr const int Unix = 1;
    // Get static field: static public System.Net.Sockets.AddressFamily Unix
    static System::Net::Sockets::AddressFamily _get_Unix();
    // Set static field: static public System.Net.Sockets.AddressFamily Unix
    static void _set_Unix(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily InterNetwork
    static constexpr const int InterNetwork = 2;
    // Get static field: static public System.Net.Sockets.AddressFamily InterNetwork
    static System::Net::Sockets::AddressFamily _get_InterNetwork();
    // Set static field: static public System.Net.Sockets.AddressFamily InterNetwork
    static void _set_InterNetwork(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily ImpLink
    static constexpr const int ImpLink = 3;
    // Get static field: static public System.Net.Sockets.AddressFamily ImpLink
    static System::Net::Sockets::AddressFamily _get_ImpLink();
    // Set static field: static public System.Net.Sockets.AddressFamily ImpLink
    static void _set_ImpLink(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily Pup
    static constexpr const int Pup = 4;
    // Get static field: static public System.Net.Sockets.AddressFamily Pup
    static System::Net::Sockets::AddressFamily _get_Pup();
    // Set static field: static public System.Net.Sockets.AddressFamily Pup
    static void _set_Pup(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily Chaos
    static constexpr const int Chaos = 5;
    // Get static field: static public System.Net.Sockets.AddressFamily Chaos
    static System::Net::Sockets::AddressFamily _get_Chaos();
    // Set static field: static public System.Net.Sockets.AddressFamily Chaos
    static void _set_Chaos(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily NS
    static constexpr const int NS = 6;
    // Get static field: static public System.Net.Sockets.AddressFamily NS
    static System::Net::Sockets::AddressFamily _get_NS();
    // Set static field: static public System.Net.Sockets.AddressFamily NS
    static void _set_NS(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily Ipx
    static constexpr const int Ipx = 6;
    // Get static field: static public System.Net.Sockets.AddressFamily Ipx
    static System::Net::Sockets::AddressFamily _get_Ipx();
    // Set static field: static public System.Net.Sockets.AddressFamily Ipx
    static void _set_Ipx(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily Iso
    static constexpr const int Iso = 7;
    // Get static field: static public System.Net.Sockets.AddressFamily Iso
    static System::Net::Sockets::AddressFamily _get_Iso();
    // Set static field: static public System.Net.Sockets.AddressFamily Iso
    static void _set_Iso(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily Osi
    static constexpr const int Osi = 7;
    // Get static field: static public System.Net.Sockets.AddressFamily Osi
    static System::Net::Sockets::AddressFamily _get_Osi();
    // Set static field: static public System.Net.Sockets.AddressFamily Osi
    static void _set_Osi(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily Ecma
    static constexpr const int Ecma = 8;
    // Get static field: static public System.Net.Sockets.AddressFamily Ecma
    static System::Net::Sockets::AddressFamily _get_Ecma();
    // Set static field: static public System.Net.Sockets.AddressFamily Ecma
    static void _set_Ecma(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily DataKit
    static constexpr const int DataKit = 9;
    // Get static field: static public System.Net.Sockets.AddressFamily DataKit
    static System::Net::Sockets::AddressFamily _get_DataKit();
    // Set static field: static public System.Net.Sockets.AddressFamily DataKit
    static void _set_DataKit(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily Ccitt
    static constexpr const int Ccitt = 10;
    // Get static field: static public System.Net.Sockets.AddressFamily Ccitt
    static System::Net::Sockets::AddressFamily _get_Ccitt();
    // Set static field: static public System.Net.Sockets.AddressFamily Ccitt
    static void _set_Ccitt(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily Sna
    static constexpr const int Sna = 11;
    // Get static field: static public System.Net.Sockets.AddressFamily Sna
    static System::Net::Sockets::AddressFamily _get_Sna();
    // Set static field: static public System.Net.Sockets.AddressFamily Sna
    static void _set_Sna(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily DecNet
    static constexpr const int DecNet = 12;
    // Get static field: static public System.Net.Sockets.AddressFamily DecNet
    static System::Net::Sockets::AddressFamily _get_DecNet();
    // Set static field: static public System.Net.Sockets.AddressFamily DecNet
    static void _set_DecNet(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily DataLink
    static constexpr const int DataLink = 13;
    // Get static field: static public System.Net.Sockets.AddressFamily DataLink
    static System::Net::Sockets::AddressFamily _get_DataLink();
    // Set static field: static public System.Net.Sockets.AddressFamily DataLink
    static void _set_DataLink(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily Lat
    static constexpr const int Lat = 14;
    // Get static field: static public System.Net.Sockets.AddressFamily Lat
    static System::Net::Sockets::AddressFamily _get_Lat();
    // Set static field: static public System.Net.Sockets.AddressFamily Lat
    static void _set_Lat(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily HyperChannel
    static constexpr const int HyperChannel = 15;
    // Get static field: static public System.Net.Sockets.AddressFamily HyperChannel
    static System::Net::Sockets::AddressFamily _get_HyperChannel();
    // Set static field: static public System.Net.Sockets.AddressFamily HyperChannel
    static void _set_HyperChannel(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily AppleTalk
    static constexpr const int AppleTalk = 16;
    // Get static field: static public System.Net.Sockets.AddressFamily AppleTalk
    static System::Net::Sockets::AddressFamily _get_AppleTalk();
    // Set static field: static public System.Net.Sockets.AddressFamily AppleTalk
    static void _set_AppleTalk(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily NetBios
    static constexpr const int NetBios = 17;
    // Get static field: static public System.Net.Sockets.AddressFamily NetBios
    static System::Net::Sockets::AddressFamily _get_NetBios();
    // Set static field: static public System.Net.Sockets.AddressFamily NetBios
    static void _set_NetBios(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily VoiceView
    static constexpr const int VoiceView = 18;
    // Get static field: static public System.Net.Sockets.AddressFamily VoiceView
    static System::Net::Sockets::AddressFamily _get_VoiceView();
    // Set static field: static public System.Net.Sockets.AddressFamily VoiceView
    static void _set_VoiceView(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily FireFox
    static constexpr const int FireFox = 19;
    // Get static field: static public System.Net.Sockets.AddressFamily FireFox
    static System::Net::Sockets::AddressFamily _get_FireFox();
    // Set static field: static public System.Net.Sockets.AddressFamily FireFox
    static void _set_FireFox(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily Banyan
    static constexpr const int Banyan = 21;
    // Get static field: static public System.Net.Sockets.AddressFamily Banyan
    static System::Net::Sockets::AddressFamily _get_Banyan();
    // Set static field: static public System.Net.Sockets.AddressFamily Banyan
    static void _set_Banyan(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily Atm
    static constexpr const int Atm = 22;
    // Get static field: static public System.Net.Sockets.AddressFamily Atm
    static System::Net::Sockets::AddressFamily _get_Atm();
    // Set static field: static public System.Net.Sockets.AddressFamily Atm
    static void _set_Atm(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily InterNetworkV6
    static constexpr const int InterNetworkV6 = 23;
    // Get static field: static public System.Net.Sockets.AddressFamily InterNetworkV6
    static System::Net::Sockets::AddressFamily _get_InterNetworkV6();
    // Set static field: static public System.Net.Sockets.AddressFamily InterNetworkV6
    static void _set_InterNetworkV6(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily Cluster
    static constexpr const int Cluster = 24;
    // Get static field: static public System.Net.Sockets.AddressFamily Cluster
    static System::Net::Sockets::AddressFamily _get_Cluster();
    // Set static field: static public System.Net.Sockets.AddressFamily Cluster
    static void _set_Cluster(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily Ieee12844
    static constexpr const int Ieee12844 = 25;
    // Get static field: static public System.Net.Sockets.AddressFamily Ieee12844
    static System::Net::Sockets::AddressFamily _get_Ieee12844();
    // Set static field: static public System.Net.Sockets.AddressFamily Ieee12844
    static void _set_Ieee12844(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily Irda
    static constexpr const int Irda = 26;
    // Get static field: static public System.Net.Sockets.AddressFamily Irda
    static System::Net::Sockets::AddressFamily _get_Irda();
    // Set static field: static public System.Net.Sockets.AddressFamily Irda
    static void _set_Irda(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily NetworkDesigners
    static constexpr const int NetworkDesigners = 28;
    // Get static field: static public System.Net.Sockets.AddressFamily NetworkDesigners
    static System::Net::Sockets::AddressFamily _get_NetworkDesigners();
    // Set static field: static public System.Net.Sockets.AddressFamily NetworkDesigners
    static void _set_NetworkDesigners(System::Net::Sockets::AddressFamily value);
    // static field const value: static public System.Net.Sockets.AddressFamily Max
    static constexpr const int Max = 29;
    // Get static field: static public System.Net.Sockets.AddressFamily Max
    static System::Net::Sockets::AddressFamily _get_Max();
    // Set static field: static public System.Net.Sockets.AddressFamily Max
    static void _set_Max(System::Net::Sockets::AddressFamily value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Net.Sockets.AddressFamily
  #pragma pack(pop)
  static check_size<sizeof(AddressFamily), 0 + sizeof(int)> __System_Net_Sockets_AddressFamilySizeCheck;
  static_assert(sizeof(AddressFamily) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::AddressFamily, "System.Net.Sockets", "AddressFamily");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
