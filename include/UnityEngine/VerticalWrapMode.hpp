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
  // Autogenerated type: UnityEngine.VerticalWrapMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct VerticalWrapMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: VerticalWrapMode
    constexpr VerticalWrapMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.VerticalWrapMode Truncate
    static constexpr const int Truncate = 0;
    // Get static field: static public UnityEngine.VerticalWrapMode Truncate
    static UnityEngine::VerticalWrapMode _get_Truncate();
    // Set static field: static public UnityEngine.VerticalWrapMode Truncate
    static void _set_Truncate(UnityEngine::VerticalWrapMode value);
    // static field const value: static public UnityEngine.VerticalWrapMode Overflow
    static constexpr const int Overflow = 1;
    // Get static field: static public UnityEngine.VerticalWrapMode Overflow
    static UnityEngine::VerticalWrapMode _get_Overflow();
    // Set static field: static public UnityEngine.VerticalWrapMode Overflow
    static void _set_Overflow(UnityEngine::VerticalWrapMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.VerticalWrapMode
  #pragma pack(pop)
  static check_size<sizeof(VerticalWrapMode), 0 + sizeof(int)> __UnityEngine_VerticalWrapModeSizeCheck;
  static_assert(sizeof(VerticalWrapMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::VerticalWrapMode, "UnityEngine", "VerticalWrapMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
