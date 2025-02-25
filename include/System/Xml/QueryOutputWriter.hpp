// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlRawWriter
#include "System/Xml/XmlRawWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
  // Forward declaring type: BitStack
  class BitStack;
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
  // Forward declaring type: XmlStandalone
  struct XmlStandalone;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.QueryOutputWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class QueryOutputWriter : public System::Xml::XmlRawWriter {
    public:
    // private System.Xml.XmlRawWriter wrapped
    // Size: 0x8
    // Offset: 0x20
    System::Xml::XmlRawWriter* wrapped;
    // Field size check
    static_assert(sizeof(System::Xml::XmlRawWriter*) == 0x8);
    // private System.Boolean inCDataSection
    // Size: 0x1
    // Offset: 0x28
    bool inCDataSection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: inCDataSection and: lookupCDataElems
    char __padding1[0x7] = {};
    // private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Int32> lookupCDataElems
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, int>* lookupCDataElems;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, int>*) == 0x8);
    // private System.Xml.BitStack bitsCData
    // Size: 0x8
    // Offset: 0x38
    System::Xml::BitStack* bitsCData;
    // Field size check
    static_assert(sizeof(System::Xml::BitStack*) == 0x8);
    // private System.Xml.XmlQualifiedName qnameCData
    // Size: 0x8
    // Offset: 0x40
    System::Xml::XmlQualifiedName* qnameCData;
    // Field size check
    static_assert(sizeof(System::Xml::XmlQualifiedName*) == 0x8);
    // private System.Boolean outputDocType
    // Size: 0x1
    // Offset: 0x48
    bool outputDocType;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean checkWellFormedDoc
    // Size: 0x1
    // Offset: 0x49
    bool checkWellFormedDoc;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasDocElem
    // Size: 0x1
    // Offset: 0x4A
    bool hasDocElem;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean inAttr
    // Size: 0x1
    // Offset: 0x4B
    bool inAttr;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: inAttr and: systemId
    char __padding8[0x4] = {};
    // private System.String systemId
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* systemId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String publicId
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* publicId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 depth
    // Size: 0x4
    // Offset: 0x60
    int depth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: QueryOutputWriter
    QueryOutputWriter(System::Xml::XmlRawWriter* wrapped_ = {}, bool inCDataSection_ = {}, System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, int>* lookupCDataElems_ = {}, System::Xml::BitStack* bitsCData_ = {}, System::Xml::XmlQualifiedName* qnameCData_ = {}, bool outputDocType_ = {}, bool checkWellFormedDoc_ = {}, bool hasDocElem_ = {}, bool inAttr_ = {}, ::Il2CppString* systemId_ = {}, ::Il2CppString* publicId_ = {}, int depth_ = {}) noexcept : wrapped{wrapped_}, inCDataSection{inCDataSection_}, lookupCDataElems{lookupCDataElems_}, bitsCData{bitsCData_}, qnameCData{qnameCData_}, outputDocType{outputDocType_}, checkWellFormedDoc{checkWellFormedDoc_}, hasDocElem{hasDocElem_}, inAttr{inAttr_}, systemId{systemId_}, publicId{publicId_}, depth{depth_} {}
    // Get instance field reference: private System.Xml.XmlRawWriter wrapped
    System::Xml::XmlRawWriter*& dyn_wrapped();
    // Get instance field reference: private System.Boolean inCDataSection
    bool& dyn_inCDataSection();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Int32> lookupCDataElems
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, int>*& dyn_lookupCDataElems();
    // Get instance field reference: private System.Xml.BitStack bitsCData
    System::Xml::BitStack*& dyn_bitsCData();
    // Get instance field reference: private System.Xml.XmlQualifiedName qnameCData
    System::Xml::XmlQualifiedName*& dyn_qnameCData();
    // Get instance field reference: private System.Boolean outputDocType
    bool& dyn_outputDocType();
    // Get instance field reference: private System.Boolean checkWellFormedDoc
    bool& dyn_checkWellFormedDoc();
    // Get instance field reference: private System.Boolean hasDocElem
    bool& dyn_hasDocElem();
    // Get instance field reference: private System.Boolean inAttr
    bool& dyn_inAttr();
    // Get instance field reference: private System.String systemId
    ::Il2CppString*& dyn_systemId();
    // Get instance field reference: private System.String publicId
    ::Il2CppString*& dyn_publicId();
    // Get instance field reference: private System.Int32 depth
    int& dyn_depth();
    // public System.Void .ctor(System.Xml.XmlRawWriter writer, System.Xml.XmlWriterSettings settings)
    // Offset: 0x195B7E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QueryOutputWriter* New_ctor(System::Xml::XmlRawWriter* writer, System::Xml::XmlWriterSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::QueryOutputWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QueryOutputWriter*, creationType>(writer, settings)));
    }
    // private System.Boolean StartCDataSection()
    // Offset: 0x195C0B4
    bool StartCDataSection();
    // private System.Void EndCDataSection()
    // Offset: 0x195BCC4
    void EndCDataSection();
    // override System.Void set_NamespaceResolver(System.Xml.IXmlNamespaceResolver value)
    // Offset: 0x195BA6C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::set_NamespaceResolver(System.Xml.IXmlNamespaceResolver value)
    void set_NamespaceResolver(System::Xml::IXmlNamespaceResolver* value);
    // override System.Boolean get_SupportsNamespaceDeclarationInChunks()
    // Offset: 0x195BF5C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Boolean XmlRawWriter::get_SupportsNamespaceDeclarationInChunks()
    bool get_SupportsNamespaceDeclarationInChunks();
    // override System.Void WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    // Offset: 0x195BA98
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    void WriteXmlDeclaration(System::Xml::XmlStandalone standalone);
    // override System.Void WriteXmlDeclaration(System.String xmldecl)
    // Offset: 0x195BABC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteXmlDeclaration(System.String xmldecl)
    void WriteXmlDeclaration(::Il2CppString* xmldecl);
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x195BAE0
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x195BB14
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x195BDC0
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x195BE40
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteFullEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void StartElementContent()
    // Offset: 0x195BEC0
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::StartElementContent()
    void StartElementContent();
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x195BEE4
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteEndAttribute()
    // Offset: 0x195BF10
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEndAttribute()
    void WriteEndAttribute();
    // override System.Void WriteNamespaceDeclaration(System.String prefix, System.String ns)
    // Offset: 0x195BF38
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteNamespaceDeclaration(System.String prefix, System.String ns)
    void WriteNamespaceDeclaration(::Il2CppString* prefix, ::Il2CppString* ns);
    // override System.Void WriteStartNamespaceDeclaration(System.String prefix)
    // Offset: 0x195BF80
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteStartNamespaceDeclaration(System.String prefix)
    void WriteStartNamespaceDeclaration(::Il2CppString* prefix);
    // override System.Void WriteEndNamespaceDeclaration()
    // Offset: 0x195BFA4
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteEndNamespaceDeclaration()
    void WriteEndNamespaceDeclaration();
    // public override System.Void WriteCData(System.String text)
    // Offset: 0x195BFC8
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteCData(System.String text)
    void WriteCData(::Il2CppString* text);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x195BFE8
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteComment(System.String text)
    void WriteComment(::Il2CppString* text);
    // public override System.Void WriteProcessingInstruction(System.String name, System.String text)
    // Offset: 0x195C014
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteProcessingInstruction(System.String name, System.String text)
    void WriteProcessingInstruction(::Il2CppString* name, ::Il2CppString* text);
    // public override System.Void WriteWhitespace(System.String ws)
    // Offset: 0x195C040
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteWhitespace(System.String ws)
    void WriteWhitespace(::Il2CppString* ws);
    // public override System.Void WriteString(System.String text)
    // Offset: 0x195C0F0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteString(System.String text)
    void WriteString(::Il2CppString* text);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x195C164
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x195C1F8
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::Il2CppString* name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x195C224
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x195C250
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x195C27C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.String data)
    // Offset: 0x195C310
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteRaw(System.String data)
    void WriteRaw(::Il2CppString* data);
    // public override System.Void Close()
    // Offset: 0x195C384
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Close()
    void Close();
    // public override System.Void Flush()
    // Offset: 0x195C440
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Flush()
    void Flush();
  }; // System.Xml.QueryOutputWriter
  #pragma pack(pop)
  static check_size<sizeof(QueryOutputWriter), 96 + sizeof(int)> __System_Xml_QueryOutputWriterSizeCheck;
  static_assert(sizeof(QueryOutputWriter) == 0x64);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::QueryOutputWriter*, "System.Xml", "QueryOutputWriter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::StartCDataSection
// Il2CppName: StartCDataSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::QueryOutputWriter::*)()>(&System::Xml::QueryOutputWriter::StartCDataSection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "StartCDataSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::EndCDataSection
// Il2CppName: EndCDataSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)()>(&System::Xml::QueryOutputWriter::EndCDataSection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "EndCDataSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::set_NamespaceResolver
// Il2CppName: set_NamespaceResolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(System::Xml::IXmlNamespaceResolver*)>(&System::Xml::QueryOutputWriter::set_NamespaceResolver)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "set_NamespaceResolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::get_SupportsNamespaceDeclarationInChunks
// Il2CppName: get_SupportsNamespaceDeclarationInChunks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::QueryOutputWriter::*)()>(&System::Xml::QueryOutputWriter::get_SupportsNamespaceDeclarationInChunks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "get_SupportsNamespaceDeclarationInChunks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteXmlDeclaration
// Il2CppName: WriteXmlDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(System::Xml::XmlStandalone)>(&System::Xml::QueryOutputWriter::WriteXmlDeclaration)> {
  static const MethodInfo* get() {
    static auto* standalone = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlStandalone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteXmlDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{standalone});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteXmlDeclaration
// Il2CppName: WriteXmlDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteXmlDeclaration)> {
  static const MethodInfo* get() {
    static auto* xmldecl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteXmlDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmldecl});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteDocType
// Il2CppName: WriteDocType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteDocType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pubid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sysid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* subset = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteDocType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, pubid, sysid, subset});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteStartElement
// Il2CppName: WriteStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteStartElement)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteEndElement
// Il2CppName: WriteEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteEndElement)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteFullEndElement
// Il2CppName: WriteFullEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteFullEndElement)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteFullEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::StartElementContent
// Il2CppName: StartElementContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)()>(&System::Xml::QueryOutputWriter::StartElementContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "StartElementContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteStartAttribute
// Il2CppName: WriteStartAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteStartAttribute)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteStartAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteEndAttribute
// Il2CppName: WriteEndAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)()>(&System::Xml::QueryOutputWriter::WriteEndAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteEndAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteNamespaceDeclaration
// Il2CppName: WriteNamespaceDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*, ::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteNamespaceDeclaration)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteNamespaceDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteStartNamespaceDeclaration
// Il2CppName: WriteStartNamespaceDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteStartNamespaceDeclaration)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteStartNamespaceDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteEndNamespaceDeclaration
// Il2CppName: WriteEndNamespaceDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)()>(&System::Xml::QueryOutputWriter::WriteEndNamespaceDeclaration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteEndNamespaceDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteCData
// Il2CppName: WriteCData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteCData)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteCData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteComment
// Il2CppName: WriteComment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteComment)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteComment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteProcessingInstruction
// Il2CppName: WriteProcessingInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*, ::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteProcessingInstruction)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteProcessingInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, text});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteWhitespace
// Il2CppName: WriteWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteWhitespace)> {
  static const MethodInfo* get() {
    static auto* ws = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ws});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteString
// Il2CppName: WriteString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteString)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteChars
// Il2CppName: WriteChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Array<::Il2CppChar>*, int, int)>(&System::Xml::QueryOutputWriter::WriteChars)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteEntityRef
// Il2CppName: WriteEntityRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteEntityRef)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteEntityRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteCharEntity
// Il2CppName: WriteCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppChar)>(&System::Xml::QueryOutputWriter::WriteCharEntity)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteSurrogateCharEntity
// Il2CppName: WriteSurrogateCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppChar, ::Il2CppChar)>(&System::Xml::QueryOutputWriter::WriteSurrogateCharEntity)> {
  static const MethodInfo* get() {
    static auto* lowChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* highChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteSurrogateCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lowChar, highChar});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Array<::Il2CppChar>*, int, int)>(&System::Xml::QueryOutputWriter::WriteRaw)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteRaw)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)()>(&System::Xml::QueryOutputWriter::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)()>(&System::Xml::QueryOutputWriter::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
