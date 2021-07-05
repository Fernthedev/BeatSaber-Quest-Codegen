// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.BuiltinShaderType
  struct BuiltinShaderType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BuiltinShaderType
    constexpr BuiltinShaderType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.BuiltinShaderType DeferredShading
    static constexpr const int DeferredShading = 0;
    // Get static field: static public UnityEngine.Rendering.BuiltinShaderType DeferredShading
    static UnityEngine::Rendering::BuiltinShaderType _get_DeferredShading();
    // Set static field: static public UnityEngine.Rendering.BuiltinShaderType DeferredShading
    static void _set_DeferredShading(UnityEngine::Rendering::BuiltinShaderType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinShaderType DeferredReflections
    static constexpr const int DeferredReflections = 1;
    // Get static field: static public UnityEngine.Rendering.BuiltinShaderType DeferredReflections
    static UnityEngine::Rendering::BuiltinShaderType _get_DeferredReflections();
    // Set static field: static public UnityEngine.Rendering.BuiltinShaderType DeferredReflections
    static void _set_DeferredReflections(UnityEngine::Rendering::BuiltinShaderType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinShaderType LegacyDeferredLighting
    static constexpr const int LegacyDeferredLighting = 2;
    // Get static field: static public UnityEngine.Rendering.BuiltinShaderType LegacyDeferredLighting
    static UnityEngine::Rendering::BuiltinShaderType _get_LegacyDeferredLighting();
    // Set static field: static public UnityEngine.Rendering.BuiltinShaderType LegacyDeferredLighting
    static void _set_LegacyDeferredLighting(UnityEngine::Rendering::BuiltinShaderType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinShaderType ScreenSpaceShadows
    static constexpr const int ScreenSpaceShadows = 3;
    // Get static field: static public UnityEngine.Rendering.BuiltinShaderType ScreenSpaceShadows
    static UnityEngine::Rendering::BuiltinShaderType _get_ScreenSpaceShadows();
    // Set static field: static public UnityEngine.Rendering.BuiltinShaderType ScreenSpaceShadows
    static void _set_ScreenSpaceShadows(UnityEngine::Rendering::BuiltinShaderType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinShaderType DepthNormals
    static constexpr const int DepthNormals = 4;
    // Get static field: static public UnityEngine.Rendering.BuiltinShaderType DepthNormals
    static UnityEngine::Rendering::BuiltinShaderType _get_DepthNormals();
    // Set static field: static public UnityEngine.Rendering.BuiltinShaderType DepthNormals
    static void _set_DepthNormals(UnityEngine::Rendering::BuiltinShaderType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinShaderType MotionVectors
    static constexpr const int MotionVectors = 5;
    // Get static field: static public UnityEngine.Rendering.BuiltinShaderType MotionVectors
    static UnityEngine::Rendering::BuiltinShaderType _get_MotionVectors();
    // Set static field: static public UnityEngine.Rendering.BuiltinShaderType MotionVectors
    static void _set_MotionVectors(UnityEngine::Rendering::BuiltinShaderType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinShaderType LightHalo
    static constexpr const int LightHalo = 6;
    // Get static field: static public UnityEngine.Rendering.BuiltinShaderType LightHalo
    static UnityEngine::Rendering::BuiltinShaderType _get_LightHalo();
    // Set static field: static public UnityEngine.Rendering.BuiltinShaderType LightHalo
    static void _set_LightHalo(UnityEngine::Rendering::BuiltinShaderType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinShaderType LensFlare
    static constexpr const int LensFlare = 7;
    // Get static field: static public UnityEngine.Rendering.BuiltinShaderType LensFlare
    static UnityEngine::Rendering::BuiltinShaderType _get_LensFlare();
    // Set static field: static public UnityEngine.Rendering.BuiltinShaderType LensFlare
    static void _set_LensFlare(UnityEngine::Rendering::BuiltinShaderType value);
  }; // UnityEngine.Rendering.BuiltinShaderType
  #pragma pack(pop)
  static check_size<sizeof(BuiltinShaderType), 0 + sizeof(int)> __UnityEngine_Rendering_BuiltinShaderTypeSizeCheck;
  static_assert(sizeof(BuiltinShaderType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::BuiltinShaderType, "UnityEngine.Rendering", "BuiltinShaderType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
