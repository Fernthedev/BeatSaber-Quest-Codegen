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
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.HebrewNumberParsingState
  // [TokenAttribute] Offset: FFFFFFFF
  struct HebrewNumberParsingState/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: HebrewNumberParsingState
    constexpr HebrewNumberParsingState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Globalization.HebrewNumberParsingState InvalidHebrewNumber
    static constexpr const int InvalidHebrewNumber = 0;
    // Get static field: static public System.Globalization.HebrewNumberParsingState InvalidHebrewNumber
    static System::Globalization::HebrewNumberParsingState _get_InvalidHebrewNumber();
    // Set static field: static public System.Globalization.HebrewNumberParsingState InvalidHebrewNumber
    static void _set_InvalidHebrewNumber(System::Globalization::HebrewNumberParsingState value);
    // static field const value: static public System.Globalization.HebrewNumberParsingState NotHebrewDigit
    static constexpr const int NotHebrewDigit = 1;
    // Get static field: static public System.Globalization.HebrewNumberParsingState NotHebrewDigit
    static System::Globalization::HebrewNumberParsingState _get_NotHebrewDigit();
    // Set static field: static public System.Globalization.HebrewNumberParsingState NotHebrewDigit
    static void _set_NotHebrewDigit(System::Globalization::HebrewNumberParsingState value);
    // static field const value: static public System.Globalization.HebrewNumberParsingState FoundEndOfHebrewNumber
    static constexpr const int FoundEndOfHebrewNumber = 2;
    // Get static field: static public System.Globalization.HebrewNumberParsingState FoundEndOfHebrewNumber
    static System::Globalization::HebrewNumberParsingState _get_FoundEndOfHebrewNumber();
    // Set static field: static public System.Globalization.HebrewNumberParsingState FoundEndOfHebrewNumber
    static void _set_FoundEndOfHebrewNumber(System::Globalization::HebrewNumberParsingState value);
    // static field const value: static public System.Globalization.HebrewNumberParsingState ContinueParsing
    static constexpr const int ContinueParsing = 3;
    // Get static field: static public System.Globalization.HebrewNumberParsingState ContinueParsing
    static System::Globalization::HebrewNumberParsingState _get_ContinueParsing();
    // Set static field: static public System.Globalization.HebrewNumberParsingState ContinueParsing
    static void _set_ContinueParsing(System::Globalization::HebrewNumberParsingState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Globalization.HebrewNumberParsingState
  #pragma pack(pop)
  static check_size<sizeof(HebrewNumberParsingState), 0 + sizeof(int)> __System_Globalization_HebrewNumberParsingStateSizeCheck;
  static_assert(sizeof(HebrewNumberParsingState) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::HebrewNumberParsingState, "System.Globalization", "HebrewNumberParsingState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
