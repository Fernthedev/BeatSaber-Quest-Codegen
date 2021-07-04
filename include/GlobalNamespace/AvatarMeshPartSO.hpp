// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AvatarPartSO`1
#include "GlobalNamespace/AvatarPartSO_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: AvatarMeshPartSO
  class AvatarMeshPartSO : public GlobalNamespace::AvatarPartSO_1<UnityEngine::Mesh*> {
    public:
    // Creating value type constructor for type: AvatarMeshPartSO
    AvatarMeshPartSO() noexcept {}
    // public UnityEngine.Mesh get_mesh()
    // Offset: 0x11353A0
    UnityEngine::Mesh* get_mesh();
    // public System.Void .ctor()
    // Offset: 0x11353E4
    // Implemented from: AvatarPartSO`1
    // Base method: System.Void AvatarPartSO_1::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarMeshPartSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarMeshPartSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarMeshPartSO*, creationType>()));
    }
  }; // AvatarMeshPartSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarMeshPartSO*, "", "AvatarMeshPartSO");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::AvatarMeshPartSO::get_mesh
// Il2CppName: get_mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Mesh* (GlobalNamespace::AvatarMeshPartSO::*)()>(&GlobalNamespace::AvatarMeshPartSO::get_mesh)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarMeshPartSO*), "get_mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarMeshPartSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
