// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: InMultiplayerRichPresenceData
#include "GlobalNamespace/InMultiplayerRichPresenceData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayingMultiplayerRichPresenceData
  class PlayingMultiplayerRichPresenceData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayingMultiplayerRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayingMultiplayerRichPresenceData*, "", "PlayingMultiplayerRichPresenceData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2A
  #pragma pack(push, 1)
  // Autogenerated type: PlayingMultiplayerRichPresenceData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayingMultiplayerRichPresenceData : public ::GlobalNamespace::InMultiplayerRichPresenceData {
    public:
    // [LocalizationKeyAttribute] Offset: 0x10E552C
    // static field const value: static private System.String kPlayingMultiplayerLobbyRichPresenceLocalizationKey
    static constexpr const char* kPlayingMultiplayerLobbyRichPresenceLocalizationKey = "PLAYING_MULTIPLAYER_PRESENCE";
    // Get static field: static private System.String kPlayingMultiplayerLobbyRichPresenceLocalizationKey
    static ::StringW _get_kPlayingMultiplayerLobbyRichPresenceLocalizationKey();
    // Set static field: static private System.String kPlayingMultiplayerLobbyRichPresenceLocalizationKey
    static void _set_kPlayingMultiplayerLobbyRichPresenceLocalizationKey(::StringW value);
    // public System.Void .ctor(IDifficultyBeatmap difficultyBeatmap, System.Boolean atMaxPartySize)
    // Offset: 0x140337C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayingMultiplayerRichPresenceData* New_ctor(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool atMaxPartySize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayingMultiplayerRichPresenceData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayingMultiplayerRichPresenceData*, creationType>(difficultyBeatmap, atMaxPartySize)));
    }
  }; // PlayingMultiplayerRichPresenceData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayingMultiplayerRichPresenceData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
