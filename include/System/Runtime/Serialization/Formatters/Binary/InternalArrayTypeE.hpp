// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE
  struct InternalArrayTypeE/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: InternalArrayTypeE
    constexpr InternalArrayTypeE(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Empty
    static constexpr const int Empty = 0;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Empty
    static System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE _get_Empty();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Empty
    static void _set_Empty(System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Single
    static constexpr const int Single = 1;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Single
    static System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE _get_Single();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Single
    static void _set_Single(System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Jagged
    static constexpr const int Jagged = 2;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Jagged
    static System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE _get_Jagged();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Jagged
    static void _set_Jagged(System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Rectangular
    static constexpr const int Rectangular = 3;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Rectangular
    static System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE _get_Rectangular();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Rectangular
    static void _set_Rectangular(System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Base64
    static constexpr const int Base64 = 4;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Base64
    static System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE _get_Base64();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE Base64
    static void _set_Base64(System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE value);
  }; // System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE
  #pragma pack(pop)
  static check_size<sizeof(InternalArrayTypeE), 0 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_InternalArrayTypeESizeCheck;
  static_assert(sizeof(InternalArrayTypeE) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalArrayTypeE");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
