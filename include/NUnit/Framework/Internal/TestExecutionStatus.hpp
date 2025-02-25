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
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestExecutionStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct TestExecutionStatus/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TestExecutionStatus
    constexpr TestExecutionStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public NUnit.Framework.Internal.TestExecutionStatus Running
    static constexpr const int Running = 0;
    // Get static field: static public NUnit.Framework.Internal.TestExecutionStatus Running
    static NUnit::Framework::Internal::TestExecutionStatus _get_Running();
    // Set static field: static public NUnit.Framework.Internal.TestExecutionStatus Running
    static void _set_Running(NUnit::Framework::Internal::TestExecutionStatus value);
    // static field const value: static public NUnit.Framework.Internal.TestExecutionStatus StopRequested
    static constexpr const int StopRequested = 1;
    // Get static field: static public NUnit.Framework.Internal.TestExecutionStatus StopRequested
    static NUnit::Framework::Internal::TestExecutionStatus _get_StopRequested();
    // Set static field: static public NUnit.Framework.Internal.TestExecutionStatus StopRequested
    static void _set_StopRequested(NUnit::Framework::Internal::TestExecutionStatus value);
    // static field const value: static public NUnit.Framework.Internal.TestExecutionStatus AbortRequested
    static constexpr const int AbortRequested = 2;
    // Get static field: static public NUnit.Framework.Internal.TestExecutionStatus AbortRequested
    static NUnit::Framework::Internal::TestExecutionStatus _get_AbortRequested();
    // Set static field: static public NUnit.Framework.Internal.TestExecutionStatus AbortRequested
    static void _set_AbortRequested(NUnit::Framework::Internal::TestExecutionStatus value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // NUnit.Framework.Internal.TestExecutionStatus
  #pragma pack(pop)
  static check_size<sizeof(TestExecutionStatus), 0 + sizeof(int)> __NUnit_Framework_Internal_TestExecutionStatusSizeCheck;
  static_assert(sizeof(TestExecutionStatus) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestExecutionStatus, "NUnit.Framework.Internal", "TestExecutionStatus");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
