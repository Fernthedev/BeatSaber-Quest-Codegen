// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LeaderboardScoreUploader
#include "GlobalNamespace/LeaderboardScoreUploader.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
NEED_NO_BOX(GlobalNamespace::LeaderboardScoreUploader::ScoresToUploadData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardScoreUploader::ScoresToUploadData*, "", "LeaderboardScoreUploader/ScoresToUploadData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardScoreUploader/ScoresToUploadData
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardScoreUploader::ScoresToUploadData : public ::Il2CppObject {
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
    // public System.Collections.Generic.List`1<LeaderboardScoreUploader/ScoreData> scores
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::LeaderboardScoreUploader::ScoreData*>* scores;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::LeaderboardScoreUploader::ScoreData*>*) == 0x8);
    public:
    // Creating conversion operator: operator System::Collections::Generic::List_1<GlobalNamespace::LeaderboardScoreUploader::ScoreData*>*
    constexpr operator System::Collections::Generic::List_1<GlobalNamespace::LeaderboardScoreUploader::ScoreData*>*() const noexcept {
      return scores;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<LeaderboardScoreUploader/ScoreData> scores
    System::Collections::Generic::List_1<GlobalNamespace::LeaderboardScoreUploader::ScoreData*>*& dyn_scores();
    // public System.Void .ctor()
    // Offset: 0x13B05A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardScoreUploader::ScoresToUploadData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LeaderboardScoreUploader::ScoresToUploadData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardScoreUploader::ScoresToUploadData*, creationType>()));
    }
  }; // LeaderboardScoreUploader/ScoresToUploadData
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardScoreUploader::ScoresToUploadData), 16 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::LeaderboardScoreUploader::ScoreData*>*)> __GlobalNamespace_LeaderboardScoreUploader_ScoresToUploadDataSizeCheck;
  static_assert(sizeof(LeaderboardScoreUploader::ScoresToUploadData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoresToUploadData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
