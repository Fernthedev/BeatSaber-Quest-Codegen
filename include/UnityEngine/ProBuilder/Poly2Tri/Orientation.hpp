// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.Orientation
  struct Orientation/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Orientation
    constexpr Orientation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.Poly2Tri.Orientation CW
    static constexpr const int CW = 0;
    // Get static field: static public UnityEngine.ProBuilder.Poly2Tri.Orientation CW
    static UnityEngine::ProBuilder::Poly2Tri::Orientation _get_CW();
    // Set static field: static public UnityEngine.ProBuilder.Poly2Tri.Orientation CW
    static void _set_CW(UnityEngine::ProBuilder::Poly2Tri::Orientation value);
    // static field const value: static public UnityEngine.ProBuilder.Poly2Tri.Orientation CCW
    static constexpr const int CCW = 1;
    // Get static field: static public UnityEngine.ProBuilder.Poly2Tri.Orientation CCW
    static UnityEngine::ProBuilder::Poly2Tri::Orientation _get_CCW();
    // Set static field: static public UnityEngine.ProBuilder.Poly2Tri.Orientation CCW
    static void _set_CCW(UnityEngine::ProBuilder::Poly2Tri::Orientation value);
    // static field const value: static public UnityEngine.ProBuilder.Poly2Tri.Orientation Collinear
    static constexpr const int Collinear = 2;
    // Get static field: static public UnityEngine.ProBuilder.Poly2Tri.Orientation Collinear
    static UnityEngine::ProBuilder::Poly2Tri::Orientation _get_Collinear();
    // Set static field: static public UnityEngine.ProBuilder.Poly2Tri.Orientation Collinear
    static void _set_Collinear(UnityEngine::ProBuilder::Poly2Tri::Orientation value);
  }; // UnityEngine.ProBuilder.Poly2Tri.Orientation
  #pragma pack(pop)
  static check_size<sizeof(Orientation), 0 + sizeof(int)> __UnityEngine_ProBuilder_Poly2Tri_OrientationSizeCheck;
  static_assert(sizeof(Orientation) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::Orientation, "UnityEngine.ProBuilder.Poly2Tri", "Orientation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
