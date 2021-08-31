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
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.PlayState
  // [TokenAttribute] Offset: FFFFFFFF
  struct PlayState/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PlayState
    constexpr PlayState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Playables.PlayState Paused
    static constexpr const int Paused = 0;
    // Get static field: static public UnityEngine.Playables.PlayState Paused
    static UnityEngine::Playables::PlayState _get_Paused();
    // Set static field: static public UnityEngine.Playables.PlayState Paused
    static void _set_Paused(UnityEngine::Playables::PlayState value);
    // static field const value: static public UnityEngine.Playables.PlayState Playing
    static constexpr const int Playing = 1;
    // Get static field: static public UnityEngine.Playables.PlayState Playing
    static UnityEngine::Playables::PlayState _get_Playing();
    // Set static field: static public UnityEngine.Playables.PlayState Playing
    static void _set_Playing(UnityEngine::Playables::PlayState value);
    // [ObsoleteAttribute] Offset: 0xDB44EC
    // static field const value: static public UnityEngine.Playables.PlayState Delayed
    static constexpr const int Delayed = 2;
    // Get static field: static public UnityEngine.Playables.PlayState Delayed
    static UnityEngine::Playables::PlayState _get_Delayed();
    // Set static field: static public UnityEngine.Playables.PlayState Delayed
    static void _set_Delayed(UnityEngine::Playables::PlayState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Playables.PlayState
  #pragma pack(pop)
  static check_size<sizeof(PlayState), 0 + sizeof(int)> __UnityEngine_Playables_PlayStateSizeCheck;
  static_assert(sizeof(PlayState) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayState, "UnityEngine.Playables", "PlayState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
