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
  // Autogenerated type: OVRManager/TiledMultiResLevel
  // [ObsoleteAttribute] Offset: DCCFD8
  struct OVRManager_TiledMultiResLevel/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: OVRManager_TiledMultiResLevel
    constexpr OVRManager_TiledMultiResLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRManager/TiledMultiResLevel Off
    static constexpr const int Off = 0;
    // Get static field: static public OVRManager/TiledMultiResLevel Off
    static GlobalNamespace::OVRManager_TiledMultiResLevel _get_Off();
    // Set static field: static public OVRManager/TiledMultiResLevel Off
    static void _set_Off(GlobalNamespace::OVRManager_TiledMultiResLevel value);
    // static field const value: static public OVRManager/TiledMultiResLevel LMSLow
    static constexpr const int LMSLow = 1;
    // Get static field: static public OVRManager/TiledMultiResLevel LMSLow
    static GlobalNamespace::OVRManager_TiledMultiResLevel _get_LMSLow();
    // Set static field: static public OVRManager/TiledMultiResLevel LMSLow
    static void _set_LMSLow(GlobalNamespace::OVRManager_TiledMultiResLevel value);
    // static field const value: static public OVRManager/TiledMultiResLevel LMSMedium
    static constexpr const int LMSMedium = 2;
    // Get static field: static public OVRManager/TiledMultiResLevel LMSMedium
    static GlobalNamespace::OVRManager_TiledMultiResLevel _get_LMSMedium();
    // Set static field: static public OVRManager/TiledMultiResLevel LMSMedium
    static void _set_LMSMedium(GlobalNamespace::OVRManager_TiledMultiResLevel value);
    // static field const value: static public OVRManager/TiledMultiResLevel LMSHigh
    static constexpr const int LMSHigh = 3;
    // Get static field: static public OVRManager/TiledMultiResLevel LMSHigh
    static GlobalNamespace::OVRManager_TiledMultiResLevel _get_LMSHigh();
    // Set static field: static public OVRManager/TiledMultiResLevel LMSHigh
    static void _set_LMSHigh(GlobalNamespace::OVRManager_TiledMultiResLevel value);
    // static field const value: static public OVRManager/TiledMultiResLevel LMSHighTop
    static constexpr const int LMSHighTop = 4;
    // Get static field: static public OVRManager/TiledMultiResLevel LMSHighTop
    static GlobalNamespace::OVRManager_TiledMultiResLevel _get_LMSHighTop();
    // Set static field: static public OVRManager/TiledMultiResLevel LMSHighTop
    static void _set_LMSHighTop(GlobalNamespace::OVRManager_TiledMultiResLevel value);
  }; // OVRManager/TiledMultiResLevel
  #pragma pack(pop)
  static check_size<sizeof(OVRManager_TiledMultiResLevel), 0 + sizeof(int)> __GlobalNamespace_OVRManager_TiledMultiResLevelSizeCheck;
  static_assert(sizeof(OVRManager_TiledMultiResLevel) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRManager_TiledMultiResLevel, "", "OVRManager/TiledMultiResLevel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
