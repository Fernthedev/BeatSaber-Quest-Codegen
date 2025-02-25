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
  // Autogenerated type: OVRPlugin/FixedFoveatedRenderingLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::FixedFoveatedRenderingLevel/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FixedFoveatedRenderingLevel
    constexpr FixedFoveatedRenderingLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/FixedFoveatedRenderingLevel Off
    static constexpr const int Off = 0;
    // Get static field: static public OVRPlugin/FixedFoveatedRenderingLevel Off
    static GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel _get_Off();
    // Set static field: static public OVRPlugin/FixedFoveatedRenderingLevel Off
    static void _set_Off(GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel value);
    // static field const value: static public OVRPlugin/FixedFoveatedRenderingLevel Low
    static constexpr const int Low = 1;
    // Get static field: static public OVRPlugin/FixedFoveatedRenderingLevel Low
    static GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel _get_Low();
    // Set static field: static public OVRPlugin/FixedFoveatedRenderingLevel Low
    static void _set_Low(GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel value);
    // static field const value: static public OVRPlugin/FixedFoveatedRenderingLevel Medium
    static constexpr const int Medium = 2;
    // Get static field: static public OVRPlugin/FixedFoveatedRenderingLevel Medium
    static GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel _get_Medium();
    // Set static field: static public OVRPlugin/FixedFoveatedRenderingLevel Medium
    static void _set_Medium(GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel value);
    // static field const value: static public OVRPlugin/FixedFoveatedRenderingLevel High
    static constexpr const int High = 3;
    // Get static field: static public OVRPlugin/FixedFoveatedRenderingLevel High
    static GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel _get_High();
    // Set static field: static public OVRPlugin/FixedFoveatedRenderingLevel High
    static void _set_High(GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel value);
    // static field const value: static public OVRPlugin/FixedFoveatedRenderingLevel HighTop
    static constexpr const int HighTop = 4;
    // Get static field: static public OVRPlugin/FixedFoveatedRenderingLevel HighTop
    static GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel _get_HighTop();
    // Set static field: static public OVRPlugin/FixedFoveatedRenderingLevel HighTop
    static void _set_HighTop(GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel value);
    // static field const value: static public OVRPlugin/FixedFoveatedRenderingLevel EnumSize
    static constexpr const int EnumSize = 2147483647;
    // Get static field: static public OVRPlugin/FixedFoveatedRenderingLevel EnumSize
    static GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel _get_EnumSize();
    // Set static field: static public OVRPlugin/FixedFoveatedRenderingLevel EnumSize
    static void _set_EnumSize(GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRPlugin/FixedFoveatedRenderingLevel
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::FixedFoveatedRenderingLevel), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_FixedFoveatedRenderingLevelSizeCheck;
  static_assert(sizeof(OVRPlugin::FixedFoveatedRenderingLevel) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel, "", "OVRPlugin/FixedFoveatedRenderingLevel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
