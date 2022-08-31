// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DlcPromoPanelDataSO
#include "GlobalNamespace/DlcPromoPanelDataSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: IAnalyticsModel
  class IAnalyticsModel;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Random
  class Random;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DlcPromoPanelModel
  class DlcPromoPanelModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel*, "", "DlcPromoPanelModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: DlcPromoPanelModel
  // [TokenAttribute] Offset: FFFFFFFF
  class DlcPromoPanelModel : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::DlcPromoPanelModel::$UpdateNotOwnedPacksAsync$d__17
    struct $UpdateNotOwnedPacksAsync$d__17;
    public:
    // [InjectAttribute] Offset: 0x10E2920
    // private readonly AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AdditionalContentModel*) == 0x8);
    // [InjectAttribute] Offset: 0x10E2930
    // private readonly IAnalyticsModel _analyticsModel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IAnalyticsModel* analyticsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAnalyticsModel*) == 0x8);
    // [InjectAttribute] Offset: 0x10E2940
    // private readonly DlcPromoPanelDataSO _dlcPromoPanelData
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::DlcPromoPanelDataSO* dlcPromoPanelData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DlcPromoPanelDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0x10E2950
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerDataModel*) == 0x8);
    // private DlcPromoPanelDataSO/MusicPackPromoInfo[] _notOwnedMusicPackPromoInfos
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo*> notOwnedMusicPackPromoInfos;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo*>) == 0x8);
    // private System.Boolean _updatingNotOwnedPacks
    // Size: 0x1
    // Offset: 0x38
    bool updatingNotOwnedPacks;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x39
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: random
    char __padding6[0x6] = {};
    // private System.Random _random
    // Size: 0x8
    // Offset: 0x40
    ::System::Random* random;
    // Field size check
    static_assert(sizeof(::System::Random*) == 0x8);
    public:
    // Get instance field reference: private readonly AdditionalContentModel _additionalContentModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AdditionalContentModel*& dyn__additionalContentModel();
    // Get instance field reference: private readonly IAnalyticsModel _analyticsModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAnalyticsModel*& dyn__analyticsModel();
    // Get instance field reference: private readonly DlcPromoPanelDataSO _dlcPromoPanelData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DlcPromoPanelDataSO*& dyn__dlcPromoPanelData();
    // Get instance field reference: private readonly PlayerDataModel _playerDataModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerDataModel*& dyn__playerDataModel();
    // Get instance field reference: private DlcPromoPanelDataSO/MusicPackPromoInfo[] _notOwnedMusicPackPromoInfos
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo*>& dyn__notOwnedMusicPackPromoInfos();
    // Get instance field reference: private System.Boolean _updatingNotOwnedPacks
    [[deprecated("Use field access instead!")]] bool& dyn__updatingNotOwnedPacks();
    // Get instance field reference: private System.Boolean _initialized
    [[deprecated("Use field access instead!")]] bool& dyn__initialized();
    // Get instance field reference: private System.Random _random
    [[deprecated("Use field access instead!")]] ::System::Random*& dyn__random();
    // public System.Void .ctor()
    // Offset: 0x149B700
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DlcPromoPanelModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DlcPromoPanelModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DlcPromoPanelModel*, creationType>()));
    }
    // public System.Void InitAfterPlatformWasInitialized(System.Boolean force)
    // Offset: 0x149A9A8
    void InitAfterPlatformWasInitialized(bool force);
    // public DlcPromoPanelDataSO/MusicPackPromoInfo GetPackDataForMainMenuPromoBanner(out System.Boolean owned)
    // Offset: 0x149AB48
    ::GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo* GetPackDataForMainMenuPromoBanner(ByRef<bool> owned);
    // public System.Void MainMenuDlcPromoBannerWasShown(IBeatmapLevelPack promoPack, System.String customText)
    // Offset: 0x149ADB0
    void MainMenuDlcPromoBannerWasShown(::GlobalNamespace::IBeatmapLevelPack* promoPack, ::StringW customText);
    // public System.Void MainMenuDlcPromoBannerWasPressed(IBeatmapLevelPack promoPack, System.String customText)
    // Offset: 0x149B00C
    void MainMenuDlcPromoBannerWasPressed(::GlobalNamespace::IBeatmapLevelPack* promoPack, ::StringW customText);
    // public System.Void BuyLevelButtonWasPressed(IPreviewBeatmapLevel level, System.String page, System.String customText)
    // Offset: 0x149B16C
    void BuyLevelButtonWasPressed(::GlobalNamespace::IPreviewBeatmapLevel* level, ::StringW page, ::StringW customText);
    // public System.Void BuyLevelButtonWasShown(IPreviewBeatmapLevel level, System.String page, System.String customText)
    // Offset: 0x149B2D0
    void BuyLevelButtonWasShown(::GlobalNamespace::IPreviewBeatmapLevel* level, ::StringW page, ::StringW customText);
    // public System.Void BuyPackButtonWasPressed(IBeatmapLevelPack pack, System.String page, System.String customText)
    // Offset: 0x149B434
    void BuyPackButtonWasPressed(::GlobalNamespace::IBeatmapLevelPack* pack, ::StringW page, ::StringW customText);
    // public System.Void BuyPackButtonWasShown(IBeatmapLevelPack pack, System.String page, System.String customText)
    // Offset: 0x149B598
    void BuyPackButtonWasShown(::GlobalNamespace::IBeatmapLevelPack* pack, ::StringW page, ::StringW customText);
    // private System.Collections.Generic.Dictionary`2<System.String,System.String> GetExperimentEventData(System.String itemId, System.String page, System.String customText)
    // Offset: 0x149AF28
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetExperimentEventData(::StringW itemId, ::StringW page, ::StringW customText);
    // private System.Void UpdateNotOwnedPacksAsync()
    // Offset: 0x149AA90
    void UpdateNotOwnedPacksAsync();
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0x149B6FC
    void HandleAdditionalContentModelDidInvalidateData();
  }; // DlcPromoPanelModel
  #pragma pack(pop)
  static check_size<sizeof(DlcPromoPanelModel), 64 + sizeof(::System::Random*)> __GlobalNamespace_DlcPromoPanelModelSizeCheck;
  static_assert(sizeof(DlcPromoPanelModel) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelModel::InitAfterPlatformWasInitialized
// Il2CppName: InitAfterPlatformWasInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoPanelModel::*)(bool)>(&GlobalNamespace::DlcPromoPanelModel::InitAfterPlatformWasInitialized)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelModel*), "InitAfterPlatformWasInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelModel::GetPackDataForMainMenuPromoBanner
// Il2CppName: GetPackDataForMainMenuPromoBanner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo* (GlobalNamespace::DlcPromoPanelModel::*)(ByRef<bool>)>(&GlobalNamespace::DlcPromoPanelModel::GetPackDataForMainMenuPromoBanner)> {
  static const MethodInfo* get() {
    static auto* owned = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelModel*), "GetPackDataForMainMenuPromoBanner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{owned});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasShown
// Il2CppName: MainMenuDlcPromoBannerWasShown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IBeatmapLevelPack*, ::StringW)>(&GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasShown)> {
  static const MethodInfo* get() {
    static auto* promoPack = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelPack")->byval_arg;
    static auto* customText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelModel*), "MainMenuDlcPromoBannerWasShown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{promoPack, customText});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasPressed
// Il2CppName: MainMenuDlcPromoBannerWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IBeatmapLevelPack*, ::StringW)>(&GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasPressed)> {
  static const MethodInfo* get() {
    static auto* promoPack = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelPack")->byval_arg;
    static auto* customText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelModel*), "MainMenuDlcPromoBannerWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{promoPack, customText});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasPressed
// Il2CppName: BuyLevelButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IPreviewBeatmapLevel*, ::StringW, ::StringW)>(&GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasPressed)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    static auto* page = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* customText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelModel*), "BuyLevelButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, page, customText});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasShown
// Il2CppName: BuyLevelButtonWasShown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IPreviewBeatmapLevel*, ::StringW, ::StringW)>(&GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasShown)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    static auto* page = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* customText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelModel*), "BuyLevelButtonWasShown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, page, customText});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasPressed
// Il2CppName: BuyPackButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IBeatmapLevelPack*, ::StringW, ::StringW)>(&GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasPressed)> {
  static const MethodInfo* get() {
    static auto* pack = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelPack")->byval_arg;
    static auto* page = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* customText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelModel*), "BuyPackButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pack, page, customText});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasShown
// Il2CppName: BuyPackButtonWasShown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IBeatmapLevelPack*, ::StringW, ::StringW)>(&GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasShown)> {
  static const MethodInfo* get() {
    static auto* pack = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelPack")->byval_arg;
    static auto* page = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* customText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelModel*), "BuyPackButtonWasShown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pack, page, customText});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelModel::GetExperimentEventData
// Il2CppName: GetExperimentEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (GlobalNamespace::DlcPromoPanelModel::*)(::StringW, ::StringW, ::StringW)>(&GlobalNamespace::DlcPromoPanelModel::GetExperimentEventData)> {
  static const MethodInfo* get() {
    static auto* itemId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* page = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* customText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelModel*), "GetExperimentEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{itemId, page, customText});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelModel::UpdateNotOwnedPacksAsync
// Il2CppName: UpdateNotOwnedPacksAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoPanelModel::*)()>(&GlobalNamespace::DlcPromoPanelModel::UpdateNotOwnedPacksAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelModel*), "UpdateNotOwnedPacksAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelModel::HandleAdditionalContentModelDidInvalidateData
// Il2CppName: HandleAdditionalContentModelDidInvalidateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoPanelModel::*)()>(&GlobalNamespace::DlcPromoPanelModel::HandleAdditionalContentModelDidInvalidateData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelModel*), "HandleAdditionalContentModelDidInvalidateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
