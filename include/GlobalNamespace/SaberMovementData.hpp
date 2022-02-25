// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IBladeMovementData
#include "GlobalNamespace/IBladeMovementData.hpp"
// Including type: BladeMovementDataElement
#include "GlobalNamespace/BladeMovementDataElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LazyCopyHashSet`1<T>
  template<typename T>
  class LazyCopyHashSet_1;
  // Forward declaring type: ISaberMovementDataProcessor
  class ISaberMovementDataProcessor;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SaberMovementData
  class SaberMovementData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::SaberMovementData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberMovementData*, "", "SaberMovementData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: SaberMovementData
  // [TokenAttribute] Offset: FFFFFFFF
  class SaberMovementData : public ::Il2CppObject/*, public GlobalNamespace::IBladeMovementData*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly BladeMovementDataElement[] _data
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<GlobalNamespace::BladeMovementDataElement> data;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::BladeMovementDataElement>) == 0x8);
    // private readonly LazyCopyHashSet`1<ISaberMovementDataProcessor> _dataProcessors
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISaberMovementDataProcessor*>* dataProcessors;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISaberMovementDataProcessor*>*) == 0x8);
    // private System.Int32 _nextAddIndex
    // Size: 0x4
    // Offset: 0x20
    int nextAddIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _validCount
    // Size: 0x4
    // Offset: 0x24
    int validCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _bladeSpeed
    // Size: 0x4
    // Offset: 0x28
    float bladeSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IBladeMovementData
    operator GlobalNamespace::IBladeMovementData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBladeMovementData*>(this);
    }
    // static field const value: static private System.Single kOutOfRangeBladeSpeed
    static constexpr const float kOutOfRangeBladeSpeed = 100;
    // Get static field: static private System.Single kOutOfRangeBladeSpeed
    static float _get_kOutOfRangeBladeSpeed();
    // Set static field: static private System.Single kOutOfRangeBladeSpeed
    static void _set_kOutOfRangeBladeSpeed(float value);
    // static field const value: static private System.Single kSmoothUpBladeSpeedCoef
    static constexpr const float kSmoothUpBladeSpeedCoef = 24;
    // Get static field: static private System.Single kSmoothUpBladeSpeedCoef
    static float _get_kSmoothUpBladeSpeedCoef();
    // Set static field: static private System.Single kSmoothUpBladeSpeedCoef
    static void _set_kSmoothUpBladeSpeedCoef(float value);
    // static field const value: static private System.Single kSmoothDownBladeSpeedCoef
    static constexpr const float kSmoothDownBladeSpeedCoef = 2;
    // Get static field: static private System.Single kSmoothDownBladeSpeedCoef
    static float _get_kSmoothDownBladeSpeedCoef();
    // Set static field: static private System.Single kSmoothDownBladeSpeedCoef
    static void _set_kSmoothDownBladeSpeedCoef(float value);
    // Get instance field reference: private readonly BladeMovementDataElement[] _data
    ::ArrayW<GlobalNamespace::BladeMovementDataElement>& dyn__data();
    // Get instance field reference: private readonly LazyCopyHashSet`1<ISaberMovementDataProcessor> _dataProcessors
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISaberMovementDataProcessor*>*& dyn__dataProcessors();
    // Get instance field reference: private System.Int32 _nextAddIndex
    int& dyn__nextAddIndex();
    // Get instance field reference: private System.Int32 _validCount
    int& dyn__validCount();
    // Get instance field reference: private System.Single _bladeSpeed
    float& dyn__bladeSpeed();
    // public LazyCopyHashSet`1<ISaberMovementDataProcessor> get_dataProcessors()
    // Offset: 0x2B561CC
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISaberMovementDataProcessor*>* get_dataProcessors();
    // public System.Single get_bladeSpeed()
    // Offset: 0x2B561D4
    float get_bladeSpeed();
    // public BladeMovementDataElement get_lastAddedData()
    // Offset: 0x2B5512C
    GlobalNamespace::BladeMovementDataElement get_lastAddedData();
    // public BladeMovementDataElement get_prevAddedData()
    // Offset: 0x2B561DC
    GlobalNamespace::BladeMovementDataElement get_prevAddedData();
    // public System.Void RequestLastDataProcessing(ISaberMovementDataProcessor dataProcessor)
    // Offset: 0x2B56244
    void RequestLastDataProcessing(GlobalNamespace::ISaberMovementDataProcessor* dataProcessor);
    // public System.Void AddNewData(UnityEngine.Vector3 topPos, UnityEngine.Vector3 bottomPos, System.Single time)
    // Offset: 0x2B51B8C
    void AddNewData(UnityEngine::Vector3 topPos, UnityEngine::Vector3 bottomPos, float time);
    // private System.Void ComputeAdditionalData(UnityEngine.Vector3 topPos, UnityEngine.Vector3 bottomPos, System.Int32 idxOffset, out UnityEngine.Vector3 segmentNormal, out System.Single segmentAngle)
    // Offset: 0x2B563E8
    void ComputeAdditionalData(UnityEngine::Vector3 topPos, UnityEngine::Vector3 bottomPos, int idxOffset, ByRef<UnityEngine::Vector3> segmentNormal, ByRef<float> segmentAngle);
    // private UnityEngine.Vector3 ComputePlaneNormal(UnityEngine.Vector3 tp0, UnityEngine.Vector3 bp0, UnityEngine.Vector3 tp1, UnityEngine.Vector3 bp1)
    // Offset: 0x2B565D0
    UnityEngine::Vector3 ComputePlaneNormal(UnityEngine::Vector3 tp0, UnityEngine::Vector3 bp0, UnityEngine::Vector3 tp1, UnityEngine::Vector3 bp1);
    // public UnityEngine.Vector3 ComputeCutPlaneNormal()
    // Offset: 0x2B56734
    UnityEngine::Vector3 ComputeCutPlaneNormal();
    // public System.Single ComputeSwingRating(System.Single overrideSegmentAngle)
    // Offset: 0x2B567E0
    float ComputeSwingRating(float overrideSegmentAngle);
    // public System.Single ComputeSwingRating()
    // Offset: 0x2B56A10
    float ComputeSwingRating();
    // private System.Single ComputeSwingRating(System.Boolean overrideSegmenAngle, System.Single overrideValue)
    // Offset: 0x2B567E8
    float ComputeSwingRating(bool overrideSegmenAngle, float overrideValue);
    // public System.Void .ctor()
    // Offset: 0x2B52164
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberMovementData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberMovementData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberMovementData*, creationType>()));
    }
  }; // SaberMovementData
  #pragma pack(pop)
  static check_size<sizeof(SaberMovementData), 40 + sizeof(float)> __GlobalNamespace_SaberMovementDataSizeCheck;
  static_assert(sizeof(SaberMovementData) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberMovementData::get_dataProcessors
// Il2CppName: get_dataProcessors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISaberMovementDataProcessor*>* (GlobalNamespace::SaberMovementData::*)()>(&GlobalNamespace::SaberMovementData::get_dataProcessors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberMovementData*), "get_dataProcessors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberMovementData::get_bladeSpeed
// Il2CppName: get_bladeSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberMovementData::*)()>(&GlobalNamespace::SaberMovementData::get_bladeSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberMovementData*), "get_bladeSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberMovementData::get_lastAddedData
// Il2CppName: get_lastAddedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BladeMovementDataElement (GlobalNamespace::SaberMovementData::*)()>(&GlobalNamespace::SaberMovementData::get_lastAddedData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberMovementData*), "get_lastAddedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberMovementData::get_prevAddedData
// Il2CppName: get_prevAddedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BladeMovementDataElement (GlobalNamespace::SaberMovementData::*)()>(&GlobalNamespace::SaberMovementData::get_prevAddedData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberMovementData*), "get_prevAddedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberMovementData::RequestLastDataProcessing
// Il2CppName: RequestLastDataProcessing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberMovementData::*)(GlobalNamespace::ISaberMovementDataProcessor*)>(&GlobalNamespace::SaberMovementData::RequestLastDataProcessing)> {
  static const MethodInfo* get() {
    static auto* dataProcessor = &::il2cpp_utils::GetClassFromName("", "ISaberMovementDataProcessor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberMovementData*), "RequestLastDataProcessing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataProcessor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberMovementData::AddNewData
// Il2CppName: AddNewData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberMovementData::*)(UnityEngine::Vector3, UnityEngine::Vector3, float)>(&GlobalNamespace::SaberMovementData::AddNewData)> {
  static const MethodInfo* get() {
    static auto* topPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* bottomPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberMovementData*), "AddNewData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{topPos, bottomPos, time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberMovementData::ComputeAdditionalData
// Il2CppName: ComputeAdditionalData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberMovementData::*)(UnityEngine::Vector3, UnityEngine::Vector3, int, ByRef<UnityEngine::Vector3>, ByRef<float>)>(&GlobalNamespace::SaberMovementData::ComputeAdditionalData)> {
  static const MethodInfo* get() {
    static auto* topPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* bottomPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* idxOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* segmentNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* segmentAngle = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberMovementData*), "ComputeAdditionalData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{topPos, bottomPos, idxOffset, segmentNormal, segmentAngle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberMovementData::ComputePlaneNormal
// Il2CppName: ComputePlaneNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::SaberMovementData::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::SaberMovementData::ComputePlaneNormal)> {
  static const MethodInfo* get() {
    static auto* tp0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* bp0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* tp1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* bp1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberMovementData*), "ComputePlaneNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tp0, bp0, tp1, bp1});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberMovementData::ComputeCutPlaneNormal
// Il2CppName: ComputeCutPlaneNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::SaberMovementData::*)()>(&GlobalNamespace::SaberMovementData::ComputeCutPlaneNormal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberMovementData*), "ComputeCutPlaneNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberMovementData::ComputeSwingRating
// Il2CppName: ComputeSwingRating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberMovementData::*)(float)>(&GlobalNamespace::SaberMovementData::ComputeSwingRating)> {
  static const MethodInfo* get() {
    static auto* overrideSegmentAngle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberMovementData*), "ComputeSwingRating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{overrideSegmentAngle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberMovementData::ComputeSwingRating
// Il2CppName: ComputeSwingRating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberMovementData::*)()>(&GlobalNamespace::SaberMovementData::ComputeSwingRating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberMovementData*), "ComputeSwingRating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberMovementData::ComputeSwingRating
// Il2CppName: ComputeSwingRating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberMovementData::*)(bool, float)>(&GlobalNamespace::SaberMovementData::ComputeSwingRating)> {
  static const MethodInfo* get() {
    static auto* overrideSegmenAngle = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* overrideValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberMovementData*), "ComputeSwingRating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{overrideSegmenAngle, overrideValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberMovementData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
