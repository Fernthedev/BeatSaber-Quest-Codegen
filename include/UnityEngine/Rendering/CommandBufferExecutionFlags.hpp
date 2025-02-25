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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.CommandBufferExecutionFlags
  // [TokenAttribute] Offset: FFFFFFFF
  struct CommandBufferExecutionFlags/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CommandBufferExecutionFlags
    constexpr CommandBufferExecutionFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.CommandBufferExecutionFlags None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Rendering.CommandBufferExecutionFlags None
    static UnityEngine::Rendering::CommandBufferExecutionFlags _get_None();
    // Set static field: static public UnityEngine.Rendering.CommandBufferExecutionFlags None
    static void _set_None(UnityEngine::Rendering::CommandBufferExecutionFlags value);
    // static field const value: static public UnityEngine.Rendering.CommandBufferExecutionFlags AsyncCompute
    static constexpr const int AsyncCompute = 2;
    // Get static field: static public UnityEngine.Rendering.CommandBufferExecutionFlags AsyncCompute
    static UnityEngine::Rendering::CommandBufferExecutionFlags _get_AsyncCompute();
    // Set static field: static public UnityEngine.Rendering.CommandBufferExecutionFlags AsyncCompute
    static void _set_AsyncCompute(UnityEngine::Rendering::CommandBufferExecutionFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Rendering.CommandBufferExecutionFlags
  #pragma pack(pop)
  static check_size<sizeof(CommandBufferExecutionFlags), 0 + sizeof(int)> __UnityEngine_Rendering_CommandBufferExecutionFlagsSizeCheck;
  static_assert(sizeof(CommandBufferExecutionFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::CommandBufferExecutionFlags, "UnityEngine.Rendering", "CommandBufferExecutionFlags");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
