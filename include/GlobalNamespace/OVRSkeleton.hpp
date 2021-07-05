// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRPlugin/Skeleton2
#include "GlobalNamespace/OVRPlugin_Skeleton2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRBone
  class OVRBone;
  // Forward declaring type: OVRBoneCapsule
  class OVRBoneCapsule;
  // Skipping declaration: SkeletonType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB4
  #pragma pack(push, 1)
  // Autogenerated type: OVRSkeleton
  // [DefaultExecutionOrder] Offset: DCCD08
  class OVRSkeleton : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider
    class IOVRSkeletonDataProvider;
    // Nested type: GlobalNamespace::OVRSkeleton::SkeletonPoseData
    struct SkeletonPoseData;
    // Nested type: GlobalNamespace::OVRSkeleton::SkeletonType
    struct SkeletonType;
    // Nested type: GlobalNamespace::OVRSkeleton::BoneId
    struct BoneId;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRSkeleton/SkeletonType
    struct SkeletonType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: SkeletonType
      constexpr SkeletonType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRSkeleton/SkeletonType None
      static constexpr const int None = -1;
      // Get static field: static public OVRSkeleton/SkeletonType None
      static GlobalNamespace::OVRSkeleton::SkeletonType _get_None();
      // Set static field: static public OVRSkeleton/SkeletonType None
      static void _set_None(GlobalNamespace::OVRSkeleton::SkeletonType value);
      // static field const value: static public OVRSkeleton/SkeletonType HandLeft
      static constexpr const int HandLeft = 0;
      // Get static field: static public OVRSkeleton/SkeletonType HandLeft
      static GlobalNamespace::OVRSkeleton::SkeletonType _get_HandLeft();
      // Set static field: static public OVRSkeleton/SkeletonType HandLeft
      static void _set_HandLeft(GlobalNamespace::OVRSkeleton::SkeletonType value);
      // static field const value: static public OVRSkeleton/SkeletonType HandRight
      static constexpr const int HandRight = 1;
      // Get static field: static public OVRSkeleton/SkeletonType HandRight
      static GlobalNamespace::OVRSkeleton::SkeletonType _get_HandRight();
      // Set static field: static public OVRSkeleton/SkeletonType HandRight
      static void _set_HandRight(GlobalNamespace::OVRSkeleton::SkeletonType value);
    }; // OVRSkeleton/SkeletonType
    #pragma pack(pop)
    static check_size<sizeof(OVRSkeleton::SkeletonType), 0 + sizeof(int)> __GlobalNamespace_OVRSkeleton_SkeletonTypeSizeCheck;
    static_assert(sizeof(OVRSkeleton::SkeletonType) == 0x4);
    // protected OVRSkeleton/SkeletonType _skeletonType
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::OVRSkeleton::SkeletonType skeletonType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRSkeleton::SkeletonType) == 0x4);
    // Padding between fields: skeletonType and: dataProvider
    char __padding0[0x4] = {};
    // private OVRSkeleton/IOVRSkeletonDataProvider _dataProvider
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider* dataProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider*) == 0x8);
    // private System.Boolean _updateRootPose
    // Size: 0x1
    // Offset: 0x28
    bool updateRootPose;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _updateRootScale
    // Size: 0x1
    // Offset: 0x29
    bool updateRootScale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _enablePhysicsCapsules
    // Size: 0x1
    // Offset: 0x2A
    bool enablePhysicsCapsules;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enablePhysicsCapsules and: bonesGO
    char __padding4[0x5] = {};
    // private UnityEngine.GameObject _bonesGO
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* bonesGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _bindPosesGO
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::GameObject* bindPosesGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _capsulesGO
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::GameObject* capsulesGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // protected System.Collections.Generic.List`1<OVRBone> _bones
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::OVRBone*>* bones;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::OVRBone*>*) == 0x8);
    // private System.Collections.Generic.List`1<OVRBone> _bindPoses
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::OVRBone*>* bindPoses;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::OVRBone*>*) == 0x8);
    // private System.Collections.Generic.List`1<OVRBoneCapsule> _capsules
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::List_1<GlobalNamespace::OVRBoneCapsule*>* capsules;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::OVRBoneCapsule*>*) == 0x8);
    // protected OVRPlugin/Skeleton2 _skeleton
    // Size: 0x20
    // Offset: 0x60
    GlobalNamespace::OVRPlugin::Skeleton2 skeleton;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Skeleton2) == 0x20);
    // private readonly UnityEngine.Quaternion wristFixupRotation
    // Size: 0x10
    // Offset: 0x80
    UnityEngine::Quaternion wristFixupRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // [CompilerGeneratedAttribute] Offset: 0xDD0190
    // private System.Boolean <IsInitialized>k__BackingField
    // Size: 0x1
    // Offset: 0x90
    bool IsInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDD01A0
    // private System.Boolean <IsDataValid>k__BackingField
    // Size: 0x1
    // Offset: 0x91
    bool IsDataValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDD01B0
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Size: 0x1
    // Offset: 0x92
    bool IsDataHighConfidence;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsDataHighConfidence and: Bones
    char __padding15[0x5] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDD01C0
    // private System.Collections.Generic.IList`1<OVRBone> <Bones>k__BackingField
    // Size: 0x8
    // Offset: 0x98
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* Bones;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD01D0
    // private System.Collections.Generic.IList`1<OVRBone> <BindPoses>k__BackingField
    // Size: 0x8
    // Offset: 0xA0
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* BindPoses;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD01E0
    // private System.Collections.Generic.IList`1<OVRBoneCapsule> <Capsules>k__BackingField
    // Size: 0x8
    // Offset: 0xA8
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBoneCapsule*>* Capsules;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<GlobalNamespace::OVRBoneCapsule*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD01F0
    // private System.Int32 <SkeletonChangedCount>k__BackingField
    // Size: 0x4
    // Offset: 0xB0
    int SkeletonChangedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: OVRSkeleton
    OVRSkeleton(GlobalNamespace::OVRSkeleton::SkeletonType skeletonType_ = {}, GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider* dataProvider_ = {}, bool updateRootPose_ = {}, bool updateRootScale_ = {}, bool enablePhysicsCapsules_ = {}, UnityEngine::GameObject* bonesGO_ = {}, UnityEngine::GameObject* bindPosesGO_ = {}, UnityEngine::GameObject* capsulesGO_ = {}, System::Collections::Generic::List_1<GlobalNamespace::OVRBone*>* bones_ = {}, System::Collections::Generic::List_1<GlobalNamespace::OVRBone*>* bindPoses_ = {}, System::Collections::Generic::List_1<GlobalNamespace::OVRBoneCapsule*>* capsules_ = {}, GlobalNamespace::OVRPlugin::Skeleton2 skeleton_ = {}, UnityEngine::Quaternion wristFixupRotation_ = {}, bool IsInitialized_ = {}, bool IsDataValid_ = {}, bool IsDataHighConfidence_ = {}, System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* Bones_ = {}, System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* BindPoses_ = {}, System::Collections::Generic::IList_1<GlobalNamespace::OVRBoneCapsule*>* Capsules_ = {}, int SkeletonChangedCount_ = {}) noexcept : skeletonType{skeletonType_}, dataProvider{dataProvider_}, updateRootPose{updateRootPose_}, updateRootScale{updateRootScale_}, enablePhysicsCapsules{enablePhysicsCapsules_}, bonesGO{bonesGO_}, bindPosesGO{bindPosesGO_}, capsulesGO{capsulesGO_}, bones{bones_}, bindPoses{bindPoses_}, capsules{capsules_}, skeleton{skeleton_}, wristFixupRotation{wristFixupRotation_}, IsInitialized{IsInitialized_}, IsDataValid{IsDataValid_}, IsDataHighConfidence{IsDataHighConfidence_}, Bones{Bones_}, BindPoses{BindPoses_}, Capsules{Capsules_}, SkeletonChangedCount{SkeletonChangedCount_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_IsInitialized()
    // Offset: 0x1ED12A0
    bool get_IsInitialized();
    // private System.Void set_IsInitialized(System.Boolean value)
    // Offset: 0x1ED12A8
    void set_IsInitialized(bool value);
    // public System.Boolean get_IsDataValid()
    // Offset: 0x1ED12B4
    bool get_IsDataValid();
    // private System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0x1ED12BC
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0x1ED12C8
    bool get_IsDataHighConfidence();
    // private System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0x1ED12D0
    void set_IsDataHighConfidence(bool value);
    // public System.Collections.Generic.IList`1<OVRBone> get_Bones()
    // Offset: 0x1ED12DC
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* get_Bones();
    // protected System.Void set_Bones(System.Collections.Generic.IList`1<OVRBone> value)
    // Offset: 0x1ED12E4
    void set_Bones(System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* value);
    // public System.Collections.Generic.IList`1<OVRBone> get_BindPoses()
    // Offset: 0x1ED12EC
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* get_BindPoses();
    // private System.Void set_BindPoses(System.Collections.Generic.IList`1<OVRBone> value)
    // Offset: 0x1ED12F4
    void set_BindPoses(System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* value);
    // public System.Collections.Generic.IList`1<OVRBoneCapsule> get_Capsules()
    // Offset: 0x1ED12FC
    System::Collections::Generic::IList_1<GlobalNamespace::OVRBoneCapsule*>* get_Capsules();
    // private System.Void set_Capsules(System.Collections.Generic.IList`1<OVRBoneCapsule> value)
    // Offset: 0x1ED1304
    void set_Capsules(System::Collections::Generic::IList_1<GlobalNamespace::OVRBoneCapsule*>* value);
    // public OVRSkeleton/SkeletonType GetSkeletonType()
    // Offset: 0x1ED130C
    GlobalNamespace::OVRSkeleton::SkeletonType GetSkeletonType();
    // public System.Int32 get_SkeletonChangedCount()
    // Offset: 0x1ED1314
    int get_SkeletonChangedCount();
    // private System.Void set_SkeletonChangedCount(System.Int32 value)
    // Offset: 0x1ED131C
    void set_SkeletonChangedCount(int value);
    // private System.Void Awake()
    // Offset: 0x1ED1324
    void Awake();
    // private System.Void Start()
    // Offset: 0x1ED144C
    void Start();
    // private System.Boolean ShouldInitialize()
    // Offset: 0x1ED1468
    bool ShouldInitialize();
    // private System.Void Initialize()
    // Offset: 0x1ED1488
    void Initialize();
    // protected System.Void InitializeBones()
    // Offset: 0x1ED221C
    void InitializeBones();
    // private System.Void InitializeBindPose()
    // Offset: 0x1ED1534
    void InitializeBindPose();
    // private System.Void InitializeCapsules()
    // Offset: 0x1ED19EC
    void InitializeCapsules();
    // private System.Void Update()
    // Offset: 0x1ED279C
    void Update();
    // private System.Void FixedUpdate()
    // Offset: 0x1ED2BE4
    void FixedUpdate();
    // public OVRSkeleton/BoneId GetCurrentStartBoneId()
    // Offset: 0x1ED2E88
    GlobalNamespace::OVRSkeleton::BoneId GetCurrentStartBoneId();
    // public OVRSkeleton/BoneId GetCurrentEndBoneId()
    // Offset: 0x1ED2E98
    GlobalNamespace::OVRSkeleton::BoneId GetCurrentEndBoneId();
    // private OVRSkeleton/BoneId GetCurrentMaxSkinnableBoneId()
    // Offset: 0x1ED2EAC
    GlobalNamespace::OVRSkeleton::BoneId GetCurrentMaxSkinnableBoneId();
    // public System.Int32 GetCurrentNumBones()
    // Offset: 0x1ED2EC0
    int GetCurrentNumBones();
    // public System.Int32 GetCurrentNumSkinnableBones()
    // Offset: 0x1ED2ED4
    int GetCurrentNumSkinnableBones();
    // static public System.String BoneLabelFromBoneId(OVRSkeleton/SkeletonType skeletonType, OVRSkeleton/BoneId boneId)
    // Offset: 0x1ED2718
    static ::Il2CppString* BoneLabelFromBoneId(GlobalNamespace::OVRSkeleton::SkeletonType skeletonType, GlobalNamespace::OVRSkeleton::BoneId boneId);
    // public System.Void .ctor()
    // Offset: 0x1ED2EE8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSkeleton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRSkeleton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSkeleton*, creationType>()));
    }
  }; // OVRSkeleton
  #pragma pack(pop)
  static check_size<sizeof(OVRSkeleton), 176 + sizeof(int)> __GlobalNamespace_OVRSkeletonSizeCheck;
  static_assert(sizeof(OVRSkeleton) == 0xB4);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSkeleton*, "", "OVRSkeleton");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSkeleton::SkeletonType, "", "OVRSkeleton/SkeletonType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::get_IsInitialized
// Il2CppName: get_IsInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::get_IsInitialized)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "get_IsInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::set_IsInitialized
// Il2CppName: set_IsInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)(bool)>(&GlobalNamespace::OVRSkeleton::set_IsInitialized)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "set_IsInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::get_IsDataValid
// Il2CppName: get_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::get_IsDataValid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "get_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::set_IsDataValid
// Il2CppName: set_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)(bool)>(&GlobalNamespace::OVRSkeleton::set_IsDataValid)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "set_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::get_IsDataHighConfidence
// Il2CppName: get_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::get_IsDataHighConfidence)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "get_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::set_IsDataHighConfidence
// Il2CppName: set_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)(bool)>(&GlobalNamespace::OVRSkeleton::set_IsDataHighConfidence)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "set_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::get_Bones
// Il2CppName: get_Bones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::get_Bones)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "get_Bones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::set_Bones
// Il2CppName: set_Bones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)(System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>*)>(&GlobalNamespace::OVRSkeleton::set_Bones)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRBone")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "set_Bones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::get_BindPoses
// Il2CppName: get_BindPoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>* (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::get_BindPoses)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "get_BindPoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::set_BindPoses
// Il2CppName: set_BindPoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)(System::Collections::Generic::IList_1<GlobalNamespace::OVRBone*>*)>(&GlobalNamespace::OVRSkeleton::set_BindPoses)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRBone")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "set_BindPoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::get_Capsules
// Il2CppName: get_Capsules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<GlobalNamespace::OVRBoneCapsule*>* (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::get_Capsules)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "get_Capsules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::set_Capsules
// Il2CppName: set_Capsules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)(System::Collections::Generic::IList_1<GlobalNamespace::OVRBoneCapsule*>*)>(&GlobalNamespace::OVRSkeleton::set_Capsules)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRBoneCapsule")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "set_Capsules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::GetSkeletonType
// Il2CppName: GetSkeletonType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRSkeleton::SkeletonType (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::GetSkeletonType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "GetSkeletonType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::get_SkeletonChangedCount
// Il2CppName: get_SkeletonChangedCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::get_SkeletonChangedCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "get_SkeletonChangedCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::set_SkeletonChangedCount
// Il2CppName: set_SkeletonChangedCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)(int)>(&GlobalNamespace::OVRSkeleton::set_SkeletonChangedCount)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "set_SkeletonChangedCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::ShouldInitialize
// Il2CppName: ShouldInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::ShouldInitialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "ShouldInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::Initialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::InitializeBones
// Il2CppName: InitializeBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::InitializeBones)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "InitializeBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::InitializeBindPose
// Il2CppName: InitializeBindPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::InitializeBindPose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "InitializeBindPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::InitializeCapsules
// Il2CppName: InitializeCapsules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::InitializeCapsules)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "InitializeCapsules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::FixedUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::GetCurrentStartBoneId
// Il2CppName: GetCurrentStartBoneId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRSkeleton::BoneId (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::GetCurrentStartBoneId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "GetCurrentStartBoneId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::GetCurrentEndBoneId
// Il2CppName: GetCurrentEndBoneId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRSkeleton::BoneId (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::GetCurrentEndBoneId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "GetCurrentEndBoneId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::GetCurrentMaxSkinnableBoneId
// Il2CppName: GetCurrentMaxSkinnableBoneId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRSkeleton::BoneId (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::GetCurrentMaxSkinnableBoneId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "GetCurrentMaxSkinnableBoneId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::GetCurrentNumBones
// Il2CppName: GetCurrentNumBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::GetCurrentNumBones)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "GetCurrentNumBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::GetCurrentNumSkinnableBones
// Il2CppName: GetCurrentNumSkinnableBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRSkeleton::*)()>(&GlobalNamespace::OVRSkeleton::GetCurrentNumSkinnableBones)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "GetCurrentNumSkinnableBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::BoneLabelFromBoneId
// Il2CppName: BoneLabelFromBoneId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(GlobalNamespace::OVRSkeleton::SkeletonType, GlobalNamespace::OVRSkeleton::BoneId)>(&GlobalNamespace::OVRSkeleton::BoneLabelFromBoneId)> {
  const MethodInfo* get() {
    static auto* skeletonType = &::il2cpp_utils::GetClassFromName("", "OVRSkeleton/SkeletonType")->byval_arg;
    static auto* boneId = &::il2cpp_utils::GetClassFromName("", "OVRSkeleton/BoneId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton*), "BoneLabelFromBoneId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skeletonType, boneId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
