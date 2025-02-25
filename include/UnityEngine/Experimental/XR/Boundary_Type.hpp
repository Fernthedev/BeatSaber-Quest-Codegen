// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.XR.Boundary
#include "UnityEngine/Experimental/XR/Boundary.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.XR.Boundary/UnityEngine.Experimental.XR.Type
  // [TokenAttribute] Offset: FFFFFFFF
  struct Boundary::Type/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Type
    constexpr Type(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Experimental.XR.Boundary/UnityEngine.Experimental.XR.Type PlayArea
    static constexpr const int PlayArea = 0;
    // Get static field: static public UnityEngine.Experimental.XR.Boundary/UnityEngine.Experimental.XR.Type PlayArea
    static UnityEngine::Experimental::XR::Boundary::Type _get_PlayArea();
    // Set static field: static public UnityEngine.Experimental.XR.Boundary/UnityEngine.Experimental.XR.Type PlayArea
    static void _set_PlayArea(UnityEngine::Experimental::XR::Boundary::Type value);
    // static field const value: static public UnityEngine.Experimental.XR.Boundary/UnityEngine.Experimental.XR.Type TrackedArea
    static constexpr const int TrackedArea = 1;
    // Get static field: static public UnityEngine.Experimental.XR.Boundary/UnityEngine.Experimental.XR.Type TrackedArea
    static UnityEngine::Experimental::XR::Boundary::Type _get_TrackedArea();
    // Set static field: static public UnityEngine.Experimental.XR.Boundary/UnityEngine.Experimental.XR.Type TrackedArea
    static void _set_TrackedArea(UnityEngine::Experimental::XR::Boundary::Type value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Experimental.XR.Boundary/UnityEngine.Experimental.XR.Type
  #pragma pack(pop)
  static check_size<sizeof(Boundary::Type), 0 + sizeof(int)> __UnityEngine_Experimental_XR_Boundary_TypeSizeCheck;
  static_assert(sizeof(Boundary::Type) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::XR::Boundary::Type, "UnityEngine.Experimental.XR", "Boundary/Type");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
