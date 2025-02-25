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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.MatchmakingCriterionImportance
  // [TokenAttribute] Offset: FFFFFFFF
  struct MatchmakingCriterionImportance/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MatchmakingCriterionImportance
    constexpr MatchmakingCriterionImportance(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xE21A40
    // static field const value: static public Oculus.Platform.MatchmakingCriterionImportance Required
    static constexpr const int Required = 0;
    // Get static field: static public Oculus.Platform.MatchmakingCriterionImportance Required
    static Oculus::Platform::MatchmakingCriterionImportance _get_Required();
    // Set static field: static public Oculus.Platform.MatchmakingCriterionImportance Required
    static void _set_Required(Oculus::Platform::MatchmakingCriterionImportance value);
    // [DescriptionAttribute] Offset: 0xE21A78
    // static field const value: static public Oculus.Platform.MatchmakingCriterionImportance High
    static constexpr const int High = 1;
    // Get static field: static public Oculus.Platform.MatchmakingCriterionImportance High
    static Oculus::Platform::MatchmakingCriterionImportance _get_High();
    // Set static field: static public Oculus.Platform.MatchmakingCriterionImportance High
    static void _set_High(Oculus::Platform::MatchmakingCriterionImportance value);
    // [DescriptionAttribute] Offset: 0xE21AB0
    // static field const value: static public Oculus.Platform.MatchmakingCriterionImportance Medium
    static constexpr const int Medium = 2;
    // Get static field: static public Oculus.Platform.MatchmakingCriterionImportance Medium
    static Oculus::Platform::MatchmakingCriterionImportance _get_Medium();
    // Set static field: static public Oculus.Platform.MatchmakingCriterionImportance Medium
    static void _set_Medium(Oculus::Platform::MatchmakingCriterionImportance value);
    // [DescriptionAttribute] Offset: 0xE21AE8
    // static field const value: static public Oculus.Platform.MatchmakingCriterionImportance Low
    static constexpr const int Low = 3;
    // Get static field: static public Oculus.Platform.MatchmakingCriterionImportance Low
    static Oculus::Platform::MatchmakingCriterionImportance _get_Low();
    // Set static field: static public Oculus.Platform.MatchmakingCriterionImportance Low
    static void _set_Low(Oculus::Platform::MatchmakingCriterionImportance value);
    // [DescriptionAttribute] Offset: 0xE21B20
    // static field const value: static public Oculus.Platform.MatchmakingCriterionImportance Unknown
    static constexpr const int Unknown = 4;
    // Get static field: static public Oculus.Platform.MatchmakingCriterionImportance Unknown
    static Oculus::Platform::MatchmakingCriterionImportance _get_Unknown();
    // Set static field: static public Oculus.Platform.MatchmakingCriterionImportance Unknown
    static void _set_Unknown(Oculus::Platform::MatchmakingCriterionImportance value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Oculus.Platform.MatchmakingCriterionImportance
  #pragma pack(pop)
  static check_size<sizeof(MatchmakingCriterionImportance), 0 + sizeof(int)> __Oculus_Platform_MatchmakingCriterionImportanceSizeCheck;
  static_assert(sizeof(MatchmakingCriterionImportance) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MatchmakingCriterionImportance, "Oculus.Platform", "MatchmakingCriterionImportance");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
