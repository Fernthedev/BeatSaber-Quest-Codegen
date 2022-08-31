// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.HitReactionVRIK
#include "RootMotion/FinalIK/HitReactionVRIK.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: VRIK
  class VRIK;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::HitReactionVRIK::Offset);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::HitReactionVRIK::Offset*, "RootMotion.FinalIK", "HitReactionVRIK/Offset");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.Offset
  // [TokenAttribute] Offset: FFFFFFFF
  class HitReactionVRIK::Offset : public ::Il2CppObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0x1110C9C
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [TooltipAttribute] Offset: 0x1110CD4
    // public UnityEngine.Collider collider
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Collider* collider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // [TooltipAttribute] Offset: 0x1110D0C
    // private System.Single crossFadeTime
    // Size: 0x4
    // Offset: 0x20
    float crossFadeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <crossFader>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    float crossFader;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <timer>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float timer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 <force>k__BackingField
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 force;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 <point>k__BackingField
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 point;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single length
    // Size: 0x4
    // Offset: 0x44
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single crossFadeSpeed
    // Size: 0x4
    // Offset: 0x48
    float crossFadeSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single lastTime
    // Size: 0x4
    // Offset: 0x4C
    float lastTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public UnityEngine.Collider collider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn_collider();
    // Get instance field reference: private System.Single crossFadeTime
    [[deprecated("Use field access instead!")]] float& dyn_crossFadeTime();
    // Get instance field reference: private System.Single <crossFader>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$crossFader$k__BackingField();
    // Get instance field reference: private System.Single <timer>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$timer$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 <force>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_$force$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 <point>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_$point$k__BackingField();
    // Get instance field reference: private System.Single length
    [[deprecated("Use field access instead!")]] float& dyn_length();
    // Get instance field reference: private System.Single crossFadeSpeed
    [[deprecated("Use field access instead!")]] float& dyn_crossFadeSpeed();
    // Get instance field reference: private System.Single lastTime
    [[deprecated("Use field access instead!")]] float& dyn_lastTime();
    // protected System.Single get_crossFader()
    // Offset: 0x2209EF0
    float get_crossFader();
    // private System.Void set_crossFader(System.Single value)
    // Offset: 0x2209EF8
    void set_crossFader(float value);
    // protected System.Single get_timer()
    // Offset: 0x2209F00
    float get_timer();
    // private System.Void set_timer(System.Single value)
    // Offset: 0x2209F08
    void set_timer(float value);
    // protected UnityEngine.Vector3 get_force()
    // Offset: 0x2209F10
    ::UnityEngine::Vector3 get_force();
    // private System.Void set_force(UnityEngine.Vector3 value)
    // Offset: 0x2209F1C
    void set_force(::UnityEngine::Vector3 value);
    // protected UnityEngine.Vector3 get_point()
    // Offset: 0x2209F28
    ::UnityEngine::Vector3 get_point();
    // private System.Void set_point(UnityEngine.Vector3 value)
    // Offset: 0x2209F34
    void set_point(::UnityEngine::Vector3 value);
    // protected System.Void .ctor()
    // Offset: 0x2209F40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReactionVRIK::Offset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::HitReactionVRIK::Offset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReactionVRIK::Offset*, creationType>()));
    }
    // public System.Void Hit(UnityEngine.Vector3 force, UnityEngine.AnimationCurve[] curves, UnityEngine.Vector3 point)
    // Offset: 0x2209DA8
    void Hit(::UnityEngine::Vector3 force, ::ArrayW<::UnityEngine::AnimationCurve*> curves, ::UnityEngine::Vector3 point);
    // public System.Void Apply(RootMotion.FinalIK.VRIK ik, UnityEngine.AnimationCurve[] curves, System.Single weight)
    // Offset: 0x2209A0C
    void Apply(::RootMotion::FinalIK::VRIK* ik, ::ArrayW<::UnityEngine::AnimationCurve*> curves, float weight);
    // protected System.Single GetLength(UnityEngine.AnimationCurve[] curves)
    // Offset: 0xFFFFFFFFFFFFFFFF
    float GetLength(::ArrayW<::UnityEngine::AnimationCurve*> curves);
    // protected System.Void CrossFadeStart()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CrossFadeStart();
    // protected System.Void OnApply(RootMotion.FinalIK.VRIK ik, UnityEngine.AnimationCurve[] curves, System.Single weight)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnApply(::RootMotion::FinalIK::VRIK* ik, ::ArrayW<::UnityEngine::AnimationCurve*> curves, float weight);
  }; // RootMotion.FinalIK.HitReactionVRIK/RootMotion.FinalIK.Offset
  #pragma pack(pop)
  static check_size<sizeof(HitReactionVRIK::Offset), 76 + sizeof(float)> __RootMotion_FinalIK_HitReactionVRIK_OffsetSizeCheck;
  static_assert(sizeof(HitReactionVRIK::Offset) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::Offset::get_crossFader
// Il2CppName: get_crossFader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::HitReactionVRIK::Offset::*)()>(&RootMotion::FinalIK::HitReactionVRIK::Offset::get_crossFader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::Offset*), "get_crossFader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::Offset::set_crossFader
// Il2CppName: set_crossFader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::Offset::*)(float)>(&RootMotion::FinalIK::HitReactionVRIK::Offset::set_crossFader)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::Offset*), "set_crossFader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::Offset::get_timer
// Il2CppName: get_timer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::HitReactionVRIK::Offset::*)()>(&RootMotion::FinalIK::HitReactionVRIK::Offset::get_timer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::Offset*), "get_timer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::Offset::set_timer
// Il2CppName: set_timer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::Offset::*)(float)>(&RootMotion::FinalIK::HitReactionVRIK::Offset::set_timer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::Offset*), "set_timer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::Offset::get_force
// Il2CppName: get_force
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::HitReactionVRIK::Offset::*)()>(&RootMotion::FinalIK::HitReactionVRIK::Offset::get_force)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::Offset*), "get_force", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::Offset::set_force
// Il2CppName: set_force
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::Offset::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::HitReactionVRIK::Offset::set_force)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::Offset*), "set_force", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::Offset::get_point
// Il2CppName: get_point
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::HitReactionVRIK::Offset::*)()>(&RootMotion::FinalIK::HitReactionVRIK::Offset::get_point)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::Offset*), "get_point", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::Offset::set_point
// Il2CppName: set_point
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::Offset::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::HitReactionVRIK::Offset::set_point)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::Offset*), "set_point", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::Offset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::Offset::Hit
// Il2CppName: Hit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::Offset::*)(::UnityEngine::Vector3, ::ArrayW<::UnityEngine::AnimationCurve*>, ::UnityEngine::Vector3)>(&RootMotion::FinalIK::HitReactionVRIK::Offset::Hit)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* curves = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve"), 1)->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::Offset*), "Hit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force, curves, point});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::Offset::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::Offset::*)(::RootMotion::FinalIK::VRIK*, ::ArrayW<::UnityEngine::AnimationCurve*>, float)>(&RootMotion::FinalIK::HitReactionVRIK::Offset::Apply)> {
  static const MethodInfo* get() {
    static auto* ik = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIK")->byval_arg;
    static auto* curves = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve"), 1)->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::Offset*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ik, curves, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::Offset::GetLength
// Il2CppName: GetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::HitReactionVRIK::Offset::*)(::ArrayW<::UnityEngine::AnimationCurve*>)>(&RootMotion::FinalIK::HitReactionVRIK::Offset::GetLength)> {
  static const MethodInfo* get() {
    static auto* curves = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::Offset*), "GetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curves});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::Offset::CrossFadeStart
// Il2CppName: CrossFadeStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::Offset::*)()>(&RootMotion::FinalIK::HitReactionVRIK::Offset::CrossFadeStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::Offset*), "CrossFadeStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReactionVRIK::Offset::OnApply
// Il2CppName: OnApply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReactionVRIK::Offset::*)(::RootMotion::FinalIK::VRIK*, ::ArrayW<::UnityEngine::AnimationCurve*>, float)>(&RootMotion::FinalIK::HitReactionVRIK::Offset::OnApply)> {
  static const MethodInfo* get() {
    static auto* ik = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIK")->byval_arg;
    static auto* curves = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve"), 1)->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReactionVRIK::Offset*), "OnApply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ik, curves, weight});
  }
};
