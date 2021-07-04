// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IDifficultyBeatmapSet
#include "GlobalNamespace/IDifficultyBeatmapSet.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: CustomDifficultyBeatmap
  class CustomDifficultyBeatmap;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: CustomDifficultyBeatmapSet
  class CustomDifficultyBeatmapSet : public ::Il2CppObject/*, public GlobalNamespace::IDifficultyBeatmapSet*/ {
    public:
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private CustomDifficultyBeatmap[] _difficultyBeatmaps
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::CustomDifficultyBeatmap*>* difficultyBeatmaps;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::CustomDifficultyBeatmap*>*) == 0x8);
    // Creating value type constructor for type: CustomDifficultyBeatmapSet
    CustomDifficultyBeatmapSet(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, ::Array<GlobalNamespace::CustomDifficultyBeatmap*>* difficultyBeatmaps_ = {}) noexcept : beatmapCharacteristic{beatmapCharacteristic_}, difficultyBeatmaps{difficultyBeatmaps_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IDifficultyBeatmapSet
    operator GlobalNamespace::IDifficultyBeatmapSet() noexcept {
      return *reinterpret_cast<GlobalNamespace::IDifficultyBeatmapSet*>(this);
    }
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0x119964C
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public IDifficultyBeatmap[] get_difficultyBeatmaps()
    // Offset: 0x1199654
    ::Array<GlobalNamespace::IDifficultyBeatmap*>* get_difficultyBeatmaps();
    // public System.Void .ctor(BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x119965C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomDifficultyBeatmapSet* New_ctor(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CustomDifficultyBeatmapSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomDifficultyBeatmapSet*, creationType>(beatmapCharacteristic)));
    }
    // public System.Void SetCustomDifficultyBeatmaps(CustomDifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0x1199688
    void SetCustomDifficultyBeatmaps(::Array<GlobalNamespace::CustomDifficultyBeatmap*>* difficultyBeatmaps);
  }; // CustomDifficultyBeatmapSet
  #pragma pack(pop)
  static check_size<sizeof(CustomDifficultyBeatmapSet), 24 + sizeof(::Array<GlobalNamespace::CustomDifficultyBeatmap*>*)> __GlobalNamespace_CustomDifficultyBeatmapSetSizeCheck;
  static_assert(sizeof(CustomDifficultyBeatmapSet) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomDifficultyBeatmapSet*, "", "CustomDifficultyBeatmapSet");
// Writing includes for template specializations
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmapSet::get_beatmapCharacteristic
// Il2CppName: get_beatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::CustomDifficultyBeatmapSet::*)()>(&GlobalNamespace::CustomDifficultyBeatmapSet::get_beatmapCharacteristic)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmapSet*), "get_beatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmapSet::get_difficultyBeatmaps
// Il2CppName: get_difficultyBeatmaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::IDifficultyBeatmap*>* (GlobalNamespace::CustomDifficultyBeatmapSet::*)()>(&GlobalNamespace::CustomDifficultyBeatmapSet::get_difficultyBeatmaps)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmapSet*), "get_difficultyBeatmaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmapSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmapSet::SetCustomDifficultyBeatmaps
// Il2CppName: SetCustomDifficultyBeatmaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomDifficultyBeatmapSet::*)(::Array<GlobalNamespace::CustomDifficultyBeatmap*>*)>(&GlobalNamespace::CustomDifficultyBeatmapSet::SetCustomDifficultyBeatmaps)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmapSet*), "SetCustomDifficultyBeatmaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<GlobalNamespace::CustomDifficultyBeatmap*>*>()});
  }
};
