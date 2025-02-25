// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: RankModel/Rank
#include "GlobalNamespace/RankModel_Rank.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: IScoreController
  class IScoreController;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RelativeScoreAndImmediateRankCounter
  // [TokenAttribute] Offset: FFFFFFFF
  class RelativeScoreAndImmediateRankCounter : public UnityEngine::MonoBehaviour {
    public:
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE3EA74
    // private readonly IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3EA84
    // private readonly GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // private System.Action relativeScoreOrImmediateRankDidChangeEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* relativeScoreOrImmediateRankDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Single <relativeScore>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    float relativeScore;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private RankModel/Rank <immediateRank>k__BackingField
    // Size: 0x4
    // Offset: 0x3C
    GlobalNamespace::RankModel::Rank immediateRank;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RankModel::Rank) == 0x4);
    // Creating value type constructor for type: RelativeScoreAndImmediateRankCounter
    RelativeScoreAndImmediateRankCounter(GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel_ = {}, GlobalNamespace::IScoreController* scoreController_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}, System::Action* relativeScoreOrImmediateRankDidChangeEvent_ = {}, float relativeScore_ = {}, GlobalNamespace::RankModel::Rank immediateRank_ = {}) noexcept : gameplayModifiersModel{gameplayModifiersModel_}, scoreController{scoreController_}, gameplayModifiers{gameplayModifiers_}, relativeScoreOrImmediateRankDidChangeEvent{relativeScoreOrImmediateRankDidChangeEvent_}, relativeScore{relativeScore_}, immediateRank{immediateRank_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private GameplayModifiersModelSO _gameplayModifiersModel
    GlobalNamespace::GameplayModifiersModelSO*& dyn__gameplayModifiersModel();
    // Get instance field reference: private readonly IScoreController _scoreController
    GlobalNamespace::IScoreController*& dyn__scoreController();
    // Get instance field reference: private readonly GameplayModifiers _gameplayModifiers
    GlobalNamespace::GameplayModifiers*& dyn__gameplayModifiers();
    // Get instance field reference: private System.Action relativeScoreOrImmediateRankDidChangeEvent
    System::Action*& dyn_relativeScoreOrImmediateRankDidChangeEvent();
    // Get instance field reference: private System.Single <relativeScore>k__BackingField
    float& dyn_$relativeScore$k__BackingField();
    // Get instance field reference: private RankModel/Rank <immediateRank>k__BackingField
    GlobalNamespace::RankModel::Rank& dyn_$immediateRank$k__BackingField();
    // public System.Single get_relativeScore()
    // Offset: 0x11277E0
    float get_relativeScore();
    // private System.Void set_relativeScore(System.Single value)
    // Offset: 0x11277E8
    void set_relativeScore(float value);
    // public RankModel/Rank get_immediateRank()
    // Offset: 0x11277F0
    GlobalNamespace::RankModel::Rank get_immediateRank();
    // private System.Void set_immediateRank(RankModel/Rank value)
    // Offset: 0x11277F8
    void set_immediateRank(GlobalNamespace::RankModel::Rank value);
    // public System.Void add_relativeScoreOrImmediateRankDidChangeEvent(System.Action value)
    // Offset: 0x1127698
    void add_relativeScoreOrImmediateRankDidChangeEvent(System::Action* value);
    // public System.Void remove_relativeScoreOrImmediateRankDidChangeEvent(System.Action value)
    // Offset: 0x112773C
    void remove_relativeScoreOrImmediateRankDidChangeEvent(System::Action* value);
    // protected System.Void Start()
    // Offset: 0x1127800
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1127938
    void OnDestroy();
    // private System.Void HandleScoreControllerImmediateMaxPossibleScoreDidChange(System.Int32 immediateMaxPossibleScore, System.Int32 immediateMaxPossibleModifiedScore)
    // Offset: 0x1127A38
    void HandleScoreControllerImmediateMaxPossibleScoreDidChange(int immediateMaxPossibleScore, int immediateMaxPossibleModifiedScore);
    // private System.Void UpdateRelativeScoreAndImmediateRank(System.Int32 score, System.Int32 modifiedScore, System.Int32 maxPossibleScore, System.Int32 maxPossibleModifiedScore)
    // Offset: 0x1127B8C
    void UpdateRelativeScoreAndImmediateRank(int score, int modifiedScore, int maxPossibleScore, int maxPossibleModifiedScore);
    // public System.Void .ctor()
    // Offset: 0x1127C14
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RelativeScoreAndImmediateRankCounter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RelativeScoreAndImmediateRankCounter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RelativeScoreAndImmediateRankCounter*, creationType>()));
    }
  }; // RelativeScoreAndImmediateRankCounter
  #pragma pack(pop)
  static check_size<sizeof(RelativeScoreAndImmediateRankCounter), 60 + sizeof(GlobalNamespace::RankModel::Rank)> __GlobalNamespace_RelativeScoreAndImmediateRankCounterSizeCheck;
  static_assert(sizeof(RelativeScoreAndImmediateRankCounter) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RelativeScoreAndImmediateRankCounter*, "", "RelativeScoreAndImmediateRankCounter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RelativeScoreAndImmediateRankCounter::get_relativeScore
// Il2CppName: get_relativeScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)()>(&GlobalNamespace::RelativeScoreAndImmediateRankCounter::get_relativeScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RelativeScoreAndImmediateRankCounter*), "get_relativeScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RelativeScoreAndImmediateRankCounter::set_relativeScore
// Il2CppName: set_relativeScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)(float)>(&GlobalNamespace::RelativeScoreAndImmediateRankCounter::set_relativeScore)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RelativeScoreAndImmediateRankCounter*), "set_relativeScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RelativeScoreAndImmediateRankCounter::get_immediateRank
// Il2CppName: get_immediateRank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::RankModel::Rank (GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)()>(&GlobalNamespace::RelativeScoreAndImmediateRankCounter::get_immediateRank)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RelativeScoreAndImmediateRankCounter*), "get_immediateRank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RelativeScoreAndImmediateRankCounter::set_immediateRank
// Il2CppName: set_immediateRank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)(GlobalNamespace::RankModel::Rank)>(&GlobalNamespace::RelativeScoreAndImmediateRankCounter::set_immediateRank)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "RankModel/Rank")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RelativeScoreAndImmediateRankCounter*), "set_immediateRank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RelativeScoreAndImmediateRankCounter::add_relativeScoreOrImmediateRankDidChangeEvent
// Il2CppName: add_relativeScoreOrImmediateRankDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)(System::Action*)>(&GlobalNamespace::RelativeScoreAndImmediateRankCounter::add_relativeScoreOrImmediateRankDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RelativeScoreAndImmediateRankCounter*), "add_relativeScoreOrImmediateRankDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RelativeScoreAndImmediateRankCounter::remove_relativeScoreOrImmediateRankDidChangeEvent
// Il2CppName: remove_relativeScoreOrImmediateRankDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)(System::Action*)>(&GlobalNamespace::RelativeScoreAndImmediateRankCounter::remove_relativeScoreOrImmediateRankDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RelativeScoreAndImmediateRankCounter*), "remove_relativeScoreOrImmediateRankDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RelativeScoreAndImmediateRankCounter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)()>(&GlobalNamespace::RelativeScoreAndImmediateRankCounter::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RelativeScoreAndImmediateRankCounter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RelativeScoreAndImmediateRankCounter::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)()>(&GlobalNamespace::RelativeScoreAndImmediateRankCounter::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RelativeScoreAndImmediateRankCounter*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RelativeScoreAndImmediateRankCounter::HandleScoreControllerImmediateMaxPossibleScoreDidChange
// Il2CppName: HandleScoreControllerImmediateMaxPossibleScoreDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)(int, int)>(&GlobalNamespace::RelativeScoreAndImmediateRankCounter::HandleScoreControllerImmediateMaxPossibleScoreDidChange)> {
  static const MethodInfo* get() {
    static auto* immediateMaxPossibleScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* immediateMaxPossibleModifiedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RelativeScoreAndImmediateRankCounter*), "HandleScoreControllerImmediateMaxPossibleScoreDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{immediateMaxPossibleScore, immediateMaxPossibleModifiedScore});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RelativeScoreAndImmediateRankCounter::UpdateRelativeScoreAndImmediateRank
// Il2CppName: UpdateRelativeScoreAndImmediateRank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RelativeScoreAndImmediateRankCounter::*)(int, int, int, int)>(&GlobalNamespace::RelativeScoreAndImmediateRankCounter::UpdateRelativeScoreAndImmediateRank)> {
  static const MethodInfo* get() {
    static auto* score = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* modifiedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxPossibleScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxPossibleModifiedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RelativeScoreAndImmediateRankCounter*), "UpdateRelativeScoreAndImmediateRank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{score, modifiedScore, maxPossibleScore, maxPossibleModifiedScore});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RelativeScoreAndImmediateRankCounter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
