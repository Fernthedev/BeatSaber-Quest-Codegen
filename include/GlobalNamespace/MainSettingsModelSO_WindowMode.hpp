// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MainSettingsModelSO
#include "GlobalNamespace/MainSettingsModelSO.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: MainSettingsModelSO/WindowMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct MainSettingsModelSO::WindowMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: WindowMode
    constexpr WindowMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MainSettingsModelSO/WindowMode Windowed
    static constexpr const int Windowed = 0;
    // Get static field: static public MainSettingsModelSO/WindowMode Windowed
    static GlobalNamespace::MainSettingsModelSO::WindowMode _get_Windowed();
    // Set static field: static public MainSettingsModelSO/WindowMode Windowed
    static void _set_Windowed(GlobalNamespace::MainSettingsModelSO::WindowMode value);
    // static field const value: static public MainSettingsModelSO/WindowMode Fullscreen
    static constexpr const int Fullscreen = 1;
    // Get static field: static public MainSettingsModelSO/WindowMode Fullscreen
    static GlobalNamespace::MainSettingsModelSO::WindowMode _get_Fullscreen();
    // Set static field: static public MainSettingsModelSO/WindowMode Fullscreen
    static void _set_Fullscreen(GlobalNamespace::MainSettingsModelSO::WindowMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // MainSettingsModelSO/WindowMode
  #pragma pack(pop)
  static check_size<sizeof(MainSettingsModelSO::WindowMode), 0 + sizeof(int)> __GlobalNamespace_MainSettingsModelSO_WindowModeSizeCheck;
  static_assert(sizeof(MainSettingsModelSO::WindowMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSettingsModelSO::WindowMode, "", "MainSettingsModelSO/WindowMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
