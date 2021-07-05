// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.MaskingTypes
  struct MaskingTypes/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MaskingTypes
    constexpr MaskingTypes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.MaskingTypes MaskOff
    static constexpr const int MaskOff = 0;
    // Get static field: static public TMPro.MaskingTypes MaskOff
    static TMPro::MaskingTypes _get_MaskOff();
    // Set static field: static public TMPro.MaskingTypes MaskOff
    static void _set_MaskOff(TMPro::MaskingTypes value);
    // static field const value: static public TMPro.MaskingTypes MaskHard
    static constexpr const int MaskHard = 1;
    // Get static field: static public TMPro.MaskingTypes MaskHard
    static TMPro::MaskingTypes _get_MaskHard();
    // Set static field: static public TMPro.MaskingTypes MaskHard
    static void _set_MaskHard(TMPro::MaskingTypes value);
    // static field const value: static public TMPro.MaskingTypes MaskSoft
    static constexpr const int MaskSoft = 2;
    // Get static field: static public TMPro.MaskingTypes MaskSoft
    static TMPro::MaskingTypes _get_MaskSoft();
    // Set static field: static public TMPro.MaskingTypes MaskSoft
    static void _set_MaskSoft(TMPro::MaskingTypes value);
  }; // TMPro.MaskingTypes
  #pragma pack(pop)
  static check_size<sizeof(MaskingTypes), 0 + sizeof(int)> __TMPro_MaskingTypesSizeCheck;
  static_assert(sizeof(MaskingTypes) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::MaskingTypes, "TMPro", "MaskingTypes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
