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
  // Autogenerated type: UnityEngine.AvatarMaskBodyPart
  // [TokenAttribute] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: DCE4B4
  struct AvatarMaskBodyPart/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AvatarMaskBodyPart
    constexpr AvatarMaskBodyPart(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.AvatarMaskBodyPart Root
    static constexpr const int Root = 0;
    // Get static field: static public UnityEngine.AvatarMaskBodyPart Root
    static UnityEngine::AvatarMaskBodyPart _get_Root();
    // Set static field: static public UnityEngine.AvatarMaskBodyPart Root
    static void _set_Root(UnityEngine::AvatarMaskBodyPart value);
    // static field const value: static public UnityEngine.AvatarMaskBodyPart Body
    static constexpr const int Body = 1;
    // Get static field: static public UnityEngine.AvatarMaskBodyPart Body
    static UnityEngine::AvatarMaskBodyPart _get_Body();
    // Set static field: static public UnityEngine.AvatarMaskBodyPart Body
    static void _set_Body(UnityEngine::AvatarMaskBodyPart value);
    // static field const value: static public UnityEngine.AvatarMaskBodyPart Head
    static constexpr const int Head = 2;
    // Get static field: static public UnityEngine.AvatarMaskBodyPart Head
    static UnityEngine::AvatarMaskBodyPart _get_Head();
    // Set static field: static public UnityEngine.AvatarMaskBodyPart Head
    static void _set_Head(UnityEngine::AvatarMaskBodyPart value);
    // static field const value: static public UnityEngine.AvatarMaskBodyPart LeftLeg
    static constexpr const int LeftLeg = 3;
    // Get static field: static public UnityEngine.AvatarMaskBodyPart LeftLeg
    static UnityEngine::AvatarMaskBodyPart _get_LeftLeg();
    // Set static field: static public UnityEngine.AvatarMaskBodyPart LeftLeg
    static void _set_LeftLeg(UnityEngine::AvatarMaskBodyPart value);
    // static field const value: static public UnityEngine.AvatarMaskBodyPart RightLeg
    static constexpr const int RightLeg = 4;
    // Get static field: static public UnityEngine.AvatarMaskBodyPart RightLeg
    static UnityEngine::AvatarMaskBodyPart _get_RightLeg();
    // Set static field: static public UnityEngine.AvatarMaskBodyPart RightLeg
    static void _set_RightLeg(UnityEngine::AvatarMaskBodyPart value);
    // static field const value: static public UnityEngine.AvatarMaskBodyPart LeftArm
    static constexpr const int LeftArm = 5;
    // Get static field: static public UnityEngine.AvatarMaskBodyPart LeftArm
    static UnityEngine::AvatarMaskBodyPart _get_LeftArm();
    // Set static field: static public UnityEngine.AvatarMaskBodyPart LeftArm
    static void _set_LeftArm(UnityEngine::AvatarMaskBodyPart value);
    // static field const value: static public UnityEngine.AvatarMaskBodyPart RightArm
    static constexpr const int RightArm = 6;
    // Get static field: static public UnityEngine.AvatarMaskBodyPart RightArm
    static UnityEngine::AvatarMaskBodyPart _get_RightArm();
    // Set static field: static public UnityEngine.AvatarMaskBodyPart RightArm
    static void _set_RightArm(UnityEngine::AvatarMaskBodyPart value);
    // static field const value: static public UnityEngine.AvatarMaskBodyPart LeftFingers
    static constexpr const int LeftFingers = 7;
    // Get static field: static public UnityEngine.AvatarMaskBodyPart LeftFingers
    static UnityEngine::AvatarMaskBodyPart _get_LeftFingers();
    // Set static field: static public UnityEngine.AvatarMaskBodyPart LeftFingers
    static void _set_LeftFingers(UnityEngine::AvatarMaskBodyPart value);
    // static field const value: static public UnityEngine.AvatarMaskBodyPart RightFingers
    static constexpr const int RightFingers = 8;
    // Get static field: static public UnityEngine.AvatarMaskBodyPart RightFingers
    static UnityEngine::AvatarMaskBodyPart _get_RightFingers();
    // Set static field: static public UnityEngine.AvatarMaskBodyPart RightFingers
    static void _set_RightFingers(UnityEngine::AvatarMaskBodyPart value);
    // static field const value: static public UnityEngine.AvatarMaskBodyPart LeftFootIK
    static constexpr const int LeftFootIK = 9;
    // Get static field: static public UnityEngine.AvatarMaskBodyPart LeftFootIK
    static UnityEngine::AvatarMaskBodyPart _get_LeftFootIK();
    // Set static field: static public UnityEngine.AvatarMaskBodyPart LeftFootIK
    static void _set_LeftFootIK(UnityEngine::AvatarMaskBodyPart value);
    // static field const value: static public UnityEngine.AvatarMaskBodyPart RightFootIK
    static constexpr const int RightFootIK = 10;
    // Get static field: static public UnityEngine.AvatarMaskBodyPart RightFootIK
    static UnityEngine::AvatarMaskBodyPart _get_RightFootIK();
    // Set static field: static public UnityEngine.AvatarMaskBodyPart RightFootIK
    static void _set_RightFootIK(UnityEngine::AvatarMaskBodyPart value);
    // static field const value: static public UnityEngine.AvatarMaskBodyPart LeftHandIK
    static constexpr const int LeftHandIK = 11;
    // Get static field: static public UnityEngine.AvatarMaskBodyPart LeftHandIK
    static UnityEngine::AvatarMaskBodyPart _get_LeftHandIK();
    // Set static field: static public UnityEngine.AvatarMaskBodyPart LeftHandIK
    static void _set_LeftHandIK(UnityEngine::AvatarMaskBodyPart value);
    // static field const value: static public UnityEngine.AvatarMaskBodyPart RightHandIK
    static constexpr const int RightHandIK = 12;
    // Get static field: static public UnityEngine.AvatarMaskBodyPart RightHandIK
    static UnityEngine::AvatarMaskBodyPart _get_RightHandIK();
    // Set static field: static public UnityEngine.AvatarMaskBodyPart RightHandIK
    static void _set_RightHandIK(UnityEngine::AvatarMaskBodyPart value);
    // static field const value: static public UnityEngine.AvatarMaskBodyPart LastBodyPart
    static constexpr const int LastBodyPart = 13;
    // Get static field: static public UnityEngine.AvatarMaskBodyPart LastBodyPart
    static UnityEngine::AvatarMaskBodyPart _get_LastBodyPart();
    // Set static field: static public UnityEngine.AvatarMaskBodyPart LastBodyPart
    static void _set_LastBodyPart(UnityEngine::AvatarMaskBodyPart value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.AvatarMaskBodyPart
  #pragma pack(pop)
  static check_size<sizeof(AvatarMaskBodyPart), 0 + sizeof(int)> __UnityEngine_AvatarMaskBodyPartSizeCheck;
  static_assert(sizeof(AvatarMaskBodyPart) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AvatarMaskBodyPart, "UnityEngine", "AvatarMaskBodyPart");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
