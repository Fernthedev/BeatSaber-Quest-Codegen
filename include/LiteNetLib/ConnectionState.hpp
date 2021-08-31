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
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.ConnectionState
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ConnectionState/*, public System::Enum*/ {
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: ConnectionState
    constexpr ConnectionState(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public LiteNetLib.ConnectionState Outgoing
    static constexpr const uint8_t Outgoing = 2u;
    // Get static field: static public LiteNetLib.ConnectionState Outgoing
    static LiteNetLib::ConnectionState _get_Outgoing();
    // Set static field: static public LiteNetLib.ConnectionState Outgoing
    static void _set_Outgoing(LiteNetLib::ConnectionState value);
    // static field const value: static public LiteNetLib.ConnectionState Connected
    static constexpr const uint8_t Connected = 4u;
    // Get static field: static public LiteNetLib.ConnectionState Connected
    static LiteNetLib::ConnectionState _get_Connected();
    // Set static field: static public LiteNetLib.ConnectionState Connected
    static void _set_Connected(LiteNetLib::ConnectionState value);
    // static field const value: static public LiteNetLib.ConnectionState ShutdownRequested
    static constexpr const uint8_t ShutdownRequested = 8u;
    // Get static field: static public LiteNetLib.ConnectionState ShutdownRequested
    static LiteNetLib::ConnectionState _get_ShutdownRequested();
    // Set static field: static public LiteNetLib.ConnectionState ShutdownRequested
    static void _set_ShutdownRequested(LiteNetLib::ConnectionState value);
    // static field const value: static public LiteNetLib.ConnectionState Disconnected
    static constexpr const uint8_t Disconnected = 16u;
    // Get static field: static public LiteNetLib.ConnectionState Disconnected
    static LiteNetLib::ConnectionState _get_Disconnected();
    // Set static field: static public LiteNetLib.ConnectionState Disconnected
    static void _set_Disconnected(LiteNetLib::ConnectionState value);
    // static field const value: static public LiteNetLib.ConnectionState Any
    static constexpr const uint8_t Any = 14u;
    // Get static field: static public LiteNetLib.ConnectionState Any
    static LiteNetLib::ConnectionState _get_Any();
    // Set static field: static public LiteNetLib.ConnectionState Any
    static void _set_Any(LiteNetLib::ConnectionState value);
    // Get instance field reference: public System.Byte value__
    uint8_t& dyn_value__();
  }; // LiteNetLib.ConnectionState
  #pragma pack(pop)
  static check_size<sizeof(ConnectionState), 0 + sizeof(uint8_t)> __LiteNetLib_ConnectionStateSizeCheck;
  static_assert(sizeof(ConnectionState) == 0x1);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::ConnectionState, "LiteNetLib", "ConnectionState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
