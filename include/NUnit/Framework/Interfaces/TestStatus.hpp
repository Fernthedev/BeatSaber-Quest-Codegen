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
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.TestStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct TestStatus/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TestStatus
    constexpr TestStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public NUnit.Framework.Interfaces.TestStatus Inconclusive
    static constexpr const int Inconclusive = 0;
    // Get static field: static public NUnit.Framework.Interfaces.TestStatus Inconclusive
    static NUnit::Framework::Interfaces::TestStatus _get_Inconclusive();
    // Set static field: static public NUnit.Framework.Interfaces.TestStatus Inconclusive
    static void _set_Inconclusive(NUnit::Framework::Interfaces::TestStatus value);
    // static field const value: static public NUnit.Framework.Interfaces.TestStatus Skipped
    static constexpr const int Skipped = 1;
    // Get static field: static public NUnit.Framework.Interfaces.TestStatus Skipped
    static NUnit::Framework::Interfaces::TestStatus _get_Skipped();
    // Set static field: static public NUnit.Framework.Interfaces.TestStatus Skipped
    static void _set_Skipped(NUnit::Framework::Interfaces::TestStatus value);
    // static field const value: static public NUnit.Framework.Interfaces.TestStatus Passed
    static constexpr const int Passed = 2;
    // Get static field: static public NUnit.Framework.Interfaces.TestStatus Passed
    static NUnit::Framework::Interfaces::TestStatus _get_Passed();
    // Set static field: static public NUnit.Framework.Interfaces.TestStatus Passed
    static void _set_Passed(NUnit::Framework::Interfaces::TestStatus value);
    // static field const value: static public NUnit.Framework.Interfaces.TestStatus Failed
    static constexpr const int Failed = 3;
    // Get static field: static public NUnit.Framework.Interfaces.TestStatus Failed
    static NUnit::Framework::Interfaces::TestStatus _get_Failed();
    // Set static field: static public NUnit.Framework.Interfaces.TestStatus Failed
    static void _set_Failed(NUnit::Framework::Interfaces::TestStatus value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // NUnit.Framework.Interfaces.TestStatus
  #pragma pack(pop)
  static check_size<sizeof(TestStatus), 0 + sizeof(int)> __NUnit_Framework_Interfaces_TestStatusSizeCheck;
  static_assert(sizeof(TestStatus) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::TestStatus, "NUnit.Framework.Interfaces", "TestStatus");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
