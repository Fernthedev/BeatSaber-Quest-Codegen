// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
// Including type: UnityEngine.XR.AvailableTrackingData
#include "UnityEngine/XR/AvailableTrackingData.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x60
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.XRNodeState
  // [UsedByNativeCodeAttribute] Offset: DB6598
  struct XRNodeState/*, public System::ValueType*/ {
    public:
    // private UnityEngine.XR.XRNode m_Type
    // Size: 0x4
    // Offset: 0x0
    UnityEngine::XR::XRNode m_Type;
    // Field size check
    static_assert(sizeof(UnityEngine::XR::XRNode) == 0x4);
    // private UnityEngine.XR.AvailableTrackingData m_AvailableFields
    // Size: 0x4
    // Offset: 0x4
    UnityEngine::XR::AvailableTrackingData m_AvailableFields;
    // Field size check
    static_assert(sizeof(UnityEngine::XR::AvailableTrackingData) == 0x4);
    // private UnityEngine.Vector3 m_Position
    // Size: 0xC
    // Offset: 0x8
    UnityEngine::Vector3 m_Position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion m_Rotation
    // Size: 0x10
    // Offset: 0x14
    UnityEngine::Quaternion m_Rotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 m_Velocity
    // Size: 0xC
    // Offset: 0x24
    UnityEngine::Vector3 m_Velocity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_AngularVelocity
    // Size: 0xC
    // Offset: 0x30
    UnityEngine::Vector3 m_AngularVelocity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_Acceleration
    // Size: 0xC
    // Offset: 0x3C
    UnityEngine::Vector3 m_Acceleration;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_AngularAcceleration
    // Size: 0xC
    // Offset: 0x48
    UnityEngine::Vector3 m_AngularAcceleration;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Int32 m_Tracked
    // Size: 0x4
    // Offset: 0x54
    int m_Tracked;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt64 m_UniqueID
    // Size: 0x8
    // Offset: 0x58
    uint64_t m_UniqueID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: XRNodeState
    constexpr XRNodeState(UnityEngine::XR::XRNode m_Type_ = {}, UnityEngine::XR::AvailableTrackingData m_AvailableFields_ = {}, UnityEngine::Vector3 m_Position_ = {}, UnityEngine::Quaternion m_Rotation_ = {}, UnityEngine::Vector3 m_Velocity_ = {}, UnityEngine::Vector3 m_AngularVelocity_ = {}, UnityEngine::Vector3 m_Acceleration_ = {}, UnityEngine::Vector3 m_AngularAcceleration_ = {}, int m_Tracked_ = {}, uint64_t m_UniqueID_ = {}) noexcept : m_Type{m_Type_}, m_AvailableFields{m_AvailableFields_}, m_Position{m_Position_}, m_Rotation{m_Rotation_}, m_Velocity{m_Velocity_}, m_AngularVelocity{m_AngularVelocity_}, m_Acceleration{m_Acceleration_}, m_AngularAcceleration{m_AngularAcceleration_}, m_Tracked{m_Tracked_}, m_UniqueID{m_UniqueID_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void set_uniqueID(System.UInt64 value)
    // Offset: 0xF23DC8
    void set_uniqueID(uint64_t value);
    // public UnityEngine.XR.XRNode get_nodeType()
    // Offset: 0xF23DD0
    UnityEngine::XR::XRNode get_nodeType();
    // public System.Void set_nodeType(UnityEngine.XR.XRNode value)
    // Offset: 0xF23DD8
    void set_nodeType(UnityEngine::XR::XRNode value);
    // public System.Void set_tracked(System.Boolean value)
    // Offset: 0xF23DE0
    void set_tracked(bool value);
    // public System.Boolean TryGetPosition(out UnityEngine.Vector3 position)
    // Offset: 0xF23DEC
    bool TryGetPosition(UnityEngine::Vector3& position);
    // public System.Boolean TryGetRotation(out UnityEngine.Quaternion rotation)
    // Offset: 0xF23E04
    bool TryGetRotation(UnityEngine::Quaternion& rotation);
    // public System.Boolean TryGetVelocity(out UnityEngine.Vector3 velocity)
    // Offset: 0xF23E1C
    bool TryGetVelocity(UnityEngine::Vector3& velocity);
    // public System.Boolean TryGetAngularVelocity(out UnityEngine.Vector3 angularVelocity)
    // Offset: 0xF23E34
    bool TryGetAngularVelocity(UnityEngine::Vector3& angularVelocity);
    // public System.Boolean TryGetAcceleration(out UnityEngine.Vector3 acceleration)
    // Offset: 0xF23E4C
    bool TryGetAcceleration(UnityEngine::Vector3& acceleration);
    // public System.Boolean TryGetAngularAcceleration(out UnityEngine.Vector3 angularAcceleration)
    // Offset: 0xF23E64
    bool TryGetAngularAcceleration(UnityEngine::Vector3& angularAcceleration);
    // private System.Boolean TryGet(UnityEngine.Vector3 inValue, UnityEngine.XR.AvailableTrackingData availabilityFlag, out UnityEngine.Vector3 outValue)
    // Offset: 0xF23E7C
    bool TryGet(UnityEngine::Vector3 inValue, UnityEngine::XR::AvailableTrackingData availabilityFlag, UnityEngine::Vector3& outValue);
    // private System.Boolean TryGet(UnityEngine.Quaternion inValue, UnityEngine.XR.AvailableTrackingData availabilityFlag, out UnityEngine.Quaternion outValue)
    // Offset: 0xF23E84
    bool TryGet(UnityEngine::Quaternion inValue, UnityEngine::XR::AvailableTrackingData availabilityFlag, UnityEngine::Quaternion& outValue);
  }; // UnityEngine.XR.XRNodeState
  #pragma pack(pop)
  static check_size<sizeof(XRNodeState), 88 + sizeof(uint64_t)> __UnityEngine_XR_XRNodeStateSizeCheck;
  static_assert(sizeof(XRNodeState) == 0x60);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRNodeState, "UnityEngine.XR", "XRNodeState");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::XR::XRNodeState::set_uniqueID
// Il2CppName: set_uniqueID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::XRNodeState::*)(uint64_t)>(&UnityEngine::XR::XRNodeState::set_uniqueID)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRNodeState), "set_uniqueID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRNodeState::get_nodeType
// Il2CppName: get_nodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::XRNode (UnityEngine::XR::XRNodeState::*)()>(&UnityEngine::XR::XRNodeState::get_nodeType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRNodeState), "get_nodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRNodeState::set_nodeType
// Il2CppName: set_nodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::XRNodeState::*)(UnityEngine::XR::XRNode)>(&UnityEngine::XR::XRNodeState::set_nodeType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRNodeState), "set_nodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::XR::XRNode>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRNodeState::set_tracked
// Il2CppName: set_tracked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::XRNodeState::*)(bool)>(&UnityEngine::XR::XRNodeState::set_tracked)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRNodeState), "set_tracked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRNodeState::TryGetPosition
// Il2CppName: TryGetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::XRNodeState::*)(UnityEngine::Vector3&)>(&UnityEngine::XR::XRNodeState::TryGetPosition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRNodeState), "TryGetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRNodeState::TryGetRotation
// Il2CppName: TryGetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::XRNodeState::*)(UnityEngine::Quaternion&)>(&UnityEngine::XR::XRNodeState::TryGetRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRNodeState), "TryGetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRNodeState::TryGetVelocity
// Il2CppName: TryGetVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::XRNodeState::*)(UnityEngine::Vector3&)>(&UnityEngine::XR::XRNodeState::TryGetVelocity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRNodeState), "TryGetVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRNodeState::TryGetAngularVelocity
// Il2CppName: TryGetAngularVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::XRNodeState::*)(UnityEngine::Vector3&)>(&UnityEngine::XR::XRNodeState::TryGetAngularVelocity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRNodeState), "TryGetAngularVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRNodeState::TryGetAcceleration
// Il2CppName: TryGetAcceleration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::XRNodeState::*)(UnityEngine::Vector3&)>(&UnityEngine::XR::XRNodeState::TryGetAcceleration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRNodeState), "TryGetAcceleration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRNodeState::TryGetAngularAcceleration
// Il2CppName: TryGetAngularAcceleration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::XRNodeState::*)(UnityEngine::Vector3&)>(&UnityEngine::XR::XRNodeState::TryGetAngularAcceleration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRNodeState), "TryGetAngularAcceleration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRNodeState::TryGet
// Il2CppName: TryGet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::XRNodeState::*)(UnityEngine::Vector3, UnityEngine::XR::AvailableTrackingData, UnityEngine::Vector3&)>(&UnityEngine::XR::XRNodeState::TryGet)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRNodeState), "TryGet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::XR::AvailableTrackingData>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRNodeState::TryGet
// Il2CppName: TryGet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::XRNodeState::*)(UnityEngine::Quaternion, UnityEngine::XR::AvailableTrackingData, UnityEngine::Quaternion&)>(&UnityEngine::XR::XRNodeState::TryGet)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRNodeState), "TryGet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::XR::AvailableTrackingData>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>()});
  }
};
