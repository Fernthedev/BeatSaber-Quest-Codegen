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
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SignalDefaultSyncModes
  // [TokenAttribute] Offset: FFFFFFFF
  struct SignalDefaultSyncModes/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SignalDefaultSyncModes
    constexpr SignalDefaultSyncModes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Zenject.SignalDefaultSyncModes Synchronous
    static constexpr const int Synchronous = 0;
    // Get static field: static public Zenject.SignalDefaultSyncModes Synchronous
    static Zenject::SignalDefaultSyncModes _get_Synchronous();
    // Set static field: static public Zenject.SignalDefaultSyncModes Synchronous
    static void _set_Synchronous(Zenject::SignalDefaultSyncModes value);
    // static field const value: static public Zenject.SignalDefaultSyncModes Asynchronous
    static constexpr const int Asynchronous = 1;
    // Get static field: static public Zenject.SignalDefaultSyncModes Asynchronous
    static Zenject::SignalDefaultSyncModes _get_Asynchronous();
    // Set static field: static public Zenject.SignalDefaultSyncModes Asynchronous
    static void _set_Asynchronous(Zenject::SignalDefaultSyncModes value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Zenject.SignalDefaultSyncModes
  #pragma pack(pop)
  static check_size<sizeof(SignalDefaultSyncModes), 0 + sizeof(int)> __Zenject_SignalDefaultSyncModesSizeCheck;
  static_assert(sizeof(SignalDefaultSyncModes) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SignalDefaultSyncModes, "Zenject", "SignalDefaultSyncModes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
