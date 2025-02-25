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
  // Autogenerated type: System.AttributeTargets
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9F530
  // [FlagsAttribute] Offset: D9F530
  struct AttributeTargets/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AttributeTargets
    constexpr AttributeTargets(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.AttributeTargets Assembly
    static constexpr const int Assembly = 1;
    // Get static field: static public System.AttributeTargets Assembly
    static System::AttributeTargets _get_Assembly();
    // Set static field: static public System.AttributeTargets Assembly
    static void _set_Assembly(System::AttributeTargets value);
    // static field const value: static public System.AttributeTargets Module
    static constexpr const int Module = 2;
    // Get static field: static public System.AttributeTargets Module
    static System::AttributeTargets _get_Module();
    // Set static field: static public System.AttributeTargets Module
    static void _set_Module(System::AttributeTargets value);
    // static field const value: static public System.AttributeTargets Class
    static constexpr const int Class = 4;
    // Get static field: static public System.AttributeTargets Class
    static System::AttributeTargets _get_Class();
    // Set static field: static public System.AttributeTargets Class
    static void _set_Class(System::AttributeTargets value);
    // static field const value: static public System.AttributeTargets Struct
    static constexpr const int Struct = 8;
    // Get static field: static public System.AttributeTargets Struct
    static System::AttributeTargets _get_Struct();
    // Set static field: static public System.AttributeTargets Struct
    static void _set_Struct(System::AttributeTargets value);
    // static field const value: static public System.AttributeTargets Enum
    static constexpr const int Enum = 16;
    // Get static field: static public System.AttributeTargets Enum
    static System::AttributeTargets _get_Enum();
    // Set static field: static public System.AttributeTargets Enum
    static void _set_Enum(System::AttributeTargets value);
    // static field const value: static public System.AttributeTargets Constructor
    static constexpr const int Constructor = 32;
    // Get static field: static public System.AttributeTargets Constructor
    static System::AttributeTargets _get_Constructor();
    // Set static field: static public System.AttributeTargets Constructor
    static void _set_Constructor(System::AttributeTargets value);
    // static field const value: static public System.AttributeTargets Method
    static constexpr const int Method = 64;
    // Get static field: static public System.AttributeTargets Method
    static System::AttributeTargets _get_Method();
    // Set static field: static public System.AttributeTargets Method
    static void _set_Method(System::AttributeTargets value);
    // static field const value: static public System.AttributeTargets Property
    static constexpr const int Property = 128;
    // Get static field: static public System.AttributeTargets Property
    static System::AttributeTargets _get_Property();
    // Set static field: static public System.AttributeTargets Property
    static void _set_Property(System::AttributeTargets value);
    // static field const value: static public System.AttributeTargets Field
    static constexpr const int Field = 256;
    // Get static field: static public System.AttributeTargets Field
    static System::AttributeTargets _get_Field();
    // Set static field: static public System.AttributeTargets Field
    static void _set_Field(System::AttributeTargets value);
    // static field const value: static public System.AttributeTargets Event
    static constexpr const int Event = 512;
    // Get static field: static public System.AttributeTargets Event
    static System::AttributeTargets _get_Event();
    // Set static field: static public System.AttributeTargets Event
    static void _set_Event(System::AttributeTargets value);
    // static field const value: static public System.AttributeTargets Interface
    static constexpr const int Interface = 1024;
    // Get static field: static public System.AttributeTargets Interface
    static System::AttributeTargets _get_Interface();
    // Set static field: static public System.AttributeTargets Interface
    static void _set_Interface(System::AttributeTargets value);
    // static field const value: static public System.AttributeTargets Parameter
    static constexpr const int Parameter = 2048;
    // Get static field: static public System.AttributeTargets Parameter
    static System::AttributeTargets _get_Parameter();
    // Set static field: static public System.AttributeTargets Parameter
    static void _set_Parameter(System::AttributeTargets value);
    // static field const value: static public System.AttributeTargets Delegate
    static constexpr const int Delegate = 4096;
    // Get static field: static public System.AttributeTargets Delegate
    static System::AttributeTargets _get_Delegate();
    // Set static field: static public System.AttributeTargets Delegate
    static void _set_Delegate(System::AttributeTargets value);
    // static field const value: static public System.AttributeTargets ReturnValue
    static constexpr const int ReturnValue = 8192;
    // Get static field: static public System.AttributeTargets ReturnValue
    static System::AttributeTargets _get_ReturnValue();
    // Set static field: static public System.AttributeTargets ReturnValue
    static void _set_ReturnValue(System::AttributeTargets value);
    // static field const value: static public System.AttributeTargets GenericParameter
    static constexpr const int GenericParameter = 16384;
    // Get static field: static public System.AttributeTargets GenericParameter
    static System::AttributeTargets _get_GenericParameter();
    // Set static field: static public System.AttributeTargets GenericParameter
    static void _set_GenericParameter(System::AttributeTargets value);
    // static field const value: static public System.AttributeTargets All
    static constexpr const int All = 32767;
    // Get static field: static public System.AttributeTargets All
    static System::AttributeTargets _get_All();
    // Set static field: static public System.AttributeTargets All
    static void _set_All(System::AttributeTargets value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.AttributeTargets
  #pragma pack(pop)
  static check_size<sizeof(AttributeTargets), 0 + sizeof(int)> __System_AttributeTargetsSizeCheck;
  static_assert(sizeof(AttributeTargets) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::AttributeTargets, "System", "AttributeTargets");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
