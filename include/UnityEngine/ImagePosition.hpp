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
  // Autogenerated type: UnityEngine.ImagePosition
  struct ImagePosition/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ImagePosition
    constexpr ImagePosition(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ImagePosition ImageLeft
    static constexpr const int ImageLeft = 0;
    // Get static field: static public UnityEngine.ImagePosition ImageLeft
    static UnityEngine::ImagePosition _get_ImageLeft();
    // Set static field: static public UnityEngine.ImagePosition ImageLeft
    static void _set_ImageLeft(UnityEngine::ImagePosition value);
    // static field const value: static public UnityEngine.ImagePosition ImageAbove
    static constexpr const int ImageAbove = 1;
    // Get static field: static public UnityEngine.ImagePosition ImageAbove
    static UnityEngine::ImagePosition _get_ImageAbove();
    // Set static field: static public UnityEngine.ImagePosition ImageAbove
    static void _set_ImageAbove(UnityEngine::ImagePosition value);
    // static field const value: static public UnityEngine.ImagePosition ImageOnly
    static constexpr const int ImageOnly = 2;
    // Get static field: static public UnityEngine.ImagePosition ImageOnly
    static UnityEngine::ImagePosition _get_ImageOnly();
    // Set static field: static public UnityEngine.ImagePosition ImageOnly
    static void _set_ImageOnly(UnityEngine::ImagePosition value);
    // static field const value: static public UnityEngine.ImagePosition TextOnly
    static constexpr const int TextOnly = 3;
    // Get static field: static public UnityEngine.ImagePosition TextOnly
    static UnityEngine::ImagePosition _get_TextOnly();
    // Set static field: static public UnityEngine.ImagePosition TextOnly
    static void _set_TextOnly(UnityEngine::ImagePosition value);
  }; // UnityEngine.ImagePosition
  #pragma pack(pop)
  static check_size<sizeof(ImagePosition), 0 + sizeof(int)> __UnityEngine_ImagePositionSizeCheck;
  static_assert(sizeof(ImagePosition) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ImagePosition, "UnityEngine", "ImagePosition");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
