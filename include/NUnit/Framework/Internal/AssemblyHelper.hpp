// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.AssemblyHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class AssemblyHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AssemblyHelper
    AssemblyHelper() noexcept {}
    // static public System.String GetAssemblyPath(System.Reflection.Assembly assembly)
    // Offset: 0x17610F0
    static ::Il2CppString* GetAssemblyPath(System::Reflection::Assembly* assembly);
    // static private System.Boolean IsFileUri(System.String uri)
    // Offset: 0x1771CD0
    static bool IsFileUri(::Il2CppString* uri);
    // static public System.String GetAssemblyPathFromCodeBase(System.String codeBase)
    // Offset: 0x1771D64
    static ::Il2CppString* GetAssemblyPathFromCodeBase(::Il2CppString* codeBase);
  }; // NUnit.Framework.Internal.AssemblyHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::AssemblyHelper*, "NUnit.Framework.Internal", "AssemblyHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::AssemblyHelper::GetAssemblyPath
// Il2CppName: GetAssemblyPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Reflection::Assembly*)>(&NUnit::Framework::Internal::AssemblyHelper::GetAssemblyPath)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::AssemblyHelper*), "GetAssemblyPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::AssemblyHelper::IsFileUri
// Il2CppName: IsFileUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&NUnit::Framework::Internal::AssemblyHelper::IsFileUri)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::AssemblyHelper*), "IsFileUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::AssemblyHelper::GetAssemblyPathFromCodeBase
// Il2CppName: GetAssemblyPathFromCodeBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&NUnit::Framework::Internal::AssemblyHelper::GetAssemblyPathFromCodeBase)> {
  static const MethodInfo* get() {
    static auto* codeBase = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::AssemblyHelper*), "GetAssemblyPathFromCodeBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codeBase});
  }
};
