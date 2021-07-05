// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.LogOutput
  // [FlagsAttribute] Offset: FFFFFFFF
  struct LogOutput/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LogOutput
    constexpr LogOutput(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.LogOutput None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.ProBuilder.LogOutput None
    static UnityEngine::ProBuilder::LogOutput _get_None();
    // Set static field: static public UnityEngine.ProBuilder.LogOutput None
    static void _set_None(UnityEngine::ProBuilder::LogOutput value);
    // static field const value: static public UnityEngine.ProBuilder.LogOutput Console
    static constexpr const int Console = 1;
    // Get static field: static public UnityEngine.ProBuilder.LogOutput Console
    static UnityEngine::ProBuilder::LogOutput _get_Console();
    // Set static field: static public UnityEngine.ProBuilder.LogOutput Console
    static void _set_Console(UnityEngine::ProBuilder::LogOutput value);
    // static field const value: static public UnityEngine.ProBuilder.LogOutput File
    static constexpr const int File = 2;
    // Get static field: static public UnityEngine.ProBuilder.LogOutput File
    static UnityEngine::ProBuilder::LogOutput _get_File();
    // Set static field: static public UnityEngine.ProBuilder.LogOutput File
    static void _set_File(UnityEngine::ProBuilder::LogOutput value);
  }; // UnityEngine.ProBuilder.LogOutput
  #pragma pack(pop)
  static check_size<sizeof(LogOutput), 0 + sizeof(int)> __UnityEngine_ProBuilder_LogOutputSizeCheck;
  static_assert(sizeof(LogOutput) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::LogOutput, "UnityEngine.ProBuilder", "LogOutput");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
