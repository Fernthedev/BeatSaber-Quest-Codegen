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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RuntimeInitializeLoadType
  // [TokenAttribute] Offset: FFFFFFFF
  struct RuntimeInitializeLoadType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RuntimeInitializeLoadType
    constexpr RuntimeInitializeLoadType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.RuntimeInitializeLoadType AfterSceneLoad
    static constexpr const int AfterSceneLoad = 0;
    // Get static field: static public UnityEngine.RuntimeInitializeLoadType AfterSceneLoad
    static UnityEngine::RuntimeInitializeLoadType _get_AfterSceneLoad();
    // Set static field: static public UnityEngine.RuntimeInitializeLoadType AfterSceneLoad
    static void _set_AfterSceneLoad(UnityEngine::RuntimeInitializeLoadType value);
    // static field const value: static public UnityEngine.RuntimeInitializeLoadType BeforeSceneLoad
    static constexpr const int BeforeSceneLoad = 1;
    // Get static field: static public UnityEngine.RuntimeInitializeLoadType BeforeSceneLoad
    static UnityEngine::RuntimeInitializeLoadType _get_BeforeSceneLoad();
    // Set static field: static public UnityEngine.RuntimeInitializeLoadType BeforeSceneLoad
    static void _set_BeforeSceneLoad(UnityEngine::RuntimeInitializeLoadType value);
    // static field const value: static public UnityEngine.RuntimeInitializeLoadType AfterAssembliesLoaded
    static constexpr const int AfterAssembliesLoaded = 2;
    // Get static field: static public UnityEngine.RuntimeInitializeLoadType AfterAssembliesLoaded
    static UnityEngine::RuntimeInitializeLoadType _get_AfterAssembliesLoaded();
    // Set static field: static public UnityEngine.RuntimeInitializeLoadType AfterAssembliesLoaded
    static void _set_AfterAssembliesLoaded(UnityEngine::RuntimeInitializeLoadType value);
    // static field const value: static public UnityEngine.RuntimeInitializeLoadType BeforeSplashScreen
    static constexpr const int BeforeSplashScreen = 3;
    // Get static field: static public UnityEngine.RuntimeInitializeLoadType BeforeSplashScreen
    static UnityEngine::RuntimeInitializeLoadType _get_BeforeSplashScreen();
    // Set static field: static public UnityEngine.RuntimeInitializeLoadType BeforeSplashScreen
    static void _set_BeforeSplashScreen(UnityEngine::RuntimeInitializeLoadType value);
    // static field const value: static public UnityEngine.RuntimeInitializeLoadType SubsystemRegistration
    static constexpr const int SubsystemRegistration = 4;
    // Get static field: static public UnityEngine.RuntimeInitializeLoadType SubsystemRegistration
    static UnityEngine::RuntimeInitializeLoadType _get_SubsystemRegistration();
    // Set static field: static public UnityEngine.RuntimeInitializeLoadType SubsystemRegistration
    static void _set_SubsystemRegistration(UnityEngine::RuntimeInitializeLoadType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.RuntimeInitializeLoadType
  #pragma pack(pop)
  static check_size<sizeof(RuntimeInitializeLoadType), 0 + sizeof(int)> __UnityEngine_RuntimeInitializeLoadTypeSizeCheck;
  static_assert(sizeof(RuntimeInitializeLoadType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RuntimeInitializeLoadType, "UnityEngine", "RuntimeInitializeLoadType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
