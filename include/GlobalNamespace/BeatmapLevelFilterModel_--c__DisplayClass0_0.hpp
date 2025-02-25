// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapLevelFilterModel
#include "GlobalNamespace/BeatmapLevelFilterModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelFilterParams
  class LevelFilterParams;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelFilterModel/<>c__DisplayClass0_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeatmapLevelFilterModel::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    // public System.Boolean searchByText
    // Size: 0x1
    // Offset: 0x10
    bool searchByText;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: searchByText and: searchTexts
    char __padding0[0x7] = {};
    // public System.String[] searchTexts
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppString*>* searchTexts;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // public LevelFilterParams levelFilterParams
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::LevelFilterParams* levelFilterParams;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelFilterParams*) == 0x8);
    // public PlayerDataModel playerDataModel
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass0_0
    $$c__DisplayClass0_0(bool searchByText_ = {}, ::Array<::Il2CppString*>* searchTexts_ = {}, GlobalNamespace::LevelFilterParams* levelFilterParams_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}) noexcept : searchByText{searchByText_}, searchTexts{searchTexts_}, levelFilterParams{levelFilterParams_}, playerDataModel{playerDataModel_} {}
    // Get instance field reference: public System.Boolean searchByText
    bool& dyn_searchByText();
    // Get instance field reference: public System.String[] searchTexts
    ::Array<::Il2CppString*>*& dyn_searchTexts();
    // Get instance field reference: public LevelFilterParams levelFilterParams
    GlobalNamespace::LevelFilterParams*& dyn_levelFilterParams();
    // Get instance field reference: public PlayerDataModel playerDataModel
    GlobalNamespace::PlayerDataModel*& dyn_playerDataModel();
    // System.Boolean <FilerBeatmapLevelPackCollectionAsync>b__0(IPreviewBeatmapLevel beatmapLevel)
    // Offset: 0x10C7C3C
    bool $FilerBeatmapLevelPackCollectionAsync$b__0(GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);
    // public System.Void .ctor()
    // Offset: 0x10C7C34
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelFilterModel::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelFilterModel::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelFilterModel::$$c__DisplayClass0_0*, creationType>()));
    }
  }; // BeatmapLevelFilterModel/<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelFilterModel::$$c__DisplayClass0_0), 40 + sizeof(GlobalNamespace::PlayerDataModel*)> __GlobalNamespace_BeatmapLevelFilterModel_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(BeatmapLevelFilterModel::$$c__DisplayClass0_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelFilterModel::$$c__DisplayClass0_0*, "", "BeatmapLevelFilterModel/<>c__DisplayClass0_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelFilterModel::$$c__DisplayClass0_0::$FilerBeatmapLevelPackCollectionAsync$b__0
// Il2CppName: <FilerBeatmapLevelPackCollectionAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapLevelFilterModel::$$c__DisplayClass0_0::*)(GlobalNamespace::IPreviewBeatmapLevel*)>(&GlobalNamespace::BeatmapLevelFilterModel::$$c__DisplayClass0_0::$FilerBeatmapLevelPackCollectionAsync$b__0)> {
  static const MethodInfo* get() {
    static auto* beatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelFilterModel::$$c__DisplayClass0_0*), "<FilerBeatmapLevelPackCollectionAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelFilterModel::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
