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
  // Autogenerated type: MultiplayerPlayerLayout
  // [TokenAttribute] Offset: FFFFFFFF
  struct MultiplayerPlayerLayout/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MultiplayerPlayerLayout
    constexpr MultiplayerPlayerLayout(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MultiplayerPlayerLayout NotDetermined
    static constexpr const int NotDetermined = 0;
    // Get static field: static public MultiplayerPlayerLayout NotDetermined
    static GlobalNamespace::MultiplayerPlayerLayout _get_NotDetermined();
    // Set static field: static public MultiplayerPlayerLayout NotDetermined
    static void _set_NotDetermined(GlobalNamespace::MultiplayerPlayerLayout value);
    // static field const value: static public MultiplayerPlayerLayout Circle
    static constexpr const int Circle = 1;
    // Get static field: static public MultiplayerPlayerLayout Circle
    static GlobalNamespace::MultiplayerPlayerLayout _get_Circle();
    // Set static field: static public MultiplayerPlayerLayout Circle
    static void _set_Circle(GlobalNamespace::MultiplayerPlayerLayout value);
    // static field const value: static public MultiplayerPlayerLayout Duel
    static constexpr const int Duel = 2;
    // Get static field: static public MultiplayerPlayerLayout Duel
    static GlobalNamespace::MultiplayerPlayerLayout _get_Duel();
    // Set static field: static public MultiplayerPlayerLayout Duel
    static void _set_Duel(GlobalNamespace::MultiplayerPlayerLayout value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // MultiplayerPlayerLayout
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerPlayerLayout), 0 + sizeof(int)> __GlobalNamespace_MultiplayerPlayerLayoutSizeCheck;
  static_assert(sizeof(MultiplayerPlayerLayout) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPlayerLayout, "", "MultiplayerPlayerLayout");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
