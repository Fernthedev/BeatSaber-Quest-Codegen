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
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Utils.NtpMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct NtpMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NtpMode
    constexpr NtpMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LiteNetLib.Utils.NtpMode Client
    static constexpr const int Client = 3;
    // Get static field: static public LiteNetLib.Utils.NtpMode Client
    static LiteNetLib::Utils::NtpMode _get_Client();
    // Set static field: static public LiteNetLib.Utils.NtpMode Client
    static void _set_Client(LiteNetLib::Utils::NtpMode value);
    // static field const value: static public LiteNetLib.Utils.NtpMode Server
    static constexpr const int Server = 4;
    // Get static field: static public LiteNetLib.Utils.NtpMode Server
    static LiteNetLib::Utils::NtpMode _get_Server();
    // Set static field: static public LiteNetLib.Utils.NtpMode Server
    static void _set_Server(LiteNetLib::Utils::NtpMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // LiteNetLib.Utils.NtpMode
  #pragma pack(pop)
  static check_size<sizeof(NtpMode), 0 + sizeof(int)> __LiteNetLib_Utils_NtpModeSizeCheck;
  static_assert(sizeof(NtpMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NtpMode, "LiteNetLib.Utils", "NtpMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
