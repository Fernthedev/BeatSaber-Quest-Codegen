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
// Type namespace: System.Runtime.Serialization.Formatters
namespace System::Runtime::Serialization::Formatters {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.FormatterTypeStyle
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9D208
  struct FormatterTypeStyle/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FormatterTypeStyle
    constexpr FormatterTypeStyle(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Serialization.Formatters.FormatterTypeStyle TypesWhenNeeded
    static constexpr const int TypesWhenNeeded = 0;
    // Get static field: static public System.Runtime.Serialization.Formatters.FormatterTypeStyle TypesWhenNeeded
    static System::Runtime::Serialization::Formatters::FormatterTypeStyle _get_TypesWhenNeeded();
    // Set static field: static public System.Runtime.Serialization.Formatters.FormatterTypeStyle TypesWhenNeeded
    static void _set_TypesWhenNeeded(System::Runtime::Serialization::Formatters::FormatterTypeStyle value);
    // static field const value: static public System.Runtime.Serialization.Formatters.FormatterTypeStyle TypesAlways
    static constexpr const int TypesAlways = 1;
    // Get static field: static public System.Runtime.Serialization.Formatters.FormatterTypeStyle TypesAlways
    static System::Runtime::Serialization::Formatters::FormatterTypeStyle _get_TypesAlways();
    // Set static field: static public System.Runtime.Serialization.Formatters.FormatterTypeStyle TypesAlways
    static void _set_TypesAlways(System::Runtime::Serialization::Formatters::FormatterTypeStyle value);
    // static field const value: static public System.Runtime.Serialization.Formatters.FormatterTypeStyle XsdString
    static constexpr const int XsdString = 2;
    // Get static field: static public System.Runtime.Serialization.Formatters.FormatterTypeStyle XsdString
    static System::Runtime::Serialization::Formatters::FormatterTypeStyle _get_XsdString();
    // Set static field: static public System.Runtime.Serialization.Formatters.FormatterTypeStyle XsdString
    static void _set_XsdString(System::Runtime::Serialization::Formatters::FormatterTypeStyle value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // System.Runtime.Serialization.Formatters.FormatterTypeStyle
  #pragma pack(pop)
  static check_size<sizeof(FormatterTypeStyle), 0 + sizeof(int)> __System_Runtime_Serialization_Formatters_FormatterTypeStyleSizeCheck;
  static_assert(sizeof(FormatterTypeStyle) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::FormatterTypeStyle, "System.Runtime.Serialization.Formatters", "FormatterTypeStyle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
