// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
// Including type: BeatmapSaveData/ITime
#include "GlobalNamespace/BeatmapSaveData_ITime.hpp"
// Including type: ObstacleType
#include "GlobalNamespace/ObstacleType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveData/ObstacleData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::ObstacleData : public ::Il2CppObject/*, public GlobalNamespace::BeatmapSaveData::ITime*/ {
    public:
    // private System.Single _time
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _lineIndex
    // Size: 0x4
    // Offset: 0x14
    int lineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private ObstacleType _type
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::ObstacleType type;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObstacleType) == 0x4);
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x1C
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _width
    // Size: 0x4
    // Offset: 0x20
    int width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ObstacleData
    ObstacleData(float time_ = {}, int lineIndex_ = {}, GlobalNamespace::ObstacleType type_ = {}, float duration_ = {}, int width_ = {}) noexcept : time{time_}, lineIndex{lineIndex_}, type{type_}, duration{duration_}, width{width_} {}
    // Creating interface conversion operator: operator GlobalNamespace::BeatmapSaveData::ITime
    operator GlobalNamespace::BeatmapSaveData::ITime() noexcept {
      return *reinterpret_cast<GlobalNamespace::BeatmapSaveData::ITime*>(this);
    }
    // Get instance field reference: private System.Single _time
    float& dyn__time();
    // Get instance field reference: private System.Int32 _lineIndex
    int& dyn__lineIndex();
    // Get instance field reference: private ObstacleType _type
    GlobalNamespace::ObstacleType& dyn__type();
    // Get instance field reference: private System.Single _duration
    float& dyn__duration();
    // Get instance field reference: private System.Int32 _width
    int& dyn__width();
    // public System.Single get_time()
    // Offset: 0x10D64E4
    float get_time();
    // public System.Int32 get_lineIndex()
    // Offset: 0x10D64EC
    int get_lineIndex();
    // public ObstacleType get_type()
    // Offset: 0x10D64F4
    GlobalNamespace::ObstacleType get_type();
    // public System.Single get_duration()
    // Offset: 0x10D64FC
    float get_duration();
    // public System.Int32 get_width()
    // Offset: 0x10D6504
    int get_width();
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, ObstacleType type, System.Single duration, System.Int32 width)
    // Offset: 0x10D650C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::ObstacleData* New_ctor(float time, int lineIndex, GlobalNamespace::ObstacleType type, float duration, int width) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapSaveData::ObstacleData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::ObstacleData*, creationType>(time, lineIndex, type, duration, width)));
    }
    // public System.Void MoveTime(System.Single offset)
    // Offset: 0x10D6564
    void MoveTime(float offset);
  }; // BeatmapSaveData/ObstacleData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::ObstacleData), 32 + sizeof(int)> __GlobalNamespace_BeatmapSaveData_ObstacleDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::ObstacleData) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData::ObstacleData*, "", "BeatmapSaveData/ObstacleData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::ObstacleData::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapSaveData::ObstacleData::*)()>(&GlobalNamespace::BeatmapSaveData::ObstacleData::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::ObstacleData*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::ObstacleData::get_lineIndex
// Il2CppName: get_lineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapSaveData::ObstacleData::*)()>(&GlobalNamespace::BeatmapSaveData::ObstacleData::get_lineIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::ObstacleData*), "get_lineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::ObstacleData::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ObstacleType (GlobalNamespace::BeatmapSaveData::ObstacleData::*)()>(&GlobalNamespace::BeatmapSaveData::ObstacleData::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::ObstacleData*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::ObstacleData::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapSaveData::ObstacleData::*)()>(&GlobalNamespace::BeatmapSaveData::ObstacleData::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::ObstacleData*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::ObstacleData::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapSaveData::ObstacleData::*)()>(&GlobalNamespace::BeatmapSaveData::ObstacleData::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::ObstacleData*), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::ObstacleData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::ObstacleData::MoveTime
// Il2CppName: MoveTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapSaveData::ObstacleData::*)(float)>(&GlobalNamespace::BeatmapSaveData::ObstacleData::MoveTime)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::ObstacleData*), "MoveTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
