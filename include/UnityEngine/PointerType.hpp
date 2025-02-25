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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.PointerType
  // [TokenAttribute] Offset: FFFFFFFF
  struct PointerType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PointerType
    constexpr PointerType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.PointerType Mouse
    static constexpr const int Mouse = 0;
    // Get static field: static public UnityEngine.PointerType Mouse
    static UnityEngine::PointerType _get_Mouse();
    // Set static field: static public UnityEngine.PointerType Mouse
    static void _set_Mouse(UnityEngine::PointerType value);
    // static field const value: static public UnityEngine.PointerType Touch
    static constexpr const int Touch = 1;
    // Get static field: static public UnityEngine.PointerType Touch
    static UnityEngine::PointerType _get_Touch();
    // Set static field: static public UnityEngine.PointerType Touch
    static void _set_Touch(UnityEngine::PointerType value);
    // static field const value: static public UnityEngine.PointerType Pen
    static constexpr const int Pen = 2;
    // Get static field: static public UnityEngine.PointerType Pen
    static UnityEngine::PointerType _get_Pen();
    // Set static field: static public UnityEngine.PointerType Pen
    static void _set_Pen(UnityEngine::PointerType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.PointerType
  #pragma pack(pop)
  static check_size<sizeof(PointerType), 0 + sizeof(int)> __UnityEngine_PointerTypeSizeCheck;
  static_assert(sizeof(PointerType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PointerType, "UnityEngine", "PointerType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
