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
  // Autogenerated type: TMPro.TMP_VertexDataUpdateFlags
  // [TokenAttribute] Offset: FFFFFFFF
  struct TMP_VertexDataUpdateFlags/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TMP_VertexDataUpdateFlags
    constexpr TMP_VertexDataUpdateFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.TMP_VertexDataUpdateFlags None
    static constexpr const int None = 0;
    // Get static field: static public TMPro.TMP_VertexDataUpdateFlags None
    static TMPro::TMP_VertexDataUpdateFlags _get_None();
    // Set static field: static public TMPro.TMP_VertexDataUpdateFlags None
    static void _set_None(TMPro::TMP_VertexDataUpdateFlags value);
    // static field const value: static public TMPro.TMP_VertexDataUpdateFlags Vertices
    static constexpr const int Vertices = 1;
    // Get static field: static public TMPro.TMP_VertexDataUpdateFlags Vertices
    static TMPro::TMP_VertexDataUpdateFlags _get_Vertices();
    // Set static field: static public TMPro.TMP_VertexDataUpdateFlags Vertices
    static void _set_Vertices(TMPro::TMP_VertexDataUpdateFlags value);
    // static field const value: static public TMPro.TMP_VertexDataUpdateFlags Uv0
    static constexpr const int Uv0 = 2;
    // Get static field: static public TMPro.TMP_VertexDataUpdateFlags Uv0
    static TMPro::TMP_VertexDataUpdateFlags _get_Uv0();
    // Set static field: static public TMPro.TMP_VertexDataUpdateFlags Uv0
    static void _set_Uv0(TMPro::TMP_VertexDataUpdateFlags value);
    // static field const value: static public TMPro.TMP_VertexDataUpdateFlags Uv2
    static constexpr const int Uv2 = 4;
    // Get static field: static public TMPro.TMP_VertexDataUpdateFlags Uv2
    static TMPro::TMP_VertexDataUpdateFlags _get_Uv2();
    // Set static field: static public TMPro.TMP_VertexDataUpdateFlags Uv2
    static void _set_Uv2(TMPro::TMP_VertexDataUpdateFlags value);
    // static field const value: static public TMPro.TMP_VertexDataUpdateFlags Uv4
    static constexpr const int Uv4 = 8;
    // Get static field: static public TMPro.TMP_VertexDataUpdateFlags Uv4
    static TMPro::TMP_VertexDataUpdateFlags _get_Uv4();
    // Set static field: static public TMPro.TMP_VertexDataUpdateFlags Uv4
    static void _set_Uv4(TMPro::TMP_VertexDataUpdateFlags value);
    // static field const value: static public TMPro.TMP_VertexDataUpdateFlags Colors32
    static constexpr const int Colors32 = 16;
    // Get static field: static public TMPro.TMP_VertexDataUpdateFlags Colors32
    static TMPro::TMP_VertexDataUpdateFlags _get_Colors32();
    // Set static field: static public TMPro.TMP_VertexDataUpdateFlags Colors32
    static void _set_Colors32(TMPro::TMP_VertexDataUpdateFlags value);
    // static field const value: static public TMPro.TMP_VertexDataUpdateFlags All
    static constexpr const int All = 255;
    // Get static field: static public TMPro.TMP_VertexDataUpdateFlags All
    static TMPro::TMP_VertexDataUpdateFlags _get_All();
    // Set static field: static public TMPro.TMP_VertexDataUpdateFlags All
    static void _set_All(TMPro::TMP_VertexDataUpdateFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // TMPro.TMP_VertexDataUpdateFlags
  #pragma pack(pop)
  static check_size<sizeof(TMP_VertexDataUpdateFlags), 0 + sizeof(int)> __TMPro_TMP_VertexDataUpdateFlagsSizeCheck;
  static_assert(sizeof(TMP_VertexDataUpdateFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_VertexDataUpdateFlags, "TMPro", "TMP_VertexDataUpdateFlags");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
