// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: ColorSchemesListSO
  class ColorSchemesListSO;
  // Forward declaring type: EnvironmentsListSO
  class EnvironmentsListSO;
  // Forward declaring type: EnvironmentTypeSO
  class EnvironmentTypeSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: PlayerData
  class PlayerData;
  // Forward declaring type: PlayerSaveData
  class PlayerSaveData;
  // Forward declaring type: PlayerSaveDataV1_0_1
  class PlayerSaveDataV1_0_1;
  // Forward declaring type: OverrideEnvironmentSettings
  class OverrideEnvironmentSettings;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: PlayerDataFileManagerSO
  class PlayerDataFileManagerSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicCollectionSO*) == 0x8);
    // private ColorSchemesListSO _defaultColorSchemes
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorSchemesListSO* defaultColorSchemes;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemesListSO*) == 0x8);
    // private EnvironmentsListSO _allEnvironmentInfos
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::EnvironmentsListSO* allEnvironmentInfos;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentsListSO*) == 0x8);
    // private EnvironmentTypeSO _normalEnvironmentType
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::EnvironmentTypeSO* normalEnvironmentType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentTypeSO*) == 0x8);
    // private EnvironmentTypeSO _a360DegreesEnvironmentType
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::EnvironmentTypeSO* a360DegreesEnvironmentType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentTypeSO*) == 0x8);
    // private BeatmapCharacteristicSO _defaultLastSelectedBeatmapCharacteristic
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatmapCharacteristicSO* defaultLastSelectedBeatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private System.String _buildInSongPackSerializedName
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* buildInSongPackSerializedName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _allSongPackSerializedName
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* allSongPackSerializedName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: PlayerDataFileManagerSO
    PlayerDataFileManagerSO(GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection_ = {}, GlobalNamespace::ColorSchemesListSO* defaultColorSchemes_ = {}, GlobalNamespace::EnvironmentsListSO* allEnvironmentInfos_ = {}, GlobalNamespace::EnvironmentTypeSO* normalEnvironmentType_ = {}, GlobalNamespace::EnvironmentTypeSO* a360DegreesEnvironmentType_ = {}, GlobalNamespace::BeatmapCharacteristicSO* defaultLastSelectedBeatmapCharacteristic_ = {}, ::Il2CppString* buildInSongPackSerializedName_ = {}, ::Il2CppString* allSongPackSerializedName_ = {}) noexcept : beatmapCharacteristicCollection{beatmapCharacteristicCollection_}, defaultColorSchemes{defaultColorSchemes_}, allEnvironmentInfos{allEnvironmentInfos_}, normalEnvironmentType{normalEnvironmentType_}, a360DegreesEnvironmentType{a360DegreesEnvironmentType_}, defaultLastSelectedBeatmapCharacteristic{defaultLastSelectedBeatmapCharacteristic_}, buildInSongPackSerializedName{buildInSongPackSerializedName_}, allSongPackSerializedName{allSongPackSerializedName_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kPlayerDataFileName
    static constexpr const char* kPlayerDataFileName = "PlayerData.dat";
    // Get static field: static private System.String kPlayerDataFileName
    static ::Il2CppString* _get_kPlayerDataFileName();
    // Set static field: static private System.String kPlayerDataFileName
    static void _set_kPlayerDataFileName(::Il2CppString* value);
    // static field const value: static private System.String kTempFileName
    static constexpr const char* kTempFileName = "PlayerData.dat.tmp";
    // Get static field: static private System.String kTempFileName
    static ::Il2CppString* _get_kTempFileName();
    // Set static field: static private System.String kTempFileName
    static void _set_kTempFileName(::Il2CppString* value);
    // static field const value: static private System.String kBackupFileName
    static constexpr const char* kBackupFileName = "PlayerData.dat.bak";
    // Get static field: static private System.String kBackupFileName
    static ::Il2CppString* _get_kBackupFileName();
    // Set static field: static private System.String kBackupFileName
    static void _set_kBackupFileName(::Il2CppString* value);
    // public System.Void Save(PlayerData playerData)
    // Offset: 0x1054C50
    void Save(GlobalNamespace::PlayerData* playerData);
    // public PlayerData Load()
    // Offset: 0x1055B5C
    GlobalNamespace::PlayerData* Load();
    // private PlayerData LoadFromJSONString(System.String jsonString)
    // Offset: 0x1055C38
    GlobalNamespace::PlayerData* LoadFromJSONString(::Il2CppString* jsonString);
    // private PlayerData LoadFromCurrentVersion(PlayerSaveData playerSaveData)
    // Offset: 0x1056660
    GlobalNamespace::PlayerData* LoadFromCurrentVersion(GlobalNamespace::PlayerSaveData* playerSaveData);
    // private PlayerData LoadFromVersionV1_0_1(PlayerSaveDataV1_0_1 playerDataModelSaveData)
    // Offset: 0x1055EA0
    GlobalNamespace::PlayerData* LoadFromVersionV1_0_1(GlobalNamespace::PlayerSaveDataV1_0_1* playerDataModelSaveData);
    // public PlayerData CreateDefaultPlayerData()
    // Offset: 0x1055DD4
    GlobalNamespace::PlayerData* CreateDefaultPlayerData();
    // static public System.String GetLevelIdFromV_1_0_1LevelId(System.String oldLevelId, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x1057514
    static ::Il2CppString* GetLevelIdFromV_1_0_1LevelId(::Il2CppString* oldLevelId, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // static public BeatmapCharacteristicSO GetBeatmapCharacteristicFromV_1_0_1LevelId(BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection, System.String levelId)
    // Offset: 0x10573EC
    static GlobalNamespace::BeatmapCharacteristicSO* GetBeatmapCharacteristicFromV_1_0_1LevelId(GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection, ::Il2CppString* levelId);
    // private OverrideEnvironmentSettings CreateDefaultOverrideEnvironmentSettings()
    // Offset: 0x1057580
    GlobalNamespace::OverrideEnvironmentSettings* CreateDefaultOverrideEnvironmentSettings();
    // private System.String LoadCorrectedSongPackMask(System.Byte[] songMaskPackBytes)
    // Offset: 0x105728C
    ::Il2CppString* LoadCorrectedSongPackMask(::Array<uint8_t>* songMaskPackBytes);
    // public System.Void .ctor()
    // Offset: 0x105764C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerDataFileManagerSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerDataFileManagerSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerDataFileManagerSO*, creationType>()));
    }
  }; // PlayerDataFileManagerSO
  #pragma pack(pop)
  static check_size<sizeof(PlayerDataFileManagerSO), 80 + sizeof(::Il2CppString*)> __GlobalNamespace_PlayerDataFileManagerSOSizeCheck;
  static_assert(sizeof(PlayerDataFileManagerSO) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerDataFileManagerSO*, "", "PlayerDataFileManagerSO");
// Writing includes for template specializations
#include "GlobalNamespace/PlayerData.hpp"
#include "GlobalNamespace/PlayerSaveData.hpp"
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
#include "GlobalNamespace/BeatmapCharacteristicCollectionSO.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataFileManagerSO::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerDataFileManagerSO::*)(GlobalNamespace::PlayerData*)>(&GlobalNamespace::PlayerDataFileManagerSO::Save)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataFileManagerSO*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::PlayerData*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataFileManagerSO::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerData* (GlobalNamespace::PlayerDataFileManagerSO::*)()>(&GlobalNamespace::PlayerDataFileManagerSO::Load)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataFileManagerSO*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataFileManagerSO::LoadFromJSONString
// Il2CppName: LoadFromJSONString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerData* (GlobalNamespace::PlayerDataFileManagerSO::*)(::Il2CppString*)>(&GlobalNamespace::PlayerDataFileManagerSO::LoadFromJSONString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataFileManagerSO*), "LoadFromJSONString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataFileManagerSO::LoadFromCurrentVersion
// Il2CppName: LoadFromCurrentVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerData* (GlobalNamespace::PlayerDataFileManagerSO::*)(GlobalNamespace::PlayerSaveData*)>(&GlobalNamespace::PlayerDataFileManagerSO::LoadFromCurrentVersion)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataFileManagerSO*), "LoadFromCurrentVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::PlayerSaveData*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataFileManagerSO::LoadFromVersionV1_0_1
// Il2CppName: LoadFromVersionV1_0_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerData* (GlobalNamespace::PlayerDataFileManagerSO::*)(GlobalNamespace::PlayerSaveDataV1_0_1*)>(&GlobalNamespace::PlayerDataFileManagerSO::LoadFromVersionV1_0_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataFileManagerSO*), "LoadFromVersionV1_0_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::PlayerSaveDataV1_0_1*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataFileManagerSO::CreateDefaultPlayerData
// Il2CppName: CreateDefaultPlayerData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerData* (GlobalNamespace::PlayerDataFileManagerSO::*)()>(&GlobalNamespace::PlayerDataFileManagerSO::CreateDefaultPlayerData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataFileManagerSO*), "CreateDefaultPlayerData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataFileManagerSO::GetLevelIdFromV_1_0_1LevelId
// Il2CppName: GetLevelIdFromV_1_0_1LevelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::PlayerDataFileManagerSO::GetLevelIdFromV_1_0_1LevelId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataFileManagerSO*), "GetLevelIdFromV_1_0_1LevelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapCharacteristicSO*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataFileManagerSO::GetBeatmapCharacteristicFromV_1_0_1LevelId
// Il2CppName: GetBeatmapCharacteristicFromV_1_0_1LevelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO* (*)(GlobalNamespace::BeatmapCharacteristicCollectionSO*, ::Il2CppString*)>(&GlobalNamespace::PlayerDataFileManagerSO::GetBeatmapCharacteristicFromV_1_0_1LevelId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataFileManagerSO*), "GetBeatmapCharacteristicFromV_1_0_1LevelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapCharacteristicCollectionSO*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataFileManagerSO::CreateDefaultOverrideEnvironmentSettings
// Il2CppName: CreateDefaultOverrideEnvironmentSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OverrideEnvironmentSettings* (GlobalNamespace::PlayerDataFileManagerSO::*)()>(&GlobalNamespace::PlayerDataFileManagerSO::CreateDefaultOverrideEnvironmentSettings)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataFileManagerSO*), "CreateDefaultOverrideEnvironmentSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataFileManagerSO::LoadCorrectedSongPackMask
// Il2CppName: LoadCorrectedSongPackMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PlayerDataFileManagerSO::*)(::Array<uint8_t>*)>(&GlobalNamespace::PlayerDataFileManagerSO::LoadCorrectedSongPackMask)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataFileManagerSO*), "LoadCorrectedSongPackMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataFileManagerSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
