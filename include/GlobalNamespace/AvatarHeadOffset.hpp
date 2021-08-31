// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarPoseController
  class AvatarPoseController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: AvatarHeadOffset
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarHeadOffset : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Vector3 _positionOffset
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 positionOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: positionOffset and: avatarPoseController
    char __padding0[0x4] = {};
    // [InjectAttribute] Offset: 0xE3203C
    // private readonly AvatarPoseController _avatarPoseController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AvatarPoseController* avatarPoseController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPoseController*) == 0x8);
    // Creating value type constructor for type: AvatarHeadOffset
    AvatarHeadOffset(UnityEngine::Vector3 positionOffset_ = {}, GlobalNamespace::AvatarPoseController* avatarPoseController_ = {}) noexcept : positionOffset{positionOffset_}, avatarPoseController{avatarPoseController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.Vector3 _positionOffset
    UnityEngine::Vector3 _get__positionOffset();
    // Set instance field: private UnityEngine.Vector3 _positionOffset
    void _set__positionOffset(UnityEngine::Vector3 value);
    // Get instance field: private readonly AvatarPoseController _avatarPoseController
    GlobalNamespace::AvatarPoseController* _get__avatarPoseController();
    // Set instance field: private readonly AvatarPoseController _avatarPoseController
    void _set__avatarPoseController(GlobalNamespace::AvatarPoseController* value);
    // protected System.Void Start()
    // Offset: 0x1180EFC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1181030
    void OnDestroy();
    // private System.Void HandleMultiplayerAvatarPoseControllerDidUpdatePose(UnityEngine.Vector3 headLocalPosition)
    // Offset: 0x11811AC
    void HandleMultiplayerAvatarPoseControllerDidUpdatePose(UnityEngine::Vector3 headLocalPosition);
    // public System.Void .ctor()
    // Offset: 0x118127C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarHeadOffset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarHeadOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarHeadOffset*, creationType>()));
    }
  }; // AvatarHeadOffset
  #pragma pack(pop)
  static check_size<sizeof(AvatarHeadOffset), 40 + sizeof(GlobalNamespace::AvatarPoseController*)> __GlobalNamespace_AvatarHeadOffsetSizeCheck;
  static_assert(sizeof(AvatarHeadOffset) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarHeadOffset*, "", "AvatarHeadOffset");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarHeadOffset::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarHeadOffset::*)()>(&GlobalNamespace::AvatarHeadOffset::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarHeadOffset*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarHeadOffset::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarHeadOffset::*)()>(&GlobalNamespace::AvatarHeadOffset::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarHeadOffset*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarHeadOffset::HandleMultiplayerAvatarPoseControllerDidUpdatePose
// Il2CppName: HandleMultiplayerAvatarPoseControllerDidUpdatePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarHeadOffset::*)(UnityEngine::Vector3)>(&GlobalNamespace::AvatarHeadOffset::HandleMultiplayerAvatarPoseControllerDidUpdatePose)> {
  static const MethodInfo* get() {
    static auto* headLocalPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarHeadOffset*), "HandleMultiplayerAvatarPoseControllerDidUpdatePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headLocalPosition});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarHeadOffset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
