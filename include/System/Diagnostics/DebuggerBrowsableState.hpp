// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.DebuggerBrowsableState
  // [ComVisibleAttribute] Offset: D80C30
  struct DebuggerBrowsableState/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DebuggerBrowsableState
    constexpr DebuggerBrowsableState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Diagnostics.DebuggerBrowsableState Never
    static constexpr const int Never = 0;
    // Get static field: static public System.Diagnostics.DebuggerBrowsableState Never
    static System::Diagnostics::DebuggerBrowsableState _get_Never();
    // Set static field: static public System.Diagnostics.DebuggerBrowsableState Never
    static void _set_Never(System::Diagnostics::DebuggerBrowsableState value);
    // static field const value: static public System.Diagnostics.DebuggerBrowsableState Collapsed
    static constexpr const int Collapsed = 2;
    // Get static field: static public System.Diagnostics.DebuggerBrowsableState Collapsed
    static System::Diagnostics::DebuggerBrowsableState _get_Collapsed();
    // Set static field: static public System.Diagnostics.DebuggerBrowsableState Collapsed
    static void _set_Collapsed(System::Diagnostics::DebuggerBrowsableState value);
    // static field const value: static public System.Diagnostics.DebuggerBrowsableState RootHidden
    static constexpr const int RootHidden = 3;
    // Get static field: static public System.Diagnostics.DebuggerBrowsableState RootHidden
    static System::Diagnostics::DebuggerBrowsableState _get_RootHidden();
    // Set static field: static public System.Diagnostics.DebuggerBrowsableState RootHidden
    static void _set_RootHidden(System::Diagnostics::DebuggerBrowsableState value);
  }; // System.Diagnostics.DebuggerBrowsableState
  #pragma pack(pop)
  static check_size<sizeof(DebuggerBrowsableState), 0 + sizeof(int)> __System_Diagnostics_DebuggerBrowsableStateSizeCheck;
  static_assert(sizeof(DebuggerBrowsableState) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DebuggerBrowsableState, "System.Diagnostics", "DebuggerBrowsableState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
