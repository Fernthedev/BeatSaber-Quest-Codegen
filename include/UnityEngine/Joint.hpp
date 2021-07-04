// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Joint
  // [NativeHeaderAttribute] Offset: DA3584
  // [NativeClassAttribute] Offset: DA3584
  // [RequireComponent] Offset: DA3584
  class Joint : public UnityEngine::Component {
    public:
    // Creating value type constructor for type: Joint
    Joint() noexcept {}
    // public UnityEngine.Rigidbody get_connectedBody()
    // Offset: 0x23D6F98
    UnityEngine::Rigidbody* get_connectedBody();
    // public System.Void set_connectedAnchor(UnityEngine.Vector3 value)
    // Offset: 0x23D6FD8
    void set_connectedAnchor(UnityEngine::Vector3 value);
    // private System.Void set_connectedAnchor_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x23D7030
    void set_connectedAnchor_Injected(UnityEngine::Vector3& value);
  }; // UnityEngine.Joint
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Joint*, "UnityEngine", "Joint");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::Joint::get_connectedBody
// Il2CppName: get_connectedBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rigidbody* (UnityEngine::Joint::*)()>(&UnityEngine::Joint::get_connectedBody)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Joint*), "get_connectedBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Joint::set_connectedAnchor
// Il2CppName: set_connectedAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Joint::*)(UnityEngine::Vector3)>(&UnityEngine::Joint::set_connectedAnchor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Joint*), "set_connectedAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Joint::set_connectedAnchor_Injected
// Il2CppName: set_connectedAnchor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Joint::*)(UnityEngine::Vector3&)>(&UnityEngine::Joint::set_connectedAnchor_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Joint*), "set_connectedAnchor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>()});
  }
};
