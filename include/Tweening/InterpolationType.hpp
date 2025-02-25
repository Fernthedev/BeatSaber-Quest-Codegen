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
// Type namespace: Tweening
namespace Tweening {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Tweening.InterpolationType
  // [TokenAttribute] Offset: FFFFFFFF
  struct InterpolationType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: InterpolationType
    constexpr InterpolationType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Tweening.InterpolationType Easing
    static constexpr const int Easing = 0;
    // Get static field: static public Tweening.InterpolationType Easing
    static Tweening::InterpolationType _get_Easing();
    // Set static field: static public Tweening.InterpolationType Easing
    static void _set_Easing(Tweening::InterpolationType value);
    // static field const value: static public Tweening.InterpolationType AnimationCurve
    static constexpr const int AnimationCurve = 1;
    // Get static field: static public Tweening.InterpolationType AnimationCurve
    static Tweening::InterpolationType _get_AnimationCurve();
    // Set static field: static public Tweening.InterpolationType AnimationCurve
    static void _set_AnimationCurve(Tweening::InterpolationType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Tweening.InterpolationType
  #pragma pack(pop)
  static check_size<sizeof(InterpolationType), 0 + sizeof(int)> __Tweening_InterpolationTypeSizeCheck;
  static_assert(sizeof(InterpolationType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Tweening::InterpolationType, "Tweening", "InterpolationType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
