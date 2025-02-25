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
  // Size: 0x2
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.NotificationFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct NotificationFlags/*, public System::Enum*/ {
    public:
    // public System.Int16 value__
    // Size: 0x2
    // Offset: 0x0
    int16_t value;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // Creating value type constructor for type: NotificationFlags
    constexpr NotificationFlags(int16_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int16_t
    constexpr operator int16_t() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Timeline.NotificationFlags TriggerInEditMode
    static constexpr const int16_t TriggerInEditMode = 1;
    // Get static field: static public UnityEngine.Timeline.NotificationFlags TriggerInEditMode
    static UnityEngine::Timeline::NotificationFlags _get_TriggerInEditMode();
    // Set static field: static public UnityEngine.Timeline.NotificationFlags TriggerInEditMode
    static void _set_TriggerInEditMode(UnityEngine::Timeline::NotificationFlags value);
    // static field const value: static public UnityEngine.Timeline.NotificationFlags Retroactive
    static constexpr const int16_t Retroactive = 2;
    // Get static field: static public UnityEngine.Timeline.NotificationFlags Retroactive
    static UnityEngine::Timeline::NotificationFlags _get_Retroactive();
    // Set static field: static public UnityEngine.Timeline.NotificationFlags Retroactive
    static void _set_Retroactive(UnityEngine::Timeline::NotificationFlags value);
    // static field const value: static public UnityEngine.Timeline.NotificationFlags TriggerOnce
    static constexpr const int16_t TriggerOnce = 4;
    // Get static field: static public UnityEngine.Timeline.NotificationFlags TriggerOnce
    static UnityEngine::Timeline::NotificationFlags _get_TriggerOnce();
    // Set static field: static public UnityEngine.Timeline.NotificationFlags TriggerOnce
    static void _set_TriggerOnce(UnityEngine::Timeline::NotificationFlags value);
    // Get instance field reference: public System.Int16 value__
    int16_t& dyn_value__();
  }; // UnityEngine.Timeline.NotificationFlags
  #pragma pack(pop)
  static check_size<sizeof(NotificationFlags), 0 + sizeof(int16_t)> __UnityEngine_Timeline_NotificationFlagsSizeCheck;
  static_assert(sizeof(NotificationFlags) == 0x2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::NotificationFlags, "UnityEngine.Timeline", "NotificationFlags");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
