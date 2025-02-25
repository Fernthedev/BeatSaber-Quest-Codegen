// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PyramidBloomRendererSO
#include "GlobalNamespace/PyramidBloomRendererSO.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PyramidBloomRendererSO/Pass
  // [TokenAttribute] Offset: FFFFFFFF
  struct PyramidBloomRendererSO::Pass/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Pass
    constexpr Pass(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PyramidBloomRendererSO/Pass Prefilter13
    static constexpr const int Prefilter13 = 0;
    // Get static field: static public PyramidBloomRendererSO/Pass Prefilter13
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_Prefilter13();
    // Set static field: static public PyramidBloomRendererSO/Pass Prefilter13
    static void _set_Prefilter13(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass Prefilter4
    static constexpr const int Prefilter4 = 1;
    // Get static field: static public PyramidBloomRendererSO/Pass Prefilter4
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_Prefilter4();
    // Set static field: static public PyramidBloomRendererSO/Pass Prefilter4
    static void _set_Prefilter4(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass Downsample13
    static constexpr const int Downsample13 = 2;
    // Get static field: static public PyramidBloomRendererSO/Pass Downsample13
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_Downsample13();
    // Set static field: static public PyramidBloomRendererSO/Pass Downsample13
    static void _set_Downsample13(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass Downsample4
    static constexpr const int Downsample4 = 3;
    // Get static field: static public PyramidBloomRendererSO/Pass Downsample4
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_Downsample4();
    // Set static field: static public PyramidBloomRendererSO/Pass Downsample4
    static void _set_Downsample4(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass DownsampleBilinearGamma
    static constexpr const int DownsampleBilinearGamma = 4;
    // Get static field: static public PyramidBloomRendererSO/Pass DownsampleBilinearGamma
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_DownsampleBilinearGamma();
    // Set static field: static public PyramidBloomRendererSO/Pass DownsampleBilinearGamma
    static void _set_DownsampleBilinearGamma(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass UpsampleTent
    static constexpr const int UpsampleTent = 5;
    // Get static field: static public PyramidBloomRendererSO/Pass UpsampleTent
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_UpsampleTent();
    // Set static field: static public PyramidBloomRendererSO/Pass UpsampleTent
    static void _set_UpsampleTent(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass UpsampleBox
    static constexpr const int UpsampleBox = 6;
    // Get static field: static public PyramidBloomRendererSO/Pass UpsampleBox
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_UpsampleBox();
    // Set static field: static public PyramidBloomRendererSO/Pass UpsampleBox
    static void _set_UpsampleBox(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass UpsampleTentGamma
    static constexpr const int UpsampleTentGamma = 7;
    // Get static field: static public PyramidBloomRendererSO/Pass UpsampleTentGamma
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_UpsampleTentGamma();
    // Set static field: static public PyramidBloomRendererSO/Pass UpsampleTentGamma
    static void _set_UpsampleTentGamma(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass UpsampleBoxGamma
    static constexpr const int UpsampleBoxGamma = 8;
    // Get static field: static public PyramidBloomRendererSO/Pass UpsampleBoxGamma
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_UpsampleBoxGamma();
    // Set static field: static public PyramidBloomRendererSO/Pass UpsampleBoxGamma
    static void _set_UpsampleBoxGamma(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass Bilinear
    static constexpr const int Bilinear = 9;
    // Get static field: static public PyramidBloomRendererSO/Pass Bilinear
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_Bilinear();
    // Set static field: static public PyramidBloomRendererSO/Pass Bilinear
    static void _set_Bilinear(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass BilinearGamma
    static constexpr const int BilinearGamma = 10;
    // Get static field: static public PyramidBloomRendererSO/Pass BilinearGamma
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_BilinearGamma();
    // Set static field: static public PyramidBloomRendererSO/Pass BilinearGamma
    static void _set_BilinearGamma(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass UpsampleTentAndReinhardToneMapping
    static constexpr const int UpsampleTentAndReinhardToneMapping = 11;
    // Get static field: static public PyramidBloomRendererSO/Pass UpsampleTentAndReinhardToneMapping
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_UpsampleTentAndReinhardToneMapping();
    // Set static field: static public PyramidBloomRendererSO/Pass UpsampleTentAndReinhardToneMapping
    static void _set_UpsampleTentAndReinhardToneMapping(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // static field const value: static public PyramidBloomRendererSO/Pass UpsampleTentAndACESToneMapping
    static constexpr const int UpsampleTentAndACESToneMapping = 12;
    // Get static field: static public PyramidBloomRendererSO/Pass UpsampleTentAndACESToneMapping
    static GlobalNamespace::PyramidBloomRendererSO::Pass _get_UpsampleTentAndACESToneMapping();
    // Set static field: static public PyramidBloomRendererSO/Pass UpsampleTentAndACESToneMapping
    static void _set_UpsampleTentAndACESToneMapping(GlobalNamespace::PyramidBloomRendererSO::Pass value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // PyramidBloomRendererSO/Pass
  #pragma pack(pop)
  static check_size<sizeof(PyramidBloomRendererSO::Pass), 0 + sizeof(int)> __GlobalNamespace_PyramidBloomRendererSO_PassSizeCheck;
  static_assert(sizeof(PyramidBloomRendererSO::Pass) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PyramidBloomRendererSO::Pass, "", "PyramidBloomRendererSO/Pass");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
