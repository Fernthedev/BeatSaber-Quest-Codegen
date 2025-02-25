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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.ShaderPropertyFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ShaderPropertyFlags/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ShaderPropertyFlags
    constexpr ShaderPropertyFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.ShaderPropertyFlags None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Rendering.ShaderPropertyFlags None
    static UnityEngine::Rendering::ShaderPropertyFlags _get_None();
    // Set static field: static public UnityEngine.Rendering.ShaderPropertyFlags None
    static void _set_None(UnityEngine::Rendering::ShaderPropertyFlags value);
    // static field const value: static public UnityEngine.Rendering.ShaderPropertyFlags HideInInspector
    static constexpr const int HideInInspector = 1;
    // Get static field: static public UnityEngine.Rendering.ShaderPropertyFlags HideInInspector
    static UnityEngine::Rendering::ShaderPropertyFlags _get_HideInInspector();
    // Set static field: static public UnityEngine.Rendering.ShaderPropertyFlags HideInInspector
    static void _set_HideInInspector(UnityEngine::Rendering::ShaderPropertyFlags value);
    // static field const value: static public UnityEngine.Rendering.ShaderPropertyFlags PerRendererData
    static constexpr const int PerRendererData = 2;
    // Get static field: static public UnityEngine.Rendering.ShaderPropertyFlags PerRendererData
    static UnityEngine::Rendering::ShaderPropertyFlags _get_PerRendererData();
    // Set static field: static public UnityEngine.Rendering.ShaderPropertyFlags PerRendererData
    static void _set_PerRendererData(UnityEngine::Rendering::ShaderPropertyFlags value);
    // static field const value: static public UnityEngine.Rendering.ShaderPropertyFlags NoScaleOffset
    static constexpr const int NoScaleOffset = 4;
    // Get static field: static public UnityEngine.Rendering.ShaderPropertyFlags NoScaleOffset
    static UnityEngine::Rendering::ShaderPropertyFlags _get_NoScaleOffset();
    // Set static field: static public UnityEngine.Rendering.ShaderPropertyFlags NoScaleOffset
    static void _set_NoScaleOffset(UnityEngine::Rendering::ShaderPropertyFlags value);
    // static field const value: static public UnityEngine.Rendering.ShaderPropertyFlags Normal
    static constexpr const int Normal = 8;
    // Get static field: static public UnityEngine.Rendering.ShaderPropertyFlags Normal
    static UnityEngine::Rendering::ShaderPropertyFlags _get_Normal();
    // Set static field: static public UnityEngine.Rendering.ShaderPropertyFlags Normal
    static void _set_Normal(UnityEngine::Rendering::ShaderPropertyFlags value);
    // static field const value: static public UnityEngine.Rendering.ShaderPropertyFlags HDR
    static constexpr const int HDR = 16;
    // Get static field: static public UnityEngine.Rendering.ShaderPropertyFlags HDR
    static UnityEngine::Rendering::ShaderPropertyFlags _get_HDR();
    // Set static field: static public UnityEngine.Rendering.ShaderPropertyFlags HDR
    static void _set_HDR(UnityEngine::Rendering::ShaderPropertyFlags value);
    // static field const value: static public UnityEngine.Rendering.ShaderPropertyFlags Gamma
    static constexpr const int Gamma = 32;
    // Get static field: static public UnityEngine.Rendering.ShaderPropertyFlags Gamma
    static UnityEngine::Rendering::ShaderPropertyFlags _get_Gamma();
    // Set static field: static public UnityEngine.Rendering.ShaderPropertyFlags Gamma
    static void _set_Gamma(UnityEngine::Rendering::ShaderPropertyFlags value);
    // static field const value: static public UnityEngine.Rendering.ShaderPropertyFlags NonModifiableTextureData
    static constexpr const int NonModifiableTextureData = 64;
    // Get static field: static public UnityEngine.Rendering.ShaderPropertyFlags NonModifiableTextureData
    static UnityEngine::Rendering::ShaderPropertyFlags _get_NonModifiableTextureData();
    // Set static field: static public UnityEngine.Rendering.ShaderPropertyFlags NonModifiableTextureData
    static void _set_NonModifiableTextureData(UnityEngine::Rendering::ShaderPropertyFlags value);
    // static field const value: static public UnityEngine.Rendering.ShaderPropertyFlags MainTexture
    static constexpr const int MainTexture = 128;
    // Get static field: static public UnityEngine.Rendering.ShaderPropertyFlags MainTexture
    static UnityEngine::Rendering::ShaderPropertyFlags _get_MainTexture();
    // Set static field: static public UnityEngine.Rendering.ShaderPropertyFlags MainTexture
    static void _set_MainTexture(UnityEngine::Rendering::ShaderPropertyFlags value);
    // static field const value: static public UnityEngine.Rendering.ShaderPropertyFlags MainColor
    static constexpr const int MainColor = 256;
    // Get static field: static public UnityEngine.Rendering.ShaderPropertyFlags MainColor
    static UnityEngine::Rendering::ShaderPropertyFlags _get_MainColor();
    // Set static field: static public UnityEngine.Rendering.ShaderPropertyFlags MainColor
    static void _set_MainColor(UnityEngine::Rendering::ShaderPropertyFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Rendering.ShaderPropertyFlags
  #pragma pack(pop)
  static check_size<sizeof(ShaderPropertyFlags), 0 + sizeof(int)> __UnityEngine_Rendering_ShaderPropertyFlagsSizeCheck;
  static_assert(sizeof(ShaderPropertyFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::ShaderPropertyFlags, "UnityEngine.Rendering", "ShaderPropertyFlags");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
