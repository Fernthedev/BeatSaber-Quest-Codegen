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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.RefreshMask
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct RefreshMask/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RefreshMask
    constexpr RefreshMask(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.RefreshMask UV
    static constexpr const int UV = 1;
    // Get static field: static public UnityEngine.ProBuilder.RefreshMask UV
    static UnityEngine::ProBuilder::RefreshMask _get_UV();
    // Set static field: static public UnityEngine.ProBuilder.RefreshMask UV
    static void _set_UV(UnityEngine::ProBuilder::RefreshMask value);
    // static field const value: static public UnityEngine.ProBuilder.RefreshMask Colors
    static constexpr const int Colors = 2;
    // Get static field: static public UnityEngine.ProBuilder.RefreshMask Colors
    static UnityEngine::ProBuilder::RefreshMask _get_Colors();
    // Set static field: static public UnityEngine.ProBuilder.RefreshMask Colors
    static void _set_Colors(UnityEngine::ProBuilder::RefreshMask value);
    // static field const value: static public UnityEngine.ProBuilder.RefreshMask Normals
    static constexpr const int Normals = 4;
    // Get static field: static public UnityEngine.ProBuilder.RefreshMask Normals
    static UnityEngine::ProBuilder::RefreshMask _get_Normals();
    // Set static field: static public UnityEngine.ProBuilder.RefreshMask Normals
    static void _set_Normals(UnityEngine::ProBuilder::RefreshMask value);
    // static field const value: static public UnityEngine.ProBuilder.RefreshMask Tangents
    static constexpr const int Tangents = 8;
    // Get static field: static public UnityEngine.ProBuilder.RefreshMask Tangents
    static UnityEngine::ProBuilder::RefreshMask _get_Tangents();
    // Set static field: static public UnityEngine.ProBuilder.RefreshMask Tangents
    static void _set_Tangents(UnityEngine::ProBuilder::RefreshMask value);
    // static field const value: static public UnityEngine.ProBuilder.RefreshMask Collisions
    static constexpr const int Collisions = 16;
    // Get static field: static public UnityEngine.ProBuilder.RefreshMask Collisions
    static UnityEngine::ProBuilder::RefreshMask _get_Collisions();
    // Set static field: static public UnityEngine.ProBuilder.RefreshMask Collisions
    static void _set_Collisions(UnityEngine::ProBuilder::RefreshMask value);
    // static field const value: static public UnityEngine.ProBuilder.RefreshMask All
    static constexpr const int All = 31;
    // Get static field: static public UnityEngine.ProBuilder.RefreshMask All
    static UnityEngine::ProBuilder::RefreshMask _get_All();
    // Set static field: static public UnityEngine.ProBuilder.RefreshMask All
    static void _set_All(UnityEngine::ProBuilder::RefreshMask value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ProBuilder.RefreshMask
  #pragma pack(pop)
  static check_size<sizeof(RefreshMask), 0 + sizeof(int)> __UnityEngine_ProBuilder_RefreshMaskSizeCheck;
  static_assert(sizeof(RefreshMask) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::RefreshMask, "UnityEngine.ProBuilder", "RefreshMask");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
