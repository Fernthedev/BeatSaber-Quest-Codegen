// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Xml.SmallXmlParser
#include "Mono/Xml/SmallXmlParser.hpp"
// Including type: Mono.Xml.SmallXmlParser/Mono.Xml.IContentHandler
#include "Mono/Xml/SmallXmlParser_IContentHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecurityElement
  class SecurityElement;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Stack
  class Stack;
}
// Completed forward declares
// Type namespace: Mono.Xml
namespace Mono::Xml {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Xml.SecurityParser
  // [TokenAttribute] Offset: FFFFFFFF
  class SecurityParser : public Mono::Xml::SmallXmlParser/*, public Mono::Xml::SmallXmlParser::IContentHandler*/ {
    public:
    // Writing base type padding for base size: 0x61 to desired offset: 0x68
    char ___base_padding[0x7] = {};
    // private System.Security.SecurityElement root
    // Size: 0x8
    // Offset: 0x68
    System::Security::SecurityElement* root;
    // Field size check
    static_assert(sizeof(System::Security::SecurityElement*) == 0x8);
    // private System.Security.SecurityElement current
    // Size: 0x8
    // Offset: 0x70
    System::Security::SecurityElement* current;
    // Field size check
    static_assert(sizeof(System::Security::SecurityElement*) == 0x8);
    // private System.Collections.Stack stack
    // Size: 0x8
    // Offset: 0x78
    System::Collections::Stack* stack;
    // Field size check
    static_assert(sizeof(System::Collections::Stack*) == 0x8);
    // Creating value type constructor for type: SecurityParser
    SecurityParser(System::Security::SecurityElement* root_ = {}, System::Security::SecurityElement* current_ = {}, System::Collections::Stack* stack_ = {}) noexcept : root{root_}, current{current_}, stack{stack_} {}
    // Creating interface conversion operator: operator Mono::Xml::SmallXmlParser::IContentHandler
    operator Mono::Xml::SmallXmlParser::IContentHandler() noexcept {
      return *reinterpret_cast<Mono::Xml::SmallXmlParser::IContentHandler*>(this);
    }
    // Get instance field reference: private System.Security.SecurityElement root
    System::Security::SecurityElement*& dyn_root();
    // Get instance field reference: private System.Security.SecurityElement current
    System::Security::SecurityElement*& dyn_current();
    // Get instance field reference: private System.Collections.Stack stack
    System::Collections::Stack*& dyn_stack();
    // public System.Void LoadXml(System.String xml)
    // Offset: 0x1A98E24
    void LoadXml(::Il2CppString* xml);
    // public System.Security.SecurityElement ToXml()
    // Offset: 0x1AA9910
    System::Security::SecurityElement* ToXml();
    // public System.Void OnStartParsing(Mono.Xml.SmallXmlParser parser)
    // Offset: 0x1AA9918
    void OnStartParsing(Mono::Xml::SmallXmlParser* parser);
    // public System.Void OnProcessingInstruction(System.String name, System.String text)
    // Offset: 0x1AA991C
    void OnProcessingInstruction(::Il2CppString* name, ::Il2CppString* text);
    // public System.Void OnIgnorableWhitespace(System.String s)
    // Offset: 0x1AA9920
    void OnIgnorableWhitespace(::Il2CppString* s);
    // public System.Void OnStartElement(System.String name, Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0x1AA9924
    void OnStartElement(::Il2CppString* name, Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // public System.Void OnEndElement(System.String name)
    // Offset: 0x1AA9BC8
    void OnEndElement(::Il2CppString* name);
    // public System.Void OnChars(System.String ch)
    // Offset: 0x1AA9C48
    void OnChars(::Il2CppString* ch);
    // public System.Void OnEndParsing(Mono.Xml.SmallXmlParser parser)
    // Offset: 0x1AA9CD8
    void OnEndParsing(Mono::Xml::SmallXmlParser* parser);
    // public System.Void .ctor()
    // Offset: 0x1A98DBC
    // Implemented from: Mono.Xml.SmallXmlParser
    // Base method: System.Void SmallXmlParser::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityParser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Xml::SecurityParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityParser*, creationType>()));
    }
  }; // Mono.Xml.SecurityParser
  #pragma pack(pop)
  static check_size<sizeof(SecurityParser), 120 + sizeof(System::Collections::Stack*)> __Mono_Xml_SecurityParserSizeCheck;
  static_assert(sizeof(SecurityParser) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Xml::SecurityParser*, "Mono.Xml", "SecurityParser");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Xml::SecurityParser::LoadXml
// Il2CppName: LoadXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SecurityParser::*)(::Il2CppString*)>(&Mono::Xml::SecurityParser::LoadXml)> {
  static const MethodInfo* get() {
    static auto* xml = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SecurityParser*), "LoadXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xml});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SecurityParser::ToXml
// Il2CppName: ToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::SecurityElement* (Mono::Xml::SecurityParser::*)()>(&Mono::Xml::SecurityParser::ToXml)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SecurityParser*), "ToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SecurityParser::OnStartParsing
// Il2CppName: OnStartParsing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SecurityParser::*)(Mono::Xml::SmallXmlParser*)>(&Mono::Xml::SecurityParser::OnStartParsing)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SecurityParser*), "OnStartParsing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SecurityParser::OnProcessingInstruction
// Il2CppName: OnProcessingInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SecurityParser::*)(::Il2CppString*, ::Il2CppString*)>(&Mono::Xml::SecurityParser::OnProcessingInstruction)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SecurityParser*), "OnProcessingInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, text});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SecurityParser::OnIgnorableWhitespace
// Il2CppName: OnIgnorableWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SecurityParser::*)(::Il2CppString*)>(&Mono::Xml::SecurityParser::OnIgnorableWhitespace)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SecurityParser*), "OnIgnorableWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SecurityParser::OnStartElement
// Il2CppName: OnStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SecurityParser::*)(::Il2CppString*, Mono::Xml::SmallXmlParser::IAttrList*)>(&Mono::Xml::SecurityParser::OnStartElement)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SecurityParser*), "OnStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, attrs});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SecurityParser::OnEndElement
// Il2CppName: OnEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SecurityParser::*)(::Il2CppString*)>(&Mono::Xml::SecurityParser::OnEndElement)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SecurityParser*), "OnEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SecurityParser::OnChars
// Il2CppName: OnChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SecurityParser::*)(::Il2CppString*)>(&Mono::Xml::SecurityParser::OnChars)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SecurityParser*), "OnChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SecurityParser::OnEndParsing
// Il2CppName: OnEndParsing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SecurityParser::*)(Mono::Xml::SmallXmlParser*)>(&Mono::Xml::SecurityParser::OnEndParsing)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SecurityParser*), "OnEndParsing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SecurityParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
