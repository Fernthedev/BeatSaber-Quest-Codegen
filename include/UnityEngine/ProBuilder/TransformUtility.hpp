// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Vertex
  class Vertex;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.TransformUtility
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TransformUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TransformUtility
    TransformUtility() noexcept {}
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Transform[]> s_ChildStack
    static System::Collections::Generic::Dictionary_2<UnityEngine::Transform*, ::Array<UnityEngine::Transform*>*>* _get_s_ChildStack();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Transform,UnityEngine.Transform[]> s_ChildStack
    static void _set_s_ChildStack(System::Collections::Generic::Dictionary_2<UnityEngine::Transform*, ::Array<UnityEngine::Transform*>*>* value);
    // static System.Void UnparentChildren(UnityEngine.Transform t)
    // Offset: 0x22BF2CC
    static void UnparentChildren(UnityEngine::Transform* t);
    // static System.Void ReparentChildren(UnityEngine.Transform t)
    // Offset: 0x22BF41C
    static void ReparentChildren(UnityEngine::Transform* t);
    // static public UnityEngine.ProBuilder.Vertex TransformVertex(UnityEngine.Transform transform, UnityEngine.ProBuilder.Vertex vertex)
    // Offset: 0x22BF554
    static UnityEngine::ProBuilder::Vertex* TransformVertex(UnityEngine::Transform* transform, UnityEngine::ProBuilder::Vertex* vertex);
    // static public UnityEngine.ProBuilder.Vertex InverseTransformVertex(UnityEngine.Transform transform, UnityEngine.ProBuilder.Vertex vertex)
    // Offset: 0x22BF908
    static UnityEngine::ProBuilder::Vertex* InverseTransformVertex(UnityEngine::Transform* transform, UnityEngine::ProBuilder::Vertex* vertex);
    // static private System.Void .cctor()
    // Offset: 0x22BFAFC
    static void _cctor();
  }; // UnityEngine.ProBuilder.TransformUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::TransformUtility*, "UnityEngine.ProBuilder", "TransformUtility");
// Writing includes for template specializations
#include "UnityEngine/Transform.hpp"
#include "UnityEngine/ProBuilder/Vertex.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::TransformUtility::UnparentChildren
// Il2CppName: UnparentChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Transform*)>(&UnityEngine::ProBuilder::TransformUtility::UnparentChildren)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::TransformUtility*), "UnparentChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::TransformUtility::ReparentChildren
// Il2CppName: ReparentChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Transform*)>(&UnityEngine::ProBuilder::TransformUtility::ReparentChildren)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::TransformUtility*), "ReparentChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::TransformUtility::TransformVertex
// Il2CppName: TransformVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Vertex* (*)(UnityEngine::Transform*, UnityEngine::ProBuilder::Vertex*)>(&UnityEngine::ProBuilder::TransformUtility::TransformVertex)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::TransformUtility*), "TransformVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Vertex*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::TransformUtility::InverseTransformVertex
// Il2CppName: InverseTransformVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Vertex* (*)(UnityEngine::Transform*, UnityEngine::ProBuilder::Vertex*)>(&UnityEngine::ProBuilder::TransformUtility::InverseTransformVertex)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::TransformUtility*), "InverseTransformVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Vertex*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::TransformUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::TransformUtility::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::TransformUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
