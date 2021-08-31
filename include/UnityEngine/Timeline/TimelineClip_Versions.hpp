// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.TimelineClip
#include "UnityEngine/Timeline/TimelineClip.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineClip/UnityEngine.Timeline.Versions
  // [TokenAttribute] Offset: FFFFFFFF
  struct TimelineClip::Versions/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Versions
    constexpr Versions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Timeline.TimelineClip/UnityEngine.Timeline.Versions Initial
    static constexpr const int Initial = 0;
    // Get static field: static public UnityEngine.Timeline.TimelineClip/UnityEngine.Timeline.Versions Initial
    static UnityEngine::Timeline::TimelineClip::Versions _get_Initial();
    // Set static field: static public UnityEngine.Timeline.TimelineClip/UnityEngine.Timeline.Versions Initial
    static void _set_Initial(UnityEngine::Timeline::TimelineClip::Versions value);
    // static field const value: static public UnityEngine.Timeline.TimelineClip/UnityEngine.Timeline.Versions ClipInFromGlobalToLocal
    static constexpr const int ClipInFromGlobalToLocal = 1;
    // Get static field: static public UnityEngine.Timeline.TimelineClip/UnityEngine.Timeline.Versions ClipInFromGlobalToLocal
    static UnityEngine::Timeline::TimelineClip::Versions _get_ClipInFromGlobalToLocal();
    // Set static field: static public UnityEngine.Timeline.TimelineClip/UnityEngine.Timeline.Versions ClipInFromGlobalToLocal
    static void _set_ClipInFromGlobalToLocal(UnityEngine::Timeline::TimelineClip::Versions value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Timeline.TimelineClip/UnityEngine.Timeline.Versions
  #pragma pack(pop)
  static check_size<sizeof(TimelineClip::Versions), 0 + sizeof(int)> __UnityEngine_Timeline_TimelineClip_VersionsSizeCheck;
  static_assert(sizeof(TimelineClip::Versions) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineClip::Versions, "UnityEngine.Timeline", "TimelineClip/Versions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
