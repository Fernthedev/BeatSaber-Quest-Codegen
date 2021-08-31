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
  // Autogenerated type: TMPro._VerticalAlignmentOptions
  // [TokenAttribute] Offset: FFFFFFFF
  struct _VerticalAlignmentOptions/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: _VerticalAlignmentOptions
    constexpr _VerticalAlignmentOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro._VerticalAlignmentOptions Top
    static constexpr const int Top = 256;
    // Get static field: static public TMPro._VerticalAlignmentOptions Top
    static TMPro::_VerticalAlignmentOptions _get_Top();
    // Set static field: static public TMPro._VerticalAlignmentOptions Top
    static void _set_Top(TMPro::_VerticalAlignmentOptions value);
    // static field const value: static public TMPro._VerticalAlignmentOptions Middle
    static constexpr const int Middle = 512;
    // Get static field: static public TMPro._VerticalAlignmentOptions Middle
    static TMPro::_VerticalAlignmentOptions _get_Middle();
    // Set static field: static public TMPro._VerticalAlignmentOptions Middle
    static void _set_Middle(TMPro::_VerticalAlignmentOptions value);
    // static field const value: static public TMPro._VerticalAlignmentOptions Bottom
    static constexpr const int Bottom = 1024;
    // Get static field: static public TMPro._VerticalAlignmentOptions Bottom
    static TMPro::_VerticalAlignmentOptions _get_Bottom();
    // Set static field: static public TMPro._VerticalAlignmentOptions Bottom
    static void _set_Bottom(TMPro::_VerticalAlignmentOptions value);
    // static field const value: static public TMPro._VerticalAlignmentOptions Baseline
    static constexpr const int Baseline = 2048;
    // Get static field: static public TMPro._VerticalAlignmentOptions Baseline
    static TMPro::_VerticalAlignmentOptions _get_Baseline();
    // Set static field: static public TMPro._VerticalAlignmentOptions Baseline
    static void _set_Baseline(TMPro::_VerticalAlignmentOptions value);
    // static field const value: static public TMPro._VerticalAlignmentOptions Geometry
    static constexpr const int Geometry = 4096;
    // Get static field: static public TMPro._VerticalAlignmentOptions Geometry
    static TMPro::_VerticalAlignmentOptions _get_Geometry();
    // Set static field: static public TMPro._VerticalAlignmentOptions Geometry
    static void _set_Geometry(TMPro::_VerticalAlignmentOptions value);
    // static field const value: static public TMPro._VerticalAlignmentOptions Capline
    static constexpr const int Capline = 8192;
    // Get static field: static public TMPro._VerticalAlignmentOptions Capline
    static TMPro::_VerticalAlignmentOptions _get_Capline();
    // Set static field: static public TMPro._VerticalAlignmentOptions Capline
    static void _set_Capline(TMPro::_VerticalAlignmentOptions value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // TMPro._VerticalAlignmentOptions
  #pragma pack(pop)
  static check_size<sizeof(_VerticalAlignmentOptions), 0 + sizeof(int)> __TMPro__VerticalAlignmentOptionsSizeCheck;
  static_assert(sizeof(_VerticalAlignmentOptions) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::_VerticalAlignmentOptions, "TMPro", "_VerticalAlignmentOptions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
