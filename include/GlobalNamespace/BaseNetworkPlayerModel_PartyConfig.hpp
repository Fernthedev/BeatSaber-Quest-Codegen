// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseNetworkPlayerModel
#include "GlobalNamespace/BaseNetworkPlayerModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: INetworkPlayerModel because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BaseNetworkPlayerModel/PartyConfig
  class BaseNetworkPlayerModel::PartyConfig : public ::Il2CppObject {
    public:
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x10
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // public System.Int32 maxPartySize
    // Size: 0x4
    // Offset: 0x28
    int maxPartySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxPartySize and: partyManager
    char __padding1[0x4] = {};
    // public INetworkPlayerModel partyManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::INetworkPlayerModel* partyManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkPlayerModel*) == 0x8);
    // Creating value type constructor for type: PartyConfig
    PartyConfig(GlobalNamespace::GameplayServerConfiguration configuration_ = {}, int maxPartySize_ = {}, GlobalNamespace::INetworkPlayerModel* partyManager_ = {}) noexcept : configuration{configuration_}, maxPartySize{maxPartySize_}, partyManager{partyManager_} {}
    // public System.Void .ctor()
    // Offset: 0x11B905C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseNetworkPlayerModel::PartyConfig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseNetworkPlayerModel::PartyConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseNetworkPlayerModel::PartyConfig*, creationType>()));
    }
  }; // BaseNetworkPlayerModel/PartyConfig
  #pragma pack(pop)
  static check_size<sizeof(BaseNetworkPlayerModel::PartyConfig), 48 + sizeof(GlobalNamespace::INetworkPlayerModel*)> __GlobalNamespace_BaseNetworkPlayerModel_PartyConfigSizeCheck;
  static_assert(sizeof(BaseNetworkPlayerModel::PartyConfig) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseNetworkPlayerModel::PartyConfig*, "", "BaseNetworkPlayerModel/PartyConfig");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::PartyConfig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
