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
  // Autogenerated type: System.Reflection.FieldAttributes
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA0DC4
  struct FieldAttributes/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FieldAttributes
    constexpr FieldAttributes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Reflection.FieldAttributes FieldAccessMask
    static constexpr const int FieldAccessMask = 7;
    // Get static field: static public System.Reflection.FieldAttributes FieldAccessMask
    static System::Reflection::FieldAttributes _get_FieldAccessMask();
    // Set static field: static public System.Reflection.FieldAttributes FieldAccessMask
    static void _set_FieldAccessMask(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes PrivateScope
    static constexpr const int PrivateScope = 0;
    // Get static field: static public System.Reflection.FieldAttributes PrivateScope
    static System::Reflection::FieldAttributes _get_PrivateScope();
    // Set static field: static public System.Reflection.FieldAttributes PrivateScope
    static void _set_PrivateScope(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes Private
    static constexpr const int Private = 1;
    // Get static field: static public System.Reflection.FieldAttributes Private
    static System::Reflection::FieldAttributes _get_Private();
    // Set static field: static public System.Reflection.FieldAttributes Private
    static void _set_Private(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes FamANDAssem
    static constexpr const int FamANDAssem = 2;
    // Get static field: static public System.Reflection.FieldAttributes FamANDAssem
    static System::Reflection::FieldAttributes _get_FamANDAssem();
    // Set static field: static public System.Reflection.FieldAttributes FamANDAssem
    static void _set_FamANDAssem(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes Assembly
    static constexpr const int Assembly = 3;
    // Get static field: static public System.Reflection.FieldAttributes Assembly
    static System::Reflection::FieldAttributes _get_Assembly();
    // Set static field: static public System.Reflection.FieldAttributes Assembly
    static void _set_Assembly(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes Family
    static constexpr const int Family = 4;
    // Get static field: static public System.Reflection.FieldAttributes Family
    static System::Reflection::FieldAttributes _get_Family();
    // Set static field: static public System.Reflection.FieldAttributes Family
    static void _set_Family(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes FamORAssem
    static constexpr const int FamORAssem = 5;
    // Get static field: static public System.Reflection.FieldAttributes FamORAssem
    static System::Reflection::FieldAttributes _get_FamORAssem();
    // Set static field: static public System.Reflection.FieldAttributes FamORAssem
    static void _set_FamORAssem(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes Public
    static constexpr const int Public = 6;
    // Get static field: static public System.Reflection.FieldAttributes Public
    static System::Reflection::FieldAttributes _get_Public();
    // Set static field: static public System.Reflection.FieldAttributes Public
    static void _set_Public(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes Static
    static constexpr const int Static = 16;
    // Get static field: static public System.Reflection.FieldAttributes Static
    static System::Reflection::FieldAttributes _get_Static();
    // Set static field: static public System.Reflection.FieldAttributes Static
    static void _set_Static(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes InitOnly
    static constexpr const int InitOnly = 32;
    // Get static field: static public System.Reflection.FieldAttributes InitOnly
    static System::Reflection::FieldAttributes _get_InitOnly();
    // Set static field: static public System.Reflection.FieldAttributes InitOnly
    static void _set_InitOnly(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes Literal
    static constexpr const int Literal = 64;
    // Get static field: static public System.Reflection.FieldAttributes Literal
    static System::Reflection::FieldAttributes _get_Literal();
    // Set static field: static public System.Reflection.FieldAttributes Literal
    static void _set_Literal(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes NotSerialized
    static constexpr const int NotSerialized = 128;
    // Get static field: static public System.Reflection.FieldAttributes NotSerialized
    static System::Reflection::FieldAttributes _get_NotSerialized();
    // Set static field: static public System.Reflection.FieldAttributes NotSerialized
    static void _set_NotSerialized(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes SpecialName
    static constexpr const int SpecialName = 512;
    // Get static field: static public System.Reflection.FieldAttributes SpecialName
    static System::Reflection::FieldAttributes _get_SpecialName();
    // Set static field: static public System.Reflection.FieldAttributes SpecialName
    static void _set_SpecialName(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes PinvokeImpl
    static constexpr const int PinvokeImpl = 8192;
    // Get static field: static public System.Reflection.FieldAttributes PinvokeImpl
    static System::Reflection::FieldAttributes _get_PinvokeImpl();
    // Set static field: static public System.Reflection.FieldAttributes PinvokeImpl
    static void _set_PinvokeImpl(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes ReservedMask
    static constexpr const int ReservedMask = 38144;
    // Get static field: static public System.Reflection.FieldAttributes ReservedMask
    static System::Reflection::FieldAttributes _get_ReservedMask();
    // Set static field: static public System.Reflection.FieldAttributes ReservedMask
    static void _set_ReservedMask(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes RTSpecialName
    static constexpr const int RTSpecialName = 1024;
    // Get static field: static public System.Reflection.FieldAttributes RTSpecialName
    static System::Reflection::FieldAttributes _get_RTSpecialName();
    // Set static field: static public System.Reflection.FieldAttributes RTSpecialName
    static void _set_RTSpecialName(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes HasFieldMarshal
    static constexpr const int HasFieldMarshal = 4096;
    // Get static field: static public System.Reflection.FieldAttributes HasFieldMarshal
    static System::Reflection::FieldAttributes _get_HasFieldMarshal();
    // Set static field: static public System.Reflection.FieldAttributes HasFieldMarshal
    static void _set_HasFieldMarshal(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes HasDefault
    static constexpr const int HasDefault = 32768;
    // Get static field: static public System.Reflection.FieldAttributes HasDefault
    static System::Reflection::FieldAttributes _get_HasDefault();
    // Set static field: static public System.Reflection.FieldAttributes HasDefault
    static void _set_HasDefault(System::Reflection::FieldAttributes value);
    // static field const value: static public System.Reflection.FieldAttributes HasFieldRVA
    static constexpr const int HasFieldRVA = 256;
    // Get static field: static public System.Reflection.FieldAttributes HasFieldRVA
    static System::Reflection::FieldAttributes _get_HasFieldRVA();
    // Set static field: static public System.Reflection.FieldAttributes HasFieldRVA
    static void _set_HasFieldRVA(System::Reflection::FieldAttributes value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Reflection.FieldAttributes
  #pragma pack(pop)
  static check_size<sizeof(FieldAttributes), 0 + sizeof(int)> __System_Reflection_FieldAttributesSizeCheck;
  static_assert(sizeof(FieldAttributes) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::FieldAttributes, "System.Reflection", "FieldAttributes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
