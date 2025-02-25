// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.ExecutionContext
#include "System/Threading/ExecutionContext.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ExecutionContext/System.Threading.CaptureOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ExecutionContext::CaptureOptions/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CaptureOptions
    constexpr CaptureOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Threading.ExecutionContext/System.Threading.CaptureOptions None
    static constexpr const int None = 0;
    // Get static field: static public System.Threading.ExecutionContext/System.Threading.CaptureOptions None
    static System::Threading::ExecutionContext::CaptureOptions _get_None();
    // Set static field: static public System.Threading.ExecutionContext/System.Threading.CaptureOptions None
    static void _set_None(System::Threading::ExecutionContext::CaptureOptions value);
    // static field const value: static public System.Threading.ExecutionContext/System.Threading.CaptureOptions IgnoreSyncCtx
    static constexpr const int IgnoreSyncCtx = 1;
    // Get static field: static public System.Threading.ExecutionContext/System.Threading.CaptureOptions IgnoreSyncCtx
    static System::Threading::ExecutionContext::CaptureOptions _get_IgnoreSyncCtx();
    // Set static field: static public System.Threading.ExecutionContext/System.Threading.CaptureOptions IgnoreSyncCtx
    static void _set_IgnoreSyncCtx(System::Threading::ExecutionContext::CaptureOptions value);
    // static field const value: static public System.Threading.ExecutionContext/System.Threading.CaptureOptions OptimizeDefaultCase
    static constexpr const int OptimizeDefaultCase = 2;
    // Get static field: static public System.Threading.ExecutionContext/System.Threading.CaptureOptions OptimizeDefaultCase
    static System::Threading::ExecutionContext::CaptureOptions _get_OptimizeDefaultCase();
    // Set static field: static public System.Threading.ExecutionContext/System.Threading.CaptureOptions OptimizeDefaultCase
    static void _set_OptimizeDefaultCase(System::Threading::ExecutionContext::CaptureOptions value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Threading.ExecutionContext/System.Threading.CaptureOptions
  #pragma pack(pop)
  static check_size<sizeof(ExecutionContext::CaptureOptions), 0 + sizeof(int)> __System_Threading_ExecutionContext_CaptureOptionsSizeCheck;
  static_assert(sizeof(ExecutionContext::CaptureOptions) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ExecutionContext::CaptureOptions, "System.Threading", "ExecutionContext/CaptureOptions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
