// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.EventAttributes
  // [ComVisibleAttribute] Offset: D7BB98
  // [FlagsAttribute] Offset: FFFFFFFF
  struct EventAttributes/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EventAttributes
    constexpr EventAttributes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Reflection.EventAttributes None
    static constexpr const int None = 0;
    // Get static field: static public System.Reflection.EventAttributes None
    static System::Reflection::EventAttributes _get_None();
    // Set static field: static public System.Reflection.EventAttributes None
    static void _set_None(System::Reflection::EventAttributes value);
    // static field const value: static public System.Reflection.EventAttributes SpecialName
    static constexpr const int SpecialName = 512;
    // Get static field: static public System.Reflection.EventAttributes SpecialName
    static System::Reflection::EventAttributes _get_SpecialName();
    // Set static field: static public System.Reflection.EventAttributes SpecialName
    static void _set_SpecialName(System::Reflection::EventAttributes value);
    // static field const value: static public System.Reflection.EventAttributes ReservedMask
    static constexpr const int ReservedMask = 1024;
    // Get static field: static public System.Reflection.EventAttributes ReservedMask
    static System::Reflection::EventAttributes _get_ReservedMask();
    // Set static field: static public System.Reflection.EventAttributes ReservedMask
    static void _set_ReservedMask(System::Reflection::EventAttributes value);
    // static field const value: static public System.Reflection.EventAttributes RTSpecialName
    static constexpr const int RTSpecialName = 1024;
    // Get static field: static public System.Reflection.EventAttributes RTSpecialName
    static System::Reflection::EventAttributes _get_RTSpecialName();
    // Set static field: static public System.Reflection.EventAttributes RTSpecialName
    static void _set_RTSpecialName(System::Reflection::EventAttributes value);
  }; // System.Reflection.EventAttributes
  #pragma pack(pop)
  static check_size<sizeof(EventAttributes), 0 + sizeof(int)> __System_Reflection_EventAttributesSizeCheck;
  static_assert(sizeof(EventAttributes) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::EventAttributes, "System.Reflection", "EventAttributes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
