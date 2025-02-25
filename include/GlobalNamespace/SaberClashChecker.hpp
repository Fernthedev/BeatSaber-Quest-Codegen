// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Saber
  class Saber;
  // Forward declaring type: SaberManager
  class SaberManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: SaberClashChecker
  // [TokenAttribute] Offset: FFFFFFFF
  class SaberClashChecker : public ::Il2CppObject {
    public:
    // private System.Boolean _sabersAreClashing
    // Size: 0x1
    // Offset: 0x10
    bool sabersAreClashing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: sabersAreClashing and: clashingPoint
    char __padding0[0x3] = {};
    // private UnityEngine.Vector3 _clashingPoint
    // Size: 0xC
    // Offset: 0x14
    UnityEngine::Vector3 clashingPoint;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private Saber _leftSaber
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::Saber* leftSaber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Saber*) == 0x8);
    // private Saber _rightSaber
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::Saber* rightSaber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Saber*) == 0x8);
    // private System.Int32 _prevGetFrameNum
    // Size: 0x4
    // Offset: 0x30
    int prevGetFrameNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SaberClashChecker
    SaberClashChecker(bool sabersAreClashing_ = {}, UnityEngine::Vector3 clashingPoint_ = {}, GlobalNamespace::Saber* leftSaber_ = {}, GlobalNamespace::Saber* rightSaber_ = {}, int prevGetFrameNum_ = {}) noexcept : sabersAreClashing{sabersAreClashing_}, clashingPoint{clashingPoint_}, leftSaber{leftSaber_}, rightSaber{rightSaber_}, prevGetFrameNum{prevGetFrameNum_} {}
    // static field const value: static private System.Single kMinDistanceToClash
    static constexpr const float kMinDistanceToClash = 0.08;
    // Get static field: static private System.Single kMinDistanceToClash
    static float _get_kMinDistanceToClash();
    // Set static field: static private System.Single kMinDistanceToClash
    static void _set_kMinDistanceToClash(float value);
    // static field const value: static private System.Single kIgnoredTime
    static constexpr const float kIgnoredTime = 0.1;
    // Get static field: static private System.Single kIgnoredTime
    static float _get_kIgnoredTime();
    // Set static field: static private System.Single kIgnoredTime
    static void _set_kIgnoredTime(float value);
    // Get instance field reference: private System.Boolean _sabersAreClashing
    bool& dyn__sabersAreClashing();
    // Get instance field reference: private UnityEngine.Vector3 _clashingPoint
    UnityEngine::Vector3& dyn__clashingPoint();
    // Get instance field reference: private Saber _leftSaber
    GlobalNamespace::Saber*& dyn__leftSaber();
    // Get instance field reference: private Saber _rightSaber
    GlobalNamespace::Saber*& dyn__rightSaber();
    // Get instance field reference: private System.Int32 _prevGetFrameNum
    int& dyn__prevGetFrameNum();
    // private System.Void Init(SaberManager saberManager)
    // Offset: 0x112FD38
    void Init(GlobalNamespace::SaberManager* saberManager);
    // public System.Boolean AreSabersClashing(out UnityEngine.Vector3 clashingPoint)
    // Offset: 0x112FD5C
    bool AreSabersClashing(ByRef<UnityEngine::Vector3> clashingPoint);
    // private System.Single SegmentToSegmentDist(UnityEngine.Vector3 fromA, UnityEngine.Vector3 toA, UnityEngine.Vector3 fromB, UnityEngine.Vector3 toB, out UnityEngine.Vector3 inbetweenPoint)
    // Offset: 0x112FF34
    float SegmentToSegmentDist(UnityEngine::Vector3 fromA, UnityEngine::Vector3 toA, UnityEngine::Vector3 fromB, UnityEngine::Vector3 toB, ByRef<UnityEngine::Vector3> inbetweenPoint);
    // public System.Void .ctor()
    // Offset: 0x11303E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberClashChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberClashChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberClashChecker*, creationType>()));
    }
  }; // SaberClashChecker
  #pragma pack(pop)
  static check_size<sizeof(SaberClashChecker), 48 + sizeof(int)> __GlobalNamespace_SaberClashCheckerSizeCheck;
  static_assert(sizeof(SaberClashChecker) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberClashChecker*, "", "SaberClashChecker");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberClashChecker::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberClashChecker::*)(GlobalNamespace::SaberManager*)>(&GlobalNamespace::SaberClashChecker::Init)> {
  static const MethodInfo* get() {
    static auto* saberManager = &::il2cpp_utils::GetClassFromName("", "SaberManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberClashChecker*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberManager});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberClashChecker::AreSabersClashing
// Il2CppName: AreSabersClashing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SaberClashChecker::*)(ByRef<UnityEngine::Vector3>)>(&GlobalNamespace::SaberClashChecker::AreSabersClashing)> {
  static const MethodInfo* get() {
    static auto* clashingPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberClashChecker*), "AreSabersClashing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clashingPoint});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberClashChecker::SegmentToSegmentDist
// Il2CppName: SegmentToSegmentDist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberClashChecker::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, ByRef<UnityEngine::Vector3>)>(&GlobalNamespace::SaberClashChecker::SegmentToSegmentDist)> {
  static const MethodInfo* get() {
    static auto* fromA = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* toA = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* fromB = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* toB = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* inbetweenPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberClashChecker*), "SegmentToSegmentDist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromA, toA, fromB, toB, inbetweenPoint});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberClashChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
