// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DirectionalLightWithIdsGroupEntry
#include "GlobalNamespace/DirectionalLightWithIdsGroupEntry.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightGroup
  class LightGroup;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DirectionalLightWithIdsGroupEntry::GroupLightData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DirectionalLightWithIdsGroupEntry::GroupLightData*, "", "DirectionalLightWithIdsGroupEntry/GroupLightData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: DirectionalLightWithIdsGroupEntry/GroupLightData
  // [TokenAttribute] Offset: FFFFFFFF
  class DirectionalLightWithIdsGroupEntry::GroupLightData : public ::Il2CppObject {
    public:
    public:
    // private LightGroup _lightGroup
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::LightGroup* lightGroup;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightGroup*) == 0x8);
    // private System.Single _groupIntensity
    // Size: 0x4
    // Offset: 0x18
    float groupIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private LightGroup _lightGroup
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightGroup*& dyn__lightGroup();
    // Get instance field reference: private System.Single _groupIntensity
    [[deprecated("Use field access instead!")]] float& dyn__groupIntensity();
    // public LightGroup get_lightGroup()
    // Offset: 0x1E6E34C
    ::GlobalNamespace::LightGroup* get_lightGroup();
    // public System.Single get_groupIntensity()
    // Offset: 0x1E6E354
    float get_groupIntensity();
    // public System.Void .ctor()
    // Offset: 0x1E6E35C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectionalLightWithIdsGroupEntry::GroupLightData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DirectionalLightWithIdsGroupEntry::GroupLightData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectionalLightWithIdsGroupEntry::GroupLightData*, creationType>()));
    }
  }; // DirectionalLightWithIdsGroupEntry/GroupLightData
  #pragma pack(pop)
  static check_size<sizeof(DirectionalLightWithIdsGroupEntry::GroupLightData), 24 + sizeof(float)> __GlobalNamespace_DirectionalLightWithIdsGroupEntry_GroupLightDataSizeCheck;
  static_assert(sizeof(DirectionalLightWithIdsGroupEntry::GroupLightData) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLightWithIdsGroupEntry::GroupLightData::get_lightGroup
// Il2CppName: get_lightGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightGroup* (GlobalNamespace::DirectionalLightWithIdsGroupEntry::GroupLightData::*)()>(&GlobalNamespace::DirectionalLightWithIdsGroupEntry::GroupLightData::get_lightGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DirectionalLightWithIdsGroupEntry::GroupLightData*), "get_lightGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLightWithIdsGroupEntry::GroupLightData::get_groupIntensity
// Il2CppName: get_groupIntensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::DirectionalLightWithIdsGroupEntry::GroupLightData::*)()>(&GlobalNamespace::DirectionalLightWithIdsGroupEntry::GroupLightData::get_groupIntensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DirectionalLightWithIdsGroupEntry::GroupLightData*), "get_groupIntensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLightWithIdsGroupEntry::GroupLightData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
