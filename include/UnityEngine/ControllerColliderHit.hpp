// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CharacterController
  class CharacterController;
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ControllerColliderHit
  // [RequiredByNativeCodeAttribute] Offset: DA31EC
  class ControllerColliderHit : public ::Il2CppObject {
    public:
    // UnityEngine.CharacterController m_Controller
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::CharacterController* m_Controller;
    // Field size check
    static_assert(sizeof(UnityEngine::CharacterController*) == 0x8);
    // UnityEngine.Collider m_Collider
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Collider* m_Collider;
    // Field size check
    static_assert(sizeof(UnityEngine::Collider*) == 0x8);
    // UnityEngine.Vector3 m_Point
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Vector3 m_Point;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // UnityEngine.Vector3 m_Normal
    // Size: 0xC
    // Offset: 0x2C
    UnityEngine::Vector3 m_Normal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // UnityEngine.Vector3 m_MoveDirection
    // Size: 0xC
    // Offset: 0x38
    UnityEngine::Vector3 m_MoveDirection;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // System.Single m_MoveLength
    // Size: 0x4
    // Offset: 0x44
    float m_MoveLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Int32 m_Push
    // Size: 0x4
    // Offset: 0x48
    int m_Push;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ControllerColliderHit
    ControllerColliderHit(UnityEngine::CharacterController* m_Controller_ = {}, UnityEngine::Collider* m_Collider_ = {}, UnityEngine::Vector3 m_Point_ = {}, UnityEngine::Vector3 m_Normal_ = {}, UnityEngine::Vector3 m_MoveDirection_ = {}, float m_MoveLength_ = {}, int m_Push_ = {}) noexcept : m_Controller{m_Controller_}, m_Collider{m_Collider_}, m_Point{m_Point_}, m_Normal{m_Normal_}, m_MoveDirection{m_MoveDirection_}, m_MoveLength{m_MoveLength_}, m_Push{m_Push_} {}
  }; // UnityEngine.ControllerColliderHit
  #pragma pack(pop)
  static check_size<sizeof(ControllerColliderHit), 72 + sizeof(int)> __UnityEngine_ControllerColliderHitSizeCheck;
  static_assert(sizeof(ControllerColliderHit) == 0x4C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ControllerColliderHit*, "UnityEngine", "ControllerColliderHit");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
