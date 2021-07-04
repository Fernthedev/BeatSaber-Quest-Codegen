// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: BatchRendererCullingOutput
  struct BatchRendererCullingOutput;
  // Forward declaring type: LODParameters
  struct LODParameters;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.BatchRendererGroup
  // [RequiredByNativeCodeAttribute] Offset: D9202C
  // [NativeHeaderAttribute] Offset: D9202C
  // [NativeHeaderAttribute] Offset: D9202C
  class BatchRendererGroup : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling
    class OnPerformCulling;
    // private System.IntPtr m_GroupHandle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_GroupHandle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling m_PerformCulling
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling* m_PerformCulling;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling*) == 0x8);
    // Creating value type constructor for type: BatchRendererGroup
    BatchRendererGroup(System::IntPtr m_GroupHandle_ = {}, UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling* m_PerformCulling_ = {}) noexcept : m_GroupHandle{m_GroupHandle_}, m_PerformCulling{m_PerformCulling_} {}
    // static private System.Void InvokeOnPerformCulling(UnityEngine.Rendering.BatchRendererGroup group, ref UnityEngine.Rendering.BatchRendererCullingOutput context, ref UnityEngine.Rendering.LODParameters lodParameters)
    // Offset: 0x1B2C694
    static void InvokeOnPerformCulling(UnityEngine::Rendering::BatchRendererGroup* group, UnityEngine::Rendering::BatchRendererCullingOutput& context, UnityEngine::Rendering::LODParameters& lodParameters);
  }; // UnityEngine.Rendering.BatchRendererGroup
  #pragma pack(pop)
  static check_size<sizeof(BatchRendererGroup), 24 + sizeof(UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling*)> __UnityEngine_Rendering_BatchRendererGroupSizeCheck;
  static_assert(sizeof(BatchRendererGroup) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::BatchRendererGroup*, "UnityEngine.Rendering", "BatchRendererGroup");
// Writing includes for template specializations
#include "UnityEngine/Rendering/BatchRendererCullingOutput.hpp"
#include "UnityEngine/Rendering/LODParameters.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::BatchRendererGroup::InvokeOnPerformCulling
// Il2CppName: InvokeOnPerformCulling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Rendering::BatchRendererGroup*, UnityEngine::Rendering::BatchRendererCullingOutput&, UnityEngine::Rendering::LODParameters&)>(&UnityEngine::Rendering::BatchRendererGroup::InvokeOnPerformCulling)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::BatchRendererGroup*), "InvokeOnPerformCulling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Rendering::BatchRendererGroup*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Rendering::BatchRendererCullingOutput&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Rendering::LODParameters&>()});
  }
};
