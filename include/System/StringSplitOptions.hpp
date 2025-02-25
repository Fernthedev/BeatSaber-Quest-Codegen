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
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.StringSplitOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9FF04
  // [FlagsAttribute] Offset: FFFFFFFF
  struct StringSplitOptions/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: StringSplitOptions
    constexpr StringSplitOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.StringSplitOptions None
    static constexpr const int None = 0;
    // Get static field: static public System.StringSplitOptions None
    static System::StringSplitOptions _get_None();
    // Set static field: static public System.StringSplitOptions None
    static void _set_None(System::StringSplitOptions value);
    // static field const value: static public System.StringSplitOptions RemoveEmptyEntries
    static constexpr const int RemoveEmptyEntries = 1;
    // Get static field: static public System.StringSplitOptions RemoveEmptyEntries
    static System::StringSplitOptions _get_RemoveEmptyEntries();
    // Set static field: static public System.StringSplitOptions RemoveEmptyEntries
    static void _set_RemoveEmptyEntries(System::StringSplitOptions value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.StringSplitOptions
  #pragma pack(pop)
  static check_size<sizeof(StringSplitOptions), 0 + sizeof(int)> __System_StringSplitOptionsSizeCheck;
  static_assert(sizeof(StringSplitOptions) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::StringSplitOptions, "System", "StringSplitOptions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
