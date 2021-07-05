// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVROverlayMeshGenerator
#include "GlobalNamespace/OVROverlayMeshGenerator.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVROverlayMeshGenerator/CubeFace
  struct OVROverlayMeshGenerator::CubeFace/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CubeFace
    constexpr CubeFace(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVROverlayMeshGenerator/CubeFace Right
    static constexpr const int Right = 0;
    // Get static field: static public OVROverlayMeshGenerator/CubeFace Right
    static GlobalNamespace::OVROverlayMeshGenerator::CubeFace _get_Right();
    // Set static field: static public OVROverlayMeshGenerator/CubeFace Right
    static void _set_Right(GlobalNamespace::OVROverlayMeshGenerator::CubeFace value);
    // static field const value: static public OVROverlayMeshGenerator/CubeFace Left
    static constexpr const int Left = 1;
    // Get static field: static public OVROverlayMeshGenerator/CubeFace Left
    static GlobalNamespace::OVROverlayMeshGenerator::CubeFace _get_Left();
    // Set static field: static public OVROverlayMeshGenerator/CubeFace Left
    static void _set_Left(GlobalNamespace::OVROverlayMeshGenerator::CubeFace value);
    // static field const value: static public OVROverlayMeshGenerator/CubeFace Top
    static constexpr const int Top = 2;
    // Get static field: static public OVROverlayMeshGenerator/CubeFace Top
    static GlobalNamespace::OVROverlayMeshGenerator::CubeFace _get_Top();
    // Set static field: static public OVROverlayMeshGenerator/CubeFace Top
    static void _set_Top(GlobalNamespace::OVROverlayMeshGenerator::CubeFace value);
    // static field const value: static public OVROverlayMeshGenerator/CubeFace Bottom
    static constexpr const int Bottom = 3;
    // Get static field: static public OVROverlayMeshGenerator/CubeFace Bottom
    static GlobalNamespace::OVROverlayMeshGenerator::CubeFace _get_Bottom();
    // Set static field: static public OVROverlayMeshGenerator/CubeFace Bottom
    static void _set_Bottom(GlobalNamespace::OVROverlayMeshGenerator::CubeFace value);
    // static field const value: static public OVROverlayMeshGenerator/CubeFace Front
    static constexpr const int Front = 4;
    // Get static field: static public OVROverlayMeshGenerator/CubeFace Front
    static GlobalNamespace::OVROverlayMeshGenerator::CubeFace _get_Front();
    // Set static field: static public OVROverlayMeshGenerator/CubeFace Front
    static void _set_Front(GlobalNamespace::OVROverlayMeshGenerator::CubeFace value);
    // static field const value: static public OVROverlayMeshGenerator/CubeFace Back
    static constexpr const int Back = 5;
    // Get static field: static public OVROverlayMeshGenerator/CubeFace Back
    static GlobalNamespace::OVROverlayMeshGenerator::CubeFace _get_Back();
    // Set static field: static public OVROverlayMeshGenerator/CubeFace Back
    static void _set_Back(GlobalNamespace::OVROverlayMeshGenerator::CubeFace value);
    // static field const value: static public OVROverlayMeshGenerator/CubeFace COUNT
    static constexpr const int COUNT = 6;
    // Get static field: static public OVROverlayMeshGenerator/CubeFace COUNT
    static GlobalNamespace::OVROverlayMeshGenerator::CubeFace _get_COUNT();
    // Set static field: static public OVROverlayMeshGenerator/CubeFace COUNT
    static void _set_COUNT(GlobalNamespace::OVROverlayMeshGenerator::CubeFace value);
  }; // OVROverlayMeshGenerator/CubeFace
  #pragma pack(pop)
  static check_size<sizeof(OVROverlayMeshGenerator::CubeFace), 0 + sizeof(int)> __GlobalNamespace_OVROverlayMeshGenerator_CubeFaceSizeCheck;
  static_assert(sizeof(OVROverlayMeshGenerator::CubeFace) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVROverlayMeshGenerator::CubeFace, "", "OVROverlayMeshGenerator/CubeFace");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
