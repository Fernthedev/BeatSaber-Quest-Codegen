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
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum
  // [TokenAttribute] Offset: FFFFFFFF
  struct ValueFixupEnum/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ValueFixupEnum
    constexpr ValueFixupEnum(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Empty
    static constexpr const int Empty = 0;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Empty
    static System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum _get_Empty();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Empty
    static void _set_Empty(System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Array
    static constexpr const int Array = 1;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Array
    static System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum _get_Array();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Array
    static void _set_Array(System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Header
    static constexpr const int Header = 2;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Header
    static System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum _get_Header();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Header
    static void _set_Header(System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Member
    static constexpr const int Member = 3;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Member
    static System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum _get_Member();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum Member
    static void _set_Member(System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum
  #pragma pack(pop)
  static check_size<sizeof(ValueFixupEnum), 0 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_ValueFixupEnumSizeCheck;
  static_assert(sizeof(ValueFixupEnum) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum, "System.Runtime.Serialization.Formatters.Binary", "ValueFixupEnum");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
