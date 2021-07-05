// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.PlayableTraversalMode
  struct PlayableTraversalMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PlayableTraversalMode
    constexpr PlayableTraversalMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Playables.PlayableTraversalMode Mix
    static constexpr const int Mix = 0;
    // Get static field: static public UnityEngine.Playables.PlayableTraversalMode Mix
    static UnityEngine::Playables::PlayableTraversalMode _get_Mix();
    // Set static field: static public UnityEngine.Playables.PlayableTraversalMode Mix
    static void _set_Mix(UnityEngine::Playables::PlayableTraversalMode value);
    // static field const value: static public UnityEngine.Playables.PlayableTraversalMode Passthrough
    static constexpr const int Passthrough = 1;
    // Get static field: static public UnityEngine.Playables.PlayableTraversalMode Passthrough
    static UnityEngine::Playables::PlayableTraversalMode _get_Passthrough();
    // Set static field: static public UnityEngine.Playables.PlayableTraversalMode Passthrough
    static void _set_Passthrough(UnityEngine::Playables::PlayableTraversalMode value);
  }; // UnityEngine.Playables.PlayableTraversalMode
  #pragma pack(pop)
  static check_size<sizeof(PlayableTraversalMode), 0 + sizeof(int)> __UnityEngine_Playables_PlayableTraversalModeSizeCheck;
  static_assert(sizeof(PlayableTraversalMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableTraversalMode, "UnityEngine.Playables", "PlayableTraversalMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
