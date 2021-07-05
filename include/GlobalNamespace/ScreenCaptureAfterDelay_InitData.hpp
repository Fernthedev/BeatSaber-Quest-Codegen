// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ScreenCaptureAfterDelay
#include "GlobalNamespace/ScreenCaptureAfterDelay.hpp"
// Including type: ScreenCaptureCache/ScreenshotType
#include "GlobalNamespace/ScreenCaptureCache.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ScreenCaptureAfterDelay/InitData
  class ScreenCaptureAfterDelay::InitData : public ::Il2CppObject {
    public:
    // public readonly ScreenCaptureCache/ScreenshotType screenshotType
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::ScreenCaptureCache::ScreenshotType screenshotType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScreenCaptureCache::ScreenshotType) == 0x4);
    // public readonly System.Single screenCaptureTime
    // Size: 0x4
    // Offset: 0x14
    float screenCaptureTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Int32 pixelsWidth
    // Size: 0x4
    // Offset: 0x18
    int pixelsWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 pixelsHeight
    // Size: 0x4
    // Offset: 0x1C
    int pixelsHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: InitData
    InitData(GlobalNamespace::ScreenCaptureCache::ScreenshotType screenshotType_ = {}, float screenCaptureTime_ = {}, int pixelsWidth_ = {}, int pixelsHeight_ = {}) noexcept : screenshotType{screenshotType_}, screenCaptureTime{screenCaptureTime_}, pixelsWidth{pixelsWidth_}, pixelsHeight{pixelsHeight_} {}
    // public System.Void .ctor(ScreenCaptureCache/ScreenshotType screenshotType, System.Single screenCaptureTime, System.Int32 pixelsWidth, System.Int32 pixelsHeight)
    // Offset: 0x2363568
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScreenCaptureAfterDelay::InitData* New_ctor(GlobalNamespace::ScreenCaptureCache::ScreenshotType screenshotType, float screenCaptureTime, int pixelsWidth, int pixelsHeight) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ScreenCaptureAfterDelay::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScreenCaptureAfterDelay::InitData*, creationType>(screenshotType, screenCaptureTime, pixelsWidth, pixelsHeight)));
    }
  }; // ScreenCaptureAfterDelay/InitData
  #pragma pack(pop)
  static check_size<sizeof(ScreenCaptureAfterDelay::InitData), 28 + sizeof(int)> __GlobalNamespace_ScreenCaptureAfterDelay_InitDataSizeCheck;
  static_assert(sizeof(ScreenCaptureAfterDelay::InitData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenCaptureAfterDelay::InitData*, "", "ScreenCaptureAfterDelay/InitData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScreenCaptureAfterDelay::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
