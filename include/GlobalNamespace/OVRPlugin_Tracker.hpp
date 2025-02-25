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
  // Autogenerated type: OVRPlugin/Tracker
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::Tracker/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Tracker
    constexpr Tracker(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/Tracker None
    static constexpr const int None = -1;
    // Get static field: static public OVRPlugin/Tracker None
    static GlobalNamespace::OVRPlugin::Tracker _get_None();
    // Set static field: static public OVRPlugin/Tracker None
    static void _set_None(GlobalNamespace::OVRPlugin::Tracker value);
    // static field const value: static public OVRPlugin/Tracker Zero
    static constexpr const int Zero = 0;
    // Get static field: static public OVRPlugin/Tracker Zero
    static GlobalNamespace::OVRPlugin::Tracker _get_Zero();
    // Set static field: static public OVRPlugin/Tracker Zero
    static void _set_Zero(GlobalNamespace::OVRPlugin::Tracker value);
    // static field const value: static public OVRPlugin/Tracker One
    static constexpr const int One = 1;
    // Get static field: static public OVRPlugin/Tracker One
    static GlobalNamespace::OVRPlugin::Tracker _get_One();
    // Set static field: static public OVRPlugin/Tracker One
    static void _set_One(GlobalNamespace::OVRPlugin::Tracker value);
    // static field const value: static public OVRPlugin/Tracker Two
    static constexpr const int Two = 2;
    // Get static field: static public OVRPlugin/Tracker Two
    static GlobalNamespace::OVRPlugin::Tracker _get_Two();
    // Set static field: static public OVRPlugin/Tracker Two
    static void _set_Two(GlobalNamespace::OVRPlugin::Tracker value);
    // static field const value: static public OVRPlugin/Tracker Three
    static constexpr const int Three = 3;
    // Get static field: static public OVRPlugin/Tracker Three
    static GlobalNamespace::OVRPlugin::Tracker _get_Three();
    // Set static field: static public OVRPlugin/Tracker Three
    static void _set_Three(GlobalNamespace::OVRPlugin::Tracker value);
    // static field const value: static public OVRPlugin/Tracker Count
    static constexpr const int Count = 4;
    // Get static field: static public OVRPlugin/Tracker Count
    static GlobalNamespace::OVRPlugin::Tracker _get_Count();
    // Set static field: static public OVRPlugin/Tracker Count
    static void _set_Count(GlobalNamespace::OVRPlugin::Tracker value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRPlugin/Tracker
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Tracker), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_TrackerSizeCheck;
  static_assert(sizeof(OVRPlugin::Tracker) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Tracker, "", "OVRPlugin/Tracker");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
