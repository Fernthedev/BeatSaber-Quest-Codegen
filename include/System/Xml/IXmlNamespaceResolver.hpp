// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.IXmlNamespaceResolver
  // [TokenAttribute] Offset: FFFFFFFF
  class IXmlNamespaceResolver {
    public:
    // Creating value type constructor for type: IXmlNamespaceResolver
    IXmlNamespaceResolver() noexcept {}
    // public System.String LookupNamespace(System.String prefix)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* LookupNamespace(::Il2CppString* prefix);
    // public System.String LookupPrefix(System.String namespaceName)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* LookupPrefix(::Il2CppString* namespaceName);
  }; // System.Xml.IXmlNamespaceResolver
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::IXmlNamespaceResolver*, "System.Xml", "IXmlNamespaceResolver");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::IXmlNamespaceResolver::LookupNamespace
// Il2CppName: LookupNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Xml::IXmlNamespaceResolver::*)(::Il2CppString*)>(&System::Xml::IXmlNamespaceResolver::LookupNamespace)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IXmlNamespaceResolver*), "LookupNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix});
  }
};
// Writing MetadataGetter for method: System::Xml::IXmlNamespaceResolver::LookupPrefix
// Il2CppName: LookupPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Xml::IXmlNamespaceResolver::*)(::Il2CppString*)>(&System::Xml::IXmlNamespaceResolver::LookupPrefix)> {
  static const MethodInfo* get() {
    static auto* namespaceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IXmlNamespaceResolver*), "LookupPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namespaceName});
  }
};
