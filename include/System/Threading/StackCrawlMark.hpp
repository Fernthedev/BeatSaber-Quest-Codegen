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
  // Autogenerated type: System.Threading.StackCrawlMark
  // [TokenAttribute] Offset: FFFFFFFF
  struct StackCrawlMark/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: StackCrawlMark
    constexpr StackCrawlMark(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Threading.StackCrawlMark LookForMe
    static constexpr const int LookForMe = 0;
    // Get static field: static public System.Threading.StackCrawlMark LookForMe
    static System::Threading::StackCrawlMark _get_LookForMe();
    // Set static field: static public System.Threading.StackCrawlMark LookForMe
    static void _set_LookForMe(System::Threading::StackCrawlMark value);
    // static field const value: static public System.Threading.StackCrawlMark LookForMyCaller
    static constexpr const int LookForMyCaller = 1;
    // Get static field: static public System.Threading.StackCrawlMark LookForMyCaller
    static System::Threading::StackCrawlMark _get_LookForMyCaller();
    // Set static field: static public System.Threading.StackCrawlMark LookForMyCaller
    static void _set_LookForMyCaller(System::Threading::StackCrawlMark value);
    // static field const value: static public System.Threading.StackCrawlMark LookForMyCallersCaller
    static constexpr const int LookForMyCallersCaller = 2;
    // Get static field: static public System.Threading.StackCrawlMark LookForMyCallersCaller
    static System::Threading::StackCrawlMark _get_LookForMyCallersCaller();
    // Set static field: static public System.Threading.StackCrawlMark LookForMyCallersCaller
    static void _set_LookForMyCallersCaller(System::Threading::StackCrawlMark value);
    // static field const value: static public System.Threading.StackCrawlMark LookForThread
    static constexpr const int LookForThread = 3;
    // Get static field: static public System.Threading.StackCrawlMark LookForThread
    static System::Threading::StackCrawlMark _get_LookForThread();
    // Set static field: static public System.Threading.StackCrawlMark LookForThread
    static void _set_LookForThread(System::Threading::StackCrawlMark value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Threading.StackCrawlMark
  #pragma pack(pop)
  static check_size<sizeof(StackCrawlMark), 0 + sizeof(int)> __System_Threading_StackCrawlMarkSizeCheck;
  static_assert(sizeof(StackCrawlMark) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::StackCrawlMark, "System.Threading", "StackCrawlMark");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
