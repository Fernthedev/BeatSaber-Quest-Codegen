// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.XR.XRNodeState
#include "UnityEngine/XR/XRNodeState.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Skipping declaration: XRNode because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NodeStatePropertyType
  struct NodeStatePropertyType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRNodeStateProperties
  class OVRNodeStateProperties : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRNodeStateProperties
    OVRNodeStateProperties() noexcept {}
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> nodeStateList
    static System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>* _get_nodeStateList();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> nodeStateList
    static void _set_nodeStateList(System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>* value);
    // static public System.Boolean IsHmdPresent()
    // Offset: 0x12F1528
    static bool IsHmdPresent();
    // static public System.Boolean GetNodeStatePropertyVector3(UnityEngine.XR.XRNode nodeType, NodeStatePropertyType propertyType, OVRPlugin/Node ovrpNodeType, OVRPlugin/Step stepType, out UnityEngine.Vector3 retVec)
    // Offset: 0x12F16AC
    static bool GetNodeStatePropertyVector3(UnityEngine::XR::XRNode nodeType, GlobalNamespace::NodeStatePropertyType propertyType, GlobalNamespace::OVRPlugin::Node ovrpNodeType, GlobalNamespace::OVRPlugin::Step stepType, UnityEngine::Vector3& retVec);
    // static public System.Boolean GetNodeStatePropertyQuaternion(UnityEngine.XR.XRNode nodeType, NodeStatePropertyType propertyType, OVRPlugin/Node ovrpNodeType, OVRPlugin/Step stepType, out UnityEngine.Quaternion retQuat)
    // Offset: 0x12F2698
    static bool GetNodeStatePropertyQuaternion(UnityEngine::XR::XRNode nodeType, GlobalNamespace::NodeStatePropertyType propertyType, GlobalNamespace::OVRPlugin::Node ovrpNodeType, GlobalNamespace::OVRPlugin::Step stepType, UnityEngine::Quaternion& retQuat);
    // static private System.Boolean ValidateProperty(UnityEngine.XR.XRNode nodeType, ref UnityEngine.XR.XRNodeState requestedNodeState)
    // Offset: 0x12F2908
    static bool ValidateProperty(UnityEngine::XR::XRNode nodeType, UnityEngine::XR::XRNodeState& requestedNodeState);
    // static private System.Boolean GetUnityXRNodeStateVector3(UnityEngine.XR.XRNode nodeType, NodeStatePropertyType propertyType, out UnityEngine.Vector3 retVec)
    // Offset: 0x12F1D08
    static bool GetUnityXRNodeStateVector3(UnityEngine::XR::XRNode nodeType, GlobalNamespace::NodeStatePropertyType propertyType, UnityEngine::Vector3& retVec);
    // static private System.Boolean GetUnityXRNodeStateQuaternion(UnityEngine.XR.XRNode nodeType, NodeStatePropertyType propertyType, out UnityEngine.Quaternion retQuat)
    // Offset: 0x12F2808
    static bool GetUnityXRNodeStateQuaternion(UnityEngine::XR::XRNode nodeType, GlobalNamespace::NodeStatePropertyType propertyType, UnityEngine::Quaternion& retQuat);
    // static private System.Void .cctor()
    // Offset: 0x12F2B38
    static void _cctor();
  }; // OVRNodeStateProperties
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRNodeStateProperties*, "", "OVRNodeStateProperties");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRNodeStateProperties::IsHmdPresent
// Il2CppName: IsHmdPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::OVRNodeStateProperties::IsHmdPresent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNodeStateProperties*), "IsHmdPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNodeStateProperties::GetNodeStatePropertyVector3
// Il2CppName: GetNodeStatePropertyVector3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::XR::XRNode, GlobalNamespace::NodeStatePropertyType, GlobalNamespace::OVRPlugin::Node, GlobalNamespace::OVRPlugin::Step, UnityEngine::Vector3&)>(&GlobalNamespace::OVRNodeStateProperties::GetNodeStatePropertyVector3)> {
  const MethodInfo* get() {
    static auto* nodeType = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* propertyType = &::il2cpp_utils::GetClassFromName("", "NodeStatePropertyType")->byval_arg;
    static auto* ovrpNodeType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Node")->byval_arg;
    static auto* stepType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Step")->byval_arg;
    static auto* retVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNodeStateProperties*), "GetNodeStatePropertyVector3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeType, propertyType, ovrpNodeType, stepType, retVec});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNodeStateProperties::GetNodeStatePropertyQuaternion
// Il2CppName: GetNodeStatePropertyQuaternion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::XR::XRNode, GlobalNamespace::NodeStatePropertyType, GlobalNamespace::OVRPlugin::Node, GlobalNamespace::OVRPlugin::Step, UnityEngine::Quaternion&)>(&GlobalNamespace::OVRNodeStateProperties::GetNodeStatePropertyQuaternion)> {
  const MethodInfo* get() {
    static auto* nodeType = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* propertyType = &::il2cpp_utils::GetClassFromName("", "NodeStatePropertyType")->byval_arg;
    static auto* ovrpNodeType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Node")->byval_arg;
    static auto* stepType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Step")->byval_arg;
    static auto* retQuat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNodeStateProperties*), "GetNodeStatePropertyQuaternion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeType, propertyType, ovrpNodeType, stepType, retQuat});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNodeStateProperties::ValidateProperty
// Il2CppName: ValidateProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::XR::XRNode, UnityEngine::XR::XRNodeState&)>(&GlobalNamespace::OVRNodeStateProperties::ValidateProperty)> {
  const MethodInfo* get() {
    static auto* nodeType = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* requestedNodeState = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNodeState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNodeStateProperties*), "ValidateProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeType, requestedNodeState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNodeStateProperties::GetUnityXRNodeStateVector3
// Il2CppName: GetUnityXRNodeStateVector3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::XR::XRNode, GlobalNamespace::NodeStatePropertyType, UnityEngine::Vector3&)>(&GlobalNamespace::OVRNodeStateProperties::GetUnityXRNodeStateVector3)> {
  const MethodInfo* get() {
    static auto* nodeType = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* propertyType = &::il2cpp_utils::GetClassFromName("", "NodeStatePropertyType")->byval_arg;
    static auto* retVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNodeStateProperties*), "GetUnityXRNodeStateVector3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeType, propertyType, retVec});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNodeStateProperties::GetUnityXRNodeStateQuaternion
// Il2CppName: GetUnityXRNodeStateQuaternion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::XR::XRNode, GlobalNamespace::NodeStatePropertyType, UnityEngine::Quaternion&)>(&GlobalNamespace::OVRNodeStateProperties::GetUnityXRNodeStateQuaternion)> {
  const MethodInfo* get() {
    static auto* nodeType = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* propertyType = &::il2cpp_utils::GetClassFromName("", "NodeStatePropertyType")->byval_arg;
    static auto* retQuat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNodeStateProperties*), "GetUnityXRNodeStateQuaternion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeType, propertyType, retQuat});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNodeStateProperties::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRNodeStateProperties::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNodeStateProperties*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
