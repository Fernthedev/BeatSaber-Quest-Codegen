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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.CharSet
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA4448
  struct CharSet/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CharSet
    constexpr CharSet(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.InteropServices.CharSet None
    static constexpr const int None = 1;
    // Get static field: static public System.Runtime.InteropServices.CharSet None
    static System::Runtime::InteropServices::CharSet _get_None();
    // Set static field: static public System.Runtime.InteropServices.CharSet None
    static void _set_None(System::Runtime::InteropServices::CharSet value);
    // static field const value: static public System.Runtime.InteropServices.CharSet Ansi
    static constexpr const int Ansi = 2;
    // Get static field: static public System.Runtime.InteropServices.CharSet Ansi
    static System::Runtime::InteropServices::CharSet _get_Ansi();
    // Set static field: static public System.Runtime.InteropServices.CharSet Ansi
    static void _set_Ansi(System::Runtime::InteropServices::CharSet value);
    // static field const value: static public System.Runtime.InteropServices.CharSet Unicode
    static constexpr const int Unicode = 3;
    // Get static field: static public System.Runtime.InteropServices.CharSet Unicode
    static System::Runtime::InteropServices::CharSet _get_Unicode();
    // Set static field: static public System.Runtime.InteropServices.CharSet Unicode
    static void _set_Unicode(System::Runtime::InteropServices::CharSet value);
    // static field const value: static public System.Runtime.InteropServices.CharSet Auto
    static constexpr const int Auto = 4;
    // Get static field: static public System.Runtime.InteropServices.CharSet Auto
    static System::Runtime::InteropServices::CharSet _get_Auto();
    // Set static field: static public System.Runtime.InteropServices.CharSet Auto
    static void _set_Auto(System::Runtime::InteropServices::CharSet value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Runtime.InteropServices.CharSet
  #pragma pack(pop)
  static check_size<sizeof(CharSet), 0 + sizeof(int)> __System_Runtime_InteropServices_CharSetSizeCheck;
  static_assert(sizeof(CharSet) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::CharSet, "System.Runtime.InteropServices", "CharSet");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
