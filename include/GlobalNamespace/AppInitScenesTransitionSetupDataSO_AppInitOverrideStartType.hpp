// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: AppInitScenesTransitionSetupDataSO
#include "GlobalNamespace/AppInitScenesTransitionSetupDataSO.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType
  // [TokenAttribute] Offset: FFFFFFFF
  struct AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AppInitOverrideStartType
    constexpr AppInitOverrideStartType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType DoNotOverride
    static constexpr const int DoNotOverride = 0;
    // Get static field: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType DoNotOverride
    static GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType _get_DoNotOverride();
    // Set static field: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType DoNotOverride
    static void _set_DoNotOverride(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType value);
    // static field const value: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType AppStart
    static constexpr const int AppStart = 1;
    // Get static field: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType AppStart
    static GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType _get_AppStart();
    // Set static field: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType AppStart
    static void _set_AppStart(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType value);
    // static field const value: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType AppRestart
    static constexpr const int AppRestart = 2;
    // Get static field: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType AppRestart
    static GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType _get_AppRestart();
    // Set static field: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType AppRestart
    static void _set_AppRestart(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType value);
    // static field const value: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType MultiSceneEditor
    static constexpr const int MultiSceneEditor = 3;
    // Get static field: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType MultiSceneEditor
    static GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType _get_MultiSceneEditor();
    // Set static field: static public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType MultiSceneEditor
    static void _set_MultiSceneEditor(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType
  #pragma pack(pop)
  static check_size<sizeof(AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType), 0 + sizeof(int)> __GlobalNamespace_AppInitScenesTransitionSetupDataSO_AppInitOverrideStartTypeSizeCheck;
  static_assert(sizeof(AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType, "", "AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
