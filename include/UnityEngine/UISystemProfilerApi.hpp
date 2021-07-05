// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UISystemProfilerApi
  // [NativeHeaderAttribute] Offset: DB4ED4
  // [StaticAccessorAttribute] Offset: DB4ED4
  class UISystemProfilerApi : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::UISystemProfilerApi::SampleType
    struct SampleType;
    // Creating value type constructor for type: UISystemProfilerApi
    UISystemProfilerApi() noexcept {}
    // static public System.Void BeginSample(UnityEngine.UISystemProfilerApi/SampleType type)
    // Offset: 0x23E570C
    static void BeginSample(UnityEngine::UISystemProfilerApi::SampleType type);
    // static public System.Void EndSample(UnityEngine.UISystemProfilerApi/SampleType type)
    // Offset: 0x23E574C
    static void EndSample(UnityEngine::UISystemProfilerApi::SampleType type);
    // static public System.Void AddMarker(System.String name, UnityEngine.Object obj)
    // Offset: 0x23E578C
    static void AddMarker(::Il2CppString* name, UnityEngine::Object* obj);
  }; // UnityEngine.UISystemProfilerApi
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UISystemProfilerApi*, "UnityEngine", "UISystemProfilerApi");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UISystemProfilerApi::BeginSample
// Il2CppName: BeginSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UISystemProfilerApi::SampleType)>(&UnityEngine::UISystemProfilerApi::BeginSample)> {
  const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "UISystemProfilerApi/SampleType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UISystemProfilerApi*), "BeginSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: UnityEngine::UISystemProfilerApi::EndSample
// Il2CppName: EndSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UISystemProfilerApi::SampleType)>(&UnityEngine::UISystemProfilerApi::EndSample)> {
  const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "UISystemProfilerApi/SampleType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UISystemProfilerApi*), "EndSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: UnityEngine::UISystemProfilerApi::AddMarker
// Il2CppName: AddMarker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, UnityEngine::Object*)>(&UnityEngine::UISystemProfilerApi::AddMarker)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UISystemProfilerApi*), "AddMarker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, obj});
  }
};
