// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Process
#include "System/Diagnostics/Process.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Process/System.Diagnostics.State
  // [TokenAttribute] Offset: FFFFFFFF
  struct Process::State/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: State
    constexpr State(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Diagnostics.Process/System.Diagnostics.State HaveId
    static constexpr const int HaveId = 1;
    // Get static field: static public System.Diagnostics.Process/System.Diagnostics.State HaveId
    static System::Diagnostics::Process::State _get_HaveId();
    // Set static field: static public System.Diagnostics.Process/System.Diagnostics.State HaveId
    static void _set_HaveId(System::Diagnostics::Process::State value);
    // static field const value: static public System.Diagnostics.Process/System.Diagnostics.State IsLocal
    static constexpr const int IsLocal = 2;
    // Get static field: static public System.Diagnostics.Process/System.Diagnostics.State IsLocal
    static System::Diagnostics::Process::State _get_IsLocal();
    // Set static field: static public System.Diagnostics.Process/System.Diagnostics.State IsLocal
    static void _set_IsLocal(System::Diagnostics::Process::State value);
    // static field const value: static public System.Diagnostics.Process/System.Diagnostics.State IsNt
    static constexpr const int IsNt = 4;
    // Get static field: static public System.Diagnostics.Process/System.Diagnostics.State IsNt
    static System::Diagnostics::Process::State _get_IsNt();
    // Set static field: static public System.Diagnostics.Process/System.Diagnostics.State IsNt
    static void _set_IsNt(System::Diagnostics::Process::State value);
    // static field const value: static public System.Diagnostics.Process/System.Diagnostics.State HaveProcessInfo
    static constexpr const int HaveProcessInfo = 8;
    // Get static field: static public System.Diagnostics.Process/System.Diagnostics.State HaveProcessInfo
    static System::Diagnostics::Process::State _get_HaveProcessInfo();
    // Set static field: static public System.Diagnostics.Process/System.Diagnostics.State HaveProcessInfo
    static void _set_HaveProcessInfo(System::Diagnostics::Process::State value);
    // static field const value: static public System.Diagnostics.Process/System.Diagnostics.State Exited
    static constexpr const int Exited = 16;
    // Get static field: static public System.Diagnostics.Process/System.Diagnostics.State Exited
    static System::Diagnostics::Process::State _get_Exited();
    // Set static field: static public System.Diagnostics.Process/System.Diagnostics.State Exited
    static void _set_Exited(System::Diagnostics::Process::State value);
    // static field const value: static public System.Diagnostics.Process/System.Diagnostics.State Associated
    static constexpr const int Associated = 32;
    // Get static field: static public System.Diagnostics.Process/System.Diagnostics.State Associated
    static System::Diagnostics::Process::State _get_Associated();
    // Set static field: static public System.Diagnostics.Process/System.Diagnostics.State Associated
    static void _set_Associated(System::Diagnostics::Process::State value);
    // static field const value: static public System.Diagnostics.Process/System.Diagnostics.State IsWin2k
    static constexpr const int IsWin2k = 64;
    // Get static field: static public System.Diagnostics.Process/System.Diagnostics.State IsWin2k
    static System::Diagnostics::Process::State _get_IsWin2k();
    // Set static field: static public System.Diagnostics.Process/System.Diagnostics.State IsWin2k
    static void _set_IsWin2k(System::Diagnostics::Process::State value);
    // static field const value: static public System.Diagnostics.Process/System.Diagnostics.State HaveNtProcessInfo
    static constexpr const int HaveNtProcessInfo = 12;
    // Get static field: static public System.Diagnostics.Process/System.Diagnostics.State HaveNtProcessInfo
    static System::Diagnostics::Process::State _get_HaveNtProcessInfo();
    // Set static field: static public System.Diagnostics.Process/System.Diagnostics.State HaveNtProcessInfo
    static void _set_HaveNtProcessInfo(System::Diagnostics::Process::State value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Diagnostics.Process/System.Diagnostics.State
  #pragma pack(pop)
  static check_size<sizeof(Process::State), 0 + sizeof(int)> __System_Diagnostics_Process_StateSizeCheck;
  static_assert(sizeof(Process::State) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Process::State, "System.Diagnostics", "Process/State");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
