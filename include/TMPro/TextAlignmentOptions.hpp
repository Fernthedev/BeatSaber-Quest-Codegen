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
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TextAlignmentOptions
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextAlignmentOptions/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TextAlignmentOptions
    constexpr TextAlignmentOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.TextAlignmentOptions TopLeft
    static constexpr const int TopLeft = 257;
    // Get static field: static public TMPro.TextAlignmentOptions TopLeft
    static TMPro::TextAlignmentOptions _get_TopLeft();
    // Set static field: static public TMPro.TextAlignmentOptions TopLeft
    static void _set_TopLeft(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions Top
    static constexpr const int Top = 258;
    // Get static field: static public TMPro.TextAlignmentOptions Top
    static TMPro::TextAlignmentOptions _get_Top();
    // Set static field: static public TMPro.TextAlignmentOptions Top
    static void _set_Top(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions TopRight
    static constexpr const int TopRight = 260;
    // Get static field: static public TMPro.TextAlignmentOptions TopRight
    static TMPro::TextAlignmentOptions _get_TopRight();
    // Set static field: static public TMPro.TextAlignmentOptions TopRight
    static void _set_TopRight(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions TopJustified
    static constexpr const int TopJustified = 264;
    // Get static field: static public TMPro.TextAlignmentOptions TopJustified
    static TMPro::TextAlignmentOptions _get_TopJustified();
    // Set static field: static public TMPro.TextAlignmentOptions TopJustified
    static void _set_TopJustified(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions TopFlush
    static constexpr const int TopFlush = 272;
    // Get static field: static public TMPro.TextAlignmentOptions TopFlush
    static TMPro::TextAlignmentOptions _get_TopFlush();
    // Set static field: static public TMPro.TextAlignmentOptions TopFlush
    static void _set_TopFlush(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions TopGeoAligned
    static constexpr const int TopGeoAligned = 288;
    // Get static field: static public TMPro.TextAlignmentOptions TopGeoAligned
    static TMPro::TextAlignmentOptions _get_TopGeoAligned();
    // Set static field: static public TMPro.TextAlignmentOptions TopGeoAligned
    static void _set_TopGeoAligned(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions Left
    static constexpr const int Left = 513;
    // Get static field: static public TMPro.TextAlignmentOptions Left
    static TMPro::TextAlignmentOptions _get_Left();
    // Set static field: static public TMPro.TextAlignmentOptions Left
    static void _set_Left(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions Center
    static constexpr const int Center = 514;
    // Get static field: static public TMPro.TextAlignmentOptions Center
    static TMPro::TextAlignmentOptions _get_Center();
    // Set static field: static public TMPro.TextAlignmentOptions Center
    static void _set_Center(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions Right
    static constexpr const int Right = 516;
    // Get static field: static public TMPro.TextAlignmentOptions Right
    static TMPro::TextAlignmentOptions _get_Right();
    // Set static field: static public TMPro.TextAlignmentOptions Right
    static void _set_Right(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions Justified
    static constexpr const int Justified = 520;
    // Get static field: static public TMPro.TextAlignmentOptions Justified
    static TMPro::TextAlignmentOptions _get_Justified();
    // Set static field: static public TMPro.TextAlignmentOptions Justified
    static void _set_Justified(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions Flush
    static constexpr const int Flush = 528;
    // Get static field: static public TMPro.TextAlignmentOptions Flush
    static TMPro::TextAlignmentOptions _get_Flush();
    // Set static field: static public TMPro.TextAlignmentOptions Flush
    static void _set_Flush(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions CenterGeoAligned
    static constexpr const int CenterGeoAligned = 544;
    // Get static field: static public TMPro.TextAlignmentOptions CenterGeoAligned
    static TMPro::TextAlignmentOptions _get_CenterGeoAligned();
    // Set static field: static public TMPro.TextAlignmentOptions CenterGeoAligned
    static void _set_CenterGeoAligned(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions BottomLeft
    static constexpr const int BottomLeft = 1025;
    // Get static field: static public TMPro.TextAlignmentOptions BottomLeft
    static TMPro::TextAlignmentOptions _get_BottomLeft();
    // Set static field: static public TMPro.TextAlignmentOptions BottomLeft
    static void _set_BottomLeft(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions Bottom
    static constexpr const int Bottom = 1026;
    // Get static field: static public TMPro.TextAlignmentOptions Bottom
    static TMPro::TextAlignmentOptions _get_Bottom();
    // Set static field: static public TMPro.TextAlignmentOptions Bottom
    static void _set_Bottom(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions BottomRight
    static constexpr const int BottomRight = 1028;
    // Get static field: static public TMPro.TextAlignmentOptions BottomRight
    static TMPro::TextAlignmentOptions _get_BottomRight();
    // Set static field: static public TMPro.TextAlignmentOptions BottomRight
    static void _set_BottomRight(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions BottomJustified
    static constexpr const int BottomJustified = 1032;
    // Get static field: static public TMPro.TextAlignmentOptions BottomJustified
    static TMPro::TextAlignmentOptions _get_BottomJustified();
    // Set static field: static public TMPro.TextAlignmentOptions BottomJustified
    static void _set_BottomJustified(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions BottomFlush
    static constexpr const int BottomFlush = 1040;
    // Get static field: static public TMPro.TextAlignmentOptions BottomFlush
    static TMPro::TextAlignmentOptions _get_BottomFlush();
    // Set static field: static public TMPro.TextAlignmentOptions BottomFlush
    static void _set_BottomFlush(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions BottomGeoAligned
    static constexpr const int BottomGeoAligned = 1056;
    // Get static field: static public TMPro.TextAlignmentOptions BottomGeoAligned
    static TMPro::TextAlignmentOptions _get_BottomGeoAligned();
    // Set static field: static public TMPro.TextAlignmentOptions BottomGeoAligned
    static void _set_BottomGeoAligned(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions BaselineLeft
    static constexpr const int BaselineLeft = 2049;
    // Get static field: static public TMPro.TextAlignmentOptions BaselineLeft
    static TMPro::TextAlignmentOptions _get_BaselineLeft();
    // Set static field: static public TMPro.TextAlignmentOptions BaselineLeft
    static void _set_BaselineLeft(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions Baseline
    static constexpr const int Baseline = 2050;
    // Get static field: static public TMPro.TextAlignmentOptions Baseline
    static TMPro::TextAlignmentOptions _get_Baseline();
    // Set static field: static public TMPro.TextAlignmentOptions Baseline
    static void _set_Baseline(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions BaselineRight
    static constexpr const int BaselineRight = 2052;
    // Get static field: static public TMPro.TextAlignmentOptions BaselineRight
    static TMPro::TextAlignmentOptions _get_BaselineRight();
    // Set static field: static public TMPro.TextAlignmentOptions BaselineRight
    static void _set_BaselineRight(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions BaselineJustified
    static constexpr const int BaselineJustified = 2056;
    // Get static field: static public TMPro.TextAlignmentOptions BaselineJustified
    static TMPro::TextAlignmentOptions _get_BaselineJustified();
    // Set static field: static public TMPro.TextAlignmentOptions BaselineJustified
    static void _set_BaselineJustified(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions BaselineFlush
    static constexpr const int BaselineFlush = 2064;
    // Get static field: static public TMPro.TextAlignmentOptions BaselineFlush
    static TMPro::TextAlignmentOptions _get_BaselineFlush();
    // Set static field: static public TMPro.TextAlignmentOptions BaselineFlush
    static void _set_BaselineFlush(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions BaselineGeoAligned
    static constexpr const int BaselineGeoAligned = 2080;
    // Get static field: static public TMPro.TextAlignmentOptions BaselineGeoAligned
    static TMPro::TextAlignmentOptions _get_BaselineGeoAligned();
    // Set static field: static public TMPro.TextAlignmentOptions BaselineGeoAligned
    static void _set_BaselineGeoAligned(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions MidlineLeft
    static constexpr const int MidlineLeft = 4097;
    // Get static field: static public TMPro.TextAlignmentOptions MidlineLeft
    static TMPro::TextAlignmentOptions _get_MidlineLeft();
    // Set static field: static public TMPro.TextAlignmentOptions MidlineLeft
    static void _set_MidlineLeft(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions Midline
    static constexpr const int Midline = 4098;
    // Get static field: static public TMPro.TextAlignmentOptions Midline
    static TMPro::TextAlignmentOptions _get_Midline();
    // Set static field: static public TMPro.TextAlignmentOptions Midline
    static void _set_Midline(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions MidlineRight
    static constexpr const int MidlineRight = 4100;
    // Get static field: static public TMPro.TextAlignmentOptions MidlineRight
    static TMPro::TextAlignmentOptions _get_MidlineRight();
    // Set static field: static public TMPro.TextAlignmentOptions MidlineRight
    static void _set_MidlineRight(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions MidlineJustified
    static constexpr const int MidlineJustified = 4104;
    // Get static field: static public TMPro.TextAlignmentOptions MidlineJustified
    static TMPro::TextAlignmentOptions _get_MidlineJustified();
    // Set static field: static public TMPro.TextAlignmentOptions MidlineJustified
    static void _set_MidlineJustified(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions MidlineFlush
    static constexpr const int MidlineFlush = 4112;
    // Get static field: static public TMPro.TextAlignmentOptions MidlineFlush
    static TMPro::TextAlignmentOptions _get_MidlineFlush();
    // Set static field: static public TMPro.TextAlignmentOptions MidlineFlush
    static void _set_MidlineFlush(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions MidlineGeoAligned
    static constexpr const int MidlineGeoAligned = 4128;
    // Get static field: static public TMPro.TextAlignmentOptions MidlineGeoAligned
    static TMPro::TextAlignmentOptions _get_MidlineGeoAligned();
    // Set static field: static public TMPro.TextAlignmentOptions MidlineGeoAligned
    static void _set_MidlineGeoAligned(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions CaplineLeft
    static constexpr const int CaplineLeft = 8193;
    // Get static field: static public TMPro.TextAlignmentOptions CaplineLeft
    static TMPro::TextAlignmentOptions _get_CaplineLeft();
    // Set static field: static public TMPro.TextAlignmentOptions CaplineLeft
    static void _set_CaplineLeft(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions Capline
    static constexpr const int Capline = 8194;
    // Get static field: static public TMPro.TextAlignmentOptions Capline
    static TMPro::TextAlignmentOptions _get_Capline();
    // Set static field: static public TMPro.TextAlignmentOptions Capline
    static void _set_Capline(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions CaplineRight
    static constexpr const int CaplineRight = 8196;
    // Get static field: static public TMPro.TextAlignmentOptions CaplineRight
    static TMPro::TextAlignmentOptions _get_CaplineRight();
    // Set static field: static public TMPro.TextAlignmentOptions CaplineRight
    static void _set_CaplineRight(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions CaplineJustified
    static constexpr const int CaplineJustified = 8200;
    // Get static field: static public TMPro.TextAlignmentOptions CaplineJustified
    static TMPro::TextAlignmentOptions _get_CaplineJustified();
    // Set static field: static public TMPro.TextAlignmentOptions CaplineJustified
    static void _set_CaplineJustified(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions CaplineFlush
    static constexpr const int CaplineFlush = 8208;
    // Get static field: static public TMPro.TextAlignmentOptions CaplineFlush
    static TMPro::TextAlignmentOptions _get_CaplineFlush();
    // Set static field: static public TMPro.TextAlignmentOptions CaplineFlush
    static void _set_CaplineFlush(TMPro::TextAlignmentOptions value);
    // static field const value: static public TMPro.TextAlignmentOptions CaplineGeoAligned
    static constexpr const int CaplineGeoAligned = 8224;
    // Get static field: static public TMPro.TextAlignmentOptions CaplineGeoAligned
    static TMPro::TextAlignmentOptions _get_CaplineGeoAligned();
    // Set static field: static public TMPro.TextAlignmentOptions CaplineGeoAligned
    static void _set_CaplineGeoAligned(TMPro::TextAlignmentOptions value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // TMPro.TextAlignmentOptions
  #pragma pack(pop)
  static check_size<sizeof(TextAlignmentOptions), 0 + sizeof(int)> __TMPro_TextAlignmentOptionsSizeCheck;
  static_assert(sizeof(TextAlignmentOptions) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TextAlignmentOptions, "TMPro", "TextAlignmentOptions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
