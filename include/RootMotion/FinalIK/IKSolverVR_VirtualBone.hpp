// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverVR::VirtualBone : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector3 readPosition
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 readPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion readRotation
    // Size: 0x10
    // Offset: 0x1C
    UnityEngine::Quaternion readRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 solverPosition
    // Size: 0xC
    // Offset: 0x2C
    UnityEngine::Vector3 solverPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion solverRotation
    // Size: 0x10
    // Offset: 0x38
    UnityEngine::Quaternion solverRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public System.Single length
    // Size: 0x4
    // Offset: 0x48
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single sqrMag
    // Size: 0x4
    // Offset: 0x4C
    float sqrMag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 axis
    // Size: 0xC
    // Offset: 0x50
    UnityEngine::Vector3 axis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: VirtualBone
    VirtualBone(UnityEngine::Vector3 readPosition_ = {}, UnityEngine::Quaternion readRotation_ = {}, UnityEngine::Vector3 solverPosition_ = {}, UnityEngine::Quaternion solverRotation_ = {}, float length_ = {}, float sqrMag_ = {}, UnityEngine::Vector3 axis_ = {}) noexcept : readPosition{readPosition_}, readRotation{readRotation_}, solverPosition{solverPosition_}, solverRotation{solverRotation_}, length{length_}, sqrMag{sqrMag_}, axis{axis_} {}
    // Get instance field reference: public UnityEngine.Vector3 readPosition
    UnityEngine::Vector3& dyn_readPosition();
    // Get instance field reference: public UnityEngine.Quaternion readRotation
    UnityEngine::Quaternion& dyn_readRotation();
    // Get instance field reference: public UnityEngine.Vector3 solverPosition
    UnityEngine::Vector3& dyn_solverPosition();
    // Get instance field reference: public UnityEngine.Quaternion solverRotation
    UnityEngine::Quaternion& dyn_solverRotation();
    // Get instance field reference: public System.Single length
    float& dyn_length();
    // Get instance field reference: public System.Single sqrMag
    float& dyn_sqrMag();
    // Get instance field reference: public UnityEngine.Vector3 axis
    UnityEngine::Vector3& dyn_axis();
    // public System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x1E7E338
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverVR::VirtualBone* New_ctor(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverVR::VirtualBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverVR::VirtualBone*, creationType>(position, rotation)));
    }
    // public System.Void Read(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x1E7E3B4
    void Read(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // static public System.Void SwingRotation(RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone[] bones, System.Int32 index, UnityEngine.Vector3 swingTarget, System.Single weight)
    // Offset: 0x1E8B34C
    static void SwingRotation(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones, int index, UnityEngine::Vector3 swingTarget, float weight);
    // static public System.Single PreSolve(ref RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone[] bones)
    // Offset: 0x1E81660
    static float PreSolve(ByRef<::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>*> bones);
    // static public System.Void RotateAroundPoint(RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone[] bones, System.Int32 index, UnityEngine.Vector3 point, UnityEngine.Quaternion rotation)
    // Offset: 0x1E81B60
    static void RotateAroundPoint(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones, int index, UnityEngine::Vector3 point, UnityEngine::Quaternion rotation);
    // static public System.Void RotateBy(RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone[] bones, System.Int32 index, UnityEngine.Quaternion rotation)
    // Offset: 0x1E8B5DC
    static void RotateBy(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones, int index, UnityEngine::Quaternion rotation);
    // static public System.Void RotateBy(RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone[] bones, UnityEngine.Quaternion rotation)
    // Offset: 0x1E800B8
    static void RotateBy(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones, UnityEngine::Quaternion rotation);
    // static public System.Void RotateTo(RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone[] bones, System.Int32 index, UnityEngine.Quaternion rotation)
    // Offset: 0x1E8B814
    static void RotateTo(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones, int index, UnityEngine::Quaternion rotation);
    // static public System.Void SolveTrigonometric(RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone[] bones, System.Int32 first, System.Int32 second, System.Int32 third, UnityEngine.Vector3 targetPosition, UnityEngine.Vector3 bendNormal, System.Single weight)
    // Offset: 0x1E808A4
    static void SolveTrigonometric(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones, int first, int second, int third, UnityEngine::Vector3 targetPosition, UnityEngine::Vector3 bendNormal, float weight);
    // static private UnityEngine.Vector3 GetDirectionToBendPoint(UnityEngine.Vector3 direction, System.Single directionMag, UnityEngine.Vector3 bendDirection, System.Single sqrMag1, System.Single sqrMag2)
    // Offset: 0x1E8B8CC
    static UnityEngine::Vector3 GetDirectionToBendPoint(UnityEngine::Vector3 direction, float directionMag, UnityEngine::Vector3 bendDirection, float sqrMag1, float sqrMag2);
    // static public System.Void SolveFABRIK(RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone[] bones, UnityEngine.Vector3 startPosition, UnityEngine.Vector3 targetPosition, System.Single weight, System.Single minNormalizedTargetDistance, System.Int32 iterations, System.Single length, UnityEngine.Vector3 startOffset)
    // Offset: 0x1E8A738
    static void SolveFABRIK(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones, UnityEngine::Vector3 startPosition, UnityEngine::Vector3 targetPosition, float weight, float minNormalizedTargetDistance, int iterations, float length, UnityEngine::Vector3 startOffset);
    // static private UnityEngine.Vector3 SolveFABRIKJoint(UnityEngine.Vector3 pos1, UnityEngine.Vector3 pos2, System.Single length)
    // Offset: 0x1E8BAE4
    static UnityEngine::Vector3 SolveFABRIKJoint(UnityEngine::Vector3 pos1, UnityEngine::Vector3 pos2, float length);
    // static public System.Void SolveCCD(RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone[] bones, UnityEngine.Vector3 targetPosition, System.Single weight, System.Int32 iterations)
    // Offset: 0x1E8BBEC
    static void SolveCCD(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones, UnityEngine::Vector3 targetPosition, float weight, int iterations);
  }; // RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone
  #pragma pack(pop)
  static check_size<sizeof(IKSolverVR::VirtualBone), 80 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_IKSolverVR_VirtualBoneSizeCheck;
  static_assert(sizeof(IKSolverVR::VirtualBone) == 0x5C);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR::VirtualBone*, "RootMotion.FinalIK", "IKSolverVR/VirtualBone");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::VirtualBone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::VirtualBone::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::VirtualBone::*)(UnityEngine::Vector3, UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverVR::VirtualBone::Read)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::VirtualBone*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::VirtualBone::SwingRotation
// Il2CppName: SwingRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>*, int, UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKSolverVR::VirtualBone::SwingRotation)> {
  static const MethodInfo* get() {
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/VirtualBone"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* swingTarget = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::VirtualBone*), "SwingRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bones, index, swingTarget, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::VirtualBone::PreSolve
// Il2CppName: PreSolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>*>)>(&RootMotion::FinalIK::IKSolverVR::VirtualBone::PreSolve)> {
  static const MethodInfo* get() {
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/VirtualBone"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::VirtualBone*), "PreSolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bones});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::VirtualBone::RotateAroundPoint
// Il2CppName: RotateAroundPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>*, int, UnityEngine::Vector3, UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverVR::VirtualBone::RotateAroundPoint)> {
  static const MethodInfo* get() {
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/VirtualBone"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::VirtualBone*), "RotateAroundPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bones, index, point, rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::VirtualBone::RotateBy
// Il2CppName: RotateBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>*, int, UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverVR::VirtualBone::RotateBy)> {
  static const MethodInfo* get() {
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/VirtualBone"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::VirtualBone*), "RotateBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bones, index, rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::VirtualBone::RotateBy
// Il2CppName: RotateBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>*, UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverVR::VirtualBone::RotateBy)> {
  static const MethodInfo* get() {
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/VirtualBone"), 1)->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::VirtualBone*), "RotateBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bones, rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::VirtualBone::RotateTo
// Il2CppName: RotateTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>*, int, UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverVR::VirtualBone::RotateTo)> {
  static const MethodInfo* get() {
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/VirtualBone"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::VirtualBone*), "RotateTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bones, index, rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::VirtualBone::SolveTrigonometric
// Il2CppName: SolveTrigonometric
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>*, int, int, int, UnityEngine::Vector3, UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKSolverVR::VirtualBone::SolveTrigonometric)> {
  static const MethodInfo* get() {
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/VirtualBone"), 1)->byval_arg;
    static auto* first = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* third = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* bendNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::VirtualBone*), "SolveTrigonometric", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bones, first, second, third, targetPosition, bendNormal, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::VirtualBone::GetDirectionToBendPoint
// Il2CppName: GetDirectionToBendPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, float, UnityEngine::Vector3, float, float)>(&RootMotion::FinalIK::IKSolverVR::VirtualBone::GetDirectionToBendPoint)> {
  static const MethodInfo* get() {
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* directionMag = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bendDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* sqrMag1 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sqrMag2 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::VirtualBone*), "GetDirectionToBendPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{direction, directionMag, bendDirection, sqrMag1, sqrMag2});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::VirtualBone::SolveFABRIK
// Il2CppName: SolveFABRIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>*, UnityEngine::Vector3, UnityEngine::Vector3, float, float, int, float, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::VirtualBone::SolveFABRIK)> {
  static const MethodInfo* get() {
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/VirtualBone"), 1)->byval_arg;
    static auto* startPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* minNormalizedTargetDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* iterations = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* startOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::VirtualBone*), "SolveFABRIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bones, startPosition, targetPosition, weight, minNormalizedTargetDistance, iterations, length, startOffset});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::VirtualBone::SolveFABRIKJoint
// Il2CppName: SolveFABRIKJoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKSolverVR::VirtualBone::SolveFABRIKJoint)> {
  static const MethodInfo* get() {
    static auto* pos1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* pos2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::VirtualBone*), "SolveFABRIKJoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos1, pos2, length});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::VirtualBone::SolveCCD
// Il2CppName: SolveCCD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>*, UnityEngine::Vector3, float, int)>(&RootMotion::FinalIK::IKSolverVR::VirtualBone::SolveCCD)> {
  static const MethodInfo* get() {
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/VirtualBone"), 1)->byval_arg;
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* iterations = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::VirtualBone*), "SolveCCD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bones, targetPosition, weight, iterations});
  }
};
