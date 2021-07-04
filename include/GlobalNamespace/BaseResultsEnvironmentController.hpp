// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BaseResultsEnvironmentController
  class BaseResultsEnvironmentController : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: BaseResultsEnvironmentController
    BaseResultsEnvironmentController() noexcept {}
    // public System.Void Activate(System.Boolean immediately)
    // Offset: 0x11B93A8
    void Activate(bool immediately);
    // public System.Void Deactivate(System.Boolean immediately)
    // Offset: 0x11B93D0
    void Deactivate(bool immediately);
    // public System.Void Setup(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xFFFFFFFF
    void Setup(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // protected System.Void .ctor()
    // Offset: 0x11B93F8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseResultsEnvironmentController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseResultsEnvironmentController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseResultsEnvironmentController*, creationType>()));
    }
  }; // BaseResultsEnvironmentController
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseResultsEnvironmentController*, "", "BaseResultsEnvironmentController");
// Writing includes for template specializations
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BaseResultsEnvironmentController::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseResultsEnvironmentController::*)(bool)>(&GlobalNamespace::BaseResultsEnvironmentController::Activate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseResultsEnvironmentController*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseResultsEnvironmentController::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseResultsEnvironmentController::*)(bool)>(&GlobalNamespace::BaseResultsEnvironmentController::Deactivate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseResultsEnvironmentController*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseResultsEnvironmentController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseResultsEnvironmentController::*)(GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::BaseResultsEnvironmentController::Setup)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseResultsEnvironmentController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IDifficultyBeatmap*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseResultsEnvironmentController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
