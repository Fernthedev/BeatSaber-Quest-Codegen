// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: BeatmapDataLoader
  class BeatmapDataLoader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataSO
  class BeatmapDataSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // [HideInInspector] Offset: 0xE16708
    // public System.String _jsonData
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* jsonData;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private BeatmapData _beatmapData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapData*) == 0x8);
    // private System.Single _beatsPerMinute
    // Size: 0x4
    // Offset: 0x28
    float beatsPerMinute;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _shuffle
    // Size: 0x4
    // Offset: 0x2C
    float shuffle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _shufflePeriod
    // Size: 0x4
    // Offset: 0x30
    float shufflePeriod;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _hasRequiredDataForLoad
    // Size: 0x1
    // Offset: 0x34
    bool hasRequiredDataForLoad;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasRequiredDataForLoad and: beatmapDataLoader
    char __padding5[0x3] = {};
    // private BeatmapDataLoader _beatmapDataLoader
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BeatmapDataLoader* beatmapDataLoader;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDataLoader*) == 0x8);
    // Creating value type constructor for type: BeatmapDataSO
    BeatmapDataSO(::Il2CppString* jsonData_ = {}, GlobalNamespace::BeatmapData* beatmapData_ = {}, float beatsPerMinute_ = {}, float shuffle_ = {}, float shufflePeriod_ = {}, bool hasRequiredDataForLoad_ = {}, GlobalNamespace::BeatmapDataLoader* beatmapDataLoader_ = {}) noexcept : jsonData{jsonData_}, beatmapData{beatmapData_}, beatsPerMinute{beatsPerMinute_}, shuffle{shuffle_}, shufflePeriod{shufflePeriod_}, hasRequiredDataForLoad{hasRequiredDataForLoad_}, beatmapDataLoader{beatmapDataLoader_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public BeatmapData get_beatmapData()
    // Offset: 0x11C5DD8
    GlobalNamespace::BeatmapData* get_beatmapData();
    // public System.Void set_beatmapData(BeatmapData value)
    // Offset: 0x11C5E4C
    void set_beatmapData(GlobalNamespace::BeatmapData* value);
    // public System.Void SetJsonData(System.String jsonData)
    // Offset: 0x11C5E54
    void SetJsonData(::Il2CppString* jsonData);
    // public System.Void SetRequiredDataForLoad(System.Single beatsPerMinute, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x11C5E5C
    void SetRequiredDataForLoad(float beatsPerMinute, float shuffle, float shufflePeriod);
    // public System.Void Load()
    // Offset: 0x11C5E08
    void Load();
    // public System.Void .ctor()
    // Offset: 0x11C5E70
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataSO*, creationType>()));
    }
  }; // BeatmapDataSO
  #pragma pack(pop)
  static check_size<sizeof(BeatmapDataSO), 56 + sizeof(GlobalNamespace::BeatmapDataLoader*)> __GlobalNamespace_BeatmapDataSOSizeCheck;
  static_assert(sizeof(BeatmapDataSO) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataSO*, "", "BeatmapDataSO");
// Writing includes for template specializations
#include "GlobalNamespace/BeatmapData.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::get_beatmapData
// Il2CppName: get_beatmapData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData* (GlobalNamespace::BeatmapDataSO::*)()>(&GlobalNamespace::BeatmapDataSO::get_beatmapData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataSO*), "get_beatmapData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::set_beatmapData
// Il2CppName: set_beatmapData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataSO::*)(GlobalNamespace::BeatmapData*)>(&GlobalNamespace::BeatmapDataSO::set_beatmapData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataSO*), "set_beatmapData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapData*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::SetJsonData
// Il2CppName: SetJsonData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataSO::*)(::Il2CppString*)>(&GlobalNamespace::BeatmapDataSO::SetJsonData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataSO*), "SetJsonData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::SetRequiredDataForLoad
// Il2CppName: SetRequiredDataForLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataSO::*)(float, float, float)>(&GlobalNamespace::BeatmapDataSO::SetRequiredDataForLoad)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataSO*), "SetRequiredDataForLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataSO::*)()>(&GlobalNamespace::BeatmapDataSO::Load)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataSO*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
