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
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.ConnectRequestResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct ConnectRequestResult/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ConnectRequestResult
    constexpr ConnectRequestResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LiteNetLib.ConnectRequestResult None
    static constexpr const int None = 0;
    // Get static field: static public LiteNetLib.ConnectRequestResult None
    static LiteNetLib::ConnectRequestResult _get_None();
    // Set static field: static public LiteNetLib.ConnectRequestResult None
    static void _set_None(LiteNetLib::ConnectRequestResult value);
    // static field const value: static public LiteNetLib.ConnectRequestResult P2PLose
    static constexpr const int P2PLose = 1;
    // Get static field: static public LiteNetLib.ConnectRequestResult P2PLose
    static LiteNetLib::ConnectRequestResult _get_P2PLose();
    // Set static field: static public LiteNetLib.ConnectRequestResult P2PLose
    static void _set_P2PLose(LiteNetLib::ConnectRequestResult value);
    // static field const value: static public LiteNetLib.ConnectRequestResult Reconnection
    static constexpr const int Reconnection = 2;
    // Get static field: static public LiteNetLib.ConnectRequestResult Reconnection
    static LiteNetLib::ConnectRequestResult _get_Reconnection();
    // Set static field: static public LiteNetLib.ConnectRequestResult Reconnection
    static void _set_Reconnection(LiteNetLib::ConnectRequestResult value);
    // static field const value: static public LiteNetLib.ConnectRequestResult NewConnection
    static constexpr const int NewConnection = 3;
    // Get static field: static public LiteNetLib.ConnectRequestResult NewConnection
    static LiteNetLib::ConnectRequestResult _get_NewConnection();
    // Set static field: static public LiteNetLib.ConnectRequestResult NewConnection
    static void _set_NewConnection(LiteNetLib::ConnectRequestResult value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // LiteNetLib.ConnectRequestResult
  #pragma pack(pop)
  static check_size<sizeof(ConnectRequestResult), 0 + sizeof(int)> __LiteNetLib_ConnectRequestResultSizeCheck;
  static_assert(sizeof(ConnectRequestResult) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::ConnectRequestResult, "LiteNetLib", "ConnectRequestResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
