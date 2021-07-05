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
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DifficultyBeatmapSet
  class DifficultyBeatmapSet : public ::Il2CppObject/*, public GlobalNamespace::IDifficultyBeatmapSet*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE16C20
    // private BeatmapCharacteristicSO <beatmapCharacteristic>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE16C30
    // private IDifficultyBeatmap[] <difficultyBeatmaps>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IDifficultyBeatmap*>*) == 0x8);
    // Creating value type constructor for type: DifficultyBeatmapSet
    DifficultyBeatmapSet(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, ::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps_ = {}) noexcept : beatmapCharacteristic{beatmapCharacteristic_}, difficultyBeatmaps{difficultyBeatmaps_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IDifficultyBeatmapSet
    operator GlobalNamespace::IDifficultyBeatmapSet() noexcept {
      return *reinterpret_cast<GlobalNamespace::IDifficultyBeatmapSet*>(this);
    }
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0x10349F4
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // private System.Void set_beatmapCharacteristic(BeatmapCharacteristicSO value)
    // Offset: 0x10349FC
    void set_beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* value);
    // public IDifficultyBeatmap[] get_difficultyBeatmaps()
    // Offset: 0x1034A04
    ::Array<GlobalNamespace::IDifficultyBeatmap*>* get_difficultyBeatmaps();
    // private System.Void set_difficultyBeatmaps(IDifficultyBeatmap[] value)
    // Offset: 0x1034A0C
    void set_difficultyBeatmaps(::Array<GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void .ctor(BeatmapCharacteristicSO beatmapCharacteristic, IDifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0x1034A14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DifficultyBeatmapSet* New_ctor(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DifficultyBeatmapSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DifficultyBeatmapSet*, creationType>(beatmapCharacteristic, difficultyBeatmaps)));
    }
  }; // DifficultyBeatmapSet
  #pragma pack(pop)
  static check_size<sizeof(DifficultyBeatmapSet), 24 + sizeof(::Array<GlobalNamespace::IDifficultyBeatmap*>*)> __GlobalNamespace_DifficultyBeatmapSetSizeCheck;
  static_assert(sizeof(DifficultyBeatmapSet) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DifficultyBeatmapSet*, "", "DifficultyBeatmapSet");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DifficultyBeatmapSet::get_beatmapCharacteristic
// Il2CppName: get_beatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::DifficultyBeatmapSet::*)()>(&GlobalNamespace::DifficultyBeatmapSet::get_beatmapCharacteristic)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyBeatmapSet*), "get_beatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyBeatmapSet::set_beatmapCharacteristic
// Il2CppName: set_beatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DifficultyBeatmapSet::*)(GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::DifficultyBeatmapSet::set_beatmapCharacteristic)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyBeatmapSet*), "set_beatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyBeatmapSet::get_difficultyBeatmaps
// Il2CppName: get_difficultyBeatmaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::IDifficultyBeatmap*>* (GlobalNamespace::DifficultyBeatmapSet::*)()>(&GlobalNamespace::DifficultyBeatmapSet::get_difficultyBeatmaps)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyBeatmapSet*), "get_difficultyBeatmaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyBeatmapSet::set_difficultyBeatmaps
// Il2CppName: set_difficultyBeatmaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DifficultyBeatmapSet::*)(::Array<GlobalNamespace::IDifficultyBeatmap*>*)>(&GlobalNamespace::DifficultyBeatmapSet::set_difficultyBeatmaps)> {
  const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyBeatmapSet*), "set_difficultyBeatmaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyBeatmapSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
