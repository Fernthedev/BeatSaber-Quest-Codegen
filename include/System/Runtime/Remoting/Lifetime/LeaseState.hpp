// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Runtime.Remoting.Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Lifetime.LeaseState
  // [ComVisibleAttribute] Offset: D7E224
  struct LeaseState/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LeaseState
    constexpr LeaseState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Remoting.Lifetime.LeaseState Null
    static constexpr const int Null = 0;
    // Get static field: static public System.Runtime.Remoting.Lifetime.LeaseState Null
    static System::Runtime::Remoting::Lifetime::LeaseState _get_Null();
    // Set static field: static public System.Runtime.Remoting.Lifetime.LeaseState Null
    static void _set_Null(System::Runtime::Remoting::Lifetime::LeaseState value);
    // static field const value: static public System.Runtime.Remoting.Lifetime.LeaseState Initial
    static constexpr const int Initial = 1;
    // Get static field: static public System.Runtime.Remoting.Lifetime.LeaseState Initial
    static System::Runtime::Remoting::Lifetime::LeaseState _get_Initial();
    // Set static field: static public System.Runtime.Remoting.Lifetime.LeaseState Initial
    static void _set_Initial(System::Runtime::Remoting::Lifetime::LeaseState value);
    // static field const value: static public System.Runtime.Remoting.Lifetime.LeaseState Active
    static constexpr const int Active = 2;
    // Get static field: static public System.Runtime.Remoting.Lifetime.LeaseState Active
    static System::Runtime::Remoting::Lifetime::LeaseState _get_Active();
    // Set static field: static public System.Runtime.Remoting.Lifetime.LeaseState Active
    static void _set_Active(System::Runtime::Remoting::Lifetime::LeaseState value);
    // static field const value: static public System.Runtime.Remoting.Lifetime.LeaseState Renewing
    static constexpr const int Renewing = 3;
    // Get static field: static public System.Runtime.Remoting.Lifetime.LeaseState Renewing
    static System::Runtime::Remoting::Lifetime::LeaseState _get_Renewing();
    // Set static field: static public System.Runtime.Remoting.Lifetime.LeaseState Renewing
    static void _set_Renewing(System::Runtime::Remoting::Lifetime::LeaseState value);
    // static field const value: static public System.Runtime.Remoting.Lifetime.LeaseState Expired
    static constexpr const int Expired = 4;
    // Get static field: static public System.Runtime.Remoting.Lifetime.LeaseState Expired
    static System::Runtime::Remoting::Lifetime::LeaseState _get_Expired();
    // Set static field: static public System.Runtime.Remoting.Lifetime.LeaseState Expired
    static void _set_Expired(System::Runtime::Remoting::Lifetime::LeaseState value);
  }; // System.Runtime.Remoting.Lifetime.LeaseState
  #pragma pack(pop)
  static check_size<sizeof(LeaseState), 0 + sizeof(int)> __System_Runtime_Remoting_Lifetime_LeaseStateSizeCheck;
  static_assert(sizeof(LeaseState) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Lifetime::LeaseState, "System.Runtime.Remoting.Lifetime", "LeaseState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
