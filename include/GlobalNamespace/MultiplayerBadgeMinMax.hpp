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
  // Autogenerated type: MultiplayerBadgeMinMax
  // [TokenAttribute] Offset: FFFFFFFF
  struct MultiplayerBadgeMinMax/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MultiplayerBadgeMinMax
    constexpr MultiplayerBadgeMinMax(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MultiplayerBadgeMinMax Min
    static constexpr const int Min = 0;
    // Get static field: static public MultiplayerBadgeMinMax Min
    static GlobalNamespace::MultiplayerBadgeMinMax _get_Min();
    // Set static field: static public MultiplayerBadgeMinMax Min
    static void _set_Min(GlobalNamespace::MultiplayerBadgeMinMax value);
    // static field const value: static public MultiplayerBadgeMinMax Max
    static constexpr const int Max = 1;
    // Get static field: static public MultiplayerBadgeMinMax Max
    static GlobalNamespace::MultiplayerBadgeMinMax _get_Max();
    // Set static field: static public MultiplayerBadgeMinMax Max
    static void _set_Max(GlobalNamespace::MultiplayerBadgeMinMax value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // MultiplayerBadgeMinMax
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerBadgeMinMax), 0 + sizeof(int)> __GlobalNamespace_MultiplayerBadgeMinMaxSizeCheck;
  static_assert(sizeof(MultiplayerBadgeMinMax) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBadgeMinMax, "", "MultiplayerBadgeMinMax");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
