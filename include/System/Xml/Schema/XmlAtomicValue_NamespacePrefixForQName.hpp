// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlAtomicValue
#include "System/Xml/Schema/XmlAtomicValue.hpp"
// Including type: System.Xml.IXmlNamespaceResolver
#include "System/Xml/IXmlNamespaceResolver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNamespaceScope
  struct XmlNamespaceScope;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName*, "System.Xml.Schema", "XmlAtomicValue/NamespacePrefixForQName");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlAtomicValue/System.Xml.Schema.NamespacePrefixForQName
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlAtomicValue::NamespacePrefixForQName : public ::Il2CppObject/*, public System::Xml::IXmlNamespaceResolver*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.String prefix
    // Size: 0x8
    // Offset: 0x10
    ::StringW prefix;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ns
    // Size: 0x8
    // Offset: 0x18
    ::StringW ns;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Xml::IXmlNamespaceResolver
    operator System::Xml::IXmlNamespaceResolver() noexcept {
      return *reinterpret_cast<System::Xml::IXmlNamespaceResolver*>(this);
    }
    // Get instance field reference: public System.String prefix
    ::StringW& dyn_prefix();
    // Get instance field reference: public System.String ns
    ::StringW& dyn_ns();
    // public System.Void .ctor(System.String prefix, System.String ns)
    // Offset: 0x1C79D70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAtomicValue::NamespacePrefixForQName* New_ctor(::StringW prefix, ::StringW ns) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAtomicValue::NamespacePrefixForQName*, creationType>(prefix, ns)));
    }
    // public System.String LookupNamespace(System.String prefix)
    // Offset: 0x1C7A7D4
    ::StringW LookupNamespace(::StringW prefix);
    // public System.String LookupPrefix(System.String namespaceName)
    // Offset: 0x1C7A814
    ::StringW LookupPrefix(::StringW namespaceName);
    // public System.Collections.Generic.IDictionary`2<System.String,System.String> GetNamespacesInScope(System.Xml.XmlNamespaceScope scope)
    // Offset: 0x1C7A84C
    System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* GetNamespacesInScope(System::Xml::XmlNamespaceScope scope);
  }; // System.Xml.Schema.XmlAtomicValue/System.Xml.Schema.NamespacePrefixForQName
  #pragma pack(pop)
  static check_size<sizeof(XmlAtomicValue::NamespacePrefixForQName), 24 + sizeof(::StringW)> __System_Xml_Schema_XmlAtomicValue_NamespacePrefixForQNameSizeCheck;
  static_assert(sizeof(XmlAtomicValue::NamespacePrefixForQName) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName::LookupNamespace
// Il2CppName: LookupNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName::*)(::StringW)>(&System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName::LookupNamespace)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName*), "LookupNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName::LookupPrefix
// Il2CppName: LookupPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName::*)(::StringW)>(&System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName::LookupPrefix)> {
  static const MethodInfo* get() {
    static auto* namespaceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName*), "LookupPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namespaceName});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName::GetNamespacesInScope
// Il2CppName: GetNamespacesInScope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName::*)(System::Xml::XmlNamespaceScope)>(&System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName::GetNamespacesInScope)> {
  static const MethodInfo* get() {
    static auto* scope = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNamespaceScope")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlAtomicValue::NamespacePrefixForQName*), "GetNamespacesInScope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scope});
  }
};
