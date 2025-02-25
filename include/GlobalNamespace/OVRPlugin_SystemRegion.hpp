// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/SystemRegion
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::SystemRegion/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SystemRegion
    constexpr SystemRegion(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/SystemRegion Unspecified
    static constexpr const int Unspecified = 0;
    // Get static field: static public OVRPlugin/SystemRegion Unspecified
    static GlobalNamespace::OVRPlugin::SystemRegion _get_Unspecified();
    // Set static field: static public OVRPlugin/SystemRegion Unspecified
    static void _set_Unspecified(GlobalNamespace::OVRPlugin::SystemRegion value);
    // static field const value: static public OVRPlugin/SystemRegion Japan
    static constexpr const int Japan = 1;
    // Get static field: static public OVRPlugin/SystemRegion Japan
    static GlobalNamespace::OVRPlugin::SystemRegion _get_Japan();
    // Set static field: static public OVRPlugin/SystemRegion Japan
    static void _set_Japan(GlobalNamespace::OVRPlugin::SystemRegion value);
    // static field const value: static public OVRPlugin/SystemRegion China
    static constexpr const int China = 2;
    // Get static field: static public OVRPlugin/SystemRegion China
    static GlobalNamespace::OVRPlugin::SystemRegion _get_China();
    // Set static field: static public OVRPlugin/SystemRegion China
    static void _set_China(GlobalNamespace::OVRPlugin::SystemRegion value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRPlugin/SystemRegion
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::SystemRegion), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_SystemRegionSizeCheck;
  static_assert(sizeof(OVRPlugin::SystemRegion) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::SystemRegion, "", "OVRPlugin/SystemRegion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
