// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::Util
namespace UnityEngine::ResourceManagement::Util {
  // Forward declaring type: ObjectInitializationData
  struct ObjectInitializationData;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Util.IObjectInitializationDataProvider
  class IObjectInitializationDataProvider {
    public:
    // Creating value type constructor for type: IObjectInitializationDataProvider
    IObjectInitializationDataProvider() noexcept {}
    // public System.String get_Name()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Name();
    // public UnityEngine.ResourceManagement.Util.ObjectInitializationData CreateObjectInitializationData()
    // Offset: 0xFFFFFFFF
    UnityEngine::ResourceManagement::Util::ObjectInitializationData CreateObjectInitializationData();
  }; // UnityEngine.ResourceManagement.Util.IObjectInitializationDataProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider*, "UnityEngine.ResourceManagement.Util", "IObjectInitializationDataProvider");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::*)()>(&UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::get_Name)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::CreateObjectInitializationData
// Il2CppName: CreateObjectInitializationData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::Util::ObjectInitializationData (UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::*)()>(&UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::CreateObjectInitializationData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider*), "CreateObjectInitializationData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
