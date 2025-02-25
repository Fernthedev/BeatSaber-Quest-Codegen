// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
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
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Skipping declaration: VREvent_t because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_ControllerManager
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_ControllerManager : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.GameObject left
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* left;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject right
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GameObject* right;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [TooltipAttribute] Offset: 0xDF9320
    // public UnityEngine.GameObject[] objects
    // Size: 0x8
    // Offset: 0x28
    ::Array<UnityEngine::GameObject*>* objects;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GameObject*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xDF9358
    // public System.Boolean assignAllBeforeIdentified
    // Size: 0x1
    // Offset: 0x30
    bool assignAllBeforeIdentified;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: assignAllBeforeIdentified and: indices
    char __padding3[0x7] = {};
    // private System.UInt32[] indices
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint>* indices;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.Boolean[] connected
    // Size: 0x8
    // Offset: 0x40
    ::Array<bool>* connected;
    // Field size check
    static_assert(sizeof(::Array<bool>*) == 0x8);
    // private System.UInt32 leftIndex
    // Size: 0x4
    // Offset: 0x48
    uint leftIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 rightIndex
    // Size: 0x4
    // Offset: 0x4C
    uint rightIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private SteamVR_Events/Action inputFocusAction
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::SteamVR_Events::Action* inputFocusAction;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_Events::Action*) == 0x8);
    // private SteamVR_Events/Action deviceConnectedAction
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::SteamVR_Events::Action* deviceConnectedAction;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_Events::Action*) == 0x8);
    // private SteamVR_Events/Action trackedDeviceRoleChangedAction
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::SteamVR_Events::Action* trackedDeviceRoleChangedAction;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_Events::Action*) == 0x8);
    // Creating value type constructor for type: SteamVR_ControllerManager
    SteamVR_ControllerManager(UnityEngine::GameObject* left_ = {}, UnityEngine::GameObject* right_ = {}, ::Array<UnityEngine::GameObject*>* objects_ = {}, bool assignAllBeforeIdentified_ = {}, ::Array<uint>* indices_ = {}, ::Array<bool>* connected_ = {}, uint leftIndex_ = {}, uint rightIndex_ = {}, GlobalNamespace::SteamVR_Events::Action* inputFocusAction_ = {}, GlobalNamespace::SteamVR_Events::Action* deviceConnectedAction_ = {}, GlobalNamespace::SteamVR_Events::Action* trackedDeviceRoleChangedAction_ = {}) noexcept : left{left_}, right{right_}, objects{objects_}, assignAllBeforeIdentified{assignAllBeforeIdentified_}, indices{indices_}, connected{connected_}, leftIndex{leftIndex_}, rightIndex{rightIndex_}, inputFocusAction{inputFocusAction_}, deviceConnectedAction{deviceConnectedAction_}, trackedDeviceRoleChangedAction{trackedDeviceRoleChangedAction_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private System.String hiddenPrefix
    static ::Il2CppString* _get_hiddenPrefix();
    // Set static field: static private System.String hiddenPrefix
    static void _set_hiddenPrefix(::Il2CppString* value);
    // Get static field: static private System.String hiddenPostfix
    static ::Il2CppString* _get_hiddenPostfix();
    // Set static field: static private System.String hiddenPostfix
    static void _set_hiddenPostfix(::Il2CppString* value);
    // Get static field: static private System.String[] labels
    static ::Array<::Il2CppString*>* _get_labels();
    // Set static field: static private System.String[] labels
    static void _set_labels(::Array<::Il2CppString*>* value);
    // Get instance field reference: public UnityEngine.GameObject left
    UnityEngine::GameObject*& dyn_left();
    // Get instance field reference: public UnityEngine.GameObject right
    UnityEngine::GameObject*& dyn_right();
    // Get instance field reference: public UnityEngine.GameObject[] objects
    ::Array<UnityEngine::GameObject*>*& dyn_objects();
    // Get instance field reference: public System.Boolean assignAllBeforeIdentified
    bool& dyn_assignAllBeforeIdentified();
    // Get instance field reference: private System.UInt32[] indices
    ::Array<uint>*& dyn_indices();
    // Get instance field reference: private System.Boolean[] connected
    ::Array<bool>*& dyn_connected();
    // Get instance field reference: private System.UInt32 leftIndex
    uint& dyn_leftIndex();
    // Get instance field reference: private System.UInt32 rightIndex
    uint& dyn_rightIndex();
    // Get instance field reference: private SteamVR_Events/Action inputFocusAction
    GlobalNamespace::SteamVR_Events::Action*& dyn_inputFocusAction();
    // Get instance field reference: private SteamVR_Events/Action deviceConnectedAction
    GlobalNamespace::SteamVR_Events::Action*& dyn_deviceConnectedAction();
    // Get instance field reference: private SteamVR_Events/Action trackedDeviceRoleChangedAction
    GlobalNamespace::SteamVR_Events::Action*& dyn_trackedDeviceRoleChangedAction();
    // private System.Void SetUniqueObject(UnityEngine.GameObject o, System.Int32 index)
    // Offset: 0x1427874
    void SetUniqueObject(UnityEngine::GameObject* o, int index);
    // public System.Void UpdateTargets()
    // Offset: 0x1427988
    void UpdateTargets();
    // private System.Void Awake()
    // Offset: 0x1427AC4
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x1427E0C
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x14283AC
    void OnDisable();
    // private System.Void OnInputFocus(System.Boolean hasFocus)
    // Offset: 0x1428410
    void OnInputFocus(bool hasFocus);
    // private System.Void HideObject(UnityEngine.Transform t, System.String name)
    // Offset: 0x14287C0
    void HideObject(UnityEngine::Transform* t, ::Il2CppString* name);
    // private System.Void ShowObject(UnityEngine.Transform t, System.String name)
    // Offset: 0x14286CC
    void ShowObject(UnityEngine::Transform* t, ::Il2CppString* name);
    // private System.Void SetTrackedDeviceIndex(System.Int32 objectIndex, System.UInt32 trackedDeviceIndex)
    // Offset: 0x1428930
    void SetTrackedDeviceIndex(int objectIndex, uint trackedDeviceIndex);
    // private System.Void OnTrackedDeviceRoleChanged(Valve.VR.VREvent_t vrEvent)
    // Offset: 0x1428B7C
    void OnTrackedDeviceRoleChanged(Valve::VR::VREvent_t vrEvent);
    // private System.Void OnDeviceConnected(System.Int32 index, System.Boolean connected)
    // Offset: 0x1428288
    void OnDeviceConnected(int index, bool connected);
    // public System.Void Refresh()
    // Offset: 0x1427FEC
    void Refresh();
    // private System.Void .ctor()
    // Offset: 0x1427AC8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_ControllerManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_ControllerManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_ControllerManager*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1428B80
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // SteamVR_ControllerManager
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_ControllerManager), 96 + sizeof(GlobalNamespace::SteamVR_Events::Action*)> __GlobalNamespace_SteamVR_ControllerManagerSizeCheck;
  static_assert(sizeof(SteamVR_ControllerManager) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_ControllerManager*, "", "SteamVR_ControllerManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ControllerManager::SetUniqueObject
// Il2CppName: SetUniqueObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ControllerManager::*)(UnityEngine::GameObject*, int)>(&GlobalNamespace::SteamVR_ControllerManager::SetUniqueObject)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ControllerManager*), "SetUniqueObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ControllerManager::UpdateTargets
// Il2CppName: UpdateTargets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ControllerManager::*)()>(&GlobalNamespace::SteamVR_ControllerManager::UpdateTargets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ControllerManager*), "UpdateTargets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ControllerManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ControllerManager::*)()>(&GlobalNamespace::SteamVR_ControllerManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ControllerManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ControllerManager::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ControllerManager::*)()>(&GlobalNamespace::SteamVR_ControllerManager::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ControllerManager*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ControllerManager::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ControllerManager::*)()>(&GlobalNamespace::SteamVR_ControllerManager::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ControllerManager*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ControllerManager::OnInputFocus
// Il2CppName: OnInputFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ControllerManager::*)(bool)>(&GlobalNamespace::SteamVR_ControllerManager::OnInputFocus)> {
  static const MethodInfo* get() {
    static auto* hasFocus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ControllerManager*), "OnInputFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hasFocus});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ControllerManager::HideObject
// Il2CppName: HideObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ControllerManager::*)(UnityEngine::Transform*, ::Il2CppString*)>(&GlobalNamespace::SteamVR_ControllerManager::HideObject)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ControllerManager*), "HideObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, name});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ControllerManager::ShowObject
// Il2CppName: ShowObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ControllerManager::*)(UnityEngine::Transform*, ::Il2CppString*)>(&GlobalNamespace::SteamVR_ControllerManager::ShowObject)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ControllerManager*), "ShowObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, name});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ControllerManager::SetTrackedDeviceIndex
// Il2CppName: SetTrackedDeviceIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ControllerManager::*)(int, uint)>(&GlobalNamespace::SteamVR_ControllerManager::SetTrackedDeviceIndex)> {
  static const MethodInfo* get() {
    static auto* objectIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* trackedDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ControllerManager*), "SetTrackedDeviceIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectIndex, trackedDeviceIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ControllerManager::OnTrackedDeviceRoleChanged
// Il2CppName: OnTrackedDeviceRoleChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ControllerManager::*)(Valve::VR::VREvent_t)>(&GlobalNamespace::SteamVR_ControllerManager::OnTrackedDeviceRoleChanged)> {
  static const MethodInfo* get() {
    static auto* vrEvent = &::il2cpp_utils::GetClassFromName("Valve.VR", "VREvent_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ControllerManager*), "OnTrackedDeviceRoleChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vrEvent});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ControllerManager::OnDeviceConnected
// Il2CppName: OnDeviceConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ControllerManager::*)(int, bool)>(&GlobalNamespace::SteamVR_ControllerManager::OnDeviceConnected)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* connected = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ControllerManager*), "OnDeviceConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, connected});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ControllerManager::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_ControllerManager::*)()>(&GlobalNamespace::SteamVR_ControllerManager::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ControllerManager*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ControllerManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_ControllerManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SteamVR_ControllerManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_ControllerManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
