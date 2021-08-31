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
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.ConsoleModifiers
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: D99728
  struct ConsoleModifiers/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ConsoleModifiers
    constexpr ConsoleModifiers(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.ConsoleModifiers Alt
    static constexpr const int Alt = 1;
    // Get static field: static public System.ConsoleModifiers Alt
    static System::ConsoleModifiers _get_Alt();
    // Set static field: static public System.ConsoleModifiers Alt
    static void _set_Alt(System::ConsoleModifiers value);
    // static field const value: static public System.ConsoleModifiers Shift
    static constexpr const int Shift = 2;
    // Get static field: static public System.ConsoleModifiers Shift
    static System::ConsoleModifiers _get_Shift();
    // Set static field: static public System.ConsoleModifiers Shift
    static void _set_Shift(System::ConsoleModifiers value);
    // static field const value: static public System.ConsoleModifiers Control
    static constexpr const int Control = 4;
    // Get static field: static public System.ConsoleModifiers Control
    static System::ConsoleModifiers _get_Control();
    // Set static field: static public System.ConsoleModifiers Control
    static void _set_Control(System::ConsoleModifiers value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.ConsoleModifiers
  #pragma pack(pop)
  static check_size<sizeof(ConsoleModifiers), 0 + sizeof(int)> __System_ConsoleModifiersSizeCheck;
  static_assert(sizeof(ConsoleModifiers) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ConsoleModifiers, "System", "ConsoleModifiers");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
