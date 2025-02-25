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
  // Autogenerated type: UnityEngine.AvatarIKGoal
  // [TokenAttribute] Offset: FFFFFFFF
  struct AvatarIKGoal/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AvatarIKGoal
    constexpr AvatarIKGoal(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.AvatarIKGoal LeftFoot
    static constexpr const int LeftFoot = 0;
    // Get static field: static public UnityEngine.AvatarIKGoal LeftFoot
    static UnityEngine::AvatarIKGoal _get_LeftFoot();
    // Set static field: static public UnityEngine.AvatarIKGoal LeftFoot
    static void _set_LeftFoot(UnityEngine::AvatarIKGoal value);
    // static field const value: static public UnityEngine.AvatarIKGoal RightFoot
    static constexpr const int RightFoot = 1;
    // Get static field: static public UnityEngine.AvatarIKGoal RightFoot
    static UnityEngine::AvatarIKGoal _get_RightFoot();
    // Set static field: static public UnityEngine.AvatarIKGoal RightFoot
    static void _set_RightFoot(UnityEngine::AvatarIKGoal value);
    // static field const value: static public UnityEngine.AvatarIKGoal LeftHand
    static constexpr const int LeftHand = 2;
    // Get static field: static public UnityEngine.AvatarIKGoal LeftHand
    static UnityEngine::AvatarIKGoal _get_LeftHand();
    // Set static field: static public UnityEngine.AvatarIKGoal LeftHand
    static void _set_LeftHand(UnityEngine::AvatarIKGoal value);
    // static field const value: static public UnityEngine.AvatarIKGoal RightHand
    static constexpr const int RightHand = 3;
    // Get static field: static public UnityEngine.AvatarIKGoal RightHand
    static UnityEngine::AvatarIKGoal _get_RightHand();
    // Set static field: static public UnityEngine.AvatarIKGoal RightHand
    static void _set_RightHand(UnityEngine::AvatarIKGoal value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.AvatarIKGoal
  #pragma pack(pop)
  static check_size<sizeof(AvatarIKGoal), 0 + sizeof(int)> __UnityEngine_AvatarIKGoalSizeCheck;
  static_assert(sizeof(AvatarIKGoal) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AvatarIKGoal, "UnityEngine", "AvatarIKGoal");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
