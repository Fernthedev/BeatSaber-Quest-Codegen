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
  // Autogenerated type: UnityEngine.LightShadows
  // [TokenAttribute] Offset: FFFFFFFF
  struct LightShadows/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LightShadows
    constexpr LightShadows(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.LightShadows None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.LightShadows None
    static UnityEngine::LightShadows _get_None();
    // Set static field: static public UnityEngine.LightShadows None
    static void _set_None(UnityEngine::LightShadows value);
    // static field const value: static public UnityEngine.LightShadows Hard
    static constexpr const int Hard = 1;
    // Get static field: static public UnityEngine.LightShadows Hard
    static UnityEngine::LightShadows _get_Hard();
    // Set static field: static public UnityEngine.LightShadows Hard
    static void _set_Hard(UnityEngine::LightShadows value);
    // static field const value: static public UnityEngine.LightShadows Soft
    static constexpr const int Soft = 2;
    // Get static field: static public UnityEngine.LightShadows Soft
    static UnityEngine::LightShadows _get_Soft();
    // Set static field: static public UnityEngine.LightShadows Soft
    static void _set_Soft(UnityEngine::LightShadows value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.LightShadows
  #pragma pack(pop)
  static check_size<sizeof(LightShadows), 0 + sizeof(int)> __UnityEngine_LightShadowsSizeCheck;
  static_assert(sizeof(LightShadows) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LightShadows, "UnityEngine", "LightShadows");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
