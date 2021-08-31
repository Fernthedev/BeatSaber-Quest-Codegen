// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamVR_Controller
#include "GlobalNamespace/SteamVR_Controller.hpp"
// Including type: Valve.VR.VRControllerState_t
#include "Valve/VR/VRControllerState_t.hpp"
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
// Including type: SteamVR_Utils
#include "GlobalNamespace/SteamVR_Utils.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRButtonId
  struct EVRButtonId;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xF6
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Controller/Device
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_Controller::Device : public ::Il2CppObject {
    public:
    // private System.UInt32 <index>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    uint index;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Boolean <valid>k__BackingField
    // Size: 0x1
    // Offset: 0x14
    bool valid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: valid and: state
    char __padding1[0x3] = {};
    // private Valve.VR.VRControllerState_t state
    // Size: 0x40
    // Offset: 0x18
    Valve::VR::VRControllerState_t state;
    // Field size check
    static_assert(sizeof(Valve::VR::VRControllerState_t) == 0x40);
    // private Valve.VR.VRControllerState_t prevState
    // Size: 0x40
    // Offset: 0x58
    Valve::VR::VRControllerState_t prevState;
    // Field size check
    static_assert(sizeof(Valve::VR::VRControllerState_t) == 0x40);
    // private Valve.VR.TrackedDevicePose_t pose
    // Size: 0x4E
    // Offset: 0x98
    Valve::VR::TrackedDevicePose_t pose;
    // Field size check
    static_assert(sizeof(Valve::VR::TrackedDevicePose_t) == 0x4E);
    // Padding between fields: pose and: prevFrameCount
    char __padding4[0x2] = {};
    // private System.Int32 prevFrameCount
    // Size: 0x4
    // Offset: 0xE8
    int prevFrameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single hairTriggerDelta
    // Size: 0x4
    // Offset: 0xEC
    float hairTriggerDelta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single hairTriggerLimit
    // Size: 0x4
    // Offset: 0xF0
    float hairTriggerLimit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean hairTriggerState
    // Size: 0x1
    // Offset: 0xF4
    bool hairTriggerState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hairTriggerPrevState
    // Size: 0x1
    // Offset: 0xF5
    bool hairTriggerPrevState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Device
    Device(uint index_ = {}, bool valid_ = {}, Valve::VR::VRControllerState_t state_ = {}, Valve::VR::VRControllerState_t prevState_ = {}, Valve::VR::TrackedDevicePose_t pose_ = {}, int prevFrameCount_ = {}, float hairTriggerDelta_ = {}, float hairTriggerLimit_ = {}, bool hairTriggerState_ = {}, bool hairTriggerPrevState_ = {}) noexcept : index{index_}, valid{valid_}, state{state_}, prevState{prevState_}, pose{pose_}, prevFrameCount{prevFrameCount_}, hairTriggerDelta{hairTriggerDelta_}, hairTriggerLimit{hairTriggerLimit_}, hairTriggerState{hairTriggerState_}, hairTriggerPrevState{hairTriggerPrevState_} {}
    // Get instance field: private System.UInt32 <index>k__BackingField
    uint _get_$index$k__BackingField();
    // Set instance field: private System.UInt32 <index>k__BackingField
    void _set_$index$k__BackingField(uint value);
    // Get instance field: private System.Boolean <valid>k__BackingField
    bool _get_$valid$k__BackingField();
    // Set instance field: private System.Boolean <valid>k__BackingField
    void _set_$valid$k__BackingField(bool value);
    // Get instance field: private Valve.VR.VRControllerState_t state
    Valve::VR::VRControllerState_t _get_state();
    // Set instance field: private Valve.VR.VRControllerState_t state
    void _set_state(Valve::VR::VRControllerState_t value);
    // Get instance field: private Valve.VR.VRControllerState_t prevState
    Valve::VR::VRControllerState_t _get_prevState();
    // Set instance field: private Valve.VR.VRControllerState_t prevState
    void _set_prevState(Valve::VR::VRControllerState_t value);
    // Get instance field: private Valve.VR.TrackedDevicePose_t pose
    Valve::VR::TrackedDevicePose_t _get_pose();
    // Set instance field: private Valve.VR.TrackedDevicePose_t pose
    void _set_pose(Valve::VR::TrackedDevicePose_t value);
    // Get instance field: private System.Int32 prevFrameCount
    int _get_prevFrameCount();
    // Set instance field: private System.Int32 prevFrameCount
    void _set_prevFrameCount(int value);
    // Get instance field: public System.Single hairTriggerDelta
    float _get_hairTriggerDelta();
    // Set instance field: public System.Single hairTriggerDelta
    void _set_hairTriggerDelta(float value);
    // Get instance field: private System.Single hairTriggerLimit
    float _get_hairTriggerLimit();
    // Set instance field: private System.Single hairTriggerLimit
    void _set_hairTriggerLimit(float value);
    // Get instance field: private System.Boolean hairTriggerState
    bool _get_hairTriggerState();
    // Set instance field: private System.Boolean hairTriggerState
    void _set_hairTriggerState(bool value);
    // Get instance field: private System.Boolean hairTriggerPrevState
    bool _get_hairTriggerPrevState();
    // Set instance field: private System.Boolean hairTriggerPrevState
    void _set_hairTriggerPrevState(bool value);
    // public System.UInt32 get_index()
    // Offset: 0x141EF50
    uint get_index();
    // private System.Void set_index(System.UInt32 value)
    // Offset: 0x141EF58
    void set_index(uint value);
    // public System.Boolean get_valid()
    // Offset: 0x141EF60
    bool get_valid();
    // private System.Void set_valid(System.Boolean value)
    // Offset: 0x141EF68
    void set_valid(bool value);
    // public System.Boolean get_connected()
    // Offset: 0x141EF1C
    bool get_connected();
    // public System.Boolean get_hasTracking()
    // Offset: 0x141EF74
    bool get_hasTracking();
    // public System.Boolean get_outOfRange()
    // Offset: 0x141EF98
    bool get_outOfRange();
    // public System.Boolean get_calibrating()
    // Offset: 0x141EFD0
    bool get_calibrating();
    // public System.Boolean get_uninitialized()
    // Offset: 0x141F000
    bool get_uninitialized();
    // public SteamVR_Utils/RigidTransform get_transform()
    // Offset: 0x141EEC0
    GlobalNamespace::SteamVR_Utils::RigidTransform get_transform();
    // public UnityEngine.Vector3 get_velocity()
    // Offset: 0x141F02C
    UnityEngine::Vector3 get_velocity();
    // public UnityEngine.Vector3 get_angularVelocity()
    // Offset: 0x141F07C
    UnityEngine::Vector3 get_angularVelocity();
    // public System.Void .ctor(System.UInt32 i)
    // Offset: 0x141E968
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Controller::Device* New_ctor(uint i) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Controller::Device::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Controller::Device*, creationType>(i)));
    }
    // public Valve.VR.VRControllerState_t GetState()
    // Offset: 0x141F0D0
    Valve::VR::VRControllerState_t GetState();
    // public Valve.VR.VRControllerState_t GetPrevState()
    // Offset: 0x141F10C
    Valve::VR::VRControllerState_t GetPrevState();
    // public Valve.VR.TrackedDevicePose_t GetPose()
    // Offset: 0x141F148
    Valve::VR::TrackedDevicePose_t GetPose();
    // public System.Void Update()
    // Offset: 0x141E9DC
    void Update();
    // public System.Boolean GetPress(System.UInt64 buttonMask)
    // Offset: 0x141F3AC
    bool GetPress(uint64_t buttonMask);
    // public System.Boolean GetPressDown(System.UInt64 buttonMask)
    // Offset: 0x141F3DC
    bool GetPressDown(uint64_t buttonMask);
    // public System.Boolean GetPressUp(System.UInt64 buttonMask)
    // Offset: 0x141F420
    bool GetPressUp(uint64_t buttonMask);
    // public System.Boolean GetPress(Valve.VR.EVRButtonId buttonId)
    // Offset: 0x141F464
    bool GetPress(Valve::VR::EVRButtonId buttonId);
    // public System.Boolean GetPressDown(Valve.VR.EVRButtonId buttonId)
    // Offset: 0x141F498
    bool GetPressDown(Valve::VR::EVRButtonId buttonId);
    // public System.Boolean GetPressUp(Valve.VR.EVRButtonId buttonId)
    // Offset: 0x141F4E0
    bool GetPressUp(Valve::VR::EVRButtonId buttonId);
    // public System.Boolean GetTouch(System.UInt64 buttonMask)
    // Offset: 0x141F528
    bool GetTouch(uint64_t buttonMask);
    // public System.Boolean GetTouchDown(System.UInt64 buttonMask)
    // Offset: 0x141F558
    bool GetTouchDown(uint64_t buttonMask);
    // public System.Boolean GetTouchUp(System.UInt64 buttonMask)
    // Offset: 0x141F59C
    bool GetTouchUp(uint64_t buttonMask);
    // public System.Boolean GetTouch(Valve.VR.EVRButtonId buttonId)
    // Offset: 0x141F5E0
    bool GetTouch(Valve::VR::EVRButtonId buttonId);
    // public System.Boolean GetTouchDown(Valve.VR.EVRButtonId buttonId)
    // Offset: 0x141F614
    bool GetTouchDown(Valve::VR::EVRButtonId buttonId);
    // public System.Boolean GetTouchUp(Valve.VR.EVRButtonId buttonId)
    // Offset: 0x141F65C
    bool GetTouchUp(Valve::VR::EVRButtonId buttonId);
    // public UnityEngine.Vector2 GetAxis(Valve.VR.EVRButtonId buttonId)
    // Offset: 0x141F6A4
    UnityEngine::Vector2 GetAxis(Valve::VR::EVRButtonId buttonId);
    // public System.Void TriggerHapticPulse(System.UInt16 durationMicroSec, Valve.VR.EVRButtonId buttonId)
    // Offset: 0x141F780
    void TriggerHapticPulse(uint16_t durationMicroSec, Valve::VR::EVRButtonId buttonId);
    // private System.Void UpdateHairTrigger()
    // Offset: 0x141F2AC
    void UpdateHairTrigger();
    // public System.Boolean GetHairTrigger()
    // Offset: 0x141F81C
    bool GetHairTrigger();
    // public System.Boolean GetHairTriggerDown()
    // Offset: 0x141F840
    bool GetHairTriggerDown();
    // public System.Boolean GetHairTriggerUp()
    // Offset: 0x141F87C
    bool GetHairTriggerUp();
  }; // SteamVR_Controller/Device
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_Controller::Device), 245 + sizeof(bool)> __GlobalNamespace_SteamVR_Controller_DeviceSizeCheck;
  static_assert(sizeof(SteamVR_Controller::Device) == 0xF6);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Controller::Device*, "", "SteamVR_Controller/Device");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::get_index
// Il2CppName: get_index
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::get_index)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "get_index", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::set_index
// Il2CppName: set_index
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Controller::Device::*)(uint)>(&GlobalNamespace::SteamVR_Controller::Device::set_index)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "set_index", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::get_valid
// Il2CppName: get_valid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::get_valid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "get_valid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::set_valid
// Il2CppName: set_valid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Controller::Device::*)(bool)>(&GlobalNamespace::SteamVR_Controller::Device::set_valid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "set_valid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::get_connected
// Il2CppName: get_connected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::get_connected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "get_connected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::get_hasTracking
// Il2CppName: get_hasTracking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::get_hasTracking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "get_hasTracking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::get_outOfRange
// Il2CppName: get_outOfRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::get_outOfRange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "get_outOfRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::get_calibrating
// Il2CppName: get_calibrating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::get_calibrating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "get_calibrating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::get_uninitialized
// Il2CppName: get_uninitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::get_uninitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "get_uninitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SteamVR_Utils::RigidTransform (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::get_velocity
// Il2CppName: get_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::get_velocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "get_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::get_angularVelocity
// Il2CppName: get_angularVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::get_angularVelocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "get_angularVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetState
// Il2CppName: GetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::VRControllerState_t (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::GetState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetPrevState
// Il2CppName: GetPrevState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::VRControllerState_t (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::GetPrevState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetPrevState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetPose
// Il2CppName: GetPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::TrackedDevicePose_t (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::GetPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetPress
// Il2CppName: GetPress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)(uint64_t)>(&GlobalNamespace::SteamVR_Controller::Device::GetPress)> {
  static const MethodInfo* get() {
    static auto* buttonMask = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetPress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetPressDown
// Il2CppName: GetPressDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)(uint64_t)>(&GlobalNamespace::SteamVR_Controller::Device::GetPressDown)> {
  static const MethodInfo* get() {
    static auto* buttonMask = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetPressDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetPressUp
// Il2CppName: GetPressUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)(uint64_t)>(&GlobalNamespace::SteamVR_Controller::Device::GetPressUp)> {
  static const MethodInfo* get() {
    static auto* buttonMask = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetPressUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetPress
// Il2CppName: GetPress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)(Valve::VR::EVRButtonId)>(&GlobalNamespace::SteamVR_Controller::Device::GetPress)> {
  static const MethodInfo* get() {
    static auto* buttonId = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRButtonId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetPress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetPressDown
// Il2CppName: GetPressDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)(Valve::VR::EVRButtonId)>(&GlobalNamespace::SteamVR_Controller::Device::GetPressDown)> {
  static const MethodInfo* get() {
    static auto* buttonId = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRButtonId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetPressDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetPressUp
// Il2CppName: GetPressUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)(Valve::VR::EVRButtonId)>(&GlobalNamespace::SteamVR_Controller::Device::GetPressUp)> {
  static const MethodInfo* get() {
    static auto* buttonId = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRButtonId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetPressUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetTouch
// Il2CppName: GetTouch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)(uint64_t)>(&GlobalNamespace::SteamVR_Controller::Device::GetTouch)> {
  static const MethodInfo* get() {
    static auto* buttonMask = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetTouch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetTouchDown
// Il2CppName: GetTouchDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)(uint64_t)>(&GlobalNamespace::SteamVR_Controller::Device::GetTouchDown)> {
  static const MethodInfo* get() {
    static auto* buttonMask = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetTouchDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetTouchUp
// Il2CppName: GetTouchUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)(uint64_t)>(&GlobalNamespace::SteamVR_Controller::Device::GetTouchUp)> {
  static const MethodInfo* get() {
    static auto* buttonMask = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetTouchUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetTouch
// Il2CppName: GetTouch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)(Valve::VR::EVRButtonId)>(&GlobalNamespace::SteamVR_Controller::Device::GetTouch)> {
  static const MethodInfo* get() {
    static auto* buttonId = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRButtonId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetTouch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetTouchDown
// Il2CppName: GetTouchDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)(Valve::VR::EVRButtonId)>(&GlobalNamespace::SteamVR_Controller::Device::GetTouchDown)> {
  static const MethodInfo* get() {
    static auto* buttonId = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRButtonId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetTouchDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetTouchUp
// Il2CppName: GetTouchUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)(Valve::VR::EVRButtonId)>(&GlobalNamespace::SteamVR_Controller::Device::GetTouchUp)> {
  static const MethodInfo* get() {
    static auto* buttonId = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRButtonId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetTouchUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetAxis
// Il2CppName: GetAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (GlobalNamespace::SteamVR_Controller::Device::*)(Valve::VR::EVRButtonId)>(&GlobalNamespace::SteamVR_Controller::Device::GetAxis)> {
  static const MethodInfo* get() {
    static auto* buttonId = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRButtonId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::TriggerHapticPulse
// Il2CppName: TriggerHapticPulse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Controller::Device::*)(uint16_t, Valve::VR::EVRButtonId)>(&GlobalNamespace::SteamVR_Controller::Device::TriggerHapticPulse)> {
  static const MethodInfo* get() {
    static auto* durationMicroSec = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* buttonId = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRButtonId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "TriggerHapticPulse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{durationMicroSec, buttonId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::UpdateHairTrigger
// Il2CppName: UpdateHairTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::UpdateHairTrigger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "UpdateHairTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetHairTrigger
// Il2CppName: GetHairTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::GetHairTrigger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetHairTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetHairTriggerDown
// Il2CppName: GetHairTriggerDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::GetHairTriggerDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetHairTriggerDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Controller::Device::GetHairTriggerUp
// Il2CppName: GetHairTriggerUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_Controller::Device::*)()>(&GlobalNamespace::SteamVR_Controller::Device::GetHairTriggerUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Controller::Device*), "GetHairTriggerUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
