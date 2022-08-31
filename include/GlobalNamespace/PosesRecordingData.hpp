// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PosesRecordingData
  class PosesRecordingData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PosesRecordingData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecordingData*, "", "PosesRecordingData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PosesRecordingData
  // [TokenAttribute] Offset: FFFFFFFF
  class PosesRecordingData : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::PosesRecordingData::TransformsKeyframe
    class TransformsKeyframe;
    // Nested type: ::GlobalNamespace::PosesRecordingData::ExternalCameraCalibration
    class ExternalCameraCalibration;
    public:
    // public readonly System.String[] objectIds
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::StringW> objectIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public readonly System.Collections.Generic.List`1<PosesRecordingData/TransformsKeyframe> keyframes
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::GlobalNamespace::PosesRecordingData::TransformsKeyframe*>* keyframes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::PosesRecordingData::TransformsKeyframe*>*) == 0x8);
    // public readonly PosesRecordingData/ExternalCameraCalibration externalCameraCalibration
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PosesRecordingData::ExternalCameraCalibration* externalCameraCalibration;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PosesRecordingData::ExternalCameraCalibration*) == 0x8);
    public:
    // Get instance field reference: public readonly System.String[] objectIds
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_objectIds();
    // Get instance field reference: public readonly System.Collections.Generic.List`1<PosesRecordingData/TransformsKeyframe> keyframes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::PosesRecordingData::TransformsKeyframe*>*& dyn_keyframes();
    // Get instance field reference: public readonly PosesRecordingData/ExternalCameraCalibration externalCameraCalibration
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PosesRecordingData::ExternalCameraCalibration*& dyn_externalCameraCalibration();
    // public System.Void .ctor(System.String[] objectIds, PosesRecordingData/ExternalCameraCalibration externalCameraCalibration)
    // Offset: 0x1404188
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PosesRecordingData* New_ctor(::ArrayW<::StringW> objectIds, ::GlobalNamespace::PosesRecordingData::ExternalCameraCalibration* externalCameraCalibration) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PosesRecordingData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PosesRecordingData*, creationType>(objectIds, externalCameraCalibration)));
    }
    // public System.Void .ctor(System.String[] objectIds, System.Collections.Generic.List`1<PosesRecordingData/TransformsKeyframe> keyframes, PosesRecordingData/ExternalCameraCalibration externalCameraCalibration)
    // Offset: 0x140437C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PosesRecordingData* New_ctor(::ArrayW<::StringW> objectIds, ::System::Collections::Generic::List_1<::GlobalNamespace::PosesRecordingData::TransformsKeyframe*>* keyframes, ::GlobalNamespace::PosesRecordingData::ExternalCameraCalibration* externalCameraCalibration) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PosesRecordingData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PosesRecordingData*, creationType>(objectIds, keyframes, externalCameraCalibration)));
    }
    // public System.Void AddKeyframe(PosesRecordingData/TransformsKeyframe keyframe)
    // Offset: 0x1404258
    void AddKeyframe(::GlobalNamespace::PosesRecordingData::TransformsKeyframe* keyframe);
    // public System.Boolean Contains(System.String objectId)
    // Offset: 0x14043BC
    bool Contains(::StringW objectId);
    // public System.Int32 ObjectIndex(System.String objectId)
    // Offset: 0x140441C
    int ObjectIndex(::StringW objectId);
  }; // PosesRecordingData
  #pragma pack(pop)
  static check_size<sizeof(PosesRecordingData), 32 + sizeof(::GlobalNamespace::PosesRecordingData::ExternalCameraCalibration*)> __GlobalNamespace_PosesRecordingDataSizeCheck;
  static_assert(sizeof(PosesRecordingData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PosesRecordingData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PosesRecordingData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PosesRecordingData::AddKeyframe
// Il2CppName: AddKeyframe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PosesRecordingData::*)(::GlobalNamespace::PosesRecordingData::TransformsKeyframe*)>(&GlobalNamespace::PosesRecordingData::AddKeyframe)> {
  static const MethodInfo* get() {
    static auto* keyframe = &::il2cpp_utils::GetClassFromName("", "PosesRecordingData/TransformsKeyframe")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesRecordingData*), "AddKeyframe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyframe});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosesRecordingData::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PosesRecordingData::*)(::StringW)>(&GlobalNamespace::PosesRecordingData::Contains)> {
  static const MethodInfo* get() {
    static auto* objectId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesRecordingData*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PosesRecordingData::ObjectIndex
// Il2CppName: ObjectIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PosesRecordingData::*)(::StringW)>(&GlobalNamespace::PosesRecordingData::ObjectIndex)> {
  static const MethodInfo* get() {
    static auto* objectId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PosesRecordingData*), "ObjectIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectId});
  }
};
