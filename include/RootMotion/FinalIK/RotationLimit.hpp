// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.RotationLimit
  class RotationLimit : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Vector3 axis
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 axis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [HideInInspector] Offset: 0xE0A29C
    // public UnityEngine.Quaternion defaultLocalRotation
    // Size: 0x10
    // Offset: 0x24
    UnityEngine::Quaternion defaultLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // [CompilerGeneratedAttribute] Offset: 0xE0A2AC
    // private System.Boolean <defaultLocalRotationOverride>k__BackingField
    // Size: 0x1
    // Offset: 0x34
    bool defaultLocalRotationOverride;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean initiated
    // Size: 0x1
    // Offset: 0x35
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean applicationQuit
    // Size: 0x1
    // Offset: 0x36
    bool applicationQuit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean defaultLocalRotationSet
    // Size: 0x1
    // Offset: 0x37
    bool defaultLocalRotationSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: RotationLimit
    RotationLimit(UnityEngine::Vector3 axis_ = {}, UnityEngine::Quaternion defaultLocalRotation_ = {}, bool defaultLocalRotationOverride_ = {}, bool initiated_ = {}, bool applicationQuit_ = {}, bool defaultLocalRotationSet_ = {}) noexcept : axis{axis_}, defaultLocalRotation{defaultLocalRotation_}, defaultLocalRotationOverride{defaultLocalRotationOverride_}, initiated{initiated_}, applicationQuit{applicationQuit_}, defaultLocalRotationSet{defaultLocalRotationSet_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetDefaultLocalRotation()
    // Offset: 0x1AA57C4
    void SetDefaultLocalRotation();
    // public System.Void SetDefaultLocalRotation(UnityEngine.Quaternion localRotation)
    // Offset: 0x1AA580C
    void SetDefaultLocalRotation(UnityEngine::Quaternion localRotation);
    // public UnityEngine.Quaternion GetLimitedLocalRotation(UnityEngine.Quaternion localRotation, out System.Boolean changed)
    // Offset: 0x1AA5824
    UnityEngine::Quaternion GetLimitedLocalRotation(UnityEngine::Quaternion localRotation, bool& changed);
    // public System.Boolean Apply()
    // Offset: 0x1AA5AB8
    bool Apply();
    // public System.Void Disable()
    // Offset: 0x1AA5B28
    void Disable();
    // public UnityEngine.Vector3 get_secondaryAxis()
    // Offset: 0x1AA5B60
    UnityEngine::Vector3 get_secondaryAxis();
    // public UnityEngine.Vector3 get_crossAxis()
    // Offset: 0x1AA5B9C
    UnityEngine::Vector3 get_crossAxis();
    // public System.Boolean get_defaultLocalRotationOverride()
    // Offset: 0x1AA5C6C
    bool get_defaultLocalRotationOverride();
    // private System.Void set_defaultLocalRotationOverride(System.Boolean value)
    // Offset: 0x1AA5C74
    void set_defaultLocalRotationOverride(bool value);
    // protected UnityEngine.Quaternion LimitRotation(UnityEngine.Quaternion rotation)
    // Offset: 0xFFFFFFFF
    UnityEngine::Quaternion LimitRotation(UnityEngine::Quaternion rotation);
    // private System.Void Awake()
    // Offset: 0x1AA59C8
    void Awake();
    // private System.Void LateUpdate()
    // Offset: 0x1AA5C80
    void LateUpdate();
    // public System.Void LogWarning(System.String message)
    // Offset: 0x1AA5C84
    void LogWarning(::Il2CppString* message);
    // static protected UnityEngine.Quaternion Limit1DOF(UnityEngine.Quaternion rotation, UnityEngine.Vector3 axis)
    // Offset: 0x1AA5CB4
    static UnityEngine::Quaternion Limit1DOF(UnityEngine::Quaternion rotation, UnityEngine::Vector3 axis);
    // static protected UnityEngine.Quaternion LimitTwist(UnityEngine.Quaternion rotation, UnityEngine.Vector3 axis, UnityEngine.Vector3 orthoAxis, System.Single twistLimit)
    // Offset: 0x1AA5D98
    static UnityEngine::Quaternion LimitTwist(UnityEngine::Quaternion rotation, UnityEngine::Vector3 axis, UnityEngine::Vector3 orthoAxis, float twistLimit);
    // static protected System.Single GetOrthogonalAngle(UnityEngine.Vector3 v1, UnityEngine.Vector3 v2, UnityEngine.Vector3 normal)
    // Offset: 0x1AA6014
    static float GetOrthogonalAngle(UnityEngine::Vector3 v1, UnityEngine::Vector3 v2, UnityEngine::Vector3 normal);
    // protected System.Void .ctor()
    // Offset: 0x1AA60D0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RotationLimit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::RotationLimit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RotationLimit*, creationType>()));
    }
  }; // RootMotion.FinalIK.RotationLimit
  #pragma pack(pop)
  static check_size<sizeof(RotationLimit), 55 + sizeof(bool)> __RootMotion_FinalIK_RotationLimitSizeCheck;
  static_assert(sizeof(RotationLimit) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RotationLimit*, "RootMotion.FinalIK", "RotationLimit");
// Writing includes for template specializations
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::SetDefaultLocalRotation
// Il2CppName: SetDefaultLocalRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimit::*)()>(&RootMotion::FinalIK::RotationLimit::SetDefaultLocalRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "SetDefaultLocalRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::SetDefaultLocalRotation
// Il2CppName: SetDefaultLocalRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimit::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimit::SetDefaultLocalRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "SetDefaultLocalRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::GetLimitedLocalRotation
// Il2CppName: GetLimitedLocalRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimit::*)(UnityEngine::Quaternion, bool&)>(&RootMotion::FinalIK::RotationLimit::GetLimitedLocalRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "GetLimitedLocalRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<bool&>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::RotationLimit::*)()>(&RootMotion::FinalIK::RotationLimit::Apply)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::Disable
// Il2CppName: Disable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimit::*)()>(&RootMotion::FinalIK::RotationLimit::Disable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "Disable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::get_secondaryAxis
// Il2CppName: get_secondaryAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::RotationLimit::*)()>(&RootMotion::FinalIK::RotationLimit::get_secondaryAxis)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "get_secondaryAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::get_crossAxis
// Il2CppName: get_crossAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::RotationLimit::*)()>(&RootMotion::FinalIK::RotationLimit::get_crossAxis)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "get_crossAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::get_defaultLocalRotationOverride
// Il2CppName: get_defaultLocalRotationOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::RotationLimit::*)()>(&RootMotion::FinalIK::RotationLimit::get_defaultLocalRotationOverride)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "get_defaultLocalRotationOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::set_defaultLocalRotationOverride
// Il2CppName: set_defaultLocalRotationOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimit::*)(bool)>(&RootMotion::FinalIK::RotationLimit::set_defaultLocalRotationOverride)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "set_defaultLocalRotationOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::LimitRotation
// Il2CppName: LimitRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimit::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimit::LimitRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "LimitRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimit::*)()>(&RootMotion::FinalIK::RotationLimit::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimit::*)()>(&RootMotion::FinalIK::RotationLimit::LateUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimit::*)(::Il2CppString*)>(&RootMotion::FinalIK::RotationLimit::LogWarning)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::Limit1DOF
// Il2CppName: Limit1DOF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Quaternion, UnityEngine::Vector3)>(&RootMotion::FinalIK::RotationLimit::Limit1DOF)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "Limit1DOF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::LimitTwist
// Il2CppName: LimitTwist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Quaternion, UnityEngine::Vector3, UnityEngine::Vector3, float)>(&RootMotion::FinalIK::RotationLimit::LimitTwist)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "LimitTwist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::GetOrthogonalAngle
// Il2CppName: GetOrthogonalAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::RotationLimit::GetOrthogonalAngle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "GetOrthogonalAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
