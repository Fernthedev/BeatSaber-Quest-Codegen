// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ObstacleController
#include "GlobalNamespace/ObstacleController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerObstacleClippingController
  class MultiplayerConnectedPlayerObstacleClippingController;
  // Forward declaring type: ObstacleData
  class ObstacleData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x128
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerObstacleController
  class MultiplayerConnectedPlayerObstacleController : public GlobalNamespace::ObstacleController {
    public:
    // Nested type: GlobalNamespace::MultiplayerConnectedPlayerObstacleController::Pool
    class Pool;
    // private MultiplayerConnectedPlayerObstacleClippingController _multiplayerConnectedPlayerObstacleClippingController
    // Size: 0x8
    // Offset: 0x120
    GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController* multiplayerConnectedPlayerObstacleClippingController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*) == 0x8);
    // Creating value type constructor for type: MultiplayerConnectedPlayerObstacleController
    MultiplayerConnectedPlayerObstacleController(GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController* multiplayerConnectedPlayerObstacleClippingController_ = {}) noexcept : multiplayerConnectedPlayerObstacleClippingController{multiplayerConnectedPlayerObstacleClippingController_} {}
    // public override System.Void Init(ObstacleData obstacleData, System.Single worldRotation, UnityEngine.Vector3 startPos, UnityEngine.Vector3 midPos, UnityEngine.Vector3 endPos, System.Single move1Duration, System.Single move2Duration, System.Single singleLineWidth, System.Single height)
    // Offset: 0x114F1F0
    // Implemented from: ObstacleController
    // Base method: System.Void ObstacleController::Init(ObstacleData obstacleData, System.Single worldRotation, UnityEngine.Vector3 startPos, UnityEngine.Vector3 midPos, UnityEngine.Vector3 endPos, System.Single move1Duration, System.Single move2Duration, System.Single singleLineWidth, System.Single height)
    void Init(GlobalNamespace::ObstacleData* obstacleData, float worldRotation, UnityEngine::Vector3 startPos, UnityEngine::Vector3 midPos, UnityEngine::Vector3 endPos, float move1Duration, float move2Duration, float singleLineWidth, float height);
    // public System.Void .ctor()
    // Offset: 0x114F41C
    // Implemented from: ObstacleController
    // Base method: System.Void ObstacleController::.ctor()
    // Base method: System.Void ObstacleControllerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerObstacleController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerObstacleController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerObstacleController*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerObstacleController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerObstacleController), 288 + sizeof(GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*)> __GlobalNamespace_MultiplayerConnectedPlayerObstacleControllerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerObstacleController) == 0x128);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerObstacleController*, "", "MultiplayerConnectedPlayerObstacleController");
// Writing includes for template specializations
#include "GlobalNamespace/ObstacleData.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerObstacleController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerObstacleController::*)(GlobalNamespace::ObstacleData*, float, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float, float, float, float)>(&GlobalNamespace::MultiplayerConnectedPlayerObstacleController::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerObstacleController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::ObstacleData*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerObstacleController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
