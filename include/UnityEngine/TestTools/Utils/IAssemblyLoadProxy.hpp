// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::Utils
namespace UnityEngine::TestTools::Utils {
  // Forward declaring type: IAssemblyWrapper
  class IAssemblyWrapper;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Utils.IAssemblyLoadProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class IAssemblyLoadProxy {
    public:
    // Creating value type constructor for type: IAssemblyLoadProxy
    IAssemblyLoadProxy() noexcept {}
    // public UnityEngine.TestTools.Utils.IAssemblyWrapper Load(System.String assemblyString)
    // Offset: 0xFFFFFFFF
    UnityEngine::TestTools::Utils::IAssemblyWrapper* Load(::Il2CppString* assemblyString);
  }; // UnityEngine.TestTools.Utils.IAssemblyLoadProxy
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::IAssemblyLoadProxy*, "UnityEngine.TestTools.Utils", "IAssemblyLoadProxy");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::IAssemblyLoadProxy::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TestTools::Utils::IAssemblyWrapper* (UnityEngine::TestTools::Utils::IAssemblyLoadProxy::*)(::Il2CppString*)>(&UnityEngine::TestTools::Utils::IAssemblyLoadProxy::Load)> {
  static const MethodInfo* get() {
    static auto* assemblyString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::IAssemblyLoadProxy*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assemblyString});
  }
};
