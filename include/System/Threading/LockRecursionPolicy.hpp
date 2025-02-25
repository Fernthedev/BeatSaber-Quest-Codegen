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
  // Autogenerated type: System.Threading.LockRecursionPolicy
  // [TokenAttribute] Offset: FFFFFFFF
  struct LockRecursionPolicy/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LockRecursionPolicy
    constexpr LockRecursionPolicy(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Threading.LockRecursionPolicy NoRecursion
    static constexpr const int NoRecursion = 0;
    // Get static field: static public System.Threading.LockRecursionPolicy NoRecursion
    static System::Threading::LockRecursionPolicy _get_NoRecursion();
    // Set static field: static public System.Threading.LockRecursionPolicy NoRecursion
    static void _set_NoRecursion(System::Threading::LockRecursionPolicy value);
    // static field const value: static public System.Threading.LockRecursionPolicy SupportsRecursion
    static constexpr const int SupportsRecursion = 1;
    // Get static field: static public System.Threading.LockRecursionPolicy SupportsRecursion
    static System::Threading::LockRecursionPolicy _get_SupportsRecursion();
    // Set static field: static public System.Threading.LockRecursionPolicy SupportsRecursion
    static void _set_SupportsRecursion(System::Threading::LockRecursionPolicy value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Threading.LockRecursionPolicy
  #pragma pack(pop)
  static check_size<sizeof(LockRecursionPolicy), 0 + sizeof(int)> __System_Threading_LockRecursionPolicySizeCheck;
  static_assert(sizeof(LockRecursionPolicy) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::LockRecursionPolicy, "System.Threading", "LockRecursionPolicy");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
