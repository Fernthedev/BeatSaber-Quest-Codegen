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
  // Autogenerated type: UnityEngine.Rendering.BuiltinRenderTextureType
  struct BuiltinRenderTextureType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BuiltinRenderTextureType
    constexpr BuiltinRenderTextureType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType PropertyName
    static constexpr const int PropertyName = -4;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType PropertyName
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_PropertyName();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType PropertyName
    static void _set_PropertyName(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType BufferPtr
    static constexpr const int BufferPtr = -3;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType BufferPtr
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_BufferPtr();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType BufferPtr
    static void _set_BufferPtr(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType RenderTexture
    static constexpr const int RenderTexture = -2;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType RenderTexture
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_RenderTexture();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType RenderTexture
    static void _set_RenderTexture(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType BindableTexture
    static constexpr const int BindableTexture = -1;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType BindableTexture
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_BindableTexture();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType BindableTexture
    static void _set_BindableTexture(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType None
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_None();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType None
    static void _set_None(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType CurrentActive
    static constexpr const int CurrentActive = 1;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType CurrentActive
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_CurrentActive();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType CurrentActive
    static void _set_CurrentActive(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType CameraTarget
    static constexpr const int CameraTarget = 2;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType CameraTarget
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_CameraTarget();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType CameraTarget
    static void _set_CameraTarget(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType Depth
    static constexpr const int Depth = 3;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType Depth
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_Depth();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType Depth
    static void _set_Depth(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType DepthNormals
    static constexpr const int DepthNormals = 4;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType DepthNormals
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_DepthNormals();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType DepthNormals
    static void _set_DepthNormals(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType ResolvedDepth
    static constexpr const int ResolvedDepth = 5;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType ResolvedDepth
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_ResolvedDepth();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType ResolvedDepth
    static void _set_ResolvedDepth(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType PrepassNormalsSpec
    static constexpr const int PrepassNormalsSpec = 7;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType PrepassNormalsSpec
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_PrepassNormalsSpec();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType PrepassNormalsSpec
    static void _set_PrepassNormalsSpec(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType PrepassLight
    static constexpr const int PrepassLight = 8;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType PrepassLight
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_PrepassLight();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType PrepassLight
    static void _set_PrepassLight(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType PrepassLightSpec
    static constexpr const int PrepassLightSpec = 9;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType PrepassLightSpec
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_PrepassLightSpec();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType PrepassLightSpec
    static void _set_PrepassLightSpec(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer0
    static constexpr const int GBuffer0 = 10;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer0
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_GBuffer0();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer0
    static void _set_GBuffer0(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer1
    static constexpr const int GBuffer1 = 11;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer1
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_GBuffer1();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer1
    static void _set_GBuffer1(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer2
    static constexpr const int GBuffer2 = 12;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer2
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_GBuffer2();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer2
    static void _set_GBuffer2(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer3
    static constexpr const int GBuffer3 = 13;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer3
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_GBuffer3();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer3
    static void _set_GBuffer3(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType Reflections
    static constexpr const int Reflections = 14;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType Reflections
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_Reflections();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType Reflections
    static void _set_Reflections(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType MotionVectors
    static constexpr const int MotionVectors = 15;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType MotionVectors
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_MotionVectors();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType MotionVectors
    static void _set_MotionVectors(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer4
    static constexpr const int GBuffer4 = 16;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer4
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_GBuffer4();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer4
    static void _set_GBuffer4(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer5
    static constexpr const int GBuffer5 = 17;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer5
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_GBuffer5();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer5
    static void _set_GBuffer5(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer6
    static constexpr const int GBuffer6 = 18;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer6
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_GBuffer6();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer6
    static void _set_GBuffer6(UnityEngine::Rendering::BuiltinRenderTextureType value);
    // static field const value: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer7
    static constexpr const int GBuffer7 = 19;
    // Get static field: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer7
    static UnityEngine::Rendering::BuiltinRenderTextureType _get_GBuffer7();
    // Set static field: static public UnityEngine.Rendering.BuiltinRenderTextureType GBuffer7
    static void _set_GBuffer7(UnityEngine::Rendering::BuiltinRenderTextureType value);
  }; // UnityEngine.Rendering.BuiltinRenderTextureType
  #pragma pack(pop)
  static check_size<sizeof(BuiltinRenderTextureType), 0 + sizeof(int)> __UnityEngine_Rendering_BuiltinRenderTextureTypeSizeCheck;
  static_assert(sizeof(BuiltinRenderTextureType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::BuiltinRenderTextureType, "UnityEngine.Rendering", "BuiltinRenderTextureType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
