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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectType
  // [TokenAttribute] Offset: FFFFFFFF
  struct BeatmapObjectType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BeatmapObjectType
    constexpr BeatmapObjectType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public BeatmapObjectType Note
    static constexpr const int Note = 0;
    // Get static field: static public BeatmapObjectType Note
    static GlobalNamespace::BeatmapObjectType _get_Note();
    // Set static field: static public BeatmapObjectType Note
    static void _set_Note(GlobalNamespace::BeatmapObjectType value);
    // static field const value: static public BeatmapObjectType Obstacle
    static constexpr const int Obstacle = 2;
    // Get static field: static public BeatmapObjectType Obstacle
    static GlobalNamespace::BeatmapObjectType _get_Obstacle();
    // Set static field: static public BeatmapObjectType Obstacle
    static void _set_Obstacle(GlobalNamespace::BeatmapObjectType value);
    // static field const value: static public BeatmapObjectType Waypoint
    static constexpr const int Waypoint = 3;
    // Get static field: static public BeatmapObjectType Waypoint
    static GlobalNamespace::BeatmapObjectType _get_Waypoint();
    // Set static field: static public BeatmapObjectType Waypoint
    static void _set_Waypoint(GlobalNamespace::BeatmapObjectType value);
    // static field const value: static public BeatmapObjectType None
    static constexpr const int None = -1;
    // Get static field: static public BeatmapObjectType None
    static GlobalNamespace::BeatmapObjectType _get_None();
    // Set static field: static public BeatmapObjectType None
    static void _set_None(GlobalNamespace::BeatmapObjectType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // BeatmapObjectType
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectType), 0 + sizeof(int)> __GlobalNamespace_BeatmapObjectTypeSizeCheck;
  static_assert(sizeof(BeatmapObjectType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectType, "", "BeatmapObjectType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
