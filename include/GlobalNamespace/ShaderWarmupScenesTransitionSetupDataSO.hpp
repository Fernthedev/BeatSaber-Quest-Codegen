// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SingleFixedSceneScenesTransitionSetupDataSO
#include "GlobalNamespace/SingleFixedSceneScenesTransitionSetupDataSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ShaderWarmupSceneSetupData
  class ShaderWarmupSceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: ShaderWarmupScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class ShaderWarmupScenesTransitionSetupDataSO : public GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
    public:
    // Creating value type constructor for type: ShaderWarmupScenesTransitionSetupDataSO
    ShaderWarmupScenesTransitionSetupDataSO() noexcept {}
    // public System.Void Init(ShaderWarmupSceneSetupData shaderWarmupSceneSetupData)
    // Offset: 0x1095490
    void Init(GlobalNamespace::ShaderWarmupSceneSetupData* shaderWarmupSceneSetupData);
    // public System.Void .ctor()
    // Offset: 0x1095498
    // Implemented from: SingleFixedSceneScenesTransitionSetupDataSO
    // Base method: System.Void SingleFixedSceneScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderWarmupScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderWarmupScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // ShaderWarmupScenesTransitionSetupDataSO
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO*, "", "ShaderWarmupScenesTransitionSetupDataSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::*)(GlobalNamespace::ShaderWarmupSceneSetupData*)>(&GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::Init)> {
  static const MethodInfo* get() {
    static auto* shaderWarmupSceneSetupData = &::il2cpp_utils::GetClassFromName("", "ShaderWarmupSceneSetupData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shaderWarmupSceneSetupData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
