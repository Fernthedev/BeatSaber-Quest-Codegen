// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentColorType
  struct EnvironmentColorType;
  // Forward declaring type: BasicBeatmapEventData
  class BasicBeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEventDataLightsExtensions
  class BeatmapEventDataLightsExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataLightsExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataLightsExtensions*, "", "BeatmapEventDataLightsExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapEventDataLightsExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class BeatmapEventDataLightsExtensions : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::BeatmapEventDataLightsExtensions::LightSwitchEventEffectDataValues
    class LightSwitchEventEffectDataValues;
    // static public EnvironmentColorType LightColorTypeFromEventDataValue(BasicBeatmapEventData basicBeatmapEventData)
    // Offset: 0x2843C5C
    static ::GlobalNamespace::EnvironmentColorType LightColorTypeFromEventDataValue(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);
    // static public EnvironmentColorType GetLightColorTypeFromEventDataValue(System.Int32 beatmapEventValue)
    // Offset: 0x2843C74
    static ::GlobalNamespace::EnvironmentColorType GetLightColorTypeFromEventDataValue(int beatmapEventValue);
    // static public System.Boolean HasLightFadeEventDataValue(BasicBeatmapEventData basicBeatmapEventData)
    // Offset: 0x2843CA0
    static bool HasLightFadeEventDataValue(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);
    // static public System.Boolean HasFixedDurationLightSwitchEventDataValue(BasicBeatmapEventData basicBeatmapEventData)
    // Offset: 0x2843CD4
    static bool HasFixedDurationLightSwitchEventDataValue(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);
    // static private System.Boolean HasFixedDurationLightSwitchEventDataValue(System.Int32 beatmapEventValue)
    // Offset: 0x2843D20
    static bool HasFixedDurationLightSwitchEventDataValue(int beatmapEventValue);
  }; // BeatmapEventDataLightsExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataLightsExtensions::LightColorTypeFromEventDataValue
// Il2CppName: LightColorTypeFromEventDataValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentColorType (*)(::GlobalNamespace::BasicBeatmapEventData*)>(&GlobalNamespace::BeatmapEventDataLightsExtensions::LightColorTypeFromEventDataValue)> {
  static const MethodInfo* get() {
    static auto* basicBeatmapEventData = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataLightsExtensions*), "LightColorTypeFromEventDataValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basicBeatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataLightsExtensions::GetLightColorTypeFromEventDataValue
// Il2CppName: GetLightColorTypeFromEventDataValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentColorType (*)(int)>(&GlobalNamespace::BeatmapEventDataLightsExtensions::GetLightColorTypeFromEventDataValue)> {
  static const MethodInfo* get() {
    static auto* beatmapEventValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataLightsExtensions*), "GetLightColorTypeFromEventDataValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataLightsExtensions::HasLightFadeEventDataValue
// Il2CppName: HasLightFadeEventDataValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::BasicBeatmapEventData*)>(&GlobalNamespace::BeatmapEventDataLightsExtensions::HasLightFadeEventDataValue)> {
  static const MethodInfo* get() {
    static auto* basicBeatmapEventData = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataLightsExtensions*), "HasLightFadeEventDataValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basicBeatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataLightsExtensions::HasFixedDurationLightSwitchEventDataValue
// Il2CppName: HasFixedDurationLightSwitchEventDataValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::BasicBeatmapEventData*)>(&GlobalNamespace::BeatmapEventDataLightsExtensions::HasFixedDurationLightSwitchEventDataValue)> {
  static const MethodInfo* get() {
    static auto* basicBeatmapEventData = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataLightsExtensions*), "HasFixedDurationLightSwitchEventDataValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basicBeatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEventDataLightsExtensions::HasFixedDurationLightSwitchEventDataValue
// Il2CppName: HasFixedDurationLightSwitchEventDataValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&GlobalNamespace::BeatmapEventDataLightsExtensions::HasFixedDurationLightSwitchEventDataValue)> {
  static const MethodInfo* get() {
    static auto* beatmapEventValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEventDataLightsExtensions*), "HasFixedDurationLightSwitchEventDataValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventValue});
  }
};
