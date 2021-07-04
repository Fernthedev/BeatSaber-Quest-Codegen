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
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardsModel
  class LeaderboardsModel : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: LeaderboardsModel
    LeaderboardsModel() noexcept {}
    // static public System.String GetLeaderboardID(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x10C7C3C
    static ::Il2CppString* GetLeaderboardID(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void .ctor()
    // Offset: 0x10C7CA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardsModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LeaderboardsModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardsModel*, creationType>()));
    }
  }; // LeaderboardsModel
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardsModel*, "", "LeaderboardsModel");
// Writing includes for template specializations
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardsModel::GetLeaderboardID
// Il2CppName: GetLeaderboardID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::LeaderboardsModel::GetLeaderboardID)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardsModel*), "GetLeaderboardID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IDifficultyBeatmap*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardsModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
