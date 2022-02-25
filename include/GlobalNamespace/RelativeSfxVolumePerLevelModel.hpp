// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: RelativeSfxVolumePerLevelSO
  class RelativeSfxVolumePerLevelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RelativeSfxVolumePerLevelModel
  class RelativeSfxVolumePerLevelModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::RelativeSfxVolumePerLevelModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RelativeSfxVolumePerLevelModel*, "", "RelativeSfxVolumePerLevelModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: RelativeSfxVolumePerLevelModel
  // [TokenAttribute] Offset: FFFFFFFF
  class RelativeSfxVolumePerLevelModel : public ::Il2CppObject {
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
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.Single> _relativeSfxVolumePerLevelId
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::StringW, float>* relativeSfxVolumePerLevelId;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::StringW, float>*) == 0x8);
    public:
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<::StringW, float>*
    constexpr operator System::Collections::Generic::Dictionary_2<::StringW, float>*() const noexcept {
      return relativeSfxVolumePerLevelId;
    }
    // static field const value: static private System.Single kDefaultSfxVolume
    static constexpr const float kDefaultSfxVolume = 0;
    // Get static field: static private System.Single kDefaultSfxVolume
    static float _get_kDefaultSfxVolume();
    // Set static field: static private System.Single kDefaultSfxVolume
    static void _set_kDefaultSfxVolume(float value);
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,System.Single> _relativeSfxVolumePerLevelId
    System::Collections::Generic::Dictionary_2<::StringW, float>*& dyn__relativeSfxVolumePerLevelId();
    // public System.Void .ctor(RelativeSfxVolumePerLevelSO relativeSfxVolumePerLevelData)
    // Offset: 0x13EE314
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RelativeSfxVolumePerLevelModel* New_ctor(GlobalNamespace::RelativeSfxVolumePerLevelSO* relativeSfxVolumePerLevelData) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RelativeSfxVolumePerLevelModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RelativeSfxVolumePerLevelModel*, creationType>(relativeSfxVolumePerLevelData)));
    }
    // public System.Single GetRelativeSfxVolume(System.String levelId)
    // Offset: 0x13EE428
    float GetRelativeSfxVolume(::StringW levelId);
  }; // RelativeSfxVolumePerLevelModel
  #pragma pack(pop)
  static check_size<sizeof(RelativeSfxVolumePerLevelModel), 16 + sizeof(System::Collections::Generic::Dictionary_2<::StringW, float>*)> __GlobalNamespace_RelativeSfxVolumePerLevelModelSizeCheck;
  static_assert(sizeof(RelativeSfxVolumePerLevelModel) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RelativeSfxVolumePerLevelModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RelativeSfxVolumePerLevelModel::GetRelativeSfxVolume
// Il2CppName: GetRelativeSfxVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::RelativeSfxVolumePerLevelModel::*)(::StringW)>(&GlobalNamespace::RelativeSfxVolumePerLevelModel::GetRelativeSfxVolume)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RelativeSfxVolumePerLevelModel*), "GetRelativeSfxVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
