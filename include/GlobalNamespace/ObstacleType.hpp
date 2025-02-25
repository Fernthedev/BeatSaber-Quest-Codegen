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
  // Autogenerated type: ObstacleType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ObstacleType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ObstacleType
    constexpr ObstacleType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public ObstacleType FullHeight
    static constexpr const int FullHeight = 0;
    // Get static field: static public ObstacleType FullHeight
    static GlobalNamespace::ObstacleType _get_FullHeight();
    // Set static field: static public ObstacleType FullHeight
    static void _set_FullHeight(GlobalNamespace::ObstacleType value);
    // static field const value: static public ObstacleType Top
    static constexpr const int Top = 1;
    // Get static field: static public ObstacleType Top
    static GlobalNamespace::ObstacleType _get_Top();
    // Set static field: static public ObstacleType Top
    static void _set_Top(GlobalNamespace::ObstacleType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // ObstacleType
  #pragma pack(pop)
  static check_size<sizeof(ObstacleType), 0 + sizeof(int)> __GlobalNamespace_ObstacleTypeSizeCheck;
  static_assert(sizeof(ObstacleType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleType, "", "ObstacleType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
