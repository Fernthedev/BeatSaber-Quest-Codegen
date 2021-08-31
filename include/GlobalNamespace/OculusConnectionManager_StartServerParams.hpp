// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusConnectionManager
#include "GlobalNamespace/OculusConnectionManager.hpp"
// Including type: IConnectionInitParams`1
#include "GlobalNamespace/IConnectionInitParams_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OculusNetworkPlayerModel
  class OculusNetworkPlayerModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OculusConnectionManager/StartServerParams
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusConnectionManager::StartServerParams : public ::Il2CppObject/*, public GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::OculusConnectionManager*>*/ {
    public:
    // public OculusNetworkPlayerModel oculusNetworkPlayerModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::OculusNetworkPlayerModel* oculusNetworkPlayerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusNetworkPlayerModel*) == 0x8);
    // Creating value type constructor for type: StartServerParams
    StartServerParams(GlobalNamespace::OculusNetworkPlayerModel* oculusNetworkPlayerModel_ = {}) noexcept : oculusNetworkPlayerModel{oculusNetworkPlayerModel_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::OculusConnectionManager*>
    operator GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::OculusConnectionManager*>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::OculusConnectionManager*>*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::OculusNetworkPlayerModel*
    constexpr operator GlobalNamespace::OculusNetworkPlayerModel*() const noexcept {
      return oculusNetworkPlayerModel;
    }
    // Get instance field: public OculusNetworkPlayerModel oculusNetworkPlayerModel
    GlobalNamespace::OculusNetworkPlayerModel* _get_oculusNetworkPlayerModel();
    // Set instance field: public OculusNetworkPlayerModel oculusNetworkPlayerModel
    void _set_oculusNetworkPlayerModel(GlobalNamespace::OculusNetworkPlayerModel* value);
    // public System.Void .ctor()
    // Offset: 0x12397CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusConnectionManager::StartServerParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusConnectionManager::StartServerParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusConnectionManager::StartServerParams*, creationType>()));
    }
  }; // OculusConnectionManager/StartServerParams
  #pragma pack(pop)
  static check_size<sizeof(OculusConnectionManager::StartServerParams), 16 + sizeof(GlobalNamespace::OculusNetworkPlayerModel*)> __GlobalNamespace_OculusConnectionManager_StartServerParamsSizeCheck;
  static_assert(sizeof(OculusConnectionManager::StartServerParams) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusConnectionManager::StartServerParams*, "", "OculusConnectionManager/StartServerParams");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusConnectionManager::StartServerParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
