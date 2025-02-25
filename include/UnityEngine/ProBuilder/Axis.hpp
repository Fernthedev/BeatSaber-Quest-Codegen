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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Axis
  // [TokenAttribute] Offset: FFFFFFFF
  struct Axis/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Axis
    constexpr Axis(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.Axis Right
    static constexpr const int Right = 0;
    // Get static field: static public UnityEngine.ProBuilder.Axis Right
    static UnityEngine::ProBuilder::Axis _get_Right();
    // Set static field: static public UnityEngine.ProBuilder.Axis Right
    static void _set_Right(UnityEngine::ProBuilder::Axis value);
    // static field const value: static public UnityEngine.ProBuilder.Axis Left
    static constexpr const int Left = 1;
    // Get static field: static public UnityEngine.ProBuilder.Axis Left
    static UnityEngine::ProBuilder::Axis _get_Left();
    // Set static field: static public UnityEngine.ProBuilder.Axis Left
    static void _set_Left(UnityEngine::ProBuilder::Axis value);
    // static field const value: static public UnityEngine.ProBuilder.Axis Up
    static constexpr const int Up = 2;
    // Get static field: static public UnityEngine.ProBuilder.Axis Up
    static UnityEngine::ProBuilder::Axis _get_Up();
    // Set static field: static public UnityEngine.ProBuilder.Axis Up
    static void _set_Up(UnityEngine::ProBuilder::Axis value);
    // static field const value: static public UnityEngine.ProBuilder.Axis Down
    static constexpr const int Down = 3;
    // Get static field: static public UnityEngine.ProBuilder.Axis Down
    static UnityEngine::ProBuilder::Axis _get_Down();
    // Set static field: static public UnityEngine.ProBuilder.Axis Down
    static void _set_Down(UnityEngine::ProBuilder::Axis value);
    // static field const value: static public UnityEngine.ProBuilder.Axis Forward
    static constexpr const int Forward = 4;
    // Get static field: static public UnityEngine.ProBuilder.Axis Forward
    static UnityEngine::ProBuilder::Axis _get_Forward();
    // Set static field: static public UnityEngine.ProBuilder.Axis Forward
    static void _set_Forward(UnityEngine::ProBuilder::Axis value);
    // static field const value: static public UnityEngine.ProBuilder.Axis Backward
    static constexpr const int Backward = 5;
    // Get static field: static public UnityEngine.ProBuilder.Axis Backward
    static UnityEngine::ProBuilder::Axis _get_Backward();
    // Set static field: static public UnityEngine.ProBuilder.Axis Backward
    static void _set_Backward(UnityEngine::ProBuilder::Axis value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ProBuilder.Axis
  #pragma pack(pop)
  static check_size<sizeof(Axis), 0 + sizeof(int)> __UnityEngine_ProBuilder_AxisSizeCheck;
  static_assert(sizeof(Axis) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Axis, "UnityEngine.ProBuilder", "Axis");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
