// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.InputTracking
#include "UnityEngine/XR/InputTracking.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.InputTracking/UnityEngine.XR.TrackingStateEventType
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputTracking::TrackingStateEventType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TrackingStateEventType
    constexpr TrackingStateEventType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.XR.InputTracking/UnityEngine.XR.TrackingStateEventType NodeAdded
    static constexpr const int NodeAdded = 0;
    // Get static field: static public UnityEngine.XR.InputTracking/UnityEngine.XR.TrackingStateEventType NodeAdded
    static UnityEngine::XR::InputTracking::TrackingStateEventType _get_NodeAdded();
    // Set static field: static public UnityEngine.XR.InputTracking/UnityEngine.XR.TrackingStateEventType NodeAdded
    static void _set_NodeAdded(UnityEngine::XR::InputTracking::TrackingStateEventType value);
    // static field const value: static public UnityEngine.XR.InputTracking/UnityEngine.XR.TrackingStateEventType NodeRemoved
    static constexpr const int NodeRemoved = 1;
    // Get static field: static public UnityEngine.XR.InputTracking/UnityEngine.XR.TrackingStateEventType NodeRemoved
    static UnityEngine::XR::InputTracking::TrackingStateEventType _get_NodeRemoved();
    // Set static field: static public UnityEngine.XR.InputTracking/UnityEngine.XR.TrackingStateEventType NodeRemoved
    static void _set_NodeRemoved(UnityEngine::XR::InputTracking::TrackingStateEventType value);
    // static field const value: static public UnityEngine.XR.InputTracking/UnityEngine.XR.TrackingStateEventType TrackingAcquired
    static constexpr const int TrackingAcquired = 2;
    // Get static field: static public UnityEngine.XR.InputTracking/UnityEngine.XR.TrackingStateEventType TrackingAcquired
    static UnityEngine::XR::InputTracking::TrackingStateEventType _get_TrackingAcquired();
    // Set static field: static public UnityEngine.XR.InputTracking/UnityEngine.XR.TrackingStateEventType TrackingAcquired
    static void _set_TrackingAcquired(UnityEngine::XR::InputTracking::TrackingStateEventType value);
    // static field const value: static public UnityEngine.XR.InputTracking/UnityEngine.XR.TrackingStateEventType TrackingLost
    static constexpr const int TrackingLost = 3;
    // Get static field: static public UnityEngine.XR.InputTracking/UnityEngine.XR.TrackingStateEventType TrackingLost
    static UnityEngine::XR::InputTracking::TrackingStateEventType _get_TrackingLost();
    // Set static field: static public UnityEngine.XR.InputTracking/UnityEngine.XR.TrackingStateEventType TrackingLost
    static void _set_TrackingLost(UnityEngine::XR::InputTracking::TrackingStateEventType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.XR.InputTracking/UnityEngine.XR.TrackingStateEventType
  #pragma pack(pop)
  static check_size<sizeof(InputTracking::TrackingStateEventType), 0 + sizeof(int)> __UnityEngine_XR_InputTracking_TrackingStateEventTypeSizeCheck;
  static_assert(sizeof(InputTracking::TrackingStateEventType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputTracking::TrackingStateEventType, "UnityEngine.XR", "InputTracking/TrackingStateEventType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
