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
  // Autogenerated type: LiteNetLib.LocalAddrType
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct LocalAddrType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LocalAddrType
    constexpr LocalAddrType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LiteNetLib.LocalAddrType IPv4
    static constexpr const int IPv4 = 1;
    // Get static field: static public LiteNetLib.LocalAddrType IPv4
    static LiteNetLib::LocalAddrType _get_IPv4();
    // Set static field: static public LiteNetLib.LocalAddrType IPv4
    static void _set_IPv4(LiteNetLib::LocalAddrType value);
    // static field const value: static public LiteNetLib.LocalAddrType IPv6
    static constexpr const int IPv6 = 2;
    // Get static field: static public LiteNetLib.LocalAddrType IPv6
    static LiteNetLib::LocalAddrType _get_IPv6();
    // Set static field: static public LiteNetLib.LocalAddrType IPv6
    static void _set_IPv6(LiteNetLib::LocalAddrType value);
    // static field const value: static public LiteNetLib.LocalAddrType All
    static constexpr const int All = 3;
    // Get static field: static public LiteNetLib.LocalAddrType All
    static LiteNetLib::LocalAddrType _get_All();
    // Set static field: static public LiteNetLib.LocalAddrType All
    static void _set_All(LiteNetLib::LocalAddrType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // LiteNetLib.LocalAddrType
  #pragma pack(pop)
  static check_size<sizeof(LocalAddrType), 0 + sizeof(int)> __LiteNetLib_LocalAddrTypeSizeCheck;
  static_assert(sizeof(LocalAddrType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::LocalAddrType, "LiteNetLib", "LocalAddrType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
