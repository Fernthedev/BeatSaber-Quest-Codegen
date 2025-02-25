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
  // Autogenerated type: System.Net.Sockets.SocketType
  // [TokenAttribute] Offset: FFFFFFFF
  struct SocketType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SocketType
    constexpr SocketType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Sockets.SocketType Stream
    static constexpr const int Stream = 1;
    // Get static field: static public System.Net.Sockets.SocketType Stream
    static System::Net::Sockets::SocketType _get_Stream();
    // Set static field: static public System.Net.Sockets.SocketType Stream
    static void _set_Stream(System::Net::Sockets::SocketType value);
    // static field const value: static public System.Net.Sockets.SocketType Dgram
    static constexpr const int Dgram = 2;
    // Get static field: static public System.Net.Sockets.SocketType Dgram
    static System::Net::Sockets::SocketType _get_Dgram();
    // Set static field: static public System.Net.Sockets.SocketType Dgram
    static void _set_Dgram(System::Net::Sockets::SocketType value);
    // static field const value: static public System.Net.Sockets.SocketType Raw
    static constexpr const int Raw = 3;
    // Get static field: static public System.Net.Sockets.SocketType Raw
    static System::Net::Sockets::SocketType _get_Raw();
    // Set static field: static public System.Net.Sockets.SocketType Raw
    static void _set_Raw(System::Net::Sockets::SocketType value);
    // static field const value: static public System.Net.Sockets.SocketType Rdm
    static constexpr const int Rdm = 4;
    // Get static field: static public System.Net.Sockets.SocketType Rdm
    static System::Net::Sockets::SocketType _get_Rdm();
    // Set static field: static public System.Net.Sockets.SocketType Rdm
    static void _set_Rdm(System::Net::Sockets::SocketType value);
    // static field const value: static public System.Net.Sockets.SocketType Seqpacket
    static constexpr const int Seqpacket = 5;
    // Get static field: static public System.Net.Sockets.SocketType Seqpacket
    static System::Net::Sockets::SocketType _get_Seqpacket();
    // Set static field: static public System.Net.Sockets.SocketType Seqpacket
    static void _set_Seqpacket(System::Net::Sockets::SocketType value);
    // static field const value: static public System.Net.Sockets.SocketType Unknown
    static constexpr const int Unknown = -1;
    // Get static field: static public System.Net.Sockets.SocketType Unknown
    static System::Net::Sockets::SocketType _get_Unknown();
    // Set static field: static public System.Net.Sockets.SocketType Unknown
    static void _set_Unknown(System::Net::Sockets::SocketType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Net.Sockets.SocketType
  #pragma pack(pop)
  static check_size<sizeof(SocketType), 0 + sizeof(int)> __System_Net_Sockets_SocketTypeSizeCheck;
  static_assert(sizeof(SocketType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketType, "System.Net.Sockets", "SocketType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
