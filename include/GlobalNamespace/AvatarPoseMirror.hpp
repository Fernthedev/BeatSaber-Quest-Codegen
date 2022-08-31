// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarPoseController
  class AvatarPoseController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AvatarPoseMirror
  class AvatarPoseMirror;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AvatarPoseMirror);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarPoseMirror*, "", "AvatarPoseMirror");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AvatarPoseMirror
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarPoseMirror : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [InjectAttribute] Offset: 0x10E1B4C
    // private readonly AvatarPoseController _avatarPoseController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::AvatarPoseController* avatarPoseController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AvatarPoseController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly AvatarPoseController _avatarPoseController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AvatarPoseController*& dyn__avatarPoseController();
    // public System.Void .ctor()
    // Offset: 0x15240B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPoseMirror* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarPoseMirror::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPoseMirror*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1523E5C
    void Start();
    // static private System.Void HandleAvatarPoseControllerPositionsWillBeSet(UnityEngine.Vector3 headPosition, UnityEngine.Vector3 leftHandPosition, UnityEngine.Vector3 rightHandPosition, out UnityEngine.Vector3 newHeadPosition, out UnityEngine.Vector3 newLeftHandPosition, out UnityEngine.Vector3 newRightHandPosition)
    // Offset: 0x1523F08
    static void HandleAvatarPoseControllerPositionsWillBeSet(::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition, ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition, ByRef<::UnityEngine::Vector3> newRightHandPosition);
    // static private System.Void HandleAvatarPoseControllerRotationsWillBeSet(UnityEngine.Quaternion headRotation, UnityEngine.Quaternion leftHandRotation, UnityEngine.Quaternion rightHandRotation, out UnityEngine.Quaternion newHeadRotation, out UnityEngine.Quaternion newLeftHandRotation, out UnityEngine.Quaternion newRightHandRotation)
    // Offset: 0x1523FD4
    static void HandleAvatarPoseControllerRotationsWillBeSet(::UnityEngine::Quaternion headRotation, ::UnityEngine::Quaternion leftHandRotation, ::UnityEngine::Quaternion rightHandRotation, ByRef<::UnityEngine::Quaternion> newHeadRotation, ByRef<::UnityEngine::Quaternion> newLeftHandRotation, ByRef<::UnityEngine::Quaternion> newRightHandRotation);
    // static private UnityEngine.Quaternion MirrorRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x152407C
    static ::UnityEngine::Quaternion MirrorRotation(::UnityEngine::Quaternion rotation);
    // static private UnityEngine.Vector3 MirrorPosition(UnityEngine.Vector3 position)
    // Offset: 0x1523F9C
    static ::UnityEngine::Vector3 MirrorPosition(::UnityEngine::Vector3 position);
  }; // AvatarPoseMirror
  #pragma pack(pop)
  static check_size<sizeof(AvatarPoseMirror), 24 + sizeof(::GlobalNamespace::AvatarPoseController*)> __GlobalNamespace_AvatarPoseMirrorSizeCheck;
  static_assert(sizeof(AvatarPoseMirror) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseMirror::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseMirror::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseMirror::*)()>(&GlobalNamespace::AvatarPoseMirror::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseMirror*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseMirror::HandleAvatarPoseControllerPositionsWillBeSet
// Il2CppName: HandleAvatarPoseControllerPositionsWillBeSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&GlobalNamespace::AvatarPoseMirror::HandleAvatarPoseControllerPositionsWillBeSet)> {
  static const MethodInfo* get() {
    static auto* headPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* leftHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rightHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* newHeadPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* newLeftHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* newRightHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseMirror*), "HandleAvatarPoseControllerPositionsWillBeSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition, newRightHandPosition});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseMirror::HandleAvatarPoseControllerRotationsWillBeSet
// Il2CppName: HandleAvatarPoseControllerRotationsWillBeSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Quaternion>)>(&GlobalNamespace::AvatarPoseMirror::HandleAvatarPoseControllerRotationsWillBeSet)> {
  static const MethodInfo* get() {
    static auto* headRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* leftHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* rightHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* newHeadRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* newLeftHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* newRightHandRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseMirror*), "HandleAvatarPoseControllerRotationsWillBeSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headRotation, leftHandRotation, rightHandRotation, newHeadRotation, newLeftHandRotation, newRightHandRotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseMirror::MirrorRotation
// Il2CppName: MirrorRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion)>(&GlobalNamespace::AvatarPoseMirror::MirrorRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseMirror*), "MirrorRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseMirror::MirrorPosition
// Il2CppName: MirrorPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&GlobalNamespace::AvatarPoseMirror::MirrorPosition)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseMirror*), "MirrorPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
