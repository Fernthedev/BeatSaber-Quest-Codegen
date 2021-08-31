// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: IMockPlayerScoreCalculator
#include "GlobalNamespace/IMockPlayerScoreCalculator.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockNoteData
  class MockNoteData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DeterministicHitChanceScoreCalculator
  // [TokenAttribute] Offset: FFFFFFFF
  class DeterministicHitChanceScoreCalculator : public ::Il2CppObject/*, public GlobalNamespace::IMockPlayerScoreCalculator*/ {
    public:
    // private readonly System.Single _hitChance
    // Size: 0x4
    // Offset: 0x10
    float hitChance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _chanceAggregated
    // Size: 0x4
    // Offset: 0x14
    float chanceAggregated;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: DeterministicHitChanceScoreCalculator
    DeterministicHitChanceScoreCalculator(float hitChance_ = {}, float chanceAggregated_ = {}) noexcept : hitChance{hitChance_}, chanceAggregated{chanceAggregated_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMockPlayerScoreCalculator
    operator GlobalNamespace::IMockPlayerScoreCalculator() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMockPlayerScoreCalculator*>(this);
    }
    // static field const value: static private System.Int32 kScorePerHit
    static constexpr const int kScorePerHit = 105;
    // Get static field: static private System.Int32 kScorePerHit
    static int _get_kScorePerHit();
    // Set static field: static private System.Int32 kScorePerHit
    static void _set_kScorePerHit(int value);
    // Get instance field: private readonly System.Single _hitChance
    float _get__hitChance();
    // Set instance field: private readonly System.Single _hitChance
    void _set__hitChance(float value);
    // Get instance field: private System.Single _chanceAggregated
    float _get__chanceAggregated();
    // Set instance field: private System.Single _chanceAggregated
    void _set__chanceAggregated(float value);
    // public System.Void .ctor(System.Single hitChance)
    // Offset: 0x10FB094
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeterministicHitChanceScoreCalculator* New_ctor(float hitChance) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DeterministicHitChanceScoreCalculator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeterministicHitChanceScoreCalculator*, creationType>(hitChance)));
    }
    // public System.Int32 GetScoreForNote(MockNoteData noteData)
    // Offset: 0x10FB0C8
    int GetScoreForNote(GlobalNamespace::MockNoteData* noteData);
  }; // DeterministicHitChanceScoreCalculator
  #pragma pack(pop)
  static check_size<sizeof(DeterministicHitChanceScoreCalculator), 20 + sizeof(float)> __GlobalNamespace_DeterministicHitChanceScoreCalculatorSizeCheck;
  static_assert(sizeof(DeterministicHitChanceScoreCalculator) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DeterministicHitChanceScoreCalculator*, "", "DeterministicHitChanceScoreCalculator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DeterministicHitChanceScoreCalculator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DeterministicHitChanceScoreCalculator::GetScoreForNote
// Il2CppName: GetScoreForNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::DeterministicHitChanceScoreCalculator::*)(GlobalNamespace::MockNoteData*)>(&GlobalNamespace::DeterministicHitChanceScoreCalculator::GetScoreForNote)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "MockNoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeterministicHitChanceScoreCalculator*), "GetScoreForNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData});
  }
};
