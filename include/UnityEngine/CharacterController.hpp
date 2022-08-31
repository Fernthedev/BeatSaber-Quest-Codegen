// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Collider
#include "UnityEngine/Collider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: CollisionFlags
  struct CollisionFlags;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CharacterController
  class CharacterController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::CharacterController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CharacterController*, "UnityEngine", "CharacterController");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CharacterController
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 106BC78
  class CharacterController : public ::UnityEngine::Collider {
    public:
    // public System.Boolean get_isGrounded()
    // Offset: 0x2B00684
    bool get_isGrounded();
    // public System.Single get_height()
    // Offset: 0x2B006C4
    float get_height();
    // public UnityEngine.Vector3 get_center()
    // Offset: 0x2B00704
    ::UnityEngine::Vector3 get_center();
    // public System.Single get_stepOffset()
    // Offset: 0x2B007B4
    float get_stepOffset();
    // public UnityEngine.CollisionFlags Move(UnityEngine.Vector3 motion)
    // Offset: 0x2B005DC
    ::UnityEngine::CollisionFlags Move(::UnityEngine::Vector3 motion);
    // private UnityEngine.CollisionFlags Move_Injected(ref UnityEngine.Vector3 motion)
    // Offset: 0x2B00634
    ::UnityEngine::CollisionFlags Move_Injected(ByRef<::UnityEngine::Vector3> motion);
    // private System.Void get_center_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x2B00764
    void get_center_Injected(ByRef<::UnityEngine::Vector3> ret);
  }; // UnityEngine.CharacterController
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::CharacterController::get_isGrounded
// Il2CppName: get_isGrounded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::CharacterController::*)()>(&UnityEngine::CharacterController::get_isGrounded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterController*), "get_isGrounded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterController::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::CharacterController::*)()>(&UnityEngine::CharacterController::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterController*), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterController::get_center
// Il2CppName: get_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::CharacterController::*)()>(&UnityEngine::CharacterController::get_center)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterController*), "get_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterController::get_stepOffset
// Il2CppName: get_stepOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::CharacterController::*)()>(&UnityEngine::CharacterController::get_stepOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterController*), "get_stepOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterController::Move
// Il2CppName: Move
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::CollisionFlags (UnityEngine::CharacterController::*)(::UnityEngine::Vector3)>(&UnityEngine::CharacterController::Move)> {
  static const MethodInfo* get() {
    static auto* motion = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterController*), "Move", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{motion});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterController::Move_Injected
// Il2CppName: Move_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::CollisionFlags (UnityEngine::CharacterController::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::CharacterController::Move_Injected)> {
  static const MethodInfo* get() {
    static auto* motion = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterController*), "Move_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{motion});
  }
};
// Writing MetadataGetter for method: UnityEngine::CharacterController::get_center_Injected
// Il2CppName: get_center_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CharacterController::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::CharacterController::get_center_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CharacterController*), "get_center_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
