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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ParticleSystemCurveMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystemCurveMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ParticleSystemCurveMode
    constexpr ParticleSystemCurveMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ParticleSystemCurveMode Constant
    static constexpr const int Constant = 0;
    // Get static field: static public UnityEngine.ParticleSystemCurveMode Constant
    static UnityEngine::ParticleSystemCurveMode _get_Constant();
    // Set static field: static public UnityEngine.ParticleSystemCurveMode Constant
    static void _set_Constant(UnityEngine::ParticleSystemCurveMode value);
    // static field const value: static public UnityEngine.ParticleSystemCurveMode Curve
    static constexpr const int Curve = 1;
    // Get static field: static public UnityEngine.ParticleSystemCurveMode Curve
    static UnityEngine::ParticleSystemCurveMode _get_Curve();
    // Set static field: static public UnityEngine.ParticleSystemCurveMode Curve
    static void _set_Curve(UnityEngine::ParticleSystemCurveMode value);
    // static field const value: static public UnityEngine.ParticleSystemCurveMode TwoCurves
    static constexpr const int TwoCurves = 2;
    // Get static field: static public UnityEngine.ParticleSystemCurveMode TwoCurves
    static UnityEngine::ParticleSystemCurveMode _get_TwoCurves();
    // Set static field: static public UnityEngine.ParticleSystemCurveMode TwoCurves
    static void _set_TwoCurves(UnityEngine::ParticleSystemCurveMode value);
    // static field const value: static public UnityEngine.ParticleSystemCurveMode TwoConstants
    static constexpr const int TwoConstants = 3;
    // Get static field: static public UnityEngine.ParticleSystemCurveMode TwoConstants
    static UnityEngine::ParticleSystemCurveMode _get_TwoConstants();
    // Set static field: static public UnityEngine.ParticleSystemCurveMode TwoConstants
    static void _set_TwoConstants(UnityEngine::ParticleSystemCurveMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ParticleSystemCurveMode
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystemCurveMode), 0 + sizeof(int)> __UnityEngine_ParticleSystemCurveModeSizeCheck;
  static_assert(sizeof(ParticleSystemCurveMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystemCurveMode, "UnityEngine", "ParticleSystemCurveMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
