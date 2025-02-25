// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Globalization.Unicode.SimpleCollator
#include "Mono/Globalization/Unicode/SimpleCollator.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.ExtenderType
  // [TokenAttribute] Offset: FFFFFFFF
  struct SimpleCollator::ExtenderType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ExtenderType
    constexpr ExtenderType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.ExtenderType None
    static constexpr const int None = 0;
    // Get static field: static public Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.ExtenderType None
    static Mono::Globalization::Unicode::SimpleCollator::ExtenderType _get_None();
    // Set static field: static public Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.ExtenderType None
    static void _set_None(Mono::Globalization::Unicode::SimpleCollator::ExtenderType value);
    // static field const value: static public Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.ExtenderType Simple
    static constexpr const int Simple = 1;
    // Get static field: static public Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.ExtenderType Simple
    static Mono::Globalization::Unicode::SimpleCollator::ExtenderType _get_Simple();
    // Set static field: static public Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.ExtenderType Simple
    static void _set_Simple(Mono::Globalization::Unicode::SimpleCollator::ExtenderType value);
    // static field const value: static public Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.ExtenderType Voiced
    static constexpr const int Voiced = 2;
    // Get static field: static public Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.ExtenderType Voiced
    static Mono::Globalization::Unicode::SimpleCollator::ExtenderType _get_Voiced();
    // Set static field: static public Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.ExtenderType Voiced
    static void _set_Voiced(Mono::Globalization::Unicode::SimpleCollator::ExtenderType value);
    // static field const value: static public Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.ExtenderType Conditional
    static constexpr const int Conditional = 3;
    // Get static field: static public Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.ExtenderType Conditional
    static Mono::Globalization::Unicode::SimpleCollator::ExtenderType _get_Conditional();
    // Set static field: static public Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.ExtenderType Conditional
    static void _set_Conditional(Mono::Globalization::Unicode::SimpleCollator::ExtenderType value);
    // static field const value: static public Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.ExtenderType Buggy
    static constexpr const int Buggy = 4;
    // Get static field: static public Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.ExtenderType Buggy
    static Mono::Globalization::Unicode::SimpleCollator::ExtenderType _get_Buggy();
    // Set static field: static public Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.ExtenderType Buggy
    static void _set_Buggy(Mono::Globalization::Unicode::SimpleCollator::ExtenderType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Mono.Globalization.Unicode.SimpleCollator/Mono.Globalization.Unicode.ExtenderType
  #pragma pack(pop)
  static check_size<sizeof(SimpleCollator::ExtenderType), 0 + sizeof(int)> __Mono_Globalization_Unicode_SimpleCollator_ExtenderTypeSizeCheck;
  static_assert(sizeof(SimpleCollator::ExtenderType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::SimpleCollator::ExtenderType, "Mono.Globalization.Unicode", "SimpleCollator/ExtenderType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
