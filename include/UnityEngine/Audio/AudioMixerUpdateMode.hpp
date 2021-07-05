// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Audio.AudioMixerUpdateMode
  struct AudioMixerUpdateMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AudioMixerUpdateMode
    constexpr AudioMixerUpdateMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Audio.AudioMixerUpdateMode Normal
    static constexpr const int Normal = 0;
    // Get static field: static public UnityEngine.Audio.AudioMixerUpdateMode Normal
    static UnityEngine::Audio::AudioMixerUpdateMode _get_Normal();
    // Set static field: static public UnityEngine.Audio.AudioMixerUpdateMode Normal
    static void _set_Normal(UnityEngine::Audio::AudioMixerUpdateMode value);
    // static field const value: static public UnityEngine.Audio.AudioMixerUpdateMode UnscaledTime
    static constexpr const int UnscaledTime = 1;
    // Get static field: static public UnityEngine.Audio.AudioMixerUpdateMode UnscaledTime
    static UnityEngine::Audio::AudioMixerUpdateMode _get_UnscaledTime();
    // Set static field: static public UnityEngine.Audio.AudioMixerUpdateMode UnscaledTime
    static void _set_UnscaledTime(UnityEngine::Audio::AudioMixerUpdateMode value);
  }; // UnityEngine.Audio.AudioMixerUpdateMode
  #pragma pack(pop)
  static check_size<sizeof(AudioMixerUpdateMode), 0 + sizeof(int)> __UnityEngine_Audio_AudioMixerUpdateModeSizeCheck;
  static_assert(sizeof(AudioMixerUpdateMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioMixerUpdateMode, "UnityEngine.Audio", "AudioMixerUpdateMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
