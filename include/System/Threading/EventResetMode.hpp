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
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.EventResetMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA20E4
  struct EventResetMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EventResetMode
    constexpr EventResetMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Threading.EventResetMode AutoReset
    static constexpr const int AutoReset = 0;
    // Get static field: static public System.Threading.EventResetMode AutoReset
    static System::Threading::EventResetMode _get_AutoReset();
    // Set static field: static public System.Threading.EventResetMode AutoReset
    static void _set_AutoReset(System::Threading::EventResetMode value);
    // static field const value: static public System.Threading.EventResetMode ManualReset
    static constexpr const int ManualReset = 1;
    // Get static field: static public System.Threading.EventResetMode ManualReset
    static System::Threading::EventResetMode _get_ManualReset();
    // Set static field: static public System.Threading.EventResetMode ManualReset
    static void _set_ManualReset(System::Threading::EventResetMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Threading.EventResetMode
  #pragma pack(pop)
  static check_size<sizeof(EventResetMode), 0 + sizeof(int)> __System_Threading_EventResetModeSizeCheck;
  static_assert(sizeof(EventResetMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::EventResetMode, "System.Threading", "EventResetMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
