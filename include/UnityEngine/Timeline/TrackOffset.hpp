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
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TrackOffset
  // [TokenAttribute] Offset: FFFFFFFF
  struct TrackOffset/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TrackOffset
    constexpr TrackOffset(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Timeline.TrackOffset ApplyTransformOffsets
    static constexpr const int ApplyTransformOffsets = 0;
    // Get static field: static public UnityEngine.Timeline.TrackOffset ApplyTransformOffsets
    static UnityEngine::Timeline::TrackOffset _get_ApplyTransformOffsets();
    // Set static field: static public UnityEngine.Timeline.TrackOffset ApplyTransformOffsets
    static void _set_ApplyTransformOffsets(UnityEngine::Timeline::TrackOffset value);
    // static field const value: static public UnityEngine.Timeline.TrackOffset ApplySceneOffsets
    static constexpr const int ApplySceneOffsets = 1;
    // Get static field: static public UnityEngine.Timeline.TrackOffset ApplySceneOffsets
    static UnityEngine::Timeline::TrackOffset _get_ApplySceneOffsets();
    // Set static field: static public UnityEngine.Timeline.TrackOffset ApplySceneOffsets
    static void _set_ApplySceneOffsets(UnityEngine::Timeline::TrackOffset value);
    // static field const value: static public UnityEngine.Timeline.TrackOffset Auto
    static constexpr const int Auto = 2;
    // Get static field: static public UnityEngine.Timeline.TrackOffset Auto
    static UnityEngine::Timeline::TrackOffset _get_Auto();
    // Set static field: static public UnityEngine.Timeline.TrackOffset Auto
    static void _set_Auto(UnityEngine::Timeline::TrackOffset value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Timeline.TrackOffset
  #pragma pack(pop)
  static check_size<sizeof(TrackOffset), 0 + sizeof(int)> __UnityEngine_Timeline_TrackOffsetSizeCheck;
  static_assert(sizeof(TrackOffset) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackOffset, "UnityEngine.Timeline", "TrackOffset");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
