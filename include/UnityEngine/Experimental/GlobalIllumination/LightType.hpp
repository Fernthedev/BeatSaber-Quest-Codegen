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
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.LightType
  // [TokenAttribute] Offset: FFFFFFFF
  struct LightType/*, public System::Enum*/ {
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: LightType
    constexpr LightType(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.LightType Directional
    static constexpr const uint8_t Directional = 0u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.LightType Directional
    static UnityEngine::Experimental::GlobalIllumination::LightType _get_Directional();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.LightType Directional
    static void _set_Directional(UnityEngine::Experimental::GlobalIllumination::LightType value);
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.LightType Point
    static constexpr const uint8_t Point = 1u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.LightType Point
    static UnityEngine::Experimental::GlobalIllumination::LightType _get_Point();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.LightType Point
    static void _set_Point(UnityEngine::Experimental::GlobalIllumination::LightType value);
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.LightType Spot
    static constexpr const uint8_t Spot = 2u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.LightType Spot
    static UnityEngine::Experimental::GlobalIllumination::LightType _get_Spot();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.LightType Spot
    static void _set_Spot(UnityEngine::Experimental::GlobalIllumination::LightType value);
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.LightType Rectangle
    static constexpr const uint8_t Rectangle = 3u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.LightType Rectangle
    static UnityEngine::Experimental::GlobalIllumination::LightType _get_Rectangle();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.LightType Rectangle
    static void _set_Rectangle(UnityEngine::Experimental::GlobalIllumination::LightType value);
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.LightType Disc
    static constexpr const uint8_t Disc = 4u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.LightType Disc
    static UnityEngine::Experimental::GlobalIllumination::LightType _get_Disc();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.LightType Disc
    static void _set_Disc(UnityEngine::Experimental::GlobalIllumination::LightType value);
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.LightType SpotPyramidShape
    static constexpr const uint8_t SpotPyramidShape = 5u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.LightType SpotPyramidShape
    static UnityEngine::Experimental::GlobalIllumination::LightType _get_SpotPyramidShape();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.LightType SpotPyramidShape
    static void _set_SpotPyramidShape(UnityEngine::Experimental::GlobalIllumination::LightType value);
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.LightType SpotBoxShape
    static constexpr const uint8_t SpotBoxShape = 6u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.LightType SpotBoxShape
    static UnityEngine::Experimental::GlobalIllumination::LightType _get_SpotBoxShape();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.LightType SpotBoxShape
    static void _set_SpotBoxShape(UnityEngine::Experimental::GlobalIllumination::LightType value);
    // Get instance field reference: public System.Byte value__
    uint8_t& dyn_value__();
  }; // UnityEngine.Experimental.GlobalIllumination.LightType
  #pragma pack(pop)
  static check_size<sizeof(LightType), 0 + sizeof(uint8_t)> __UnityEngine_Experimental_GlobalIllumination_LightTypeSizeCheck;
  static_assert(sizeof(LightType) == 0x1);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::LightType, "UnityEngine.Experimental.GlobalIllumination", "LightType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
