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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.MemberTypes
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA0EE8
  struct MemberTypes/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MemberTypes
    constexpr MemberTypes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Reflection.MemberTypes Constructor
    static constexpr const int Constructor = 1;
    // Get static field: static public System.Reflection.MemberTypes Constructor
    static System::Reflection::MemberTypes _get_Constructor();
    // Set static field: static public System.Reflection.MemberTypes Constructor
    static void _set_Constructor(System::Reflection::MemberTypes value);
    // static field const value: static public System.Reflection.MemberTypes Event
    static constexpr const int Event = 2;
    // Get static field: static public System.Reflection.MemberTypes Event
    static System::Reflection::MemberTypes _get_Event();
    // Set static field: static public System.Reflection.MemberTypes Event
    static void _set_Event(System::Reflection::MemberTypes value);
    // static field const value: static public System.Reflection.MemberTypes Field
    static constexpr const int Field = 4;
    // Get static field: static public System.Reflection.MemberTypes Field
    static System::Reflection::MemberTypes _get_Field();
    // Set static field: static public System.Reflection.MemberTypes Field
    static void _set_Field(System::Reflection::MemberTypes value);
    // static field const value: static public System.Reflection.MemberTypes Method
    static constexpr const int Method = 8;
    // Get static field: static public System.Reflection.MemberTypes Method
    static System::Reflection::MemberTypes _get_Method();
    // Set static field: static public System.Reflection.MemberTypes Method
    static void _set_Method(System::Reflection::MemberTypes value);
    // static field const value: static public System.Reflection.MemberTypes Property
    static constexpr const int Property = 16;
    // Get static field: static public System.Reflection.MemberTypes Property
    static System::Reflection::MemberTypes _get_Property();
    // Set static field: static public System.Reflection.MemberTypes Property
    static void _set_Property(System::Reflection::MemberTypes value);
    // static field const value: static public System.Reflection.MemberTypes TypeInfo
    static constexpr const int TypeInfo = 32;
    // Get static field: static public System.Reflection.MemberTypes TypeInfo
    static System::Reflection::MemberTypes _get_TypeInfo();
    // Set static field: static public System.Reflection.MemberTypes TypeInfo
    static void _set_TypeInfo(System::Reflection::MemberTypes value);
    // static field const value: static public System.Reflection.MemberTypes Custom
    static constexpr const int Custom = 64;
    // Get static field: static public System.Reflection.MemberTypes Custom
    static System::Reflection::MemberTypes _get_Custom();
    // Set static field: static public System.Reflection.MemberTypes Custom
    static void _set_Custom(System::Reflection::MemberTypes value);
    // static field const value: static public System.Reflection.MemberTypes NestedType
    static constexpr const int NestedType = 128;
    // Get static field: static public System.Reflection.MemberTypes NestedType
    static System::Reflection::MemberTypes _get_NestedType();
    // Set static field: static public System.Reflection.MemberTypes NestedType
    static void _set_NestedType(System::Reflection::MemberTypes value);
    // static field const value: static public System.Reflection.MemberTypes All
    static constexpr const int All = 191;
    // Get static field: static public System.Reflection.MemberTypes All
    static System::Reflection::MemberTypes _get_All();
    // Set static field: static public System.Reflection.MemberTypes All
    static void _set_All(System::Reflection::MemberTypes value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Reflection.MemberTypes
  #pragma pack(pop)
  static check_size<sizeof(MemberTypes), 0 + sizeof(int)> __System_Reflection_MemberTypesSizeCheck;
  static_assert(sizeof(MemberTypes) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MemberTypes, "System.Reflection", "MemberTypes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
