// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassLightTypeSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassLightTypeSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.Int32 _renderingPriority
    // Size: 0x4
    // Offset: 0x18
    int renderingPriority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: renderingPriority and: material
    char __padding0[0x4] = {};
    // private UnityEngine.Material _material
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: BloomPrePassLightTypeSO
    BloomPrePassLightTypeSO(int renderingPriority_ = {}, UnityEngine::Material* material_ = {}) noexcept : renderingPriority{renderingPriority_}, material{material_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private System.Int32 _renderingPriority
    int _get__renderingPriority();
    // Set instance field: private System.Int32 _renderingPriority
    void _set__renderingPriority(int value);
    // Get instance field: private UnityEngine.Material _material
    UnityEngine::Material* _get__material();
    // Set instance field: private UnityEngine.Material _material
    void _set__material(UnityEngine::Material* value);
    // public System.Int32 get_renderingPriority()
    // Offset: 0x1E145B8
    int get_renderingPriority();
    // public UnityEngine.Material get_material()
    // Offset: 0x1E145C0
    UnityEngine::Material* get_material();
    // public System.Void .ctor()
    // Offset: 0x1E145C8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassLightTypeSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassLightTypeSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassLightTypeSO*, creationType>()));
    }
  }; // BloomPrePassLightTypeSO
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassLightTypeSO), 32 + sizeof(UnityEngine::Material*)> __GlobalNamespace_BloomPrePassLightTypeSOSizeCheck;
  static_assert(sizeof(BloomPrePassLightTypeSO) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassLightTypeSO*, "", "BloomPrePassLightTypeSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLightTypeSO::get_renderingPriority
// Il2CppName: get_renderingPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BloomPrePassLightTypeSO::*)()>(&GlobalNamespace::BloomPrePassLightTypeSO::get_renderingPriority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassLightTypeSO*), "get_renderingPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLightTypeSO::get_material
// Il2CppName: get_material
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (GlobalNamespace::BloomPrePassLightTypeSO::*)()>(&GlobalNamespace::BloomPrePassLightTypeSO::get_material)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassLightTypeSO*), "get_material", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassLightTypeSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
