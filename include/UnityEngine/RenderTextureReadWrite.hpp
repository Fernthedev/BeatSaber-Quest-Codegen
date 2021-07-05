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
  // Autogenerated type: UnityEngine.RenderTextureReadWrite
  struct RenderTextureReadWrite/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RenderTextureReadWrite
    constexpr RenderTextureReadWrite(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.RenderTextureReadWrite Default
    static constexpr const int Default = 0;
    // Get static field: static public UnityEngine.RenderTextureReadWrite Default
    static UnityEngine::RenderTextureReadWrite _get_Default();
    // Set static field: static public UnityEngine.RenderTextureReadWrite Default
    static void _set_Default(UnityEngine::RenderTextureReadWrite value);
    // static field const value: static public UnityEngine.RenderTextureReadWrite Linear
    static constexpr const int Linear = 1;
    // Get static field: static public UnityEngine.RenderTextureReadWrite Linear
    static UnityEngine::RenderTextureReadWrite _get_Linear();
    // Set static field: static public UnityEngine.RenderTextureReadWrite Linear
    static void _set_Linear(UnityEngine::RenderTextureReadWrite value);
    // static field const value: static public UnityEngine.RenderTextureReadWrite sRGB
    static constexpr const int sRGB = 2;
    // Get static field: static public UnityEngine.RenderTextureReadWrite sRGB
    static UnityEngine::RenderTextureReadWrite _get_sRGB();
    // Set static field: static public UnityEngine.RenderTextureReadWrite sRGB
    static void _set_sRGB(UnityEngine::RenderTextureReadWrite value);
  }; // UnityEngine.RenderTextureReadWrite
  #pragma pack(pop)
  static check_size<sizeof(RenderTextureReadWrite), 0 + sizeof(int)> __UnityEngine_RenderTextureReadWriteSizeCheck;
  static_assert(sizeof(RenderTextureReadWrite) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RenderTextureReadWrite, "UnityEngine", "RenderTextureReadWrite");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
