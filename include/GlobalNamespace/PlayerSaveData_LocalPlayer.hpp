// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::PlayerSaveData::LocalPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::LocalPlayer*, "", "PlayerSaveData/LocalPlayer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData/LocalPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveData::LocalPlayer : public ::Il2CppObject {
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
    // public System.String playerId
    // Size: 0x8
    // Offset: 0x10
    ::StringW playerId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String playerName
    // Size: 0x8
    // Offset: 0x18
    ::StringW playerName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean shouldShowTutorialPrompt
    // Size: 0x1
    // Offset: 0x20
    bool shouldShowTutorialPrompt;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean shouldShow360Warning
    // Size: 0x1
    // Offset: 0x21
    bool shouldShow360Warning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean agreedToEula
    // Size: 0x1
    // Offset: 0x22
    bool agreedToEula;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean didSelectLanguage
    // Size: 0x1
    // Offset: 0x23
    bool didSelectLanguage;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean agreedToMultiplayerDisclaimer
    // Size: 0x1
    // Offset: 0x24
    bool agreedToMultiplayerDisclaimer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean avatarCreated
    // Size: 0x1
    // Offset: 0x25
    bool avatarCreated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: avatarCreated and: playerAgreements
    char __padding7[0x2] = {};
    // public PlayerSaveData/PlayerAgreementsData playerAgreements
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PlayerSaveData::PlayerAgreementsData* playerAgreements;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::PlayerAgreementsData*) == 0x8);
    // public BeatmapDifficulty lastSelectedBeatmapDifficulty
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: lastSelectedBeatmapDifficulty and: lastSelectedBeatmapCharacteristicName
    char __padding9[0x4] = {};
    // public System.String lastSelectedBeatmapCharacteristicName
    // Size: 0x8
    // Offset: 0x38
    ::StringW lastSelectedBeatmapCharacteristicName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public PlayerSaveData/GameplayModifiers gameplayModifiers
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::PlayerSaveData::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::GameplayModifiers*) == 0x8);
    // public PlayerSaveData/PlayerSpecificSettings playerSpecificSettings
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::PlayerSaveData::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::PlayerSpecificSettings*) == 0x8);
    // public PlayerSaveData/PracticeSettings practiceSettings
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::PlayerSaveData::PracticeSettings* practiceSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::PracticeSettings*) == 0x8);
    // public PlayerSaveData/PlayerAllOverallStatsData playerAllOverallStatsData
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData* playerAllOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData*) == 0x8);
    // public System.Collections.Generic.List`1<PlayerSaveData/PlayerLevelStatsData> levelsStatsData
    // Size: 0x8
    // Offset: 0x60
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::PlayerLevelStatsData*>* levelsStatsData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::PlayerLevelStatsData*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayerSaveData/PlayerMissionStatsData> missionsStatsData
    // Size: 0x8
    // Offset: 0x68
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::PlayerMissionStatsData*>* missionsStatsData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::PlayerMissionStatsData*>*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> showedMissionHelpIds
    // Size: 0x8
    // Offset: 0x70
    System::Collections::Generic::List_1<::StringW>* showedMissionHelpIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public PlayerSaveData/ColorSchemesSettings colorSchemesSettings
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::PlayerSaveData::ColorSchemesSettings* colorSchemesSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::ColorSchemesSettings*) == 0x8);
    // public PlayerSaveData/OverrideEnvironmentSettings overrideEnvironmentSettings
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::PlayerSaveData::OverrideEnvironmentSettings* overrideEnvironmentSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::OverrideEnvironmentSettings*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> favoritesLevelIds
    // Size: 0x8
    // Offset: 0x88
    System::Collections::Generic::List_1<::StringW>* favoritesLevelIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public PlayerSaveData/MultiplayerModeSettings multiplayerModeSettings
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::PlayerSaveData::MultiplayerModeSettings* multiplayerModeSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSaveData::MultiplayerModeSettings*) == 0x8);
    // public System.Int32 currentDlcPromoDisplayCount
    // Size: 0x4
    // Offset: 0x98
    int currentDlcPromoDisplayCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: currentDlcPromoDisplayCount and: currentDlcPromoId
    char __padding22[0x4] = {};
    // public System.String currentDlcPromoId
    // Size: 0x8
    // Offset: 0xA0
    ::StringW currentDlcPromoId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String playerId
    ::StringW& dyn_playerId();
    // Get instance field reference: public System.String playerName
    ::StringW& dyn_playerName();
    // Get instance field reference: public System.Boolean shouldShowTutorialPrompt
    bool& dyn_shouldShowTutorialPrompt();
    // Get instance field reference: public System.Boolean shouldShow360Warning
    bool& dyn_shouldShow360Warning();
    // Get instance field reference: public System.Boolean agreedToEula
    bool& dyn_agreedToEula();
    // Get instance field reference: public System.Boolean didSelectLanguage
    bool& dyn_didSelectLanguage();
    // Get instance field reference: public System.Boolean agreedToMultiplayerDisclaimer
    bool& dyn_agreedToMultiplayerDisclaimer();
    // Get instance field reference: public System.Boolean avatarCreated
    bool& dyn_avatarCreated();
    // Get instance field reference: public PlayerSaveData/PlayerAgreementsData playerAgreements
    GlobalNamespace::PlayerSaveData::PlayerAgreementsData*& dyn_playerAgreements();
    // Get instance field reference: public BeatmapDifficulty lastSelectedBeatmapDifficulty
    GlobalNamespace::BeatmapDifficulty& dyn_lastSelectedBeatmapDifficulty();
    // Get instance field reference: public System.String lastSelectedBeatmapCharacteristicName
    ::StringW& dyn_lastSelectedBeatmapCharacteristicName();
    // Get instance field reference: public PlayerSaveData/GameplayModifiers gameplayModifiers
    GlobalNamespace::PlayerSaveData::GameplayModifiers*& dyn_gameplayModifiers();
    // Get instance field reference: public PlayerSaveData/PlayerSpecificSettings playerSpecificSettings
    GlobalNamespace::PlayerSaveData::PlayerSpecificSettings*& dyn_playerSpecificSettings();
    // Get instance field reference: public PlayerSaveData/PracticeSettings practiceSettings
    GlobalNamespace::PlayerSaveData::PracticeSettings*& dyn_practiceSettings();
    // Get instance field reference: public PlayerSaveData/PlayerAllOverallStatsData playerAllOverallStatsData
    GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData*& dyn_playerAllOverallStatsData();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayerSaveData/PlayerLevelStatsData> levelsStatsData
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::PlayerLevelStatsData*>*& dyn_levelsStatsData();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayerSaveData/PlayerMissionStatsData> missionsStatsData
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::PlayerMissionStatsData*>*& dyn_missionsStatsData();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> showedMissionHelpIds
    System::Collections::Generic::List_1<::StringW>*& dyn_showedMissionHelpIds();
    // Get instance field reference: public PlayerSaveData/ColorSchemesSettings colorSchemesSettings
    GlobalNamespace::PlayerSaveData::ColorSchemesSettings*& dyn_colorSchemesSettings();
    // Get instance field reference: public PlayerSaveData/OverrideEnvironmentSettings overrideEnvironmentSettings
    GlobalNamespace::PlayerSaveData::OverrideEnvironmentSettings*& dyn_overrideEnvironmentSettings();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> favoritesLevelIds
    System::Collections::Generic::List_1<::StringW>*& dyn_favoritesLevelIds();
    // Get instance field reference: public PlayerSaveData/MultiplayerModeSettings multiplayerModeSettings
    GlobalNamespace::PlayerSaveData::MultiplayerModeSettings*& dyn_multiplayerModeSettings();
    // Get instance field reference: public System.Int32 currentDlcPromoDisplayCount
    int& dyn_currentDlcPromoDisplayCount();
    // Get instance field reference: public System.String currentDlcPromoId
    ::StringW& dyn_currentDlcPromoId();
    // public System.Void .ctor()
    // Offset: 0x13DF630
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::LocalPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::LocalPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::LocalPlayer*, creationType>()));
    }
  }; // PlayerSaveData/LocalPlayer
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData::LocalPlayer), 160 + sizeof(::StringW)> __GlobalNamespace_PlayerSaveData_LocalPlayerSizeCheck;
  static_assert(sizeof(PlayerSaveData::LocalPlayer) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveData::LocalPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
