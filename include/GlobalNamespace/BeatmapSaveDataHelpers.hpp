// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapSaveDataHelpers
  class BeatmapSaveDataHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapSaveDataHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapSaveDataHelpers*, "", "BeatmapSaveDataHelpers");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveDataHelpers : public ::Il2CppObject {
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10BF20C
    // Get static field: static private readonly System.Version version2_6_0
    static ::System::Version* _get_version2_6_0();
    // Set static field: static private readonly System.Version version2_6_0
    static void _set_version2_6_0(::System::Version* value);
    // static field const value: static private System.String kLegacyVersionSearchString
    static constexpr const char* kLegacyVersionSearchString = "\"_version\":\"";
    // Get static field: static private System.String kLegacyVersionSearchString
    static ::StringW _get_kLegacyVersionSearchString();
    // Set static field: static private System.String kLegacyVersionSearchString
    static void _set_kLegacyVersionSearchString(::StringW value);
    // static field const value: static private System.String kVersionSearchString
    static constexpr const char* kVersionSearchString = "\"version\":\"";
    // Get static field: static private System.String kVersionSearchString
    static ::StringW _get_kVersionSearchString();
    // Set static field: static private System.String kVersionSearchString
    static void _set_kVersionSearchString(::StringW value);
    // static private System.Void .cctor()
    // Offset: 0x284674C
    static void _cctor();
    // static public System.Version GetVersion(System.String data)
    // Offset: 0x284663C
    static ::System::Version* GetVersion(::StringW data);
  }; // BeatmapSaveDataHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveDataHelpers::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BeatmapSaveDataHelpers::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveDataHelpers*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveDataHelpers::GetVersion
// Il2CppName: GetVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)(::StringW)>(&GlobalNamespace::BeatmapSaveDataHelpers::GetVersion)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveDataHelpers*), "GetVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
