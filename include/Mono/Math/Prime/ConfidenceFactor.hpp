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
// Type namespace: Mono.Math.Prime
namespace Mono::Math::Prime {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Math.Prime.ConfidenceFactor
  // [TokenAttribute] Offset: FFFFFFFF
  struct ConfidenceFactor/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ConfidenceFactor
    constexpr ConfidenceFactor(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Math.Prime.ConfidenceFactor ExtraLow
    static constexpr const int ExtraLow = 0;
    // Get static field: static public Mono.Math.Prime.ConfidenceFactor ExtraLow
    static Mono::Math::Prime::ConfidenceFactor _get_ExtraLow();
    // Set static field: static public Mono.Math.Prime.ConfidenceFactor ExtraLow
    static void _set_ExtraLow(Mono::Math::Prime::ConfidenceFactor value);
    // static field const value: static public Mono.Math.Prime.ConfidenceFactor Low
    static constexpr const int Low = 1;
    // Get static field: static public Mono.Math.Prime.ConfidenceFactor Low
    static Mono::Math::Prime::ConfidenceFactor _get_Low();
    // Set static field: static public Mono.Math.Prime.ConfidenceFactor Low
    static void _set_Low(Mono::Math::Prime::ConfidenceFactor value);
    // static field const value: static public Mono.Math.Prime.ConfidenceFactor Medium
    static constexpr const int Medium = 2;
    // Get static field: static public Mono.Math.Prime.ConfidenceFactor Medium
    static Mono::Math::Prime::ConfidenceFactor _get_Medium();
    // Set static field: static public Mono.Math.Prime.ConfidenceFactor Medium
    static void _set_Medium(Mono::Math::Prime::ConfidenceFactor value);
    // static field const value: static public Mono.Math.Prime.ConfidenceFactor High
    static constexpr const int High = 3;
    // Get static field: static public Mono.Math.Prime.ConfidenceFactor High
    static Mono::Math::Prime::ConfidenceFactor _get_High();
    // Set static field: static public Mono.Math.Prime.ConfidenceFactor High
    static void _set_High(Mono::Math::Prime::ConfidenceFactor value);
    // static field const value: static public Mono.Math.Prime.ConfidenceFactor ExtraHigh
    static constexpr const int ExtraHigh = 4;
    // Get static field: static public Mono.Math.Prime.ConfidenceFactor ExtraHigh
    static Mono::Math::Prime::ConfidenceFactor _get_ExtraHigh();
    // Set static field: static public Mono.Math.Prime.ConfidenceFactor ExtraHigh
    static void _set_ExtraHigh(Mono::Math::Prime::ConfidenceFactor value);
    // static field const value: static public Mono.Math.Prime.ConfidenceFactor Provable
    static constexpr const int Provable = 5;
    // Get static field: static public Mono.Math.Prime.ConfidenceFactor Provable
    static Mono::Math::Prime::ConfidenceFactor _get_Provable();
    // Set static field: static public Mono.Math.Prime.ConfidenceFactor Provable
    static void _set_Provable(Mono::Math::Prime::ConfidenceFactor value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Mono.Math.Prime.ConfidenceFactor
  #pragma pack(pop)
  static check_size<sizeof(ConfidenceFactor), 0 + sizeof(int)> __Mono_Math_Prime_ConfidenceFactorSizeCheck;
  static_assert(sizeof(ConfidenceFactor) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::Prime::ConfidenceFactor, "Mono.Math.Prime", "ConfidenceFactor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
