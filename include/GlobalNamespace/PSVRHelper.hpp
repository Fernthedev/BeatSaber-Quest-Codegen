// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IVRPlatformHelper
#include "GlobalNamespace/IVRPlatformHelper.hpp"
// Including type: UnityEngine.XR.XRNodeState
#include "UnityEngine/XR/XRNodeState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRPlatformSDK
  struct VRPlatformSDK;
  // Forward declaring type: XRDeviceModel
  struct XRDeviceModel;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Skipping declaration: XRNode because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: PSVRHelper
  class PSVRHelper : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IVRPlatformHelper*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDE3DD0
    // private System.Action inputFocusWasCapturedEvent
    // Size: 0x8
    // Offset: 0x18
    System::Action* inputFocusWasCapturedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE3DE0
    // private System.Action inputFocusWasReleasedEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action* inputFocusWasReleasedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE3DF0
    // private System.Action vrFocusWasCapturedEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action* vrFocusWasCapturedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE3E00
    // private System.Action vrFocusWasReleasedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* vrFocusWasReleasedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE3E10
    // private System.Action hmdUnmountedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* hmdUnmountedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE3E20
    // private System.Action hmdMountedEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action* hmdMountedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE3E30
    // private System.Action joystickWasCenteredThisFrameEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action* joystickWasCenteredThisFrameEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE3E40
    // private System.Action`1<UnityEngine.Vector2> joystickWasNotCenteredThisFrameEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action_1<UnityEngine::Vector2>* joystickWasNotCenteredThisFrameEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Vector2>*) == 0x8);
    // private System.Boolean _didGetNodeStatesThisFrame
    // Size: 0x1
    // Offset: 0x58
    bool didGetNodeStatesThisFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: didGetNodeStatesThisFrame and: nodeStates
    char __padding8[0x7] = {};
    // private readonly System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> _nodeStates
    // Size: 0x8
    // Offset: 0x60
    System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>* nodeStates;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>*) == 0x8);
    // Creating value type constructor for type: PSVRHelper
    PSVRHelper(System::Action* inputFocusWasCapturedEvent_ = {}, System::Action* inputFocusWasReleasedEvent_ = {}, System::Action* vrFocusWasCapturedEvent_ = {}, System::Action* vrFocusWasReleasedEvent_ = {}, System::Action* hmdUnmountedEvent_ = {}, System::Action* hmdMountedEvent_ = {}, System::Action* joystickWasCenteredThisFrameEvent_ = {}, System::Action_1<UnityEngine::Vector2>* joystickWasNotCenteredThisFrameEvent_ = {}, bool didGetNodeStatesThisFrame_ = {}, System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>* nodeStates_ = {}) noexcept : inputFocusWasCapturedEvent{inputFocusWasCapturedEvent_}, inputFocusWasReleasedEvent{inputFocusWasReleasedEvent_}, vrFocusWasCapturedEvent{vrFocusWasCapturedEvent_}, vrFocusWasReleasedEvent{vrFocusWasReleasedEvent_}, hmdUnmountedEvent{hmdUnmountedEvent_}, hmdMountedEvent{hmdMountedEvent_}, joystickWasCenteredThisFrameEvent{joystickWasCenteredThisFrameEvent_}, joystickWasNotCenteredThisFrameEvent{joystickWasNotCenteredThisFrameEvent_}, didGetNodeStatesThisFrame{didGetNodeStatesThisFrame_}, nodeStates{nodeStates_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IVRPlatformHelper
    operator GlobalNamespace::IVRPlatformHelper() noexcept {
      return *reinterpret_cast<GlobalNamespace::IVRPlatformHelper*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kContinuesRumbleImpulseStrength
    static constexpr const float kContinuesRumbleImpulseStrength = 0.8;
    // Get static field: static private System.Single kContinuesRumbleImpulseStrength
    static float _get_kContinuesRumbleImpulseStrength();
    // Set static field: static private System.Single kContinuesRumbleImpulseStrength
    static void _set_kContinuesRumbleImpulseStrength(float value);
    // public System.Void add_inputFocusWasCapturedEvent(System.Action value)
    // Offset: 0x124FFB4
    void add_inputFocusWasCapturedEvent(System::Action* value);
    // public System.Void remove_inputFocusWasCapturedEvent(System.Action value)
    // Offset: 0x1250058
    void remove_inputFocusWasCapturedEvent(System::Action* value);
    // public System.Void add_inputFocusWasReleasedEvent(System.Action value)
    // Offset: 0x12500FC
    void add_inputFocusWasReleasedEvent(System::Action* value);
    // public System.Void remove_inputFocusWasReleasedEvent(System.Action value)
    // Offset: 0x12501A0
    void remove_inputFocusWasReleasedEvent(System::Action* value);
    // public System.Void add_vrFocusWasCapturedEvent(System.Action value)
    // Offset: 0x1250244
    void add_vrFocusWasCapturedEvent(System::Action* value);
    // public System.Void remove_vrFocusWasCapturedEvent(System.Action value)
    // Offset: 0x12502E8
    void remove_vrFocusWasCapturedEvent(System::Action* value);
    // public System.Void add_vrFocusWasReleasedEvent(System.Action value)
    // Offset: 0x125038C
    void add_vrFocusWasReleasedEvent(System::Action* value);
    // public System.Void remove_vrFocusWasReleasedEvent(System.Action value)
    // Offset: 0x1250430
    void remove_vrFocusWasReleasedEvent(System::Action* value);
    // public System.Void add_hmdUnmountedEvent(System.Action value)
    // Offset: 0x12504D4
    void add_hmdUnmountedEvent(System::Action* value);
    // public System.Void remove_hmdUnmountedEvent(System.Action value)
    // Offset: 0x1250578
    void remove_hmdUnmountedEvent(System::Action* value);
    // public System.Void add_hmdMountedEvent(System.Action value)
    // Offset: 0x125061C
    void add_hmdMountedEvent(System::Action* value);
    // public System.Void remove_hmdMountedEvent(System.Action value)
    // Offset: 0x12506C0
    void remove_hmdMountedEvent(System::Action* value);
    // public System.Void add_joystickWasCenteredThisFrameEvent(System.Action value)
    // Offset: 0x1250764
    void add_joystickWasCenteredThisFrameEvent(System::Action* value);
    // public System.Void remove_joystickWasCenteredThisFrameEvent(System.Action value)
    // Offset: 0x1250808
    void remove_joystickWasCenteredThisFrameEvent(System::Action* value);
    // public System.Void add_joystickWasNotCenteredThisFrameEvent(System.Action`1<UnityEngine.Vector2> value)
    // Offset: 0x12508AC
    void add_joystickWasNotCenteredThisFrameEvent(System::Action_1<UnityEngine::Vector2>* value);
    // public System.Void remove_joystickWasNotCenteredThisFrameEvent(System.Action`1<UnityEngine.Vector2> value)
    // Offset: 0x1250950
    void remove_joystickWasNotCenteredThisFrameEvent(System::Action_1<UnityEngine::Vector2>* value);
    // public System.Boolean get_hasInputFocus()
    // Offset: 0x12509F4
    bool get_hasInputFocus();
    // public System.Boolean get_isAlwaysWireless()
    // Offset: 0x12509FC
    bool get_isAlwaysWireless();
    // public VRPlatformSDK get_vrPlatformSDK()
    // Offset: 0x1250A04
    GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();
    // public XRDeviceModel get_currentXRDeviceModel()
    // Offset: 0x1250A0C
    GlobalNamespace::XRDeviceModel get_currentXRDeviceModel();
    // protected System.Void LateUpdate()
    // Offset: 0x1250A14
    void LateUpdate();
    // public System.Void TriggerHapticPulse(UnityEngine.XR.XRNode node, System.Single duration, System.Single strength, System.Single frequency)
    // Offset: 0x1250A1C
    void TriggerHapticPulse(UnityEngine::XR::XRNode node, float duration, float strength, float frequency);
    // public System.Void StopHaptics(UnityEngine.XR.XRNode node)
    // Offset: 0x1250A20
    void StopHaptics(UnityEngine::XR::XRNode node);
    // public System.Void AdjustControllerTransform(UnityEngine.XR.XRNode node, UnityEngine.Transform transform, UnityEngine.Vector3 position, UnityEngine.Vector3 rotation)
    // Offset: 0x1250A24
    void AdjustControllerTransform(UnityEngine::XR::XRNode node, UnityEngine::Transform* transform, UnityEngine::Vector3 position, UnityEngine::Vector3 rotation);
    // public System.Boolean GetNodePose(UnityEngine.XR.XRNode nodeType, System.Int32 idx, out UnityEngine.Vector3 pos, out UnityEngine.Quaternion rot)
    // Offset: 0x1250A28
    bool GetNodePose(UnityEngine::XR::XRNode nodeType, int idx, UnityEngine::Vector3& pos, UnityEngine::Quaternion& rot);
    // public System.Void .ctor()
    // Offset: 0x1250D64
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PSVRHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PSVRHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PSVRHelper*, creationType>()));
    }
  }; // PSVRHelper
  #pragma pack(pop)
  static check_size<sizeof(PSVRHelper), 96 + sizeof(System::Collections::Generic::List_1<UnityEngine::XR::XRNodeState>*)> __GlobalNamespace_PSVRHelperSizeCheck;
  static_assert(sizeof(PSVRHelper) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PSVRHelper*, "", "PSVRHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::add_inputFocusWasCapturedEvent
// Il2CppName: add_inputFocusWasCapturedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(System::Action*)>(&GlobalNamespace::PSVRHelper::add_inputFocusWasCapturedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "add_inputFocusWasCapturedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::remove_inputFocusWasCapturedEvent
// Il2CppName: remove_inputFocusWasCapturedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(System::Action*)>(&GlobalNamespace::PSVRHelper::remove_inputFocusWasCapturedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "remove_inputFocusWasCapturedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::add_inputFocusWasReleasedEvent
// Il2CppName: add_inputFocusWasReleasedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(System::Action*)>(&GlobalNamespace::PSVRHelper::add_inputFocusWasReleasedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "add_inputFocusWasReleasedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::remove_inputFocusWasReleasedEvent
// Il2CppName: remove_inputFocusWasReleasedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(System::Action*)>(&GlobalNamespace::PSVRHelper::remove_inputFocusWasReleasedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "remove_inputFocusWasReleasedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::add_vrFocusWasCapturedEvent
// Il2CppName: add_vrFocusWasCapturedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(System::Action*)>(&GlobalNamespace::PSVRHelper::add_vrFocusWasCapturedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "add_vrFocusWasCapturedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::remove_vrFocusWasCapturedEvent
// Il2CppName: remove_vrFocusWasCapturedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(System::Action*)>(&GlobalNamespace::PSVRHelper::remove_vrFocusWasCapturedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "remove_vrFocusWasCapturedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::add_vrFocusWasReleasedEvent
// Il2CppName: add_vrFocusWasReleasedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(System::Action*)>(&GlobalNamespace::PSVRHelper::add_vrFocusWasReleasedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "add_vrFocusWasReleasedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::remove_vrFocusWasReleasedEvent
// Il2CppName: remove_vrFocusWasReleasedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(System::Action*)>(&GlobalNamespace::PSVRHelper::remove_vrFocusWasReleasedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "remove_vrFocusWasReleasedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::add_hmdUnmountedEvent
// Il2CppName: add_hmdUnmountedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(System::Action*)>(&GlobalNamespace::PSVRHelper::add_hmdUnmountedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "add_hmdUnmountedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::remove_hmdUnmountedEvent
// Il2CppName: remove_hmdUnmountedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(System::Action*)>(&GlobalNamespace::PSVRHelper::remove_hmdUnmountedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "remove_hmdUnmountedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::add_hmdMountedEvent
// Il2CppName: add_hmdMountedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(System::Action*)>(&GlobalNamespace::PSVRHelper::add_hmdMountedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "add_hmdMountedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::remove_hmdMountedEvent
// Il2CppName: remove_hmdMountedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(System::Action*)>(&GlobalNamespace::PSVRHelper::remove_hmdMountedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "remove_hmdMountedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::add_joystickWasCenteredThisFrameEvent
// Il2CppName: add_joystickWasCenteredThisFrameEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(System::Action*)>(&GlobalNamespace::PSVRHelper::add_joystickWasCenteredThisFrameEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "add_joystickWasCenteredThisFrameEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::remove_joystickWasCenteredThisFrameEvent
// Il2CppName: remove_joystickWasCenteredThisFrameEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(System::Action*)>(&GlobalNamespace::PSVRHelper::remove_joystickWasCenteredThisFrameEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "remove_joystickWasCenteredThisFrameEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::add_joystickWasNotCenteredThisFrameEvent
// Il2CppName: add_joystickWasNotCenteredThisFrameEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(System::Action_1<UnityEngine::Vector2>*)>(&GlobalNamespace::PSVRHelper::add_joystickWasNotCenteredThisFrameEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "add_joystickWasNotCenteredThisFrameEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::remove_joystickWasNotCenteredThisFrameEvent
// Il2CppName: remove_joystickWasNotCenteredThisFrameEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(System::Action_1<UnityEngine::Vector2>*)>(&GlobalNamespace::PSVRHelper::remove_joystickWasNotCenteredThisFrameEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "remove_joystickWasNotCenteredThisFrameEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::get_hasInputFocus
// Il2CppName: get_hasInputFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PSVRHelper::*)()>(&GlobalNamespace::PSVRHelper::get_hasInputFocus)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "get_hasInputFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::get_isAlwaysWireless
// Il2CppName: get_isAlwaysWireless
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PSVRHelper::*)()>(&GlobalNamespace::PSVRHelper::get_isAlwaysWireless)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "get_isAlwaysWireless", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::get_vrPlatformSDK
// Il2CppName: get_vrPlatformSDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::VRPlatformSDK (GlobalNamespace::PSVRHelper::*)()>(&GlobalNamespace::PSVRHelper::get_vrPlatformSDK)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "get_vrPlatformSDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::get_currentXRDeviceModel
// Il2CppName: get_currentXRDeviceModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::XRDeviceModel (GlobalNamespace::PSVRHelper::*)()>(&GlobalNamespace::PSVRHelper::get_currentXRDeviceModel)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "get_currentXRDeviceModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)()>(&GlobalNamespace::PSVRHelper::LateUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::TriggerHapticPulse
// Il2CppName: TriggerHapticPulse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(UnityEngine::XR::XRNode, float, float, float)>(&GlobalNamespace::PSVRHelper::TriggerHapticPulse)> {
  const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* strength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "TriggerHapticPulse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, duration, strength, frequency});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::StopHaptics
// Il2CppName: StopHaptics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::PSVRHelper::StopHaptics)> {
  const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "StopHaptics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::AdjustControllerTransform
// Il2CppName: AdjustControllerTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PSVRHelper::*)(UnityEngine::XR::XRNode, UnityEngine::Transform*, UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::PSVRHelper::AdjustControllerTransform)> {
  const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "AdjustControllerTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, transform, position, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::GetNodePose
// Il2CppName: GetNodePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PSVRHelper::*)(UnityEngine::XR::XRNode, int, UnityEngine::Vector3&, UnityEngine::Quaternion&)>(&GlobalNamespace::PSVRHelper::GetNodePose)> {
  const MethodInfo* get() {
    static auto* nodeType = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PSVRHelper*), "GetNodePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeType, idx, pos, rot});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PSVRHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
