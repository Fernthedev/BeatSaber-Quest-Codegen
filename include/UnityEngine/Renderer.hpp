// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Bounds
  struct Bounds;
  // Forward declaring type: MotionVectorGenerationMode
  struct MotionVectorGenerationMode;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ShadowCastingMode
  struct ShadowCastingMode;
  // Forward declaring type: LightProbeUsage
  struct LightProbeUsage;
  // Forward declaring type: ReflectionProbeUsage
  struct ReflectionProbeUsage;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Renderer
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: DADF5C
  // [RequireComponent] Offset: DADF5C
  // [NativeHeaderAttribute] Offset: DADF5C
  // [NativeHeaderAttribute] Offset: DADF5C
  class Renderer : public UnityEngine::Component {
    public:
    // Creating value type constructor for type: Renderer
    Renderer() noexcept {}
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x1C46DB8
    UnityEngine::Bounds get_bounds();
    // public System.Boolean get_enabled()
    // Offset: 0x1C47174
    bool get_enabled();
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0x1C471B4
    void set_enabled(bool value);
    // public System.Boolean get_isVisible()
    // Offset: 0x1C47204
    bool get_isVisible();
    // public System.Void set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode value)
    // Offset: 0x1C47244
    void set_shadowCastingMode(UnityEngine::Rendering::ShadowCastingMode value);
    // public System.Void set_receiveShadows(System.Boolean value)
    // Offset: 0x1C47294
    void set_receiveShadows(bool value);
    // public System.Void set_motionVectorGenerationMode(UnityEngine.MotionVectorGenerationMode value)
    // Offset: 0x1C472E4
    void set_motionVectorGenerationMode(UnityEngine::MotionVectorGenerationMode value);
    // public System.Void set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage value)
    // Offset: 0x1C47334
    void set_lightProbeUsage(UnityEngine::Rendering::LightProbeUsage value);
    // public System.Void set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage value)
    // Offset: 0x1C47384
    void set_reflectionProbeUsage(UnityEngine::Rendering::ReflectionProbeUsage value);
    // public System.Int32 get_sortingLayerID()
    // Offset: 0x1C473D4
    int get_sortingLayerID();
    // public System.Void set_sortingLayerID(System.Int32 value)
    // Offset: 0x1C47414
    void set_sortingLayerID(int value);
    // public System.Int32 get_sortingOrder()
    // Offset: 0x1C47464
    int get_sortingOrder();
    // public System.Void set_sortingOrder(System.Int32 value)
    // Offset: 0x1C474A4
    void set_sortingOrder(int value);
    // public System.Void set_allowOcclusionWhenDynamic(System.Boolean value)
    // Offset: 0x1C474F4
    void set_allowOcclusionWhenDynamic(bool value);
    // public System.Boolean get_isPartOfStaticBatch()
    // Offset: 0x1C47544
    bool get_isPartOfStaticBatch();
    // public UnityEngine.Material[] get_materials()
    // Offset: 0x1C47604
    ::Array<UnityEngine::Material*>* get_materials();
    // public System.Void set_materials(UnityEngine.Material[] value)
    // Offset: 0x1C47644
    void set_materials(::Array<UnityEngine::Material*>* value);
    // public UnityEngine.Material get_material()
    // Offset: 0x1C47694
    UnityEngine::Material* get_material();
    // public System.Void set_material(UnityEngine.Material value)
    // Offset: 0x1C476D4
    void set_material(UnityEngine::Material* value);
    // public UnityEngine.Material get_sharedMaterial()
    // Offset: 0x1C47724
    UnityEngine::Material* get_sharedMaterial();
    // public System.Void set_sharedMaterial(UnityEngine.Material value)
    // Offset: 0x1C47764
    void set_sharedMaterial(UnityEngine::Material* value);
    // public UnityEngine.Material[] get_sharedMaterials()
    // Offset: 0x1C477B4
    ::Array<UnityEngine::Material*>* get_sharedMaterials();
    // public System.Void set_sharedMaterials(UnityEngine.Material[] value)
    // Offset: 0x1C477F4
    void set_sharedMaterials(::Array<UnityEngine::Material*>* value);
    // private UnityEngine.Material GetMaterial()
    // Offset: 0x1C46E74
    UnityEngine::Material* GetMaterial();
    // private UnityEngine.Material GetSharedMaterial()
    // Offset: 0x1C46EB4
    UnityEngine::Material* GetSharedMaterial();
    // private System.Void SetMaterial(UnityEngine.Material m)
    // Offset: 0x1C46EF4
    void SetMaterial(UnityEngine::Material* m);
    // private UnityEngine.Material[] GetMaterialArray()
    // Offset: 0x1C46F44
    ::Array<UnityEngine::Material*>* GetMaterialArray();
    // private System.Void CopySharedMaterialArray(out UnityEngine.Material[] m)
    // Offset: 0x1C46F84
    void CopySharedMaterialArray(ByRef<::Array<UnityEngine::Material*>*> m);
    // private System.Void SetMaterialArray(UnityEngine.Material[] m)
    // Offset: 0x1C46FD4
    void SetMaterialArray(::Array<UnityEngine::Material*>* m);
    // System.Void Internal_SetPropertyBlock(UnityEngine.MaterialPropertyBlock properties)
    // Offset: 0x1C47024
    void Internal_SetPropertyBlock(UnityEngine::MaterialPropertyBlock* properties);
    // System.Void Internal_SetPropertyBlockMaterialIndex(UnityEngine.MaterialPropertyBlock properties, System.Int32 materialIndex)
    // Offset: 0x1C47074
    void Internal_SetPropertyBlockMaterialIndex(UnityEngine::MaterialPropertyBlock* properties, int materialIndex);
    // public System.Void SetPropertyBlock(UnityEngine.MaterialPropertyBlock properties)
    // Offset: 0x1C470CC
    void SetPropertyBlock(UnityEngine::MaterialPropertyBlock* properties);
    // public System.Void SetPropertyBlock(UnityEngine.MaterialPropertyBlock properties, System.Int32 materialIndex)
    // Offset: 0x1C4711C
    void SetPropertyBlock(UnityEngine::MaterialPropertyBlock* properties, int materialIndex);
    // private System.Int32 GetMaterialCount()
    // Offset: 0x1C47584
    int GetMaterialCount();
    // private UnityEngine.Material[] GetSharedMaterialArray()
    // Offset: 0x1C475C4
    ::Array<UnityEngine::Material*>* GetSharedMaterialArray();
    // public System.Void GetSharedMaterials(System.Collections.Generic.List`1<UnityEngine.Material> m)
    // Offset: 0x1C47844
    void GetSharedMaterials(System::Collections::Generic::List_1<UnityEngine::Material*>* m);
    // private System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
    // Offset: 0x1C46E24
    void get_bounds_Injected(ByRef<UnityEngine::Bounds> ret);
    // public System.Void .ctor()
    // Offset: 0x1C4795C
    // Implemented from: UnityEngine.Component
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Renderer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Renderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Renderer*, creationType>()));
    }
  }; // UnityEngine.Renderer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Renderer*, "UnityEngine", "Renderer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Renderer::get_bounds
// Il2CppName: get_bounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_bounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_bounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_enabled
// Il2CppName: get_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_enabled
// Il2CppName: set_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(bool)>(&UnityEngine::Renderer::set_enabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_isVisible
// Il2CppName: get_isVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_isVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_isVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_shadowCastingMode
// Il2CppName: set_shadowCastingMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(UnityEngine::Rendering::ShadowCastingMode)>(&UnityEngine::Renderer::set_shadowCastingMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ShadowCastingMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_shadowCastingMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_receiveShadows
// Il2CppName: set_receiveShadows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(bool)>(&UnityEngine::Renderer::set_receiveShadows)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_receiveShadows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_motionVectorGenerationMode
// Il2CppName: set_motionVectorGenerationMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(UnityEngine::MotionVectorGenerationMode)>(&UnityEngine::Renderer::set_motionVectorGenerationMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "MotionVectorGenerationMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_motionVectorGenerationMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_lightProbeUsage
// Il2CppName: set_lightProbeUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(UnityEngine::Rendering::LightProbeUsage)>(&UnityEngine::Renderer::set_lightProbeUsage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "LightProbeUsage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_lightProbeUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_reflectionProbeUsage
// Il2CppName: set_reflectionProbeUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(UnityEngine::Rendering::ReflectionProbeUsage)>(&UnityEngine::Renderer::set_reflectionProbeUsage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ReflectionProbeUsage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_reflectionProbeUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_sortingLayerID
// Il2CppName: get_sortingLayerID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_sortingLayerID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_sortingLayerID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_sortingLayerID
// Il2CppName: set_sortingLayerID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(int)>(&UnityEngine::Renderer::set_sortingLayerID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_sortingLayerID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_sortingOrder
// Il2CppName: get_sortingOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_sortingOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_sortingOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_sortingOrder
// Il2CppName: set_sortingOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(int)>(&UnityEngine::Renderer::set_sortingOrder)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_sortingOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_allowOcclusionWhenDynamic
// Il2CppName: set_allowOcclusionWhenDynamic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(bool)>(&UnityEngine::Renderer::set_allowOcclusionWhenDynamic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_allowOcclusionWhenDynamic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_isPartOfStaticBatch
// Il2CppName: get_isPartOfStaticBatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_isPartOfStaticBatch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_isPartOfStaticBatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_materials
// Il2CppName: get_materials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Material*>* (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_materials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_materials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_materials
// Il2CppName: set_materials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::Array<UnityEngine::Material*>*)>(&UnityEngine::Renderer::set_materials)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_materials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_material
// Il2CppName: get_material
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_material)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_material", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_material
// Il2CppName: set_material
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(UnityEngine::Material*)>(&UnityEngine::Renderer::set_material)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_material", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_sharedMaterial
// Il2CppName: get_sharedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_sharedMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_sharedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_sharedMaterial
// Il2CppName: set_sharedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(UnityEngine::Material*)>(&UnityEngine::Renderer::set_sharedMaterial)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_sharedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_sharedMaterials
// Il2CppName: get_sharedMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Material*>* (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_sharedMaterials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_sharedMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_sharedMaterials
// Il2CppName: set_sharedMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::Array<UnityEngine::Material*>*)>(&UnityEngine::Renderer::set_sharedMaterials)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_sharedMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetMaterial
// Il2CppName: GetMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::GetMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetSharedMaterial
// Il2CppName: GetSharedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::GetSharedMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetSharedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::SetMaterial
// Il2CppName: SetMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(UnityEngine::Material*)>(&UnityEngine::Renderer::SetMaterial)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "SetMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetMaterialArray
// Il2CppName: GetMaterialArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Material*>* (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::GetMaterialArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetMaterialArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::CopySharedMaterialArray
// Il2CppName: CopySharedMaterialArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(ByRef<::Array<UnityEngine::Material*>*>)>(&UnityEngine::Renderer::CopySharedMaterialArray)> {
  static const MethodInfo* get() {
    static auto* m = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "CopySharedMaterialArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::SetMaterialArray
// Il2CppName: SetMaterialArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::Array<UnityEngine::Material*>*)>(&UnityEngine::Renderer::SetMaterialArray)> {
  static const MethodInfo* get() {
    static auto* m = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "SetMaterialArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::Internal_SetPropertyBlock
// Il2CppName: Internal_SetPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(UnityEngine::MaterialPropertyBlock*)>(&UnityEngine::Renderer::Internal_SetPropertyBlock)> {
  static const MethodInfo* get() {
    static auto* properties = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "Internal_SetPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{properties});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::Internal_SetPropertyBlockMaterialIndex
// Il2CppName: Internal_SetPropertyBlockMaterialIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(UnityEngine::MaterialPropertyBlock*, int)>(&UnityEngine::Renderer::Internal_SetPropertyBlockMaterialIndex)> {
  static const MethodInfo* get() {
    static auto* properties = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    static auto* materialIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "Internal_SetPropertyBlockMaterialIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{properties, materialIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::SetPropertyBlock
// Il2CppName: SetPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(UnityEngine::MaterialPropertyBlock*)>(&UnityEngine::Renderer::SetPropertyBlock)> {
  static const MethodInfo* get() {
    static auto* properties = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "SetPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{properties});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::SetPropertyBlock
// Il2CppName: SetPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(UnityEngine::MaterialPropertyBlock*, int)>(&UnityEngine::Renderer::SetPropertyBlock)> {
  static const MethodInfo* get() {
    static auto* properties = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    static auto* materialIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "SetPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{properties, materialIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetMaterialCount
// Il2CppName: GetMaterialCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::GetMaterialCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetMaterialCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetSharedMaterialArray
// Il2CppName: GetSharedMaterialArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Material*>* (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::GetSharedMaterialArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetSharedMaterialArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetSharedMaterials
// Il2CppName: GetSharedMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(System::Collections::Generic::List_1<UnityEngine::Material*>*)>(&UnityEngine::Renderer::GetSharedMaterials)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Material")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetSharedMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_bounds_Injected
// Il2CppName: get_bounds_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(ByRef<UnityEngine::Bounds>)>(&UnityEngine::Renderer::get_bounds_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_bounds_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
