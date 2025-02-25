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
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.ConstraintStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct ConstraintStatus/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ConstraintStatus
    constexpr ConstraintStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public NUnit.Framework.Constraints.ConstraintStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public NUnit.Framework.Constraints.ConstraintStatus Unknown
    static NUnit::Framework::Constraints::ConstraintStatus _get_Unknown();
    // Set static field: static public NUnit.Framework.Constraints.ConstraintStatus Unknown
    static void _set_Unknown(NUnit::Framework::Constraints::ConstraintStatus value);
    // static field const value: static public NUnit.Framework.Constraints.ConstraintStatus Success
    static constexpr const int Success = 1;
    // Get static field: static public NUnit.Framework.Constraints.ConstraintStatus Success
    static NUnit::Framework::Constraints::ConstraintStatus _get_Success();
    // Set static field: static public NUnit.Framework.Constraints.ConstraintStatus Success
    static void _set_Success(NUnit::Framework::Constraints::ConstraintStatus value);
    // static field const value: static public NUnit.Framework.Constraints.ConstraintStatus Failure
    static constexpr const int Failure = 2;
    // Get static field: static public NUnit.Framework.Constraints.ConstraintStatus Failure
    static NUnit::Framework::Constraints::ConstraintStatus _get_Failure();
    // Set static field: static public NUnit.Framework.Constraints.ConstraintStatus Failure
    static void _set_Failure(NUnit::Framework::Constraints::ConstraintStatus value);
    // static field const value: static public NUnit.Framework.Constraints.ConstraintStatus Error
    static constexpr const int Error = 3;
    // Get static field: static public NUnit.Framework.Constraints.ConstraintStatus Error
    static NUnit::Framework::Constraints::ConstraintStatus _get_Error();
    // Set static field: static public NUnit.Framework.Constraints.ConstraintStatus Error
    static void _set_Error(NUnit::Framework::Constraints::ConstraintStatus value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // NUnit.Framework.Constraints.ConstraintStatus
  #pragma pack(pop)
  static check_size<sizeof(ConstraintStatus), 0 + sizeof(int)> __NUnit_Framework_Constraints_ConstraintStatusSizeCheck;
  static_assert(sizeof(ConstraintStatus) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::ConstraintStatus, "NUnit.Framework.Constraints", "ConstraintStatus");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
