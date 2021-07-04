// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
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
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardViewController
  class LeaderboardViewController : public HMUI::ViewController {
    public:
    // Creating value type constructor for type: LeaderboardViewController
    LeaderboardViewController() noexcept {}
    // public System.Void SetData(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xFFFFFFFF
    void SetData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void RefreshLevelStats()
    // Offset: 0x10C7C08
    void RefreshLevelStats();
    // protected System.Void .ctor()
    // Offset: 0x10C7C0C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LeaderboardViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardViewController*, creationType>()));
    }
  }; // LeaderboardViewController
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardViewController*, "", "LeaderboardViewController");
// Writing includes for template specializations
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardViewController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardViewController::*)(GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::LeaderboardViewController::SetData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardViewController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IDifficultyBeatmap*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardViewController::RefreshLevelStats
// Il2CppName: RefreshLevelStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardViewController::*)()>(&GlobalNamespace::LeaderboardViewController::RefreshLevelStats)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardViewController*), "RefreshLevelStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
