// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.HitReactionVRIK
#include "RootMotion/FinalIK/HitReactionVRIK.hpp"
// Including type: RootMotion.FinalIK.HitReactionVRIK/Offset
#include "RootMotion/FinalIK/HitReactionVRIK_Offset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: VRIK
  class VRIK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReactionVRIK/PositionOffset
  class HitReactionVRIK::PositionOffset : public RootMotion::FinalIK::HitReactionVRIK::Offset {
    public:
    // Nested type: RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink
    class PositionOffsetLink;
    // [TooltipAttribute] Offset: 0xE0D708
    // public System.Int32 forceDirCurveIndex
    // Size: 0x4
    // Offset: 0x50
    int forceDirCurveIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0xE0D740
    // public System.Int32 upDirCurveIndex
    // Size: 0x4
    // Offset: 0x54
    int upDirCurveIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0xE0D778
    // public RootMotion.FinalIK.HitReactionVRIK/PositionOffset/PositionOffsetLink[] offsetLinks
    // Size: 0x8
    // Offset: 0x58
    ::Array<RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink*>* offsetLinks;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink*>*) == 0x8);
    // Creating value type constructor for type: PositionOffset
    PositionOffset(int forceDirCurveIndex_ = {}, int upDirCurveIndex_ = {}, ::Array<RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink*>* offsetLinks_ = {}) noexcept : forceDirCurveIndex{forceDirCurveIndex_}, upDirCurveIndex{upDirCurveIndex_}, offsetLinks{offsetLinks_} {}
    // protected override System.Single GetLength(UnityEngine.AnimationCurve[] curves)
    // Offset: 0x1C64884
    // Implemented from: RootMotion.FinalIK.HitReactionVRIK/Offset
    // Base method: System.Single Offset::GetLength(UnityEngine.AnimationCurve[] curves)
    float GetLength(::Array<UnityEngine::AnimationCurve*>* curves);
    // protected override System.Void CrossFadeStart()
    // Offset: 0x1C64A7C
    // Implemented from: RootMotion.FinalIK.HitReactionVRIK/Offset
    // Base method: System.Void Offset::CrossFadeStart()
    void CrossFadeStart();
    // protected override System.Void OnApply(RootMotion.FinalIK.VRIK ik, UnityEngine.AnimationCurve[] curves, System.Single weight)
    // Offset: 0x1C64AFC
    // Implemented from: RootMotion.FinalIK.HitReactionVRIK/Offset
    // Base method: System.Void Offset::OnApply(RootMotion.FinalIK.VRIK ik, UnityEngine.AnimationCurve[] curves, System.Single weight)
    void OnApply(RootMotion::FinalIK::VRIK* ik, ::Array<UnityEngine::AnimationCurve*>* curves, float weight);
    // public System.Void .ctor()
    // Offset: 0x1C64E2C
    // Implemented from: RootMotion.FinalIK.HitReactionVRIK/Offset
    // Base method: System.Void Offset::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReactionVRIK::PositionOffset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::HitReactionVRIK::PositionOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReactionVRIK::PositionOffset*, creationType>()));
    }
  }; // RootMotion.FinalIK.HitReactionVRIK/PositionOffset
  #pragma pack(pop)
  static check_size<sizeof(HitReactionVRIK::PositionOffset), 88 + sizeof(::Array<RootMotion::FinalIK::HitReactionVRIK::PositionOffset::PositionOffsetLink*>*)> __RootMotion_FinalIK_HitReactionVRIK_PositionOffsetSizeCheck;
  static_assert(sizeof(HitReactionVRIK::PositionOffset) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReactionVRIK::PositionOffset*, "RootMotion.FinalIK", "HitReactionVRIK/PositionOffset");
// Writing includes for template specializations
#include "RootMotion/FinalIK/VRIK.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::PositionOffset::GetLength
// Il2CppName: GetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::HitReactionVRIK::PositionOffset::*)(::Array<UnityEngine::AnimationCurve*>*)>(&RootMotion::FinalIK::HitReactionVRIK::PositionOffset::GetLength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::PositionOffset*), "GetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::AnimationCurve*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::PositionOffset::CrossFadeStart
// Il2CppName: CrossFadeStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::PositionOffset::*)()>(&RootMotion::FinalIK::HitReactionVRIK::PositionOffset::CrossFadeStart)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::PositionOffset*), "CrossFadeStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::PositionOffset::OnApply
// Il2CppName: OnApply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::PositionOffset::*)(RootMotion::FinalIK::VRIK*, ::Array<UnityEngine::AnimationCurve*>*, float)>(&RootMotion::FinalIK::HitReactionVRIK::PositionOffset::OnApply)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::PositionOffset*), "OnApply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<RootMotion::FinalIK::VRIK*>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::AnimationCurve*>*>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::PositionOffset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
