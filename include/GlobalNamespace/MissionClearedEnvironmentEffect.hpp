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
  // Forward declaring type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager;
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MissionClearedEnvironmentEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionClearedEnvironmentEffect : public UnityEngine::MonoBehaviour {
    public:
    // private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionObjectiveCheckersManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE3DE80
    // private BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectCallbackController*) == 0x8);
    // Creating value type constructor for type: MissionClearedEnvironmentEffect
    MissionClearedEnvironmentEffect(GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager_ = {}, GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}) noexcept : missionObjectiveCheckersManager{missionObjectiveCheckersManager_}, beatmapObjectCallbackController{beatmapObjectCallbackController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    GlobalNamespace::MissionObjectiveCheckersManager*& dyn__missionObjectiveCheckersManager();
    // Get instance field reference: private BeatmapObjectCallbackController _beatmapObjectCallbackController
    GlobalNamespace::BeatmapObjectCallbackController*& dyn__beatmapObjectCallbackController();
    // protected System.Void Awake()
    // Offset: 0x113D2EC
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x113D418
    void OnDestroy();
    // private System.Void HandleMissionObjectiveCheckersManagerObjectiveWasCleared()
    // Offset: 0x113D544
    void HandleMissionObjectiveCheckersManagerObjectiveWasCleared();
    // public System.Void .ctor()
    // Offset: 0x113D5C0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionClearedEnvironmentEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionClearedEnvironmentEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionClearedEnvironmentEffect*, creationType>()));
    }
  }; // MissionClearedEnvironmentEffect
  #pragma pack(pop)
  static check_size<sizeof(MissionClearedEnvironmentEffect), 32 + sizeof(GlobalNamespace::BeatmapObjectCallbackController*)> __GlobalNamespace_MissionClearedEnvironmentEffectSizeCheck;
  static_assert(sizeof(MissionClearedEnvironmentEffect) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionClearedEnvironmentEffect*, "", "MissionClearedEnvironmentEffect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionClearedEnvironmentEffect::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionClearedEnvironmentEffect::*)()>(&GlobalNamespace::MissionClearedEnvironmentEffect::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionClearedEnvironmentEffect*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionClearedEnvironmentEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionClearedEnvironmentEffect::*)()>(&GlobalNamespace::MissionClearedEnvironmentEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionClearedEnvironmentEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionClearedEnvironmentEffect::HandleMissionObjectiveCheckersManagerObjectiveWasCleared
// Il2CppName: HandleMissionObjectiveCheckersManagerObjectiveWasCleared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionClearedEnvironmentEffect::*)()>(&GlobalNamespace::MissionClearedEnvironmentEffect::HandleMissionObjectiveCheckersManagerObjectiveWasCleared)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionClearedEnvironmentEffect*), "HandleMissionObjectiveCheckersManagerObjectiveWasCleared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionClearedEnvironmentEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
