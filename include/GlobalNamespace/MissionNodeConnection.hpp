// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNodeVisualController
  class MissionNodeVisualController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x59
  #pragma pack(push, 1)
  // Autogenerated type: MissionNodeConnection
  class MissionNodeConnection : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _separator
    // Size: 0x4
    // Offset: 0x18
    float separator;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _width
    // Size: 0x4
    // Offset: 0x1C
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.RectTransform _rectTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::RectTransform* rectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.UI.Image _image
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Image* image;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // [NullAllowed] Offset: 0xE23758
    // private MissionNodeVisualController _parentMissionNode
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MissionNodeVisualController* parentMissionNode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNodeVisualController*) == 0x8);
    // [NullAllowed] Offset: 0xE23794
    // private MissionNodeVisualController _childMissionNode
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MissionNodeVisualController* childMissionNode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNodeVisualController*) == 0x8);
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // private UnityEngine.Vector2 _parentMissionNodePosition
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Vector2 parentMissionNodePosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _childMissionNodePosition
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Vector2 childMissionNodePosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private System.Boolean _isActive
    // Size: 0x1
    // Offset: 0x58
    bool isActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MissionNodeConnection
    MissionNodeConnection(float separator_ = {}, float width_ = {}, UnityEngine::RectTransform* rectTransform_ = {}, UnityEngine::UI::Image* image_ = {}, GlobalNamespace::MissionNodeVisualController* parentMissionNode_ = {}, GlobalNamespace::MissionNodeVisualController* childMissionNode_ = {}, UnityEngine::Animator* animator_ = {}, UnityEngine::Vector2 parentMissionNodePosition_ = {}, UnityEngine::Vector2 childMissionNodePosition_ = {}, bool isActive_ = {}) noexcept : separator{separator_}, width{width_}, rectTransform{rectTransform_}, image{image_}, parentMissionNode{parentMissionNode_}, childMissionNode{childMissionNode_}, animator{animator_}, parentMissionNodePosition{parentMissionNodePosition_}, childMissionNodePosition{childMissionNodePosition_}, isActive{isActive_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public MissionNodeVisualController get_parentMissionNode()
    // Offset: 0x1097FAC
    GlobalNamespace::MissionNodeVisualController* get_parentMissionNode();
    // public MissionNodeVisualController get_childMissionNode()
    // Offset: 0x1097FB4
    GlobalNamespace::MissionNodeVisualController* get_childMissionNode();
    // public System.Boolean get_isActive()
    // Offset: 0x1097FBC
    bool get_isActive();
    // public System.Void Setup(MissionNodeVisualController parentMissionNode, MissionNodeVisualController childMissionNode)
    // Offset: 0x1093708
    void Setup(GlobalNamespace::MissionNodeVisualController* parentMissionNode, GlobalNamespace::MissionNodeVisualController* childMissionNode);
    // public System.Void UpdateConnectionRectTransform()
    // Offset: 0x1097FC4
    void UpdateConnectionRectTransform();
    // public System.Void SetActive(System.Boolean animated)
    // Offset: 0x1097A54
    void SetActive(bool animated);
    // public System.Void MissionConnectionEnabledDidFinish()
    // Offset: 0x10982B4
    void MissionConnectionEnabledDidFinish();
    // public System.Void .ctor()
    // Offset: 0x10982D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionNodeConnection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionNodeConnection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionNodeConnection*, creationType>()));
    }
  }; // MissionNodeConnection
  #pragma pack(pop)
  static check_size<sizeof(MissionNodeConnection), 88 + sizeof(bool)> __GlobalNamespace_MissionNodeConnectionSizeCheck;
  static_assert(sizeof(MissionNodeConnection) == 0x59);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodeConnection*, "", "MissionNodeConnection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeConnection::get_parentMissionNode
// Il2CppName: get_parentMissionNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionNodeVisualController* (GlobalNamespace::MissionNodeConnection::*)()>(&GlobalNamespace::MissionNodeConnection::get_parentMissionNode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeConnection*), "get_parentMissionNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeConnection::get_childMissionNode
// Il2CppName: get_childMissionNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionNodeVisualController* (GlobalNamespace::MissionNodeConnection::*)()>(&GlobalNamespace::MissionNodeConnection::get_childMissionNode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeConnection*), "get_childMissionNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeConnection::get_isActive
// Il2CppName: get_isActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionNodeConnection::*)()>(&GlobalNamespace::MissionNodeConnection::get_isActive)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeConnection*), "get_isActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeConnection::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeConnection::*)(GlobalNamespace::MissionNodeVisualController*, GlobalNamespace::MissionNodeVisualController*)>(&GlobalNamespace::MissionNodeConnection::Setup)> {
  const MethodInfo* get() {
    static auto* parentMissionNode = &::il2cpp_utils::GetClassFromName("", "MissionNodeVisualController")->byval_arg;
    static auto* childMissionNode = &::il2cpp_utils::GetClassFromName("", "MissionNodeVisualController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeConnection*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentMissionNode, childMissionNode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeConnection::UpdateConnectionRectTransform
// Il2CppName: UpdateConnectionRectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeConnection::*)()>(&GlobalNamespace::MissionNodeConnection::UpdateConnectionRectTransform)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeConnection*), "UpdateConnectionRectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeConnection::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeConnection::*)(bool)>(&GlobalNamespace::MissionNodeConnection::SetActive)> {
  const MethodInfo* get() {
    static auto* animated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeConnection*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animated});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeConnection::MissionConnectionEnabledDidFinish
// Il2CppName: MissionConnectionEnabledDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeConnection::*)()>(&GlobalNamespace::MissionNodeConnection::MissionConnectionEnabledDidFinish)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeConnection*), "MissionConnectionEnabledDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeConnection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
