// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UISystemProfilerApi
#include "UnityEngine/UISystemProfilerApi.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UISystemProfilerApi/UnityEngine.SampleType
  // [TokenAttribute] Offset: FFFFFFFF
  struct UISystemProfilerApi::SampleType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SampleType
    constexpr SampleType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UISystemProfilerApi/UnityEngine.SampleType Layout
    static constexpr const int Layout = 0;
    // Get static field: static public UnityEngine.UISystemProfilerApi/UnityEngine.SampleType Layout
    static UnityEngine::UISystemProfilerApi::SampleType _get_Layout();
    // Set static field: static public UnityEngine.UISystemProfilerApi/UnityEngine.SampleType Layout
    static void _set_Layout(UnityEngine::UISystemProfilerApi::SampleType value);
    // static field const value: static public UnityEngine.UISystemProfilerApi/UnityEngine.SampleType Render
    static constexpr const int Render = 1;
    // Get static field: static public UnityEngine.UISystemProfilerApi/UnityEngine.SampleType Render
    static UnityEngine::UISystemProfilerApi::SampleType _get_Render();
    // Set static field: static public UnityEngine.UISystemProfilerApi/UnityEngine.SampleType Render
    static void _set_Render(UnityEngine::UISystemProfilerApi::SampleType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.UISystemProfilerApi/UnityEngine.SampleType
  #pragma pack(pop)
  static check_size<sizeof(UISystemProfilerApi::SampleType), 0 + sizeof(int)> __UnityEngine_UISystemProfilerApi_SampleTypeSizeCheck;
  static_assert(sizeof(UISystemProfilerApi::SampleType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UISystemProfilerApi::SampleType, "UnityEngine", "UISystemProfilerApi/SampleType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
