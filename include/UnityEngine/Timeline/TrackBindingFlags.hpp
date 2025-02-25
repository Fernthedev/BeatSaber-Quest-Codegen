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
  // Autogenerated type: UnityEngine.Timeline.TrackBindingFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct TrackBindingFlags/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TrackBindingFlags
    constexpr TrackBindingFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Timeline.TrackBindingFlags None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Timeline.TrackBindingFlags None
    static UnityEngine::Timeline::TrackBindingFlags _get_None();
    // Set static field: static public UnityEngine.Timeline.TrackBindingFlags None
    static void _set_None(UnityEngine::Timeline::TrackBindingFlags value);
    // static field const value: static public UnityEngine.Timeline.TrackBindingFlags AllowCreateComponent
    static constexpr const int AllowCreateComponent = 1;
    // Get static field: static public UnityEngine.Timeline.TrackBindingFlags AllowCreateComponent
    static UnityEngine::Timeline::TrackBindingFlags _get_AllowCreateComponent();
    // Set static field: static public UnityEngine.Timeline.TrackBindingFlags AllowCreateComponent
    static void _set_AllowCreateComponent(UnityEngine::Timeline::TrackBindingFlags value);
    // static field const value: static public UnityEngine.Timeline.TrackBindingFlags All
    static constexpr const int All = 1;
    // Get static field: static public UnityEngine.Timeline.TrackBindingFlags All
    static UnityEngine::Timeline::TrackBindingFlags _get_All();
    // Set static field: static public UnityEngine.Timeline.TrackBindingFlags All
    static void _set_All(UnityEngine::Timeline::TrackBindingFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Timeline.TrackBindingFlags
  #pragma pack(pop)
  static check_size<sizeof(TrackBindingFlags), 0 + sizeof(int)> __UnityEngine_Timeline_TrackBindingFlagsSizeCheck;
  static_assert(sizeof(TrackBindingFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackBindingFlags, "UnityEngine.Timeline", "TrackBindingFlags");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
