// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSkeletonRenderer
#include "GlobalNamespace/OVRSkeletonRenderer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: LineRenderer
  class LineRenderer;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: OVRSkeletonRenderer/BoneVisualization
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRSkeletonRenderer::BoneVisualization : public ::Il2CppObject {
    public:
    // private UnityEngine.GameObject BoneGO
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::GameObject* BoneGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.Transform BoneBegin
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* BoneBegin;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform BoneEnd
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* BoneEnd;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.LineRenderer Line
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::LineRenderer* Line;
    // Field size check
    static_assert(sizeof(UnityEngine::LineRenderer*) == 0x8);
    // private UnityEngine.Material RenderMaterial
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Material* RenderMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material SystemGestureMaterial
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Material* SystemGestureMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: BoneVisualization
    BoneVisualization(UnityEngine::GameObject* BoneGO_ = {}, UnityEngine::Transform* BoneBegin_ = {}, UnityEngine::Transform* BoneEnd_ = {}, UnityEngine::LineRenderer* Line_ = {}, UnityEngine::Material* RenderMaterial_ = {}, UnityEngine::Material* SystemGestureMaterial_ = {}) noexcept : BoneGO{BoneGO_}, BoneBegin{BoneBegin_}, BoneEnd{BoneEnd_}, Line{Line_}, RenderMaterial{RenderMaterial_}, SystemGestureMaterial{SystemGestureMaterial_} {}
    // Get instance field reference: private UnityEngine.GameObject BoneGO
    UnityEngine::GameObject*& dyn_BoneGO();
    // Get instance field reference: private UnityEngine.Transform BoneBegin
    UnityEngine::Transform*& dyn_BoneBegin();
    // Get instance field reference: private UnityEngine.Transform BoneEnd
    UnityEngine::Transform*& dyn_BoneEnd();
    // Get instance field reference: private UnityEngine.LineRenderer Line
    UnityEngine::LineRenderer*& dyn_Line();
    // Get instance field reference: private UnityEngine.Material RenderMaterial
    UnityEngine::Material*& dyn_RenderMaterial();
    // Get instance field reference: private UnityEngine.Material SystemGestureMaterial
    UnityEngine::Material*& dyn_SystemGestureMaterial();
    // public System.Void .ctor(UnityEngine.GameObject rootGO, UnityEngine.Material renderMat, UnityEngine.Material systemGestureMat, System.Single scale, UnityEngine.Transform begin, UnityEngine.Transform end)
    // Offset: 0x1F48B2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSkeletonRenderer::BoneVisualization* New_ctor(UnityEngine::GameObject* rootGO, UnityEngine::Material* renderMat, UnityEngine::Material* systemGestureMat, float scale, UnityEngine::Transform* begin, UnityEngine::Transform* end) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRSkeletonRenderer::BoneVisualization::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSkeletonRenderer::BoneVisualization*, creationType>(rootGO, renderMat, systemGestureMat, scale, begin, end)));
    }
    // public System.Void Update(System.Single scale, System.Boolean shouldRender, System.Boolean shouldUseSystemGestureMaterial, OVRSkeletonRenderer/ConfidenceBehavior confidenceBehavior, OVRSkeletonRenderer/SystemGestureBehavior systemGestureBehavior)
    // Offset: 0x1F49078
    void Update(float scale, bool shouldRender, bool shouldUseSystemGestureMaterial, GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior confidenceBehavior, GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior systemGestureBehavior);
  }; // OVRSkeletonRenderer/BoneVisualization
  #pragma pack(pop)
  static check_size<sizeof(OVRSkeletonRenderer::BoneVisualization), 56 + sizeof(UnityEngine::Material*)> __GlobalNamespace_OVRSkeletonRenderer_BoneVisualizationSizeCheck;
  static_assert(sizeof(OVRSkeletonRenderer::BoneVisualization) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSkeletonRenderer::BoneVisualization*, "", "OVRSkeletonRenderer/BoneVisualization");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::BoneVisualization::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::BoneVisualization::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeletonRenderer::BoneVisualization::*)(float, bool, bool, GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior, GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior)>(&GlobalNamespace::OVRSkeletonRenderer::BoneVisualization::Update)> {
  static const MethodInfo* get() {
    static auto* scale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shouldRender = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* shouldUseSystemGestureMaterial = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* confidenceBehavior = &::il2cpp_utils::GetClassFromName("", "OVRSkeletonRenderer/ConfidenceBehavior")->byval_arg;
    static auto* systemGestureBehavior = &::il2cpp_utils::GetClassFromName("", "OVRSkeletonRenderer/SystemGestureBehavior")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer::BoneVisualization*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scale, shouldRender, shouldUseSystemGestureMaterial, confidenceBehavior, systemGestureBehavior});
  }
};
