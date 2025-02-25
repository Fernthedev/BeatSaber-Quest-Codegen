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
  // Forward declaring type: AchievementsModelSO
  class AchievementsModelSO;
  // Forward declaring type: Signal
  class Signal;
  // Forward declaring type: AchievementSO
  class AchievementSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: FinishTutorialAchievementHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class FinishTutorialAchievementHandler : public UnityEngine::MonoBehaviour {
    public:
    // private AchievementsModelSO _achievementsModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AchievementsModelSO* achievementsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementsModelSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE38BF8
    // private Signal _tutorialFinishedSignal
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::Signal* tutorialFinishedSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // private AchievementSO _finishTutorialAchievement
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AchievementSO* finishTutorialAchievement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AchievementSO*) == 0x8);
    // Creating value type constructor for type: FinishTutorialAchievementHandler
    FinishTutorialAchievementHandler(GlobalNamespace::AchievementsModelSO* achievementsModel_ = {}, GlobalNamespace::Signal* tutorialFinishedSignal_ = {}, GlobalNamespace::AchievementSO* finishTutorialAchievement_ = {}) noexcept : achievementsModel{achievementsModel_}, tutorialFinishedSignal{tutorialFinishedSignal_}, finishTutorialAchievement{finishTutorialAchievement_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private AchievementsModelSO _achievementsModel
    GlobalNamespace::AchievementsModelSO*& dyn__achievementsModel();
    // Get instance field reference: private Signal _tutorialFinishedSignal
    GlobalNamespace::Signal*& dyn__tutorialFinishedSignal();
    // Get instance field reference: private AchievementSO _finishTutorialAchievement
    GlobalNamespace::AchievementSO*& dyn__finishTutorialAchievement();
    // protected System.Void Start()
    // Offset: 0x105E044
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x105E0D0
    void OnDestroy();
    // private System.Void HandleTutorialFinished()
    // Offset: 0x105E15C
    void HandleTutorialFinished();
    // public System.Void .ctor()
    // Offset: 0x105E180
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FinishTutorialAchievementHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FinishTutorialAchievementHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FinishTutorialAchievementHandler*, creationType>()));
    }
  }; // FinishTutorialAchievementHandler
  #pragma pack(pop)
  static check_size<sizeof(FinishTutorialAchievementHandler), 40 + sizeof(GlobalNamespace::AchievementSO*)> __GlobalNamespace_FinishTutorialAchievementHandlerSizeCheck;
  static_assert(sizeof(FinishTutorialAchievementHandler) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FinishTutorialAchievementHandler*, "", "FinishTutorialAchievementHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FinishTutorialAchievementHandler::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FinishTutorialAchievementHandler::*)()>(&GlobalNamespace::FinishTutorialAchievementHandler::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FinishTutorialAchievementHandler*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FinishTutorialAchievementHandler::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FinishTutorialAchievementHandler::*)()>(&GlobalNamespace::FinishTutorialAchievementHandler::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FinishTutorialAchievementHandler*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FinishTutorialAchievementHandler::HandleTutorialFinished
// Il2CppName: HandleTutorialFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FinishTutorialAchievementHandler::*)()>(&GlobalNamespace::FinishTutorialAchievementHandler::HandleTutorialFinished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FinishTutorialAchievementHandler*), "HandleTutorialFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FinishTutorialAchievementHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
