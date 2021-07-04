// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SkinQuality
  struct SkinQuality;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Bounds
  struct Bounds;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SkinnedMeshRenderer
  // [NativeHeaderAttribute] Offset: D8F0A0
  class SkinnedMeshRenderer : public UnityEngine::Renderer {
    public:
    // Creating value type constructor for type: SkinnedMeshRenderer
    SkinnedMeshRenderer() noexcept {}
    // public UnityEngine.SkinQuality get_quality()
    // Offset: 0x1B37788
    UnityEngine::SkinQuality get_quality();
    // public System.Void set_quality(UnityEngine.SkinQuality value)
    // Offset: 0x1B377C8
    void set_quality(UnityEngine::SkinQuality value);
    // public System.Boolean get_updateWhenOffscreen()
    // Offset: 0x1B37818
    bool get_updateWhenOffscreen();
    // public System.Void set_updateWhenOffscreen(System.Boolean value)
    // Offset: 0x1B37858
    void set_updateWhenOffscreen(bool value);
    // public System.Boolean get_forceMatrixRecalculationPerRender()
    // Offset: 0x1B378A8
    bool get_forceMatrixRecalculationPerRender();
    // public System.Void set_forceMatrixRecalculationPerRender(System.Boolean value)
    // Offset: 0x1B378E8
    void set_forceMatrixRecalculationPerRender(bool value);
    // public UnityEngine.Transform get_rootBone()
    // Offset: 0x1B37938
    UnityEngine::Transform* get_rootBone();
    // public System.Void set_rootBone(UnityEngine.Transform value)
    // Offset: 0x1B37978
    void set_rootBone(UnityEngine::Transform* value);
    // public UnityEngine.Transform[] get_bones()
    // Offset: 0x1B379C8
    ::Array<UnityEngine::Transform*>* get_bones();
    // public System.Void set_bones(UnityEngine.Transform[] value)
    // Offset: 0x1B37A08
    void set_bones(::Array<UnityEngine::Transform*>* value);
    // public UnityEngine.Mesh get_sharedMesh()
    // Offset: 0x1B37A58
    UnityEngine::Mesh* get_sharedMesh();
    // public System.Void set_sharedMesh(UnityEngine.Mesh value)
    // Offset: 0x1B37A98
    void set_sharedMesh(UnityEngine::Mesh* value);
    // public System.Boolean get_skinnedMotionVectors()
    // Offset: 0x1B37AE8
    bool get_skinnedMotionVectors();
    // public System.Void set_skinnedMotionVectors(System.Boolean value)
    // Offset: 0x1B37B28
    void set_skinnedMotionVectors(bool value);
    // public System.Single GetBlendShapeWeight(System.Int32 index)
    // Offset: 0x1B37B78
    float GetBlendShapeWeight(int index);
    // public System.Void SetBlendShapeWeight(System.Int32 index, System.Single value)
    // Offset: 0x1B37BC8
    void SetBlendShapeWeight(int index, float value);
    // public System.Void BakeMesh(UnityEngine.Mesh mesh)
    // Offset: 0x1B37C28
    void BakeMesh(UnityEngine::Mesh* mesh);
    // private UnityEngine.Bounds GetLocalAABB()
    // Offset: 0x1B37C78
    UnityEngine::Bounds GetLocalAABB();
    // private System.Void SetLocalAABB(UnityEngine.Bounds b)
    // Offset: 0x1B37D34
    void SetLocalAABB(UnityEngine::Bounds b);
    // public UnityEngine.Bounds get_localBounds()
    // Offset: 0x1B37DD4
    UnityEngine::Bounds get_localBounds();
    // public System.Void set_localBounds(UnityEngine.Bounds value)
    // Offset: 0x1B37E54
    void set_localBounds(UnityEngine::Bounds value);
    // private System.Void GetLocalAABB_Injected(out UnityEngine.Bounds ret)
    // Offset: 0x1B37CE4
    void GetLocalAABB_Injected(UnityEngine::Bounds& ret);
    // private System.Void SetLocalAABB_Injected(ref UnityEngine.Bounds b)
    // Offset: 0x1B37D84
    void SetLocalAABB_Injected(UnityEngine::Bounds& b);
    // public System.Void .ctor()
    // Offset: 0x1B37EB4
    // Implemented from: UnityEngine.Renderer
    // Base method: System.Void Renderer::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SkinnedMeshRenderer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::SkinnedMeshRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SkinnedMeshRenderer*, creationType>()));
    }
  }; // UnityEngine.SkinnedMeshRenderer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SkinnedMeshRenderer*, "UnityEngine", "SkinnedMeshRenderer");
// Writing includes for template specializations
#include "UnityEngine/SkinQuality.hpp"
#include "UnityEngine/Transform.hpp"
#include "UnityEngine/Mesh.hpp"
#include "UnityEngine/Bounds.hpp"
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_quality
// Il2CppName: get_quality
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::SkinQuality (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_quality)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_quality", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_quality
// Il2CppName: set_quality
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(UnityEngine::SkinQuality)>(&UnityEngine::SkinnedMeshRenderer::set_quality)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_quality", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::SkinQuality>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_updateWhenOffscreen
// Il2CppName: get_updateWhenOffscreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_updateWhenOffscreen)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_updateWhenOffscreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_updateWhenOffscreen
// Il2CppName: set_updateWhenOffscreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(bool)>(&UnityEngine::SkinnedMeshRenderer::set_updateWhenOffscreen)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_updateWhenOffscreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_forceMatrixRecalculationPerRender
// Il2CppName: get_forceMatrixRecalculationPerRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_forceMatrixRecalculationPerRender)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_forceMatrixRecalculationPerRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_forceMatrixRecalculationPerRender
// Il2CppName: set_forceMatrixRecalculationPerRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(bool)>(&UnityEngine::SkinnedMeshRenderer::set_forceMatrixRecalculationPerRender)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_forceMatrixRecalculationPerRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_rootBone
// Il2CppName: get_rootBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_rootBone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_rootBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_rootBone
// Il2CppName: set_rootBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(UnityEngine::Transform*)>(&UnityEngine::SkinnedMeshRenderer::set_rootBone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_rootBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_bones
// Il2CppName: get_bones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Transform*>* (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_bones)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_bones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_bones
// Il2CppName: set_bones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(::Array<UnityEngine::Transform*>*)>(&UnityEngine::SkinnedMeshRenderer::set_bones)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_bones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Transform*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_sharedMesh
// Il2CppName: get_sharedMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Mesh* (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_sharedMesh)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_sharedMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_sharedMesh
// Il2CppName: set_sharedMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(UnityEngine::Mesh*)>(&UnityEngine::SkinnedMeshRenderer::set_sharedMesh)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_sharedMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Mesh*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_skinnedMotionVectors
// Il2CppName: get_skinnedMotionVectors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_skinnedMotionVectors)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_skinnedMotionVectors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_skinnedMotionVectors
// Il2CppName: set_skinnedMotionVectors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(bool)>(&UnityEngine::SkinnedMeshRenderer::set_skinnedMotionVectors)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_skinnedMotionVectors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::GetBlendShapeWeight
// Il2CppName: GetBlendShapeWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::SkinnedMeshRenderer::*)(int)>(&UnityEngine::SkinnedMeshRenderer::GetBlendShapeWeight)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "GetBlendShapeWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::SetBlendShapeWeight
// Il2CppName: SetBlendShapeWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(int, float)>(&UnityEngine::SkinnedMeshRenderer::SetBlendShapeWeight)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "SetBlendShapeWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::BakeMesh
// Il2CppName: BakeMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(UnityEngine::Mesh*)>(&UnityEngine::SkinnedMeshRenderer::BakeMesh)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "BakeMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Mesh*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::GetLocalAABB
// Il2CppName: GetLocalAABB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::GetLocalAABB)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "GetLocalAABB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::SetLocalAABB
// Il2CppName: SetLocalAABB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(UnityEngine::Bounds)>(&UnityEngine::SkinnedMeshRenderer::SetLocalAABB)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "SetLocalAABB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Bounds>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::get_localBounds
// Il2CppName: get_localBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::SkinnedMeshRenderer::*)()>(&UnityEngine::SkinnedMeshRenderer::get_localBounds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "get_localBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::set_localBounds
// Il2CppName: set_localBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(UnityEngine::Bounds)>(&UnityEngine::SkinnedMeshRenderer::set_localBounds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "set_localBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Bounds>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::GetLocalAABB_Injected
// Il2CppName: GetLocalAABB_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(UnityEngine::Bounds&)>(&UnityEngine::SkinnedMeshRenderer::GetLocalAABB_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "GetLocalAABB_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Bounds&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::SetLocalAABB_Injected
// Il2CppName: SetLocalAABB_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SkinnedMeshRenderer::*)(UnityEngine::Bounds&)>(&UnityEngine::SkinnedMeshRenderer::SetLocalAABB_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SkinnedMeshRenderer*), "SetLocalAABB_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Bounds&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SkinnedMeshRenderer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
