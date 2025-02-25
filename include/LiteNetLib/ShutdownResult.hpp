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
  // Autogenerated type: LiteNetLib.ShutdownResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct ShutdownResult/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ShutdownResult
    constexpr ShutdownResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LiteNetLib.ShutdownResult None
    static constexpr const int None = 0;
    // Get static field: static public LiteNetLib.ShutdownResult None
    static LiteNetLib::ShutdownResult _get_None();
    // Set static field: static public LiteNetLib.ShutdownResult None
    static void _set_None(LiteNetLib::ShutdownResult value);
    // static field const value: static public LiteNetLib.ShutdownResult Success
    static constexpr const int Success = 1;
    // Get static field: static public LiteNetLib.ShutdownResult Success
    static LiteNetLib::ShutdownResult _get_Success();
    // Set static field: static public LiteNetLib.ShutdownResult Success
    static void _set_Success(LiteNetLib::ShutdownResult value);
    // static field const value: static public LiteNetLib.ShutdownResult WasConnected
    static constexpr const int WasConnected = 2;
    // Get static field: static public LiteNetLib.ShutdownResult WasConnected
    static LiteNetLib::ShutdownResult _get_WasConnected();
    // Set static field: static public LiteNetLib.ShutdownResult WasConnected
    static void _set_WasConnected(LiteNetLib::ShutdownResult value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // LiteNetLib.ShutdownResult
  #pragma pack(pop)
  static check_size<sizeof(ShutdownResult), 0 + sizeof(int)> __LiteNetLib_ShutdownResultSizeCheck;
  static_assert(sizeof(ShutdownResult) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::ShutdownResult, "LiteNetLib", "ShutdownResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
