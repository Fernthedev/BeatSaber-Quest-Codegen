// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Random
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DAF110
  class Random : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Random
    Random() noexcept {}
    // static public System.Single get_value()
    // Offset: 0x1C42038
    static float get_value();
    // static public UnityEngine.Vector3 get_insideUnitSphere()
    // Offset: 0x1C4206C
    static UnityEngine::Vector3 get_insideUnitSphere();
    // static public UnityEngine.Vector3 get_onUnitSphere()
    // Offset: 0x1C42104
    static UnityEngine::Vector3 get_onUnitSphere();
    // static public System.Void InitState(System.Int32 seed)
    // Offset: 0x1C41F0C
    static void InitState(int seed);
    // static public System.Single Range(System.Single min, System.Single max)
    // Offset: 0x1C41F4C
    static float Range(float min, float max);
    // static public System.Int32 Range(System.Int32 min, System.Int32 max)
    // Offset: 0x1C41F98
    static int Range(int min, int max);
    // static private System.Int32 RandomRangeInt(System.Int32 min, System.Int32 max)
    // Offset: 0x1C41FE8
    static int RandomRangeInt(int min, int max);
    // static public UnityEngine.Color ColorHSV()
    // Offset: 0x1C4219C
    static UnityEngine::Color ColorHSV();
    // static public UnityEngine.Color ColorHSV(System.Single hueMin, System.Single hueMax, System.Single saturationMin, System.Single saturationMax, System.Single valueMin, System.Single valueMax, System.Single alphaMin, System.Single alphaMax)
    // Offset: 0x1C421C0
    static UnityEngine::Color ColorHSV(float hueMin, float hueMax, float saturationMin, float saturationMax, float valueMin, float valueMax, float alphaMin, float alphaMax);
    // static private System.Void get_insideUnitSphere_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x1C420C4
    static void get_insideUnitSphere_Injected(ByRef<UnityEngine::Vector3> ret);
    // static private System.Void get_onUnitSphere_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x1C4215C
    static void get_onUnitSphere_Injected(ByRef<UnityEngine::Vector3> ret);
  }; // UnityEngine.Random
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Random*, "UnityEngine", "Random");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Random::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Random::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::get_insideUnitSphere
// Il2CppName: get_insideUnitSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)()>(&UnityEngine::Random::get_insideUnitSphere)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "get_insideUnitSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::get_onUnitSphere
// Il2CppName: get_onUnitSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)()>(&UnityEngine::Random::get_onUnitSphere)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "get_onUnitSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::InitState
// Il2CppName: InitState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::Random::InitState)> {
  static const MethodInfo* get() {
    static auto* seed = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "InitState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seed});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::Range
// Il2CppName: Range
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&UnityEngine::Random::Range)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "Range", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min, max});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::Range
// Il2CppName: Range
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&UnityEngine::Random::Range)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "Range", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min, max});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::RandomRangeInt
// Il2CppName: RandomRangeInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&UnityEngine::Random::RandomRangeInt)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "RandomRangeInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min, max});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::ColorHSV
// Il2CppName: ColorHSV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)()>(&UnityEngine::Random::ColorHSV)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "ColorHSV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::ColorHSV
// Il2CppName: ColorHSV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)(float, float, float, float, float, float, float, float)>(&UnityEngine::Random::ColorHSV)> {
  static const MethodInfo* get() {
    static auto* hueMin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* hueMax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* saturationMin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* saturationMax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* valueMin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* valueMax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* alphaMin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* alphaMax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "ColorHSV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hueMin, hueMax, saturationMin, saturationMax, valueMin, valueMax, alphaMin, alphaMax});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::get_insideUnitSphere_Injected
// Il2CppName: get_insideUnitSphere_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::Vector3>)>(&UnityEngine::Random::get_insideUnitSphere_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "get_insideUnitSphere_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::get_onUnitSphere_Injected
// Il2CppName: get_onUnitSphere_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::Vector3>)>(&UnityEngine::Random::get_onUnitSphere_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "get_onUnitSphere_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
