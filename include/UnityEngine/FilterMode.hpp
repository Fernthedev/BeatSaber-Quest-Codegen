// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.FilterMode
  struct FilterMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FilterMode
    constexpr FilterMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.FilterMode Point
    static constexpr const int Point = 0;
    // Get static field: static public UnityEngine.FilterMode Point
    static UnityEngine::FilterMode _get_Point();
    // Set static field: static public UnityEngine.FilterMode Point
    static void _set_Point(UnityEngine::FilterMode value);
    // static field const value: static public UnityEngine.FilterMode Bilinear
    static constexpr const int Bilinear = 1;
    // Get static field: static public UnityEngine.FilterMode Bilinear
    static UnityEngine::FilterMode _get_Bilinear();
    // Set static field: static public UnityEngine.FilterMode Bilinear
    static void _set_Bilinear(UnityEngine::FilterMode value);
    // static field const value: static public UnityEngine.FilterMode Trilinear
    static constexpr const int Trilinear = 2;
    // Get static field: static public UnityEngine.FilterMode Trilinear
    static UnityEngine::FilterMode _get_Trilinear();
    // Set static field: static public UnityEngine.FilterMode Trilinear
    static void _set_Trilinear(UnityEngine::FilterMode value);
  }; // UnityEngine.FilterMode
  #pragma pack(pop)
  static check_size<sizeof(FilterMode), 0 + sizeof(int)> __UnityEngine_FilterModeSizeCheck;
  static_assert(sizeof(FilterMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::FilterMode, "UnityEngine", "FilterMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
