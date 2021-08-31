// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: SemVer
  class SemVer;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.ChangelogEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class ChangelogEntry : public ::Il2CppObject {
    public:
    // private UnityEngine.ProBuilder.SemVer m_VersionInfo
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ProBuilder::SemVer* m_VersionInfo;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::SemVer*) == 0x8);
    // private System.String m_ReleaseNotes
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_ReleaseNotes;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ChangelogEntry
    ChangelogEntry(UnityEngine::ProBuilder::SemVer* m_VersionInfo_ = {}, ::Il2CppString* m_ReleaseNotes_ = {}) noexcept : m_VersionInfo{m_VersionInfo_}, m_ReleaseNotes{m_ReleaseNotes_} {}
    // Get instance field: private UnityEngine.ProBuilder.SemVer m_VersionInfo
    UnityEngine::ProBuilder::SemVer* _get_m_VersionInfo();
    // Set instance field: private UnityEngine.ProBuilder.SemVer m_VersionInfo
    void _set_m_VersionInfo(UnityEngine::ProBuilder::SemVer* value);
    // Get instance field: private System.String m_ReleaseNotes
    ::Il2CppString* _get_m_ReleaseNotes();
    // Set instance field: private System.String m_ReleaseNotes
    void _set_m_ReleaseNotes(::Il2CppString* value);
    // public UnityEngine.ProBuilder.SemVer get_versionInfo()
    // Offset: 0x1FA9FA4
    UnityEngine::ProBuilder::SemVer* get_versionInfo();
    // public System.String get_releaseNotes()
    // Offset: 0x1FA9FAC
    ::Il2CppString* get_releaseNotes();
    // public System.Void .ctor(UnityEngine.ProBuilder.SemVer version, System.String releaseNotes)
    // Offset: 0x1FA9F6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChangelogEntry* New_ctor(UnityEngine::ProBuilder::SemVer* version, ::Il2CppString* releaseNotes) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::ChangelogEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChangelogEntry*, creationType>(version, releaseNotes)));
    }
    // public override System.String ToString()
    // Offset: 0x1FA9FB4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.ChangelogEntry
  #pragma pack(pop)
  static check_size<sizeof(ChangelogEntry), 24 + sizeof(::Il2CppString*)> __UnityEngine_ProBuilder_ChangelogEntrySizeCheck;
  static_assert(sizeof(ChangelogEntry) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ChangelogEntry*, "UnityEngine.ProBuilder", "ChangelogEntry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ChangelogEntry::get_versionInfo
// Il2CppName: get_versionInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::SemVer* (UnityEngine::ProBuilder::ChangelogEntry::*)()>(&UnityEngine::ProBuilder::ChangelogEntry::get_versionInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ChangelogEntry*), "get_versionInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ChangelogEntry::get_releaseNotes
// Il2CppName: get_releaseNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::ChangelogEntry::*)()>(&UnityEngine::ProBuilder::ChangelogEntry::get_releaseNotes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ChangelogEntry*), "get_releaseNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ChangelogEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ChangelogEntry::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::ChangelogEntry::*)()>(&UnityEngine::ProBuilder::ChangelogEntry::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ChangelogEntry*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
