// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.FloatingPointNumerics
#include "NUnit/Framework/Constraints/FloatingPointNumerics.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: NUnit.Framework.Constraints.FloatingPointNumerics/FloatIntUnion
  struct FloatingPointNumerics::FloatIntUnion/*, public System::ValueType*/ {
    public:
    // public System.Single Float
    // Size: 0x4
    // Offset: 0x0
    float Float;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 Int
    // Size: 0x4
    // Offset: 0x0
    int Int;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.UInt32 UInt
    // Size: 0x4
    // Offset: 0x0
    uint UInt;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: FloatIntUnion
    constexpr FloatIntUnion(float Float_ = {}, int Int_ = {}, uint UInt_ = {}) noexcept : Float{Float_}, Int{Int_}, UInt{UInt_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // NUnit.Framework.Constraints.FloatingPointNumerics/FloatIntUnion
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::FloatingPointNumerics::FloatIntUnion, "NUnit.Framework.Constraints", "FloatingPointNumerics/FloatIntUnion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
