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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyBlockController
  class MaterialPropertyBlockController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Renderer[] _renderers
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::Renderer*>* renderers;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Renderer*>*) == 0x8);
    // private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::MaterialPropertyBlock* materialPropertyBlock;
    // Field size check
    static_assert(sizeof(UnityEngine::MaterialPropertyBlock*) == 0x8);
    // Creating value type constructor for type: MaterialPropertyBlockController
    MaterialPropertyBlockController(::Array<UnityEngine::Renderer*>* renderers_ = {}, UnityEngine::MaterialPropertyBlock* materialPropertyBlock_ = {}) noexcept : renderers{renderers_}, materialPropertyBlock{materialPropertyBlock_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Renderer[] get_renderers()
    // Offset: 0x1D8F094
    ::Array<UnityEngine::Renderer*>* get_renderers();
    // public UnityEngine.MaterialPropertyBlock get_materialPropertyBlock()
    // Offset: 0x1D8EE14
    UnityEngine::MaterialPropertyBlock* get_materialPropertyBlock();
    // public System.Void ApplyChanges()
    // Offset: 0x1D8ECDC
    void ApplyChanges();
    // public System.Void .ctor()
    // Offset: 0x1D8F09C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyBlockController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MaterialPropertyBlockController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyBlockController*, creationType>()));
    }
  }; // MaterialPropertyBlockController
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyBlockController), 32 + sizeof(UnityEngine::MaterialPropertyBlock*)> __GlobalNamespace_MaterialPropertyBlockControllerSizeCheck;
  static_assert(sizeof(MaterialPropertyBlockController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyBlockController*, "", "MaterialPropertyBlockController");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockController::get_renderers
// Il2CppName: get_renderers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Renderer*>* (GlobalNamespace::MaterialPropertyBlockController::*)()>(&GlobalNamespace::MaterialPropertyBlockController::get_renderers)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockController*), "get_renderers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockController::get_materialPropertyBlock
// Il2CppName: get_materialPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::MaterialPropertyBlock* (GlobalNamespace::MaterialPropertyBlockController::*)()>(&GlobalNamespace::MaterialPropertyBlockController::get_materialPropertyBlock)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockController*), "get_materialPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockController::ApplyChanges
// Il2CppName: ApplyChanges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockController::*)()>(&GlobalNamespace::MaterialPropertyBlockController::ApplyChanges)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockController*), "ApplyChanges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
