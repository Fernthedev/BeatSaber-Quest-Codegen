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
  // Autogenerated type: UnityEngine.ProBuilder.RectSelectMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct RectSelectMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RectSelectMode
    constexpr RectSelectMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.RectSelectMode Partial
    static constexpr const int Partial = 0;
    // Get static field: static public UnityEngine.ProBuilder.RectSelectMode Partial
    static UnityEngine::ProBuilder::RectSelectMode _get_Partial();
    // Set static field: static public UnityEngine.ProBuilder.RectSelectMode Partial
    static void _set_Partial(UnityEngine::ProBuilder::RectSelectMode value);
    // static field const value: static public UnityEngine.ProBuilder.RectSelectMode Complete
    static constexpr const int Complete = 1;
    // Get static field: static public UnityEngine.ProBuilder.RectSelectMode Complete
    static UnityEngine::ProBuilder::RectSelectMode _get_Complete();
    // Set static field: static public UnityEngine.ProBuilder.RectSelectMode Complete
    static void _set_Complete(UnityEngine::ProBuilder::RectSelectMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ProBuilder.RectSelectMode
  #pragma pack(pop)
  static check_size<sizeof(RectSelectMode), 0 + sizeof(int)> __UnityEngine_ProBuilder_RectSelectModeSizeCheck;
  static_assert(sizeof(RectSelectMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::RectSelectMode, "UnityEngine.ProBuilder", "RectSelectMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
