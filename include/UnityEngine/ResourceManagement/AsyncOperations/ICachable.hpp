// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Type namespace: UnityEngine.ResourceManagement.AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.AsyncOperations.ICachable
  class ICachable {
    public:
    // Creating value type constructor for type: ICachable
    ICachable() noexcept {}
    // public System.Int32 get_Hash()
    // Offset: 0xFFFFFFFF
    int get_Hash();
    // public System.Void set_Hash(System.Int32 value)
    // Offset: 0xFFFFFFFF
    void set_Hash(int value);
  }; // UnityEngine.ResourceManagement.AsyncOperations.ICachable
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::AsyncOperations::ICachable*, "UnityEngine.ResourceManagement.AsyncOperations", "ICachable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::ICachable::get_Hash
// Il2CppName: get_Hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ResourceManagement::AsyncOperations::ICachable::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::ICachable::get_Hash)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::ICachable*), "get_Hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::ICachable::set_Hash
// Il2CppName: set_Hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::ICachable::*)(int)>(&UnityEngine::ResourceManagement::AsyncOperations::ICachable::set_Hash)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::ICachable*), "set_Hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
