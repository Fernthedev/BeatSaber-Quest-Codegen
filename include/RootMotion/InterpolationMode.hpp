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
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.InterpolationMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct InterpolationMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: InterpolationMode
    constexpr InterpolationMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public RootMotion.InterpolationMode None
    static constexpr const int None = 0;
    // Get static field: static public RootMotion.InterpolationMode None
    static RootMotion::InterpolationMode _get_None();
    // Set static field: static public RootMotion.InterpolationMode None
    static void _set_None(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode InOutCubic
    static constexpr const int InOutCubic = 1;
    // Get static field: static public RootMotion.InterpolationMode InOutCubic
    static RootMotion::InterpolationMode _get_InOutCubic();
    // Set static field: static public RootMotion.InterpolationMode InOutCubic
    static void _set_InOutCubic(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode InOutQuintic
    static constexpr const int InOutQuintic = 2;
    // Get static field: static public RootMotion.InterpolationMode InOutQuintic
    static RootMotion::InterpolationMode _get_InOutQuintic();
    // Set static field: static public RootMotion.InterpolationMode InOutQuintic
    static void _set_InOutQuintic(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode InOutSine
    static constexpr const int InOutSine = 3;
    // Get static field: static public RootMotion.InterpolationMode InOutSine
    static RootMotion::InterpolationMode _get_InOutSine();
    // Set static field: static public RootMotion.InterpolationMode InOutSine
    static void _set_InOutSine(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode InQuintic
    static constexpr const int InQuintic = 4;
    // Get static field: static public RootMotion.InterpolationMode InQuintic
    static RootMotion::InterpolationMode _get_InQuintic();
    // Set static field: static public RootMotion.InterpolationMode InQuintic
    static void _set_InQuintic(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode InQuartic
    static constexpr const int InQuartic = 5;
    // Get static field: static public RootMotion.InterpolationMode InQuartic
    static RootMotion::InterpolationMode _get_InQuartic();
    // Set static field: static public RootMotion.InterpolationMode InQuartic
    static void _set_InQuartic(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode InCubic
    static constexpr const int InCubic = 6;
    // Get static field: static public RootMotion.InterpolationMode InCubic
    static RootMotion::InterpolationMode _get_InCubic();
    // Set static field: static public RootMotion.InterpolationMode InCubic
    static void _set_InCubic(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode InQuadratic
    static constexpr const int InQuadratic = 7;
    // Get static field: static public RootMotion.InterpolationMode InQuadratic
    static RootMotion::InterpolationMode _get_InQuadratic();
    // Set static field: static public RootMotion.InterpolationMode InQuadratic
    static void _set_InQuadratic(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode InElastic
    static constexpr const int InElastic = 8;
    // Get static field: static public RootMotion.InterpolationMode InElastic
    static RootMotion::InterpolationMode _get_InElastic();
    // Set static field: static public RootMotion.InterpolationMode InElastic
    static void _set_InElastic(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode InElasticSmall
    static constexpr const int InElasticSmall = 9;
    // Get static field: static public RootMotion.InterpolationMode InElasticSmall
    static RootMotion::InterpolationMode _get_InElasticSmall();
    // Set static field: static public RootMotion.InterpolationMode InElasticSmall
    static void _set_InElasticSmall(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode InElasticBig
    static constexpr const int InElasticBig = 10;
    // Get static field: static public RootMotion.InterpolationMode InElasticBig
    static RootMotion::InterpolationMode _get_InElasticBig();
    // Set static field: static public RootMotion.InterpolationMode InElasticBig
    static void _set_InElasticBig(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode InSine
    static constexpr const int InSine = 11;
    // Get static field: static public RootMotion.InterpolationMode InSine
    static RootMotion::InterpolationMode _get_InSine();
    // Set static field: static public RootMotion.InterpolationMode InSine
    static void _set_InSine(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode InBack
    static constexpr const int InBack = 12;
    // Get static field: static public RootMotion.InterpolationMode InBack
    static RootMotion::InterpolationMode _get_InBack();
    // Set static field: static public RootMotion.InterpolationMode InBack
    static void _set_InBack(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode OutQuintic
    static constexpr const int OutQuintic = 13;
    // Get static field: static public RootMotion.InterpolationMode OutQuintic
    static RootMotion::InterpolationMode _get_OutQuintic();
    // Set static field: static public RootMotion.InterpolationMode OutQuintic
    static void _set_OutQuintic(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode OutQuartic
    static constexpr const int OutQuartic = 14;
    // Get static field: static public RootMotion.InterpolationMode OutQuartic
    static RootMotion::InterpolationMode _get_OutQuartic();
    // Set static field: static public RootMotion.InterpolationMode OutQuartic
    static void _set_OutQuartic(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode OutCubic
    static constexpr const int OutCubic = 15;
    // Get static field: static public RootMotion.InterpolationMode OutCubic
    static RootMotion::InterpolationMode _get_OutCubic();
    // Set static field: static public RootMotion.InterpolationMode OutCubic
    static void _set_OutCubic(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode OutInCubic
    static constexpr const int OutInCubic = 16;
    // Get static field: static public RootMotion.InterpolationMode OutInCubic
    static RootMotion::InterpolationMode _get_OutInCubic();
    // Set static field: static public RootMotion.InterpolationMode OutInCubic
    static void _set_OutInCubic(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode OutInQuartic
    static constexpr const int OutInQuartic = 17;
    // Get static field: static public RootMotion.InterpolationMode OutInQuartic
    static RootMotion::InterpolationMode _get_OutInQuartic();
    // Set static field: static public RootMotion.InterpolationMode OutInQuartic
    static void _set_OutInQuartic(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode OutElastic
    static constexpr const int OutElastic = 18;
    // Get static field: static public RootMotion.InterpolationMode OutElastic
    static RootMotion::InterpolationMode _get_OutElastic();
    // Set static field: static public RootMotion.InterpolationMode OutElastic
    static void _set_OutElastic(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode OutElasticSmall
    static constexpr const int OutElasticSmall = 19;
    // Get static field: static public RootMotion.InterpolationMode OutElasticSmall
    static RootMotion::InterpolationMode _get_OutElasticSmall();
    // Set static field: static public RootMotion.InterpolationMode OutElasticSmall
    static void _set_OutElasticSmall(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode OutElasticBig
    static constexpr const int OutElasticBig = 20;
    // Get static field: static public RootMotion.InterpolationMode OutElasticBig
    static RootMotion::InterpolationMode _get_OutElasticBig();
    // Set static field: static public RootMotion.InterpolationMode OutElasticBig
    static void _set_OutElasticBig(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode OutSine
    static constexpr const int OutSine = 21;
    // Get static field: static public RootMotion.InterpolationMode OutSine
    static RootMotion::InterpolationMode _get_OutSine();
    // Set static field: static public RootMotion.InterpolationMode OutSine
    static void _set_OutSine(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode OutBack
    static constexpr const int OutBack = 22;
    // Get static field: static public RootMotion.InterpolationMode OutBack
    static RootMotion::InterpolationMode _get_OutBack();
    // Set static field: static public RootMotion.InterpolationMode OutBack
    static void _set_OutBack(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode OutBackCubic
    static constexpr const int OutBackCubic = 23;
    // Get static field: static public RootMotion.InterpolationMode OutBackCubic
    static RootMotion::InterpolationMode _get_OutBackCubic();
    // Set static field: static public RootMotion.InterpolationMode OutBackCubic
    static void _set_OutBackCubic(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode OutBackQuartic
    static constexpr const int OutBackQuartic = 24;
    // Get static field: static public RootMotion.InterpolationMode OutBackQuartic
    static RootMotion::InterpolationMode _get_OutBackQuartic();
    // Set static field: static public RootMotion.InterpolationMode OutBackQuartic
    static void _set_OutBackQuartic(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode BackInCubic
    static constexpr const int BackInCubic = 25;
    // Get static field: static public RootMotion.InterpolationMode BackInCubic
    static RootMotion::InterpolationMode _get_BackInCubic();
    // Set static field: static public RootMotion.InterpolationMode BackInCubic
    static void _set_BackInCubic(RootMotion::InterpolationMode value);
    // static field const value: static public RootMotion.InterpolationMode BackInQuartic
    static constexpr const int BackInQuartic = 26;
    // Get static field: static public RootMotion.InterpolationMode BackInQuartic
    static RootMotion::InterpolationMode _get_BackInQuartic();
    // Set static field: static public RootMotion.InterpolationMode BackInQuartic
    static void _set_BackInQuartic(RootMotion::InterpolationMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // RootMotion.InterpolationMode
  #pragma pack(pop)
  static check_size<sizeof(InterpolationMode), 0 + sizeof(int)> __RootMotion_InterpolationModeSizeCheck;
  static_assert(sizeof(InterpolationMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::InterpolationMode, "RootMotion", "InterpolationMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
