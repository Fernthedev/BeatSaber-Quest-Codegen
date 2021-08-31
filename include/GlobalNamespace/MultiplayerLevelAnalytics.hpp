// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLevelScenesTransitionSetupDataSO
  class MultiplayerLevelScenesTransitionSetupDataSO;
  // Forward declaring type: IAnalyticsModel
  class IAnalyticsModel;
  // Forward declaring type: MultiplayerResultsData
  class MultiplayerResultsData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLevelAnalytics
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLevelAnalytics : public UnityEngine::MonoBehaviour {
    public:
    // private MultiplayerLevelScenesTransitionSetupDataSO _multiplayerLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE310E0
    // private readonly IAnalyticsModel _analyticsModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IAnalyticsModel* analyticsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAnalyticsModel*) == 0x8);
    // Creating value type constructor for type: MultiplayerLevelAnalytics
    MultiplayerLevelAnalytics(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData_ = {}, GlobalNamespace::IAnalyticsModel* analyticsModel_ = {}) noexcept : multiplayerLevelScenesTransitionSetupData{multiplayerLevelScenesTransitionSetupData_}, analyticsModel{analyticsModel_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private MultiplayerLevelScenesTransitionSetupDataSO _multiplayerLevelScenesTransitionSetupData
    GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* _get__multiplayerLevelScenesTransitionSetupData();
    // Set instance field: private MultiplayerLevelScenesTransitionSetupDataSO _multiplayerLevelScenesTransitionSetupData
    void _set__multiplayerLevelScenesTransitionSetupData(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* value);
    // Get instance field: private readonly IAnalyticsModel _analyticsModel
    GlobalNamespace::IAnalyticsModel* _get__analyticsModel();
    // Set instance field: private readonly IAnalyticsModel _analyticsModel
    void _set__analyticsModel(GlobalNamespace::IAnalyticsModel* value);
    // protected System.Void Start()
    // Offset: 0x11B42C8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x11B43FC
    void OnDestroy();
    // private System.Void HandleMultiplayerLevelDidFinish(MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData, MultiplayerResultsData multiplayerResultsData)
    // Offset: 0x11B4530
    void HandleMultiplayerLevelDidFinish(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData, GlobalNamespace::MultiplayerResultsData* multiplayerResultsData);
    // public System.Void .ctor()
    // Offset: 0x11B4AD0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLevelAnalytics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLevelAnalytics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLevelAnalytics*, creationType>()));
    }
  }; // MultiplayerLevelAnalytics
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLevelAnalytics), 32 + sizeof(GlobalNamespace::IAnalyticsModel*)> __GlobalNamespace_MultiplayerLevelAnalyticsSizeCheck;
  static_assert(sizeof(MultiplayerLevelAnalytics) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelAnalytics*, "", "MultiplayerLevelAnalytics");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelAnalytics::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelAnalytics::*)()>(&GlobalNamespace::MultiplayerLevelAnalytics::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelAnalytics*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelAnalytics::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelAnalytics::*)()>(&GlobalNamespace::MultiplayerLevelAnalytics::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelAnalytics*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelAnalytics::HandleMultiplayerLevelDidFinish
// Il2CppName: HandleMultiplayerLevelDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLevelAnalytics::*)(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*)>(&GlobalNamespace::MultiplayerLevelAnalytics::HandleMultiplayerLevelDidFinish)> {
  static const MethodInfo* get() {
    static auto* multiplayerLevelScenesTransitionSetupData = &::il2cpp_utils::GetClassFromName("", "MultiplayerLevelScenesTransitionSetupDataSO")->byval_arg;
    static auto* multiplayerResultsData = &::il2cpp_utils::GetClassFromName("", "MultiplayerResultsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLevelAnalytics*), "HandleMultiplayerLevelDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplayerLevelScenesTransitionSetupData, multiplayerResultsData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLevelAnalytics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
