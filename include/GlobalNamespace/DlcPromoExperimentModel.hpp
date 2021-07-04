// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DlcPromoExperimentDataSO
#include "GlobalNamespace/DlcPromoExperimentDataSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: IPlatformUserModel
  class IPlatformUserModel;
  // Forward declaring type: IAnalyticsModel
  class IAnalyticsModel;
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
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: DlcPromoExperimentModel
  class DlcPromoExperimentModel : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::DlcPromoExperimentModel::$InitAfterPlatformWasInitializedAsync$d__8
    struct $InitAfterPlatformWasInitializedAsync$d__8;
    // Nested type: GlobalNamespace::DlcPromoExperimentModel::$UpdateNotOwnedPacksAsync$d__17
    struct $UpdateNotOwnedPacksAsync$d__17;
    // [InjectAttribute] Offset: 0xE16170
    // private readonly AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE16180
    // private readonly IPlatformUserModel _platformUserModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IPlatformUserModel* platformUserModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPlatformUserModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE16190
    // private readonly IAnalyticsModel _analyticsModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IAnalyticsModel* analyticsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAnalyticsModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE161A0
    // private DlcPromoExperimentDataSO _dlcPromoExperimentData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::DlcPromoExperimentDataSO* dlcPromoExperimentData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DlcPromoExperimentDataSO*) == 0x8);
    // private DlcPromoExperimentDataSO/MusicPackPromoInfo[] _notOwnedMusicPackPromoInfos
    // Size: 0x8
    // Offset: 0x30
    ::Array<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>* notOwnedMusicPackPromoInfos;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>*) == 0x8);
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
    System::Random* random;
    // Field size check
    static_assert(sizeof(System::Random*) == 0x8);
    // Creating value type constructor for type: DlcPromoExperimentModel
    DlcPromoExperimentModel(GlobalNamespace::AdditionalContentModel* additionalContentModel_ = {}, GlobalNamespace::IPlatformUserModel* platformUserModel_ = {}, GlobalNamespace::IAnalyticsModel* analyticsModel_ = {}, GlobalNamespace::DlcPromoExperimentDataSO* dlcPromoExperimentData_ = {}, ::Array<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>* notOwnedMusicPackPromoInfos_ = {}, bool updatingNotOwnedPacks_ = {}, bool initialized_ = {}, System::Random* random_ = {}) noexcept : additionalContentModel{additionalContentModel_}, platformUserModel{platformUserModel_}, analyticsModel{analyticsModel_}, dlcPromoExperimentData{dlcPromoExperimentData_}, notOwnedMusicPackPromoInfos{notOwnedMusicPackPromoInfos_}, updatingNotOwnedPacks{updatingNotOwnedPacks_}, initialized{initialized_}, random{random_} {}
    // public System.Void InitAfterPlatformWasInitializedAsync(System.Boolean force)
    // Offset: 0x10362A0
    void InitAfterPlatformWasInitializedAsync(bool force);
    // public DlcPromoExperimentDataSO/MusicPackPromoInfo GetPackDataForMainMenuPromoBanner(out System.Boolean probablyOwned)
    // Offset: 0x103636C
    GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo* GetPackDataForMainMenuPromoBanner(bool& probablyOwned);
    // public System.Void MainMenuDlcPromoBannerWasShown(IBeatmapLevelPack promoPack, System.String customText)
    // Offset: 0x103651C
    void MainMenuDlcPromoBannerWasShown(GlobalNamespace::IBeatmapLevelPack* promoPack, ::Il2CppString* customText);
    // public System.Void MainMenuDlcPromoBannerWasPressed(IBeatmapLevelPack promoPack, System.String customText)
    // Offset: 0x1036860
    void MainMenuDlcPromoBannerWasPressed(GlobalNamespace::IBeatmapLevelPack* promoPack, ::Il2CppString* customText);
    // public System.Void BuyLevelButtonWasPressed(IPreviewBeatmapLevel level, System.String page, System.String customText)
    // Offset: 0x10369C4
    void BuyLevelButtonWasPressed(GlobalNamespace::IPreviewBeatmapLevel* level, ::Il2CppString* page, ::Il2CppString* customText);
    // public System.Void BuyLevelButtonWasShown(IPreviewBeatmapLevel level, System.String page, System.String customText)
    // Offset: 0x1036B2C
    void BuyLevelButtonWasShown(GlobalNamespace::IPreviewBeatmapLevel* level, ::Il2CppString* page, ::Il2CppString* customText);
    // public System.Void BuyPackButtonWasPressed(IBeatmapLevelPack pack, System.String page, System.String customText)
    // Offset: 0x1036C94
    void BuyPackButtonWasPressed(GlobalNamespace::IBeatmapLevelPack* pack, ::Il2CppString* page, ::Il2CppString* customText);
    // public System.Void BuyPackButtonWasShown(IBeatmapLevelPack pack, System.String page, System.String customText)
    // Offset: 0x1036DFC
    void BuyPackButtonWasShown(GlobalNamespace::IBeatmapLevelPack* pack, ::Il2CppString* page, ::Il2CppString* customText);
    // private System.Collections.Generic.Dictionary`2<System.String,System.String> GetExperimentEventData(System.String itemId, System.String page, System.String customText)
    // Offset: 0x1036680
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* GetExperimentEventData(::Il2CppString* itemId, ::Il2CppString* page, ::Il2CppString* customText);
    // private System.Void UpdateNotOwnedPacksAsync()
    // Offset: 0x1036F64
    void UpdateNotOwnedPacksAsync();
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0x103701C
    void HandleAdditionalContentModelDidInvalidateData();
    // public System.Void .ctor()
    // Offset: 0x1037020
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DlcPromoExperimentModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DlcPromoExperimentModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DlcPromoExperimentModel*, creationType>()));
    }
  }; // DlcPromoExperimentModel
  #pragma pack(pop)
  static check_size<sizeof(DlcPromoExperimentModel), 64 + sizeof(System::Random*)> __GlobalNamespace_DlcPromoExperimentModelSizeCheck;
  static_assert(sizeof(DlcPromoExperimentModel) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DlcPromoExperimentModel*, "", "DlcPromoExperimentModel");
// Writing includes for template specializations
#include "GlobalNamespace/IBeatmapLevelPack.hpp"
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentModel::InitAfterPlatformWasInitializedAsync
// Il2CppName: InitAfterPlatformWasInitializedAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoExperimentModel::*)(bool)>(&GlobalNamespace::DlcPromoExperimentModel::InitAfterPlatformWasInitializedAsync)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentModel*), "InitAfterPlatformWasInitializedAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentModel::GetPackDataForMainMenuPromoBanner
// Il2CppName: GetPackDataForMainMenuPromoBanner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo* (GlobalNamespace::DlcPromoExperimentModel::*)(bool&)>(&GlobalNamespace::DlcPromoExperimentModel::GetPackDataForMainMenuPromoBanner)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentModel*), "GetPackDataForMainMenuPromoBanner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool&>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentModel::MainMenuDlcPromoBannerWasShown
// Il2CppName: MainMenuDlcPromoBannerWasShown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoExperimentModel::*)(GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*)>(&GlobalNamespace::DlcPromoExperimentModel::MainMenuDlcPromoBannerWasShown)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentModel*), "MainMenuDlcPromoBannerWasShown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IBeatmapLevelPack*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentModel::MainMenuDlcPromoBannerWasPressed
// Il2CppName: MainMenuDlcPromoBannerWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoExperimentModel::*)(GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*)>(&GlobalNamespace::DlcPromoExperimentModel::MainMenuDlcPromoBannerWasPressed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentModel*), "MainMenuDlcPromoBannerWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IBeatmapLevelPack*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentModel::BuyLevelButtonWasPressed
// Il2CppName: BuyLevelButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoExperimentModel::*)(GlobalNamespace::IPreviewBeatmapLevel*, ::Il2CppString*, ::Il2CppString*)>(&GlobalNamespace::DlcPromoExperimentModel::BuyLevelButtonWasPressed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentModel*), "BuyLevelButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IPreviewBeatmapLevel*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentModel::BuyLevelButtonWasShown
// Il2CppName: BuyLevelButtonWasShown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoExperimentModel::*)(GlobalNamespace::IPreviewBeatmapLevel*, ::Il2CppString*, ::Il2CppString*)>(&GlobalNamespace::DlcPromoExperimentModel::BuyLevelButtonWasShown)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentModel*), "BuyLevelButtonWasShown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IPreviewBeatmapLevel*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentModel::BuyPackButtonWasPressed
// Il2CppName: BuyPackButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoExperimentModel::*)(GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*, ::Il2CppString*)>(&GlobalNamespace::DlcPromoExperimentModel::BuyPackButtonWasPressed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentModel*), "BuyPackButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IBeatmapLevelPack*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentModel::BuyPackButtonWasShown
// Il2CppName: BuyPackButtonWasShown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoExperimentModel::*)(GlobalNamespace::IBeatmapLevelPack*, ::Il2CppString*, ::Il2CppString*)>(&GlobalNamespace::DlcPromoExperimentModel::BuyPackButtonWasShown)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentModel*), "BuyPackButtonWasShown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IBeatmapLevelPack*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentModel::GetExperimentEventData
// Il2CppName: GetExperimentEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* (GlobalNamespace::DlcPromoExperimentModel::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&GlobalNamespace::DlcPromoExperimentModel::GetExperimentEventData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentModel*), "GetExperimentEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentModel::UpdateNotOwnedPacksAsync
// Il2CppName: UpdateNotOwnedPacksAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoExperimentModel::*)()>(&GlobalNamespace::DlcPromoExperimentModel::UpdateNotOwnedPacksAsync)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentModel*), "UpdateNotOwnedPacksAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentModel::HandleAdditionalContentModelDidInvalidateData
// Il2CppName: HandleAdditionalContentModelDidInvalidateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DlcPromoExperimentModel::*)()>(&GlobalNamespace::DlcPromoExperimentModel::HandleAdditionalContentModelDidInvalidateData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentModel*), "HandleAdditionalContentModelDidInvalidateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
