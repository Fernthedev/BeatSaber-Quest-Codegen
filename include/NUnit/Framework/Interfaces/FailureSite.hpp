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
  // Autogenerated type: NUnit.Framework.Interfaces.FailureSite
  // [TokenAttribute] Offset: FFFFFFFF
  struct FailureSite/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FailureSite
    constexpr FailureSite(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public NUnit.Framework.Interfaces.FailureSite Test
    static constexpr const int Test = 0;
    // Get static field: static public NUnit.Framework.Interfaces.FailureSite Test
    static NUnit::Framework::Interfaces::FailureSite _get_Test();
    // Set static field: static public NUnit.Framework.Interfaces.FailureSite Test
    static void _set_Test(NUnit::Framework::Interfaces::FailureSite value);
    // static field const value: static public NUnit.Framework.Interfaces.FailureSite SetUp
    static constexpr const int SetUp = 1;
    // Get static field: static public NUnit.Framework.Interfaces.FailureSite SetUp
    static NUnit::Framework::Interfaces::FailureSite _get_SetUp();
    // Set static field: static public NUnit.Framework.Interfaces.FailureSite SetUp
    static void _set_SetUp(NUnit::Framework::Interfaces::FailureSite value);
    // static field const value: static public NUnit.Framework.Interfaces.FailureSite TearDown
    static constexpr const int TearDown = 2;
    // Get static field: static public NUnit.Framework.Interfaces.FailureSite TearDown
    static NUnit::Framework::Interfaces::FailureSite _get_TearDown();
    // Set static field: static public NUnit.Framework.Interfaces.FailureSite TearDown
    static void _set_TearDown(NUnit::Framework::Interfaces::FailureSite value);
    // static field const value: static public NUnit.Framework.Interfaces.FailureSite Parent
    static constexpr const int Parent = 3;
    // Get static field: static public NUnit.Framework.Interfaces.FailureSite Parent
    static NUnit::Framework::Interfaces::FailureSite _get_Parent();
    // Set static field: static public NUnit.Framework.Interfaces.FailureSite Parent
    static void _set_Parent(NUnit::Framework::Interfaces::FailureSite value);
    // static field const value: static public NUnit.Framework.Interfaces.FailureSite Child
    static constexpr const int Child = 4;
    // Get static field: static public NUnit.Framework.Interfaces.FailureSite Child
    static NUnit::Framework::Interfaces::FailureSite _get_Child();
    // Set static field: static public NUnit.Framework.Interfaces.FailureSite Child
    static void _set_Child(NUnit::Framework::Interfaces::FailureSite value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // NUnit.Framework.Interfaces.FailureSite
  #pragma pack(pop)
  static check_size<sizeof(FailureSite), 0 + sizeof(int)> __NUnit_Framework_Interfaces_FailureSiteSizeCheck;
  static_assert(sizeof(FailureSite) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::FailureSite, "NUnit.Framework.Interfaces", "FailureSite");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
