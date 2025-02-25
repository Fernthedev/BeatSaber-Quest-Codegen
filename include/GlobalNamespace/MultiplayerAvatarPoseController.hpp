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
  // Forward declaring type: INodePoseSyncStateManager
  class INodePoseSyncStateManager;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerAvatarPoseController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerAvatarPoseController : public UnityEngine::MonoBehaviour {
    public:
    // private AvatarPoseController _avatarPoseController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AvatarPoseController* avatarPoseController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPoseController*) == 0x8);
    // [InjectAttribute] Offset: 0xE38750
    // private readonly INodePoseSyncStateManager _nodePoseSyncStateManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INodePoseSyncStateManager*) == 0x8);
    // [InjectOptionalAttribute] Offset: 0xE38760
    // private IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // Creating value type constructor for type: MultiplayerAvatarPoseController
    MultiplayerAvatarPoseController(GlobalNamespace::AvatarPoseController* avatarPoseController_ = {}, GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager_ = {}, GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}) noexcept : avatarPoseController{avatarPoseController_}, nodePoseSyncStateManager{nodePoseSyncStateManager_}, connectedPlayer{connectedPlayer_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private AvatarPoseController _avatarPoseController
    GlobalNamespace::AvatarPoseController*& dyn__avatarPoseController();
    // Get instance field reference: private readonly INodePoseSyncStateManager _nodePoseSyncStateManager
    GlobalNamespace::INodePoseSyncStateManager*& dyn__nodePoseSyncStateManager();
    // Get instance field reference: private IConnectedPlayer _connectedPlayer
    GlobalNamespace::IConnectedPlayer*& dyn__connectedPlayer();
    // public System.Void set_connectedPlayer(IConnectedPlayer value)
    // Offset: 0x11C3258
    void set_connectedPlayer(GlobalNamespace::IConnectedPlayer* value);
    // protected System.Void Start()
    // Offset: 0x11C3260
    void Start();
    // protected System.Void Update()
    // Offset: 0x11C3278
    void Update();
    // public System.Void .ctor()
    // Offset: 0x11C3630
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerAvatarPoseController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerAvatarPoseController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerAvatarPoseController*, creationType>()));
    }
  }; // MultiplayerAvatarPoseController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerAvatarPoseController), 40 + sizeof(GlobalNamespace::IConnectedPlayer*)> __GlobalNamespace_MultiplayerAvatarPoseControllerSizeCheck;
  static_assert(sizeof(MultiplayerAvatarPoseController) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerAvatarPoseController*, "", "MultiplayerAvatarPoseController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarPoseController::set_connectedPlayer
// Il2CppName: set_connectedPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerAvatarPoseController::*)(GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerAvatarPoseController::set_connectedPlayer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarPoseController*), "set_connectedPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarPoseController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerAvatarPoseController::*)()>(&GlobalNamespace::MultiplayerAvatarPoseController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarPoseController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarPoseController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerAvatarPoseController::*)()>(&GlobalNamespace::MultiplayerAvatarPoseController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarPoseController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarPoseController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
