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
  // Autogenerated type: System.DayOfWeek
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9F728
  struct DayOfWeek/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DayOfWeek
    constexpr DayOfWeek(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.DayOfWeek Sunday
    static constexpr const int Sunday = 0;
    // Get static field: static public System.DayOfWeek Sunday
    static System::DayOfWeek _get_Sunday();
    // Set static field: static public System.DayOfWeek Sunday
    static void _set_Sunday(System::DayOfWeek value);
    // static field const value: static public System.DayOfWeek Monday
    static constexpr const int Monday = 1;
    // Get static field: static public System.DayOfWeek Monday
    static System::DayOfWeek _get_Monday();
    // Set static field: static public System.DayOfWeek Monday
    static void _set_Monday(System::DayOfWeek value);
    // static field const value: static public System.DayOfWeek Tuesday
    static constexpr const int Tuesday = 2;
    // Get static field: static public System.DayOfWeek Tuesday
    static System::DayOfWeek _get_Tuesday();
    // Set static field: static public System.DayOfWeek Tuesday
    static void _set_Tuesday(System::DayOfWeek value);
    // static field const value: static public System.DayOfWeek Wednesday
    static constexpr const int Wednesday = 3;
    // Get static field: static public System.DayOfWeek Wednesday
    static System::DayOfWeek _get_Wednesday();
    // Set static field: static public System.DayOfWeek Wednesday
    static void _set_Wednesday(System::DayOfWeek value);
    // static field const value: static public System.DayOfWeek Thursday
    static constexpr const int Thursday = 4;
    // Get static field: static public System.DayOfWeek Thursday
    static System::DayOfWeek _get_Thursday();
    // Set static field: static public System.DayOfWeek Thursday
    static void _set_Thursday(System::DayOfWeek value);
    // static field const value: static public System.DayOfWeek Friday
    static constexpr const int Friday = 5;
    // Get static field: static public System.DayOfWeek Friday
    static System::DayOfWeek _get_Friday();
    // Set static field: static public System.DayOfWeek Friday
    static void _set_Friday(System::DayOfWeek value);
    // static field const value: static public System.DayOfWeek Saturday
    static constexpr const int Saturday = 6;
    // Get static field: static public System.DayOfWeek Saturday
    static System::DayOfWeek _get_Saturday();
    // Set static field: static public System.DayOfWeek Saturday
    static void _set_Saturday(System::DayOfWeek value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.DayOfWeek
  #pragma pack(pop)
  static check_size<sizeof(DayOfWeek), 0 + sizeof(int)> __System_DayOfWeekSizeCheck;
  static_assert(sizeof(DayOfWeek) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DayOfWeek, "System", "DayOfWeek");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
