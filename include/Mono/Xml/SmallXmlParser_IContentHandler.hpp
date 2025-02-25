// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Xml.SmallXmlParser
#include "Mono/Xml/SmallXmlParser.hpp"
// Completed includes
// Type namespace: Mono.Xml
namespace Mono::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Xml.SmallXmlParser/Mono.Xml.IContentHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class SmallXmlParser::IContentHandler {
    public:
    // Creating value type constructor for type: IContentHandler
    IContentHandler() noexcept {}
    // public System.Void OnStartParsing(Mono.Xml.SmallXmlParser parser)
    // Offset: 0xFFFFFFFF
    void OnStartParsing(Mono::Xml::SmallXmlParser* parser);
    // public System.Void OnEndParsing(Mono.Xml.SmallXmlParser parser)
    // Offset: 0xFFFFFFFF
    void OnEndParsing(Mono::Xml::SmallXmlParser* parser);
    // public System.Void OnStartElement(System.String name, Mono.Xml.SmallXmlParser/Mono.Xml.IAttrList attrs)
    // Offset: 0xFFFFFFFF
    void OnStartElement(::Il2CppString* name, Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // public System.Void OnEndElement(System.String name)
    // Offset: 0xFFFFFFFF
    void OnEndElement(::Il2CppString* name);
    // public System.Void OnProcessingInstruction(System.String name, System.String text)
    // Offset: 0xFFFFFFFF
    void OnProcessingInstruction(::Il2CppString* name, ::Il2CppString* text);
    // public System.Void OnChars(System.String text)
    // Offset: 0xFFFFFFFF
    void OnChars(::Il2CppString* text);
    // public System.Void OnIgnorableWhitespace(System.String text)
    // Offset: 0xFFFFFFFF
    void OnIgnorableWhitespace(::Il2CppString* text);
  }; // Mono.Xml.SmallXmlParser/Mono.Xml.IContentHandler
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Xml::SmallXmlParser::IContentHandler*, "Mono.Xml", "SmallXmlParser/IContentHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::IContentHandler::OnStartParsing
// Il2CppName: OnStartParsing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::IContentHandler::*)(Mono::Xml::SmallXmlParser*)>(&Mono::Xml::SmallXmlParser::IContentHandler::OnStartParsing)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::IContentHandler*), "OnStartParsing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::IContentHandler::OnEndParsing
// Il2CppName: OnEndParsing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::IContentHandler::*)(Mono::Xml::SmallXmlParser*)>(&Mono::Xml::SmallXmlParser::IContentHandler::OnEndParsing)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::IContentHandler*), "OnEndParsing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::IContentHandler::OnStartElement
// Il2CppName: OnStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::IContentHandler::*)(::Il2CppString*, Mono::Xml::SmallXmlParser::IAttrList*)>(&Mono::Xml::SmallXmlParser::IContentHandler::OnStartElement)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attrs = &::il2cpp_utils::GetClassFromName("Mono.Xml", "SmallXmlParser/IAttrList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::IContentHandler*), "OnStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, attrs});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::IContentHandler::OnEndElement
// Il2CppName: OnEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::IContentHandler::*)(::Il2CppString*)>(&Mono::Xml::SmallXmlParser::IContentHandler::OnEndElement)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::IContentHandler*), "OnEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::IContentHandler::OnProcessingInstruction
// Il2CppName: OnProcessingInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::IContentHandler::*)(::Il2CppString*, ::Il2CppString*)>(&Mono::Xml::SmallXmlParser::IContentHandler::OnProcessingInstruction)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::IContentHandler*), "OnProcessingInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, text});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::IContentHandler::OnChars
// Il2CppName: OnChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::IContentHandler::*)(::Il2CppString*)>(&Mono::Xml::SmallXmlParser::IContentHandler::OnChars)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::IContentHandler*), "OnChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::IContentHandler::OnIgnorableWhitespace
// Il2CppName: OnIgnorableWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Xml::SmallXmlParser::IContentHandler::*)(::Il2CppString*)>(&Mono::Xml::SmallXmlParser::IContentHandler::OnIgnorableWhitespace)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::IContentHandler*), "OnIgnorableWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
