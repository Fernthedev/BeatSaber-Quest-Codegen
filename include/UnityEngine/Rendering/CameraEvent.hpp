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
  // Autogenerated type: UnityEngine.Rendering.CameraEvent
  // [TokenAttribute] Offset: FFFFFFFF
  struct CameraEvent/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CameraEvent
    constexpr CameraEvent(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.CameraEvent BeforeDepthTexture
    static constexpr const int BeforeDepthTexture = 0;
    // Get static field: static public UnityEngine.Rendering.CameraEvent BeforeDepthTexture
    static UnityEngine::Rendering::CameraEvent _get_BeforeDepthTexture();
    // Set static field: static public UnityEngine.Rendering.CameraEvent BeforeDepthTexture
    static void _set_BeforeDepthTexture(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent AfterDepthTexture
    static constexpr const int AfterDepthTexture = 1;
    // Get static field: static public UnityEngine.Rendering.CameraEvent AfterDepthTexture
    static UnityEngine::Rendering::CameraEvent _get_AfterDepthTexture();
    // Set static field: static public UnityEngine.Rendering.CameraEvent AfterDepthTexture
    static void _set_AfterDepthTexture(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent BeforeDepthNormalsTexture
    static constexpr const int BeforeDepthNormalsTexture = 2;
    // Get static field: static public UnityEngine.Rendering.CameraEvent BeforeDepthNormalsTexture
    static UnityEngine::Rendering::CameraEvent _get_BeforeDepthNormalsTexture();
    // Set static field: static public UnityEngine.Rendering.CameraEvent BeforeDepthNormalsTexture
    static void _set_BeforeDepthNormalsTexture(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent AfterDepthNormalsTexture
    static constexpr const int AfterDepthNormalsTexture = 3;
    // Get static field: static public UnityEngine.Rendering.CameraEvent AfterDepthNormalsTexture
    static UnityEngine::Rendering::CameraEvent _get_AfterDepthNormalsTexture();
    // Set static field: static public UnityEngine.Rendering.CameraEvent AfterDepthNormalsTexture
    static void _set_AfterDepthNormalsTexture(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent BeforeGBuffer
    static constexpr const int BeforeGBuffer = 4;
    // Get static field: static public UnityEngine.Rendering.CameraEvent BeforeGBuffer
    static UnityEngine::Rendering::CameraEvent _get_BeforeGBuffer();
    // Set static field: static public UnityEngine.Rendering.CameraEvent BeforeGBuffer
    static void _set_BeforeGBuffer(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent AfterGBuffer
    static constexpr const int AfterGBuffer = 5;
    // Get static field: static public UnityEngine.Rendering.CameraEvent AfterGBuffer
    static UnityEngine::Rendering::CameraEvent _get_AfterGBuffer();
    // Set static field: static public UnityEngine.Rendering.CameraEvent AfterGBuffer
    static void _set_AfterGBuffer(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent BeforeLighting
    static constexpr const int BeforeLighting = 6;
    // Get static field: static public UnityEngine.Rendering.CameraEvent BeforeLighting
    static UnityEngine::Rendering::CameraEvent _get_BeforeLighting();
    // Set static field: static public UnityEngine.Rendering.CameraEvent BeforeLighting
    static void _set_BeforeLighting(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent AfterLighting
    static constexpr const int AfterLighting = 7;
    // Get static field: static public UnityEngine.Rendering.CameraEvent AfterLighting
    static UnityEngine::Rendering::CameraEvent _get_AfterLighting();
    // Set static field: static public UnityEngine.Rendering.CameraEvent AfterLighting
    static void _set_AfterLighting(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent BeforeFinalPass
    static constexpr const int BeforeFinalPass = 8;
    // Get static field: static public UnityEngine.Rendering.CameraEvent BeforeFinalPass
    static UnityEngine::Rendering::CameraEvent _get_BeforeFinalPass();
    // Set static field: static public UnityEngine.Rendering.CameraEvent BeforeFinalPass
    static void _set_BeforeFinalPass(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent AfterFinalPass
    static constexpr const int AfterFinalPass = 9;
    // Get static field: static public UnityEngine.Rendering.CameraEvent AfterFinalPass
    static UnityEngine::Rendering::CameraEvent _get_AfterFinalPass();
    // Set static field: static public UnityEngine.Rendering.CameraEvent AfterFinalPass
    static void _set_AfterFinalPass(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent BeforeForwardOpaque
    static constexpr const int BeforeForwardOpaque = 10;
    // Get static field: static public UnityEngine.Rendering.CameraEvent BeforeForwardOpaque
    static UnityEngine::Rendering::CameraEvent _get_BeforeForwardOpaque();
    // Set static field: static public UnityEngine.Rendering.CameraEvent BeforeForwardOpaque
    static void _set_BeforeForwardOpaque(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent AfterForwardOpaque
    static constexpr const int AfterForwardOpaque = 11;
    // Get static field: static public UnityEngine.Rendering.CameraEvent AfterForwardOpaque
    static UnityEngine::Rendering::CameraEvent _get_AfterForwardOpaque();
    // Set static field: static public UnityEngine.Rendering.CameraEvent AfterForwardOpaque
    static void _set_AfterForwardOpaque(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent BeforeImageEffectsOpaque
    static constexpr const int BeforeImageEffectsOpaque = 12;
    // Get static field: static public UnityEngine.Rendering.CameraEvent BeforeImageEffectsOpaque
    static UnityEngine::Rendering::CameraEvent _get_BeforeImageEffectsOpaque();
    // Set static field: static public UnityEngine.Rendering.CameraEvent BeforeImageEffectsOpaque
    static void _set_BeforeImageEffectsOpaque(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent AfterImageEffectsOpaque
    static constexpr const int AfterImageEffectsOpaque = 13;
    // Get static field: static public UnityEngine.Rendering.CameraEvent AfterImageEffectsOpaque
    static UnityEngine::Rendering::CameraEvent _get_AfterImageEffectsOpaque();
    // Set static field: static public UnityEngine.Rendering.CameraEvent AfterImageEffectsOpaque
    static void _set_AfterImageEffectsOpaque(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent BeforeSkybox
    static constexpr const int BeforeSkybox = 14;
    // Get static field: static public UnityEngine.Rendering.CameraEvent BeforeSkybox
    static UnityEngine::Rendering::CameraEvent _get_BeforeSkybox();
    // Set static field: static public UnityEngine.Rendering.CameraEvent BeforeSkybox
    static void _set_BeforeSkybox(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent AfterSkybox
    static constexpr const int AfterSkybox = 15;
    // Get static field: static public UnityEngine.Rendering.CameraEvent AfterSkybox
    static UnityEngine::Rendering::CameraEvent _get_AfterSkybox();
    // Set static field: static public UnityEngine.Rendering.CameraEvent AfterSkybox
    static void _set_AfterSkybox(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent BeforeForwardAlpha
    static constexpr const int BeforeForwardAlpha = 16;
    // Get static field: static public UnityEngine.Rendering.CameraEvent BeforeForwardAlpha
    static UnityEngine::Rendering::CameraEvent _get_BeforeForwardAlpha();
    // Set static field: static public UnityEngine.Rendering.CameraEvent BeforeForwardAlpha
    static void _set_BeforeForwardAlpha(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent AfterForwardAlpha
    static constexpr const int AfterForwardAlpha = 17;
    // Get static field: static public UnityEngine.Rendering.CameraEvent AfterForwardAlpha
    static UnityEngine::Rendering::CameraEvent _get_AfterForwardAlpha();
    // Set static field: static public UnityEngine.Rendering.CameraEvent AfterForwardAlpha
    static void _set_AfterForwardAlpha(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent BeforeImageEffects
    static constexpr const int BeforeImageEffects = 18;
    // Get static field: static public UnityEngine.Rendering.CameraEvent BeforeImageEffects
    static UnityEngine::Rendering::CameraEvent _get_BeforeImageEffects();
    // Set static field: static public UnityEngine.Rendering.CameraEvent BeforeImageEffects
    static void _set_BeforeImageEffects(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent AfterImageEffects
    static constexpr const int AfterImageEffects = 19;
    // Get static field: static public UnityEngine.Rendering.CameraEvent AfterImageEffects
    static UnityEngine::Rendering::CameraEvent _get_AfterImageEffects();
    // Set static field: static public UnityEngine.Rendering.CameraEvent AfterImageEffects
    static void _set_AfterImageEffects(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent AfterEverything
    static constexpr const int AfterEverything = 20;
    // Get static field: static public UnityEngine.Rendering.CameraEvent AfterEverything
    static UnityEngine::Rendering::CameraEvent _get_AfterEverything();
    // Set static field: static public UnityEngine.Rendering.CameraEvent AfterEverything
    static void _set_AfterEverything(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent BeforeReflections
    static constexpr const int BeforeReflections = 21;
    // Get static field: static public UnityEngine.Rendering.CameraEvent BeforeReflections
    static UnityEngine::Rendering::CameraEvent _get_BeforeReflections();
    // Set static field: static public UnityEngine.Rendering.CameraEvent BeforeReflections
    static void _set_BeforeReflections(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent AfterReflections
    static constexpr const int AfterReflections = 22;
    // Get static field: static public UnityEngine.Rendering.CameraEvent AfterReflections
    static UnityEngine::Rendering::CameraEvent _get_AfterReflections();
    // Set static field: static public UnityEngine.Rendering.CameraEvent AfterReflections
    static void _set_AfterReflections(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent BeforeHaloAndLensFlares
    static constexpr const int BeforeHaloAndLensFlares = 23;
    // Get static field: static public UnityEngine.Rendering.CameraEvent BeforeHaloAndLensFlares
    static UnityEngine::Rendering::CameraEvent _get_BeforeHaloAndLensFlares();
    // Set static field: static public UnityEngine.Rendering.CameraEvent BeforeHaloAndLensFlares
    static void _set_BeforeHaloAndLensFlares(UnityEngine::Rendering::CameraEvent value);
    // static field const value: static public UnityEngine.Rendering.CameraEvent AfterHaloAndLensFlares
    static constexpr const int AfterHaloAndLensFlares = 24;
    // Get static field: static public UnityEngine.Rendering.CameraEvent AfterHaloAndLensFlares
    static UnityEngine::Rendering::CameraEvent _get_AfterHaloAndLensFlares();
    // Set static field: static public UnityEngine.Rendering.CameraEvent AfterHaloAndLensFlares
    static void _set_AfterHaloAndLensFlares(UnityEngine::Rendering::CameraEvent value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Rendering.CameraEvent
  #pragma pack(pop)
  static check_size<sizeof(CameraEvent), 0 + sizeof(int)> __UnityEngine_Rendering_CameraEventSizeCheck;
  static_assert(sizeof(CameraEvent) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::CameraEvent, "UnityEngine.Rendering", "CameraEvent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
