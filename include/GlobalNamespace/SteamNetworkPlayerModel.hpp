// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformNetworkPlayerModel
#include "GlobalNamespace/PlatformNetworkPlayerModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: SteamNetworkPlayerModel
  class SteamNetworkPlayerModel : public GlobalNamespace::PlatformNetworkPlayerModel {
    public:
    // Creating value type constructor for type: SteamNetworkPlayerModel
    SteamNetworkPlayerModel() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1162AA4
    // Implemented from: PlatformNetworkPlayerModel
    // Base method: System.Void PlatformNetworkPlayerModel::.ctor()
    // Base method: System.Void BaseNetworkPlayerModel::.ctor()
    // Base method: System.Void StandaloneMonobehavior::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamNetworkPlayerModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamNetworkPlayerModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamNetworkPlayerModel*, creationType>()));
    }
  }; // SteamNetworkPlayerModel
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamNetworkPlayerModel*, "", "SteamNetworkPlayerModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamNetworkPlayerModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
