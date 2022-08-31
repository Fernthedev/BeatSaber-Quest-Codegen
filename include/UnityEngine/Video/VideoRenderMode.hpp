// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Forward declaring type: VideoRenderMode
  struct VideoRenderMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoRenderMode, "UnityEngine.Video", "VideoRenderMode");
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Video.VideoRenderMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 10B240C
  struct VideoRenderMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VideoRenderMode
    constexpr VideoRenderMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Video.VideoRenderMode CameraFarPlane
    static constexpr const int CameraFarPlane = 0;
    // Get static field: static public UnityEngine.Video.VideoRenderMode CameraFarPlane
    static ::UnityEngine::Video::VideoRenderMode _get_CameraFarPlane();
    // Set static field: static public UnityEngine.Video.VideoRenderMode CameraFarPlane
    static void _set_CameraFarPlane(::UnityEngine::Video::VideoRenderMode value);
    // static field const value: static public UnityEngine.Video.VideoRenderMode CameraNearPlane
    static constexpr const int CameraNearPlane = 1;
    // Get static field: static public UnityEngine.Video.VideoRenderMode CameraNearPlane
    static ::UnityEngine::Video::VideoRenderMode _get_CameraNearPlane();
    // Set static field: static public UnityEngine.Video.VideoRenderMode CameraNearPlane
    static void _set_CameraNearPlane(::UnityEngine::Video::VideoRenderMode value);
    // static field const value: static public UnityEngine.Video.VideoRenderMode RenderTexture
    static constexpr const int RenderTexture = 2;
    // Get static field: static public UnityEngine.Video.VideoRenderMode RenderTexture
    static ::UnityEngine::Video::VideoRenderMode _get_RenderTexture();
    // Set static field: static public UnityEngine.Video.VideoRenderMode RenderTexture
    static void _set_RenderTexture(::UnityEngine::Video::VideoRenderMode value);
    // static field const value: static public UnityEngine.Video.VideoRenderMode MaterialOverride
    static constexpr const int MaterialOverride = 3;
    // Get static field: static public UnityEngine.Video.VideoRenderMode MaterialOverride
    static ::UnityEngine::Video::VideoRenderMode _get_MaterialOverride();
    // Set static field: static public UnityEngine.Video.VideoRenderMode MaterialOverride
    static void _set_MaterialOverride(::UnityEngine::Video::VideoRenderMode value);
    // static field const value: static public UnityEngine.Video.VideoRenderMode APIOnly
    static constexpr const int APIOnly = 4;
    // Get static field: static public UnityEngine.Video.VideoRenderMode APIOnly
    static ::UnityEngine::Video::VideoRenderMode _get_APIOnly();
    // Set static field: static public UnityEngine.Video.VideoRenderMode APIOnly
    static void _set_APIOnly(::UnityEngine::Video::VideoRenderMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Video.VideoRenderMode
  #pragma pack(pop)
  static check_size<sizeof(VideoRenderMode), 0 + sizeof(int)> __UnityEngine_Video_VideoRenderModeSizeCheck;
  static_assert(sizeof(VideoRenderMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
