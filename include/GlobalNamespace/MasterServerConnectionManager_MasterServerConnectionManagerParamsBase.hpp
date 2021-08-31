// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServerConnectionManager
#include "GlobalNamespace/MasterServerConnectionManager.hpp"
// Including type: IConnectionInitParams`1
#include "GlobalNamespace/IConnectionInitParams_1.hpp"
// Including type: BeatmapLevelSelectionMask
#include "GlobalNamespace/BeatmapLevelSelectionMask.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MasterServerEndPoint
  class MasterServerEndPoint;
  // Forward declaring type: IAuthenticationTokenProvider
  class IAuthenticationTokenProvider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
  // [TokenAttribute] Offset: FFFFFFFF
  class MasterServerConnectionManager::MasterServerConnectionManagerParamsBase : public ::Il2CppObject/*, public GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::MasterServerConnectionManager*>*/ {
    public:
    // public MasterServerEndPoint masterServerEndPoint
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MasterServerEndPoint* masterServerEndPoint;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MasterServerEndPoint*) == 0x8);
    // public IAuthenticationTokenProvider authenticationTokenProvider
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAuthenticationTokenProvider*) == 0x8);
    // public System.String userId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public BeatmapLevelSelectionMask selectionMask
    // Size: 0x18
    // Offset: 0x30
    GlobalNamespace::BeatmapLevelSelectionMask selectionMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x48
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // Creating value type constructor for type: MasterServerConnectionManagerParamsBase
    MasterServerConnectionManagerParamsBase(GlobalNamespace::MasterServerEndPoint* masterServerEndPoint_ = {}, GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider_ = {}, ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, GlobalNamespace::BeatmapLevelSelectionMask selectionMask_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}) noexcept : masterServerEndPoint{masterServerEndPoint_}, authenticationTokenProvider{authenticationTokenProvider_}, userId{userId_}, userName{userName_}, selectionMask{selectionMask_}, configuration{configuration_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::MasterServerConnectionManager*>
    operator GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::MasterServerConnectionManager*>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::MasterServerConnectionManager*>*>(this);
    }
    // Get instance field: public MasterServerEndPoint masterServerEndPoint
    GlobalNamespace::MasterServerEndPoint* _get_masterServerEndPoint();
    // Set instance field: public MasterServerEndPoint masterServerEndPoint
    void _set_masterServerEndPoint(GlobalNamespace::MasterServerEndPoint* value);
    // Get instance field: public IAuthenticationTokenProvider authenticationTokenProvider
    GlobalNamespace::IAuthenticationTokenProvider* _get_authenticationTokenProvider();
    // Set instance field: public IAuthenticationTokenProvider authenticationTokenProvider
    void _set_authenticationTokenProvider(GlobalNamespace::IAuthenticationTokenProvider* value);
    // Get instance field: public System.String userId
    ::Il2CppString* _get_userId();
    // Set instance field: public System.String userId
    void _set_userId(::Il2CppString* value);
    // Get instance field: public System.String userName
    ::Il2CppString* _get_userName();
    // Set instance field: public System.String userName
    void _set_userName(::Il2CppString* value);
    // Get instance field: public BeatmapLevelSelectionMask selectionMask
    GlobalNamespace::BeatmapLevelSelectionMask _get_selectionMask();
    // Set instance field: public BeatmapLevelSelectionMask selectionMask
    void _set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value);
    // Get instance field: public GameplayServerConfiguration configuration
    GlobalNamespace::GameplayServerConfiguration _get_configuration();
    // Set instance field: public GameplayServerConfiguration configuration
    void _set_configuration(GlobalNamespace::GameplayServerConfiguration value);
    // protected System.Void .ctor()
    // Offset: 0x12245CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerConnectionManager::MasterServerConnectionManagerParamsBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerConnectionManager::MasterServerConnectionManagerParamsBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerConnectionManager::MasterServerConnectionManagerParamsBase*, creationType>()));
    }
  }; // MasterServerConnectionManager/MasterServerConnectionManagerParamsBase
  #pragma pack(pop)
  static check_size<sizeof(MasterServerConnectionManager::MasterServerConnectionManagerParamsBase), 72 + sizeof(GlobalNamespace::GameplayServerConfiguration)> __GlobalNamespace_MasterServerConnectionManager_MasterServerConnectionManagerParamsBaseSizeCheck;
  static_assert(sizeof(MasterServerConnectionManager::MasterServerConnectionManagerParamsBase) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerConnectionManager::MasterServerConnectionManagerParamsBase*, "", "MasterServerConnectionManager/MasterServerConnectionManagerParamsBase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MasterServerConnectionManager::MasterServerConnectionManagerParamsBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
