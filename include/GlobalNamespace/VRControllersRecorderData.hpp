// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: PositionAndRotation because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorderData
  // [TokenAttribute] Offset: FFFFFFFF
  class VRControllersRecorderData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::VRControllersRecorderData::PositionAndRotation
    struct PositionAndRotation;
    // Nested type: GlobalNamespace::VRControllersRecorderData::Keyframe
    class Keyframe;
    // Nested type: GlobalNamespace::VRControllersRecorderData::NodeInfo
    class NodeInfo;
    // Size: 0x1C
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: VRControllersRecorderData/PositionAndRotation
    // [TokenAttribute] Offset: FFFFFFFF
    struct PositionAndRotation/*, public System::ValueType*/ {
      public:
      // public readonly UnityEngine.Vector3 pos
      // Size: 0xC
      // Offset: 0x0
      UnityEngine::Vector3 pos;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // public readonly UnityEngine.Quaternion rot
      // Size: 0x10
      // Offset: 0xC
      UnityEngine::Quaternion rot;
      // Field size check
      static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
      // Creating value type constructor for type: PositionAndRotation
      constexpr PositionAndRotation(UnityEngine::Vector3 pos_ = {}, UnityEngine::Quaternion rot_ = {}) noexcept : pos{pos_}, rot{rot_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field reference: public readonly UnityEngine.Vector3 pos
      UnityEngine::Vector3& dyn_pos();
      // Get instance field reference: public readonly UnityEngine.Quaternion rot
      UnityEngine::Quaternion& dyn_rot();
      // public System.Void .ctor(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
      // Offset: 0x129FC08
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  PositionAndRotation(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot)
      // static public VRControllersRecorderData/PositionAndRotation Lerp(VRControllersRecorderData/PositionAndRotation a, VRControllersRecorderData/PositionAndRotation b, System.Single t)
      // Offset: 0x129F9A4
      static GlobalNamespace::VRControllersRecorderData::PositionAndRotation Lerp(GlobalNamespace::VRControllersRecorderData::PositionAndRotation a, GlobalNamespace::VRControllersRecorderData::PositionAndRotation b, float t);
    }; // VRControllersRecorderData/PositionAndRotation
    #pragma pack(pop)
    static check_size<sizeof(VRControllersRecorderData::PositionAndRotation), 12 + sizeof(UnityEngine::Quaternion)> __GlobalNamespace_VRControllersRecorderData_PositionAndRotationSizeCheck;
    static_assert(sizeof(VRControllersRecorderData::PositionAndRotation) == 0x1C);
    // public readonly VRControllersRecorderData/NodeInfo[] nodesInfo
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::VRControllersRecorderData::NodeInfo*>* nodesInfo;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::VRControllersRecorderData::NodeInfo*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<VRControllersRecorderData/Keyframe> _keyframes
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::VRControllersRecorderData::Keyframe*>* keyframes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::VRControllersRecorderData::Keyframe*>*) == 0x8);
    // Creating value type constructor for type: VRControllersRecorderData
    VRControllersRecorderData(::Array<GlobalNamespace::VRControllersRecorderData::NodeInfo*>* nodesInfo_ = {}, System::Collections::Generic::List_1<GlobalNamespace::VRControllersRecorderData::Keyframe*>* keyframes_ = {}) noexcept : nodesInfo{nodesInfo_}, keyframes{keyframes_} {}
    // Get instance field reference: public readonly VRControllersRecorderData/NodeInfo[] nodesInfo
    ::Array<GlobalNamespace::VRControllersRecorderData::NodeInfo*>*& dyn_nodesInfo();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<VRControllersRecorderData/Keyframe> _keyframes
    System::Collections::Generic::List_1<GlobalNamespace::VRControllersRecorderData::Keyframe*>*& dyn__keyframes();
    // public System.Int32 get_numberOfKeyframes()
    // Offset: 0x129FB80
    int get_numberOfKeyframes();
    // public System.Void .ctor(VRControllersRecorderData/NodeInfo[] nodesInfo)
    // Offset: 0x129F67C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorderData* New_ctor(::Array<GlobalNamespace::VRControllersRecorderData::NodeInfo*>* nodesInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRControllersRecorderData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorderData*, creationType>(nodesInfo)));
    }
    // public System.Void AddKeyFrame(VRControllersRecorderData/PositionAndRotation[] positionsAndRotations, System.Single time)
    // Offset: 0x129F700
    void AddKeyFrame(::Array<GlobalNamespace::VRControllersRecorderData::PositionAndRotation>* positionsAndRotations, float time);
    // public VRControllersRecorderData/PositionAndRotation GetPositionAndRotation(System.Int32 frameIdx, UnityEngine.XR.XRNode nodeType, System.Int32 nodeIdx)
    // Offset: 0x129F7D8
    GlobalNamespace::VRControllersRecorderData::PositionAndRotation GetPositionAndRotation(int frameIdx, UnityEngine::XR::XRNode nodeType, int nodeIdx);
    // public VRControllersRecorderData/PositionAndRotation GetLerpedPositionAndRotation(System.Int32 frameIdx, System.Single t, UnityEngine.XR.XRNode nodeType, System.Int32 nodeIdx)
    // Offset: 0x129F904
    GlobalNamespace::VRControllersRecorderData::PositionAndRotation GetLerpedPositionAndRotation(int frameIdx, float t, UnityEngine::XR::XRNode nodeType, int nodeIdx);
    // public System.Single GetFrameTime(System.Int32 frameIdx)
    // Offset: 0x129FB00
    float GetFrameTime(int frameIdx);
  }; // VRControllersRecorderData
  #pragma pack(pop)
  static check_size<sizeof(VRControllersRecorderData), 24 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::VRControllersRecorderData::Keyframe*>*)> __GlobalNamespace_VRControllersRecorderDataSizeCheck;
  static_assert(sizeof(VRControllersRecorderData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorderData*, "", "VRControllersRecorderData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorderData::PositionAndRotation, "", "VRControllersRecorderData/PositionAndRotation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderData::get_numberOfKeyframes
// Il2CppName: get_numberOfKeyframes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::VRControllersRecorderData::*)()>(&GlobalNamespace::VRControllersRecorderData::get_numberOfKeyframes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorderData*), "get_numberOfKeyframes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderData::AddKeyFrame
// Il2CppName: AddKeyFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRControllersRecorderData::*)(::Array<GlobalNamespace::VRControllersRecorderData::PositionAndRotation>*, float)>(&GlobalNamespace::VRControllersRecorderData::AddKeyFrame)> {
  static const MethodInfo* get() {
    static auto* positionsAndRotations = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "VRControllersRecorderData/PositionAndRotation"), 1)->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorderData*), "AddKeyFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positionsAndRotations, time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderData::GetPositionAndRotation
// Il2CppName: GetPositionAndRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::VRControllersRecorderData::PositionAndRotation (GlobalNamespace::VRControllersRecorderData::*)(int, UnityEngine::XR::XRNode, int)>(&GlobalNamespace::VRControllersRecorderData::GetPositionAndRotation)> {
  static const MethodInfo* get() {
    static auto* frameIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nodeType = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* nodeIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorderData*), "GetPositionAndRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frameIdx, nodeType, nodeIdx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderData::GetLerpedPositionAndRotation
// Il2CppName: GetLerpedPositionAndRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::VRControllersRecorderData::PositionAndRotation (GlobalNamespace::VRControllersRecorderData::*)(int, float, UnityEngine::XR::XRNode, int)>(&GlobalNamespace::VRControllersRecorderData::GetLerpedPositionAndRotation)> {
  static const MethodInfo* get() {
    static auto* frameIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* nodeType = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* nodeIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorderData*), "GetLerpedPositionAndRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frameIdx, t, nodeType, nodeIdx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderData::GetFrameTime
// Il2CppName: GetFrameTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::VRControllersRecorderData::*)(int)>(&GlobalNamespace::VRControllersRecorderData::GetFrameTime)> {
  static const MethodInfo* get() {
    static auto* frameIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorderData*), "GetFrameTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frameIdx});
  }
};
