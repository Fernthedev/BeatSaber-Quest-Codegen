#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerDataFileManagerSO)
namespace GlobalNamespace {
class EnvironmentsListSO;
}
namespace GlobalNamespace {
class ColorSchemesListSO;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1;
}
namespace GlobalNamespace {
class PlayerSaveData;
}
namespace System {
class Version;
}
namespace GlobalNamespace {
class PlayerData;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class EnvironmentTypeSO;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerDataFileManagerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerDataFileManagerSO);
// Type: ::PlayerDataFileManagerSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4629))
// CS Name: ::PlayerDataFileManagerSO*
class CORDL_TYPE PlayerDataFileManagerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field kPlayerDataFileName offset 0x0
static constexpr ::ConstString  kPlayerDataFileName{u"PlayerData.dat"};

/// @brief Field kTempFileName offset 0x0
static constexpr ::ConstString  kTempFileName{u"PlayerData.dat.tmp"};

/// @brief Field kBackupFileName offset 0x0
static constexpr ::ConstString  kBackupFileName{u"PlayerData.dat.bak"};

/// @brief Field _defaultColorSchemes offset 0x18
 __declspec(property(get=__get__defaultColorSchemes, put=__set__defaultColorSchemes)) ::GlobalNamespace::ColorSchemesListSO*  _defaultColorSchemes;

/// @brief Field _allEnvironmentInfos offset 0x20
 __declspec(property(get=__get__allEnvironmentInfos, put=__set__allEnvironmentInfos)) ::GlobalNamespace::EnvironmentsListSO*  _allEnvironmentInfos;

/// @brief Field _normalEnvironmentType offset 0x28
 __declspec(property(get=__get__normalEnvironmentType, put=__set__normalEnvironmentType)) ::GlobalNamespace::EnvironmentTypeSO*  _normalEnvironmentType;

/// @brief Field _a360DegreesEnvironmentType offset 0x30
 __declspec(property(get=__get__a360DegreesEnvironmentType, put=__set__a360DegreesEnvironmentType)) ::GlobalNamespace::EnvironmentTypeSO*  _a360DegreesEnvironmentType;

/// @brief Field _defaultLastSelectedBeatmapCharacteristic offset 0x38
 __declspec(property(get=__get__defaultLastSelectedBeatmapCharacteristic, put=__set__defaultLastSelectedBeatmapCharacteristic)) ::GlobalNamespace::BeatmapCharacteristicSO*  _defaultLastSelectedBeatmapCharacteristic;

/// @brief Field _buildInSongPackSerializedName offset 0x40
 __declspec(property(get=__get__buildInSongPackSerializedName, put=__set__buildInSongPackSerializedName)) ::StringW  _buildInSongPackSerializedName;

/// @brief Field _allSongPackSerializedName offset 0x48
 __declspec(property(get=__get__allSongPackSerializedName, put=__set__allSongPackSerializedName)) ::StringW  _allSongPackSerializedName;

constexpr void __set__defaultColorSchemes(::GlobalNamespace::ColorSchemesListSO*  value) ;

constexpr ::GlobalNamespace::ColorSchemesListSO* __get__defaultColorSchemes() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemesListSO*> __get__defaultColorSchemes() const;

constexpr void __set__allEnvironmentInfos(::GlobalNamespace::EnvironmentsListSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentsListSO* __get__allEnvironmentInfos() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListSO*> __get__allEnvironmentInfos() const;

constexpr void __set__normalEnvironmentType(::GlobalNamespace::EnvironmentTypeSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentTypeSO* __get__normalEnvironmentType() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentTypeSO*> __get__normalEnvironmentType() const;

constexpr void __set__a360DegreesEnvironmentType(::GlobalNamespace::EnvironmentTypeSO*  value) ;

constexpr ::GlobalNamespace::EnvironmentTypeSO* __get__a360DegreesEnvironmentType() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentTypeSO*> __get__a360DegreesEnvironmentType() const;

constexpr void __set__defaultLastSelectedBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO*  value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO* __get__defaultLastSelectedBeatmapCharacteristic() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> __get__defaultLastSelectedBeatmapCharacteristic() const;

constexpr void __set__buildInSongPackSerializedName(::StringW  value) ;

constexpr ::StringW& __get__buildInSongPackSerializedName() ;

constexpr ::StringW const& __get__buildInSongPackSerializedName() const;

constexpr void __set__allSongPackSerializedName(::StringW  value) ;

constexpr ::StringW& __get__allSongPackSerializedName() ;

constexpr ::StringW const& __get__allSongPackSerializedName() const;

static inline void setStaticF__lastVersionWithoutSavedCustomColorSchemeBoostColors(::System::Version*  value) ;

static inline ::System::Version* getStaticF__lastVersionWithoutSavedCustomColorSchemeBoostColors() ;

static inline void setStaticF__eulaUpdateVersion(::System::Version*  value) ;

static inline ::System::Version* getStaticF__eulaUpdateVersion() ;

static inline void setStaticF__lastVersionWithoutArcsOptions(::System::Version*  value) ;

static inline ::System::Version* getStaticF__lastVersionWithoutArcsOptions() ;

/// @brief Method Save addr 0x236d5b4 size 0x110c virtual false final false
inline void Save(::GlobalNamespace::ISaveData*  saveData, ::GlobalNamespace::PlayerData*  playerData) ;

/// @brief Method Load addr 0x236e6c0 size 0x104 virtual false final false
inline ::GlobalNamespace::PlayerData* Load(::GlobalNamespace::ISaveData*  saveData, ::GlobalNamespace::BeatmapCharacteristicCollection*  beatmapCharacteristicCollection) ;

/// @brief Method LoadFromJSONString addr 0x236e7c4 size 0x1cc virtual false final false
inline ::GlobalNamespace::PlayerData* LoadFromJSONString(::StringW  jsonString, ::GlobalNamespace::BeatmapCharacteristicCollection*  beatmapCharacteristicCollection) ;

/// @brief Method LoadFromCurrentVersion addr 0x236f610 size 0x1190 virtual false final false
inline ::GlobalNamespace::PlayerData* LoadFromCurrentVersion(::GlobalNamespace::PlayerSaveData*  playerSaveData, ::GlobalNamespace::BeatmapCharacteristicCollection*  beatmapCharacteristicCollection) ;

/// @brief Method LoadFromVersionV1_0_1 addr 0x236ea88 size 0xb88 virtual false final false
inline ::GlobalNamespace::PlayerData* LoadFromVersionV1_0_1(::GlobalNamespace::PlayerSaveDataV1_0_1*  playerDataModelSaveData, ::GlobalNamespace::BeatmapCharacteristicCollection*  beatmapCharacteristicCollection) ;

/// @brief Method CreateDefaultPlayerData addr 0x236e990 size 0xf8 virtual false final false
inline ::GlobalNamespace::PlayerData* CreateDefaultPlayerData() ;

/// @brief Method GetLevelIdFromV_1_0_1LevelId addr 0x2370c70 size 0x68 virtual false final false
static inline ::StringW GetLevelIdFromV_1_0_1LevelId(::StringW  oldLevelId, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic) ;

/// @brief Method GetBeatmapCharacteristicFromV_1_0_1LevelId addr 0x23708d0 size 0x3a0 virtual false final false
static inline ::GlobalNamespace::BeatmapCharacteristicSO* GetBeatmapCharacteristicFromV_1_0_1LevelId(::GlobalNamespace::BeatmapCharacteristicCollection*  beatmapCharacteristicCollection, ::StringW  levelId) ;

/// @brief Method CreateDefaultOverrideEnvironmentSettings addr 0x23707a0 size 0xb0 virtual false final false
inline ::GlobalNamespace::OverrideEnvironmentSettings* CreateDefaultOverrideEnvironmentSettings() ;

/// @brief Method GetEnvironmentInfoBySerializedName addr 0x2370cd8 size 0x1c virtual false final false
inline ::GlobalNamespace::EnvironmentInfoSO* GetEnvironmentInfoBySerializedName(::StringW  environmentName) ;

/// @brief Method LoadCorrectedSongPackMask addr 0x2370850 size 0x80 virtual false final false
inline ::StringW LoadCorrectedSongPackMask(::ArrayW<uint8_t,::Array<uint8_t>*>  songMaskPackBytes) ;

static inline ::GlobalNamespace::PlayerDataFileManagerSO* New_ctor() ;

/// @brief Method .ctor addr 0x2370cf4 size 0x74 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PlayerDataFileManagerSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerDataFileManagerSO(PlayerDataFileManagerSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerDataFileManagerSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerDataFileManagerSO(PlayerDataFileManagerSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlayerDataFileManagerSO()  = default;
public:


// Fields

// Static field _lastVersionWithoutSavedCustomColorSchemeBoostColors

// Static field _eulaUpdateVersion

// Static field _lastVersionWithoutArcsOptions


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerDataFileManagerSO, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerDataFileManagerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerDataFileManagerSO*, "", "PlayerDataFileManagerSO");
