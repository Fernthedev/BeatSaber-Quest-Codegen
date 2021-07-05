// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Events.UnityEventCallState
  struct UnityEventCallState/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: UnityEventCallState
    constexpr UnityEventCallState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Events.UnityEventCallState Off
    static constexpr const int Off = 0;
    // Get static field: static public UnityEngine.Events.UnityEventCallState Off
    static UnityEngine::Events::UnityEventCallState _get_Off();
    // Set static field: static public UnityEngine.Events.UnityEventCallState Off
    static void _set_Off(UnityEngine::Events::UnityEventCallState value);
    // static field const value: static public UnityEngine.Events.UnityEventCallState EditorAndRuntime
    static constexpr const int EditorAndRuntime = 1;
    // Get static field: static public UnityEngine.Events.UnityEventCallState EditorAndRuntime
    static UnityEngine::Events::UnityEventCallState _get_EditorAndRuntime();
    // Set static field: static public UnityEngine.Events.UnityEventCallState EditorAndRuntime
    static void _set_EditorAndRuntime(UnityEngine::Events::UnityEventCallState value);
    // static field const value: static public UnityEngine.Events.UnityEventCallState RuntimeOnly
    static constexpr const int RuntimeOnly = 2;
    // Get static field: static public UnityEngine.Events.UnityEventCallState RuntimeOnly
    static UnityEngine::Events::UnityEventCallState _get_RuntimeOnly();
    // Set static field: static public UnityEngine.Events.UnityEventCallState RuntimeOnly
    static void _set_RuntimeOnly(UnityEngine::Events::UnityEventCallState value);
  }; // UnityEngine.Events.UnityEventCallState
  #pragma pack(pop)
  static check_size<sizeof(UnityEventCallState), 0 + sizeof(int)> __UnityEngine_Events_UnityEventCallStateSizeCheck;
  static_assert(sizeof(UnityEventCallState) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::UnityEventCallState, "UnityEngine.Events", "UnityEventCallState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
