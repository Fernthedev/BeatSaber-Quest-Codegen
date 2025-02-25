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
  // Autogenerated type: OVRPlugin/OverlayShape
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::OverlayShape/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: OverlayShape
    constexpr OverlayShape(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/OverlayShape Quad
    static constexpr const int Quad = 0;
    // Get static field: static public OVRPlugin/OverlayShape Quad
    static GlobalNamespace::OVRPlugin::OverlayShape _get_Quad();
    // Set static field: static public OVRPlugin/OverlayShape Quad
    static void _set_Quad(GlobalNamespace::OVRPlugin::OverlayShape value);
    // static field const value: static public OVRPlugin/OverlayShape Cylinder
    static constexpr const int Cylinder = 1;
    // Get static field: static public OVRPlugin/OverlayShape Cylinder
    static GlobalNamespace::OVRPlugin::OverlayShape _get_Cylinder();
    // Set static field: static public OVRPlugin/OverlayShape Cylinder
    static void _set_Cylinder(GlobalNamespace::OVRPlugin::OverlayShape value);
    // static field const value: static public OVRPlugin/OverlayShape Cubemap
    static constexpr const int Cubemap = 2;
    // Get static field: static public OVRPlugin/OverlayShape Cubemap
    static GlobalNamespace::OVRPlugin::OverlayShape _get_Cubemap();
    // Set static field: static public OVRPlugin/OverlayShape Cubemap
    static void _set_Cubemap(GlobalNamespace::OVRPlugin::OverlayShape value);
    // static field const value: static public OVRPlugin/OverlayShape OffcenterCubemap
    static constexpr const int OffcenterCubemap = 4;
    // Get static field: static public OVRPlugin/OverlayShape OffcenterCubemap
    static GlobalNamespace::OVRPlugin::OverlayShape _get_OffcenterCubemap();
    // Set static field: static public OVRPlugin/OverlayShape OffcenterCubemap
    static void _set_OffcenterCubemap(GlobalNamespace::OVRPlugin::OverlayShape value);
    // static field const value: static public OVRPlugin/OverlayShape Equirect
    static constexpr const int Equirect = 5;
    // Get static field: static public OVRPlugin/OverlayShape Equirect
    static GlobalNamespace::OVRPlugin::OverlayShape _get_Equirect();
    // Set static field: static public OVRPlugin/OverlayShape Equirect
    static void _set_Equirect(GlobalNamespace::OVRPlugin::OverlayShape value);
    // static field const value: static public OVRPlugin/OverlayShape Fisheye
    static constexpr const int Fisheye = 9;
    // Get static field: static public OVRPlugin/OverlayShape Fisheye
    static GlobalNamespace::OVRPlugin::OverlayShape _get_Fisheye();
    // Set static field: static public OVRPlugin/OverlayShape Fisheye
    static void _set_Fisheye(GlobalNamespace::OVRPlugin::OverlayShape value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRPlugin/OverlayShape
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::OverlayShape), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_OverlayShapeSizeCheck;
  static_assert(sizeof(OVRPlugin::OverlayShape) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OverlayShape, "", "OVRPlugin/OverlayShape");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
