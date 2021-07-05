// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRManager/TrackingOrigin
  struct OVRManager_TrackingOrigin/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: OVRManager_TrackingOrigin
    constexpr OVRManager_TrackingOrigin(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRManager/TrackingOrigin EyeLevel
    static constexpr const int EyeLevel = 0;
    // Get static field: static public OVRManager/TrackingOrigin EyeLevel
    static GlobalNamespace::OVRManager_TrackingOrigin _get_EyeLevel();
    // Set static field: static public OVRManager/TrackingOrigin EyeLevel
    static void _set_EyeLevel(GlobalNamespace::OVRManager_TrackingOrigin value);
    // static field const value: static public OVRManager/TrackingOrigin FloorLevel
    static constexpr const int FloorLevel = 1;
    // Get static field: static public OVRManager/TrackingOrigin FloorLevel
    static GlobalNamespace::OVRManager_TrackingOrigin _get_FloorLevel();
    // Set static field: static public OVRManager/TrackingOrigin FloorLevel
    static void _set_FloorLevel(GlobalNamespace::OVRManager_TrackingOrigin value);
    // static field const value: static public OVRManager/TrackingOrigin Stage
    static constexpr const int Stage = 2;
    // Get static field: static public OVRManager/TrackingOrigin Stage
    static GlobalNamespace::OVRManager_TrackingOrigin _get_Stage();
    // Set static field: static public OVRManager/TrackingOrigin Stage
    static void _set_Stage(GlobalNamespace::OVRManager_TrackingOrigin value);
  }; // OVRManager/TrackingOrigin
  #pragma pack(pop)
  static check_size<sizeof(OVRManager_TrackingOrigin), 0 + sizeof(int)> __GlobalNamespace_OVRManager_TrackingOriginSizeCheck;
  static_assert(sizeof(OVRManager_TrackingOrigin) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRManager_TrackingOrigin, "", "OVRManager/TrackingOrigin");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
