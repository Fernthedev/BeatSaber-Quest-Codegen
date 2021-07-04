// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PlayerAllOverallStatsData
  class PlayerAllOverallStatsData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData
    class PlayerOverallStatsData;
    // [CompilerGeneratedAttribute] Offset: 0xE18280
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <campaignOverallStatsData>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* campaignOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE18290
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <soloFreePlayOverallStatsData>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* soloFreePlayOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE182A0
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <partyFreePlayOverallStatsData>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* partyFreePlayOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE182B0
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <onlinePlayOverallStatsData>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* onlinePlayOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE182C0
    // private System.Action`2<LevelCompletionResults,IDifficultyBeatmap> didUpdateSoloFreePlayOverallStatsDataEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* didUpdateSoloFreePlayOverallStatsDataEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE182D0
    // private System.Action`2<LevelCompletionResults,IDifficultyBeatmap> didUpdatePartyFreePlayOverallStatsDataEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* didUpdatePartyFreePlayOverallStatsDataEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE182E0
    // private System.Action`2<MissionCompletionResults,MissionNode> didUpdateCampaignOverallStatsDataEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>* didUpdateCampaignOverallStatsDataEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>*) == 0x8);
    // Creating value type constructor for type: PlayerAllOverallStatsData
    PlayerAllOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* campaignOverallStatsData_ = {}, GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* soloFreePlayOverallStatsData_ = {}, GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* partyFreePlayOverallStatsData_ = {}, GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* onlinePlayOverallStatsData_ = {}, System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* didUpdateSoloFreePlayOverallStatsDataEvent_ = {}, System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* didUpdatePartyFreePlayOverallStatsDataEvent_ = {}, System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>* didUpdateCampaignOverallStatsDataEvent_ = {}) noexcept : campaignOverallStatsData{campaignOverallStatsData_}, soloFreePlayOverallStatsData{soloFreePlayOverallStatsData_}, partyFreePlayOverallStatsData{partyFreePlayOverallStatsData_}, onlinePlayOverallStatsData{onlinePlayOverallStatsData_}, didUpdateSoloFreePlayOverallStatsDataEvent{didUpdateSoloFreePlayOverallStatsDataEvent_}, didUpdatePartyFreePlayOverallStatsDataEvent{didUpdatePartyFreePlayOverallStatsDataEvent_}, didUpdateCampaignOverallStatsDataEvent{didUpdateCampaignOverallStatsDataEvent_} {}
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_allOverallStatsData()
    // Offset: 0x1052F28
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_allOverallStatsData();
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_campaignOverallStatsData()
    // Offset: 0x1053088
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_campaignOverallStatsData();
    // private System.Void set_campaignOverallStatsData(PlayerAllOverallStatsData/PlayerOverallStatsData value)
    // Offset: 0x1053090
    void set_campaignOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* value);
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_soloFreePlayOverallStatsData()
    // Offset: 0x1053098
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_soloFreePlayOverallStatsData();
    // private System.Void set_soloFreePlayOverallStatsData(PlayerAllOverallStatsData/PlayerOverallStatsData value)
    // Offset: 0x10530A0
    void set_soloFreePlayOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* value);
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_partyFreePlayOverallStatsData()
    // Offset: 0x10530A8
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_partyFreePlayOverallStatsData();
    // private System.Void set_partyFreePlayOverallStatsData(PlayerAllOverallStatsData/PlayerOverallStatsData value)
    // Offset: 0x10530B0
    void set_partyFreePlayOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* value);
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_onlinePlayOverallStatsData()
    // Offset: 0x10530B8
    GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_onlinePlayOverallStatsData();
    // private System.Void set_onlinePlayOverallStatsData(PlayerAllOverallStatsData/PlayerOverallStatsData value)
    // Offset: 0x10530C0
    void set_onlinePlayOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* value);
    // public System.Void add_didUpdateSoloFreePlayOverallStatsDataEvent(System.Action`2<LevelCompletionResults,IDifficultyBeatmap> value)
    // Offset: 0x10530C8
    void add_didUpdateSoloFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void remove_didUpdateSoloFreePlayOverallStatsDataEvent(System.Action`2<LevelCompletionResults,IDifficultyBeatmap> value)
    // Offset: 0x105316C
    void remove_didUpdateSoloFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void add_didUpdatePartyFreePlayOverallStatsDataEvent(System.Action`2<LevelCompletionResults,IDifficultyBeatmap> value)
    // Offset: 0x1053210
    void add_didUpdatePartyFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void remove_didUpdatePartyFreePlayOverallStatsDataEvent(System.Action`2<LevelCompletionResults,IDifficultyBeatmap> value)
    // Offset: 0x10532B4
    void remove_didUpdatePartyFreePlayOverallStatsDataEvent(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void add_didUpdateCampaignOverallStatsDataEvent(System.Action`2<MissionCompletionResults,MissionNode> value)
    // Offset: 0x1053358
    void add_didUpdateCampaignOverallStatsDataEvent(System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>* value);
    // public System.Void remove_didUpdateCampaignOverallStatsDataEvent(System.Action`2<MissionCompletionResults,MissionNode> value)
    // Offset: 0x10533FC
    void remove_didUpdateCampaignOverallStatsDataEvent(System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>* value);
    // public System.Void .ctor(PlayerAllOverallStatsData/PlayerOverallStatsData campaignOverallStatsData, PlayerAllOverallStatsData/PlayerOverallStatsData soloFreePlayOverallStatsData, PlayerAllOverallStatsData/PlayerOverallStatsData partyFreePlayOverallStatsData, PlayerAllOverallStatsData/PlayerOverallStatsData onlinePlayOverallStatsData)
    // Offset: 0x1053564
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerAllOverallStatsData* New_ctor(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* campaignOverallStatsData, GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* soloFreePlayOverallStatsData, GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* partyFreePlayOverallStatsData, GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* onlinePlayOverallStatsData) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerAllOverallStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerAllOverallStatsData*, creationType>(campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData, onlinePlayOverallStatsData)));
    }
    // public System.Void UpdateSoloFreePlayOverallStatsData(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x10535B0
    void UpdateSoloFreePlayOverallStatsData(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void UpdatePartyFreePlayOverallStatsData(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x104BB44
    void UpdatePartyFreePlayOverallStatsData(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void UpdateCampaignOverallStatsData(MissionCompletionResults missionCompletionResults, MissionNode missionNode)
    // Offset: 0x1053750
    void UpdateCampaignOverallStatsData(GlobalNamespace::MissionCompletionResults* missionCompletionResults, GlobalNamespace::MissionNode* missionNode);
    // public System.Void UpdateOnlinePlayOverallStatsData(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x10537E4
    void UpdateOnlinePlayOverallStatsData(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void .ctor()
    // Offset: 0x10534A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerAllOverallStatsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerAllOverallStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerAllOverallStatsData*, creationType>()));
    }
  }; // PlayerAllOverallStatsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerAllOverallStatsData), 64 + sizeof(System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>*)> __GlobalNamespace_PlayerAllOverallStatsDataSizeCheck;
  static_assert(sizeof(PlayerAllOverallStatsData) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerAllOverallStatsData*, "", "PlayerAllOverallStatsData");
// Writing includes for template specializations
#include "GlobalNamespace/PlayerAllOverallStatsData_PlayerOverallStatsData.hpp"
#include "System/Action_2.hpp"
#include "GlobalNamespace/LevelCompletionResults.hpp"
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
#include "GlobalNamespace/MissionCompletionResults.hpp"
#include "GlobalNamespace/MissionNode.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::get_allOverallStatsData
// Il2CppName: get_allOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* (GlobalNamespace::PlayerAllOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::get_allOverallStatsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "get_allOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::get_campaignOverallStatsData
// Il2CppName: get_campaignOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* (GlobalNamespace::PlayerAllOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::get_campaignOverallStatsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "get_campaignOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::set_campaignOverallStatsData
// Il2CppName: set_campaignOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*)>(&GlobalNamespace::PlayerAllOverallStatsData::set_campaignOverallStatsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "set_campaignOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::get_soloFreePlayOverallStatsData
// Il2CppName: get_soloFreePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* (GlobalNamespace::PlayerAllOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::get_soloFreePlayOverallStatsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "get_soloFreePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::set_soloFreePlayOverallStatsData
// Il2CppName: set_soloFreePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*)>(&GlobalNamespace::PlayerAllOverallStatsData::set_soloFreePlayOverallStatsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "set_soloFreePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::get_partyFreePlayOverallStatsData
// Il2CppName: get_partyFreePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* (GlobalNamespace::PlayerAllOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::get_partyFreePlayOverallStatsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "get_partyFreePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::set_partyFreePlayOverallStatsData
// Il2CppName: set_partyFreePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*)>(&GlobalNamespace::PlayerAllOverallStatsData::set_partyFreePlayOverallStatsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "set_partyFreePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::get_onlinePlayOverallStatsData
// Il2CppName: get_onlinePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* (GlobalNamespace::PlayerAllOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::get_onlinePlayOverallStatsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "get_onlinePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::set_onlinePlayOverallStatsData
// Il2CppName: set_onlinePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*)>(&GlobalNamespace::PlayerAllOverallStatsData::set_onlinePlayOverallStatsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "set_onlinePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::add_didUpdateSoloFreePlayOverallStatsDataEvent
// Il2CppName: add_didUpdateSoloFreePlayOverallStatsDataEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>*)>(&GlobalNamespace::PlayerAllOverallStatsData::add_didUpdateSoloFreePlayOverallStatsDataEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "add_didUpdateSoloFreePlayOverallStatsDataEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdateSoloFreePlayOverallStatsDataEvent
// Il2CppName: remove_didUpdateSoloFreePlayOverallStatsDataEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>*)>(&GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdateSoloFreePlayOverallStatsDataEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "remove_didUpdateSoloFreePlayOverallStatsDataEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::add_didUpdatePartyFreePlayOverallStatsDataEvent
// Il2CppName: add_didUpdatePartyFreePlayOverallStatsDataEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>*)>(&GlobalNamespace::PlayerAllOverallStatsData::add_didUpdatePartyFreePlayOverallStatsDataEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "add_didUpdatePartyFreePlayOverallStatsDataEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdatePartyFreePlayOverallStatsDataEvent
// Il2CppName: remove_didUpdatePartyFreePlayOverallStatsDataEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>*)>(&GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdatePartyFreePlayOverallStatsDataEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "remove_didUpdatePartyFreePlayOverallStatsDataEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::add_didUpdateCampaignOverallStatsDataEvent
// Il2CppName: add_didUpdateCampaignOverallStatsDataEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>*)>(&GlobalNamespace::PlayerAllOverallStatsData::add_didUpdateCampaignOverallStatsDataEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "add_didUpdateCampaignOverallStatsDataEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdateCampaignOverallStatsDataEvent
// Il2CppName: remove_didUpdateCampaignOverallStatsDataEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>*)>(&GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdateCampaignOverallStatsDataEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "remove_didUpdateCampaignOverallStatsDataEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::UpdateSoloFreePlayOverallStatsData
// Il2CppName: UpdateSoloFreePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::PlayerAllOverallStatsData::UpdateSoloFreePlayOverallStatsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "UpdateSoloFreePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::LevelCompletionResults*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IDifficultyBeatmap*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::UpdatePartyFreePlayOverallStatsData
// Il2CppName: UpdatePartyFreePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::PlayerAllOverallStatsData::UpdatePartyFreePlayOverallStatsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "UpdatePartyFreePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::LevelCompletionResults*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IDifficultyBeatmap*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::UpdateCampaignOverallStatsData
// Il2CppName: UpdateCampaignOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(GlobalNamespace::MissionCompletionResults*, GlobalNamespace::MissionNode*)>(&GlobalNamespace::PlayerAllOverallStatsData::UpdateCampaignOverallStatsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "UpdateCampaignOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MissionCompletionResults*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MissionNode*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::UpdateOnlinePlayOverallStatsData
// Il2CppName: UpdateOnlinePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::PlayerAllOverallStatsData::UpdateOnlinePlayOverallStatsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "UpdateOnlinePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::LevelCompletionResults*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IDifficultyBeatmap*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
