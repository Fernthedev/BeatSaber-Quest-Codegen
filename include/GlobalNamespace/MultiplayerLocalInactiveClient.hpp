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
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: INodePoseSyncStateManager
  class INodePoseSyncStateManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalInactiveClient
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalInactiveClient : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xE3A3F4
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerTransforms*) == 0x8);
    // [InjectAttribute] Offset: 0xE3A404
    // private readonly INodePoseSyncStateManager _nodePoseSyncStateManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INodePoseSyncStateManager*) == 0x8);
    // Creating value type constructor for type: MultiplayerLocalInactiveClient
    MultiplayerLocalInactiveClient(GlobalNamespace::PlayerTransforms* playerTransforms_ = {}, GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager_ = {}) noexcept : playerTransforms{playerTransforms_}, nodePoseSyncStateManager{nodePoseSyncStateManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly PlayerTransforms _playerTransforms
    GlobalNamespace::PlayerTransforms*& dyn__playerTransforms();
    // Get instance field reference: private readonly INodePoseSyncStateManager _nodePoseSyncStateManager
    GlobalNamespace::INodePoseSyncStateManager*& dyn__nodePoseSyncStateManager();
    // protected System.Void LateUpdate()
    // Offset: 0x1069CAC
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x106A034
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalInactiveClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalInactiveClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalInactiveClient*, creationType>()));
    }
  }; // MultiplayerLocalInactiveClient
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalInactiveClient), 32 + sizeof(GlobalNamespace::INodePoseSyncStateManager*)> __GlobalNamespace_MultiplayerLocalInactiveClientSizeCheck;
  static_assert(sizeof(MultiplayerLocalInactiveClient) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactiveClient*, "", "MultiplayerLocalInactiveClient");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactiveClient::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactiveClient::*)()>(&GlobalNamespace::MultiplayerLocalInactiveClient::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactiveClient*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactiveClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
