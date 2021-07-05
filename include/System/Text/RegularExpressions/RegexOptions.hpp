// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexOptions
  // [FlagsAttribute] Offset: FFFFFFFF
  struct RegexOptions/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RegexOptions
    constexpr RegexOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Text.RegularExpressions.RegexOptions None
    static constexpr const int None = 0;
    // Get static field: static public System.Text.RegularExpressions.RegexOptions None
    static System::Text::RegularExpressions::RegexOptions _get_None();
    // Set static field: static public System.Text.RegularExpressions.RegexOptions None
    static void _set_None(System::Text::RegularExpressions::RegexOptions value);
    // static field const value: static public System.Text.RegularExpressions.RegexOptions IgnoreCase
    static constexpr const int IgnoreCase = 1;
    // Get static field: static public System.Text.RegularExpressions.RegexOptions IgnoreCase
    static System::Text::RegularExpressions::RegexOptions _get_IgnoreCase();
    // Set static field: static public System.Text.RegularExpressions.RegexOptions IgnoreCase
    static void _set_IgnoreCase(System::Text::RegularExpressions::RegexOptions value);
    // static field const value: static public System.Text.RegularExpressions.RegexOptions Multiline
    static constexpr const int Multiline = 2;
    // Get static field: static public System.Text.RegularExpressions.RegexOptions Multiline
    static System::Text::RegularExpressions::RegexOptions _get_Multiline();
    // Set static field: static public System.Text.RegularExpressions.RegexOptions Multiline
    static void _set_Multiline(System::Text::RegularExpressions::RegexOptions value);
    // static field const value: static public System.Text.RegularExpressions.RegexOptions ExplicitCapture
    static constexpr const int ExplicitCapture = 4;
    // Get static field: static public System.Text.RegularExpressions.RegexOptions ExplicitCapture
    static System::Text::RegularExpressions::RegexOptions _get_ExplicitCapture();
    // Set static field: static public System.Text.RegularExpressions.RegexOptions ExplicitCapture
    static void _set_ExplicitCapture(System::Text::RegularExpressions::RegexOptions value);
    // static field const value: static public System.Text.RegularExpressions.RegexOptions Compiled
    static constexpr const int Compiled = 8;
    // Get static field: static public System.Text.RegularExpressions.RegexOptions Compiled
    static System::Text::RegularExpressions::RegexOptions _get_Compiled();
    // Set static field: static public System.Text.RegularExpressions.RegexOptions Compiled
    static void _set_Compiled(System::Text::RegularExpressions::RegexOptions value);
    // static field const value: static public System.Text.RegularExpressions.RegexOptions Singleline
    static constexpr const int Singleline = 16;
    // Get static field: static public System.Text.RegularExpressions.RegexOptions Singleline
    static System::Text::RegularExpressions::RegexOptions _get_Singleline();
    // Set static field: static public System.Text.RegularExpressions.RegexOptions Singleline
    static void _set_Singleline(System::Text::RegularExpressions::RegexOptions value);
    // static field const value: static public System.Text.RegularExpressions.RegexOptions IgnorePatternWhitespace
    static constexpr const int IgnorePatternWhitespace = 32;
    // Get static field: static public System.Text.RegularExpressions.RegexOptions IgnorePatternWhitespace
    static System::Text::RegularExpressions::RegexOptions _get_IgnorePatternWhitespace();
    // Set static field: static public System.Text.RegularExpressions.RegexOptions IgnorePatternWhitespace
    static void _set_IgnorePatternWhitespace(System::Text::RegularExpressions::RegexOptions value);
    // static field const value: static public System.Text.RegularExpressions.RegexOptions RightToLeft
    static constexpr const int RightToLeft = 64;
    // Get static field: static public System.Text.RegularExpressions.RegexOptions RightToLeft
    static System::Text::RegularExpressions::RegexOptions _get_RightToLeft();
    // Set static field: static public System.Text.RegularExpressions.RegexOptions RightToLeft
    static void _set_RightToLeft(System::Text::RegularExpressions::RegexOptions value);
    // static field const value: static public System.Text.RegularExpressions.RegexOptions ECMAScript
    static constexpr const int ECMAScript = 256;
    // Get static field: static public System.Text.RegularExpressions.RegexOptions ECMAScript
    static System::Text::RegularExpressions::RegexOptions _get_ECMAScript();
    // Set static field: static public System.Text.RegularExpressions.RegexOptions ECMAScript
    static void _set_ECMAScript(System::Text::RegularExpressions::RegexOptions value);
    // static field const value: static public System.Text.RegularExpressions.RegexOptions CultureInvariant
    static constexpr const int CultureInvariant = 512;
    // Get static field: static public System.Text.RegularExpressions.RegexOptions CultureInvariant
    static System::Text::RegularExpressions::RegexOptions _get_CultureInvariant();
    // Set static field: static public System.Text.RegularExpressions.RegexOptions CultureInvariant
    static void _set_CultureInvariant(System::Text::RegularExpressions::RegexOptions value);
  }; // System.Text.RegularExpressions.RegexOptions
  #pragma pack(pop)
  static check_size<sizeof(RegexOptions), 0 + sizeof(int)> __System_Text_RegularExpressions_RegexOptionsSizeCheck;
  static_assert(sizeof(RegexOptions) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexOptions, "System.Text.RegularExpressions", "RegexOptions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
