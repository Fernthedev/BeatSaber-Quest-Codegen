// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformNetworkPlayerModel
#include "GlobalNamespace/PlatformNetworkPlayerModel.hpp"
// Including type: BaseNetworkPlayerModel/PartyConfig
#include "GlobalNamespace/BaseNetworkPlayerModel_PartyConfig.hpp"
// Including type: INetworkPlayerModelPartyConfig`1
#include "GlobalNamespace/INetworkPlayerModelPartyConfig_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: PlatformNetworkPlayerModel/CreatePartyConfig
  class PlatformNetworkPlayerModel::CreatePartyConfig : public GlobalNamespace::BaseNetworkPlayerModel::PartyConfig/*, public GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::PlatformNetworkPlayerModel*>*/ {
    public:
    // public System.Boolean isPublic
    // Size: 0x1
    // Offset: 0x38
    bool isPublic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CreatePartyConfig
    CreatePartyConfig(bool isPublic_ = {}) noexcept : isPublic{isPublic_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::PlatformNetworkPlayerModel*>
    operator GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::PlatformNetworkPlayerModel*>() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::PlatformNetworkPlayerModel*>*>(this);
    }
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return isPublic;
    }
    // public System.Void .ctor()
    // Offset: 0x1052B54
    // Implemented from: BaseNetworkPlayerModel/PartyConfig
    // Base method: System.Void PartyConfig::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformNetworkPlayerModel::CreatePartyConfig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlatformNetworkPlayerModel::CreatePartyConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformNetworkPlayerModel::CreatePartyConfig*, creationType>()));
    }
  }; // PlatformNetworkPlayerModel/CreatePartyConfig
  #pragma pack(pop)
  static check_size<sizeof(PlatformNetworkPlayerModel::CreatePartyConfig), 56 + sizeof(bool)> __GlobalNamespace_PlatformNetworkPlayerModel_CreatePartyConfigSizeCheck;
  static_assert(sizeof(PlatformNetworkPlayerModel::CreatePartyConfig) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformNetworkPlayerModel::CreatePartyConfig*, "", "PlatformNetworkPlayerModel/CreatePartyConfig");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::PlatformNetworkPlayerModel::CreatePartyConfig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
