// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarData
  class AvatarData;
  // Forward declaring type: AvatarSaveData
  class AvatarSaveData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: AvatarDataFileManagerSO
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarDataFileManagerSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Creating value type constructor for type: AvatarDataFileManagerSO
    AvatarDataFileManagerSO() noexcept {}
    // static field const value: static private System.String kAvatarDataFileName
    static constexpr const char* kAvatarDataFileName = "AvatarData.dat";
    // Get static field: static private System.String kAvatarDataFileName
    static ::Il2CppString* _get_kAvatarDataFileName();
    // Set static field: static private System.String kAvatarDataFileName
    static void _set_kAvatarDataFileName(::Il2CppString* value);
    // static field const value: static private System.String kTempFileName
    static constexpr const char* kTempFileName = "AvatarData.dat.tmp";
    // Get static field: static private System.String kTempFileName
    static ::Il2CppString* _get_kTempFileName();
    // Set static field: static private System.String kTempFileName
    static void _set_kTempFileName(::Il2CppString* value);
    // static field const value: static private System.String kBackupFileName
    static constexpr const char* kBackupFileName = "AvatarData.dat.bak";
    // Get static field: static private System.String kBackupFileName
    static ::Il2CppString* _get_kBackupFileName();
    // Set static field: static private System.String kBackupFileName
    static void _set_kBackupFileName(::Il2CppString* value);
    // public System.Void Save(AvatarData avatarData)
    // Offset: 0x1179E3C
    void Save(GlobalNamespace::AvatarData* avatarData);
    // public AvatarData Load()
    // Offset: 0x1179FA4
    GlobalNamespace::AvatarData* Load();
    // private AvatarData LoadFromCurrentVersion(AvatarSaveData avatarSaveData)
    // Offset: 0x117A038
    GlobalNamespace::AvatarData* LoadFromCurrentVersion(GlobalNamespace::AvatarSaveData* avatarSaveData);
    // public System.Void .ctor()
    // Offset: 0x117A204
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarDataFileManagerSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarDataFileManagerSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarDataFileManagerSO*, creationType>()));
    }
  }; // AvatarDataFileManagerSO
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarDataFileManagerSO*, "", "AvatarDataFileManagerSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarDataFileManagerSO::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarDataFileManagerSO::*)(GlobalNamespace::AvatarData*)>(&GlobalNamespace::AvatarDataFileManagerSO::Save)> {
  static const MethodInfo* get() {
    static auto* avatarData = &::il2cpp_utils::GetClassFromName("", "AvatarData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarDataFileManagerSO*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{avatarData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarDataFileManagerSO::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarData* (GlobalNamespace::AvatarDataFileManagerSO::*)()>(&GlobalNamespace::AvatarDataFileManagerSO::Load)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarDataFileManagerSO*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarDataFileManagerSO::LoadFromCurrentVersion
// Il2CppName: LoadFromCurrentVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarData* (GlobalNamespace::AvatarDataFileManagerSO::*)(GlobalNamespace::AvatarSaveData*)>(&GlobalNamespace::AvatarDataFileManagerSO::LoadFromCurrentVersion)> {
  static const MethodInfo* get() {
    static auto* avatarSaveData = &::il2cpp_utils::GetClassFromName("", "AvatarSaveData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarDataFileManagerSO*), "LoadFromCurrentVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{avatarSaveData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarDataFileManagerSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
