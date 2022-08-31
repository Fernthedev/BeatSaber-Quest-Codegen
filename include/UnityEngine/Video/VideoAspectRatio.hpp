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
  // Forward declaring type: VideoAspectRatio
  struct VideoAspectRatio;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoAspectRatio, "UnityEngine.Video", "VideoAspectRatio");
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Video.VideoAspectRatio
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 10B242C
  struct VideoAspectRatio/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VideoAspectRatio
    constexpr VideoAspectRatio(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public UnityEngine.Video.VideoAspectRatio NoScaling
    static constexpr const int NoScaling = 0;
    // Get static field: static public UnityEngine.Video.VideoAspectRatio NoScaling
    static ::UnityEngine::Video::VideoAspectRatio _get_NoScaling();
    // Set static field: static public UnityEngine.Video.VideoAspectRatio NoScaling
    static void _set_NoScaling(::UnityEngine::Video::VideoAspectRatio value);
    // static field const value: static public UnityEngine.Video.VideoAspectRatio FitVertically
    static constexpr const int FitVertically = 1;
    // Get static field: static public UnityEngine.Video.VideoAspectRatio FitVertically
    static ::UnityEngine::Video::VideoAspectRatio _get_FitVertically();
    // Set static field: static public UnityEngine.Video.VideoAspectRatio FitVertically
    static void _set_FitVertically(::UnityEngine::Video::VideoAspectRatio value);
    // static field const value: static public UnityEngine.Video.VideoAspectRatio FitHorizontally
    static constexpr const int FitHorizontally = 2;
    // Get static field: static public UnityEngine.Video.VideoAspectRatio FitHorizontally
    static ::UnityEngine::Video::VideoAspectRatio _get_FitHorizontally();
    // Set static field: static public UnityEngine.Video.VideoAspectRatio FitHorizontally
    static void _set_FitHorizontally(::UnityEngine::Video::VideoAspectRatio value);
    // static field const value: static public UnityEngine.Video.VideoAspectRatio FitInside
    static constexpr const int FitInside = 3;
    // Get static field: static public UnityEngine.Video.VideoAspectRatio FitInside
    static ::UnityEngine::Video::VideoAspectRatio _get_FitInside();
    // Set static field: static public UnityEngine.Video.VideoAspectRatio FitInside
    static void _set_FitInside(::UnityEngine::Video::VideoAspectRatio value);
    // static field const value: static public UnityEngine.Video.VideoAspectRatio FitOutside
    static constexpr const int FitOutside = 4;
    // Get static field: static public UnityEngine.Video.VideoAspectRatio FitOutside
    static ::UnityEngine::Video::VideoAspectRatio _get_FitOutside();
    // Set static field: static public UnityEngine.Video.VideoAspectRatio FitOutside
    static void _set_FitOutside(::UnityEngine::Video::VideoAspectRatio value);
    // static field const value: static public UnityEngine.Video.VideoAspectRatio Stretch
    static constexpr const int Stretch = 5;
    // Get static field: static public UnityEngine.Video.VideoAspectRatio Stretch
    static ::UnityEngine::Video::VideoAspectRatio _get_Stretch();
    // Set static field: static public UnityEngine.Video.VideoAspectRatio Stretch
    static void _set_Stretch(::UnityEngine::Video::VideoAspectRatio value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Video.VideoAspectRatio
  #pragma pack(pop)
  static check_size<sizeof(VideoAspectRatio), 0 + sizeof(int)> __UnityEngine_Video_VideoAspectRatioSizeCheck;
  static_assert(sizeof(VideoAspectRatio) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
