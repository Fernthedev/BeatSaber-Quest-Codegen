// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.ECollisionBoundsStyle
  struct ECollisionBoundsStyle/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ECollisionBoundsStyle
    constexpr ECollisionBoundsStyle(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_BEGINNER
    static constexpr const int COLLISION_BOUNDS_STYLE_BEGINNER = 0;
    // Get static field: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_BEGINNER
    static OVR::OpenVR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_BEGINNER();
    // Set static field: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_BEGINNER
    static void _set_COLLISION_BOUNDS_STYLE_BEGINNER(OVR::OpenVR::ECollisionBoundsStyle value);
    // static field const value: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_INTERMEDIATE
    static constexpr const int COLLISION_BOUNDS_STYLE_INTERMEDIATE = 1;
    // Get static field: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_INTERMEDIATE
    static OVR::OpenVR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_INTERMEDIATE();
    // Set static field: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_INTERMEDIATE
    static void _set_COLLISION_BOUNDS_STYLE_INTERMEDIATE(OVR::OpenVR::ECollisionBoundsStyle value);
    // static field const value: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_SQUARES
    static constexpr const int COLLISION_BOUNDS_STYLE_SQUARES = 2;
    // Get static field: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_SQUARES
    static OVR::OpenVR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_SQUARES();
    // Set static field: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_SQUARES
    static void _set_COLLISION_BOUNDS_STYLE_SQUARES(OVR::OpenVR::ECollisionBoundsStyle value);
    // static field const value: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_ADVANCED
    static constexpr const int COLLISION_BOUNDS_STYLE_ADVANCED = 3;
    // Get static field: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_ADVANCED
    static OVR::OpenVR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_ADVANCED();
    // Set static field: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_ADVANCED
    static void _set_COLLISION_BOUNDS_STYLE_ADVANCED(OVR::OpenVR::ECollisionBoundsStyle value);
    // static field const value: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_NONE
    static constexpr const int COLLISION_BOUNDS_STYLE_NONE = 4;
    // Get static field: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_NONE
    static OVR::OpenVR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_NONE();
    // Set static field: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_NONE
    static void _set_COLLISION_BOUNDS_STYLE_NONE(OVR::OpenVR::ECollisionBoundsStyle value);
    // static field const value: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_COUNT
    static constexpr const int COLLISION_BOUNDS_STYLE_COUNT = 5;
    // Get static field: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_COUNT
    static OVR::OpenVR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_COUNT();
    // Set static field: static public OVR.OpenVR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_COUNT
    static void _set_COLLISION_BOUNDS_STYLE_COUNT(OVR::OpenVR::ECollisionBoundsStyle value);
  }; // OVR.OpenVR.ECollisionBoundsStyle
  #pragma pack(pop)
  static check_size<sizeof(ECollisionBoundsStyle), 0 + sizeof(int)> __OVR_OpenVR_ECollisionBoundsStyleSizeCheck;
  static_assert(sizeof(ECollisionBoundsStyle) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::ECollisionBoundsStyle, "OVR.OpenVR", "ECollisionBoundsStyle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
