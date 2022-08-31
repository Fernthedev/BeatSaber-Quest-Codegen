// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServerConnectionManager
#include "GlobalNamespace/MasterServerConnectionManager.hpp"
// Including type: IConnectionInitParams`1
#include "GlobalNamespace/IConnectionInitParams_1.hpp"
// Including type: BeatmapLevelSelectionMask
#include "GlobalNamespace/BeatmapLevelSelectionMask.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DnsEndPoint
  class DnsEndPoint;
  // Forward declaring type: IAuthenticationTokenProvider
  class IAuthenticationTokenProvider;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MasterServerConnectionManager::MasterServerConnectionManagerParamsBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MasterServerConnectionManager::MasterServerConnectionManagerParamsBase*, "", "MasterServerConnectionManager/MasterServerConnectionManagerParamsBase");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
  // [TokenAttribute] Offset: FFFFFFFF
  class MasterServerConnectionManager::MasterServerConnectionManagerParamsBase : public ::Il2CppObject/*, public ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::MasterServerConnectionManager*>*/ {
    public:
    public:
    // public DnsEndPoint masterServerEndPoint
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::DnsEndPoint* masterServerEndPoint;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DnsEndPoint*) == 0x8);
    // public System.Threading.Tasks.Task`1<IAuthenticationTokenProvider> authenticationTokenProviderTask
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* authenticationTokenProviderTask;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*) == 0x8);
    // public BeatmapLevelSelectionMask selectionMask
    // Size: 0x18
    // Offset: 0x20
    ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x38
    ::GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayServerConfiguration) == 0x18);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::MasterServerConnectionManager*>
    operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::MasterServerConnectionManager*>() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::MasterServerConnectionManager*>*>(this);
    }
    // Creating interface conversion operator: i_MasterServerConnectionManager
    inline ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::MasterServerConnectionManager*>* i_MasterServerConnectionManager() noexcept {
      return reinterpret_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::MasterServerConnectionManager*>*>(this);
    }
    // Get instance field reference: public DnsEndPoint masterServerEndPoint
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DnsEndPoint*& dyn_masterServerEndPoint();
    // Get instance field reference: public System.Threading.Tasks.Task`1<IAuthenticationTokenProvider> authenticationTokenProviderTask
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*& dyn_authenticationTokenProviderTask();
    // Get instance field reference: public BeatmapLevelSelectionMask selectionMask
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapLevelSelectionMask& dyn_selectionMask();
    // Get instance field reference: public GameplayServerConfiguration configuration
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayServerConfiguration& dyn_configuration();
    // protected System.Void .ctor()
    // Offset: 0x173A5D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerConnectionManager::MasterServerConnectionManagerParamsBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MasterServerConnectionManager::MasterServerConnectionManagerParamsBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerConnectionManager::MasterServerConnectionManagerParamsBase*, creationType>()));
    }
  }; // MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
  #pragma pack(pop)
  static check_size<sizeof(MasterServerConnectionManager::MasterServerConnectionManagerParamsBase), 56 + sizeof(::GlobalNamespace::GameplayServerConfiguration)> __GlobalNamespace_MasterServerConnectionManager_MasterServerConnectionManagerParamsBaseSizeCheck;
  static_assert(sizeof(MasterServerConnectionManager::MasterServerConnectionManagerParamsBase) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MasterServerConnectionManager::MasterServerConnectionManagerParamsBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
