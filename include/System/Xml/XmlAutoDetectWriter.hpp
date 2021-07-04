// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlRawWriter
#include "System/Xml/XmlRawWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: OnRemoveWriter
  class OnRemoveWriter;
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
  // Forward declaring type: XmlEventCache
  class XmlEventCache;
  // Forward declaring type: XmlOutputMethod
  struct XmlOutputMethod;
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
  // Forward declaring type: XmlStandalone
  struct XmlStandalone;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlAutoDetectWriter
  class XmlAutoDetectWriter : public System::Xml::XmlRawWriter {
    public:
    // private System.Xml.XmlRawWriter wrapped
    // Size: 0x8
    // Offset: 0x20
    System::Xml::XmlRawWriter* wrapped;
    // Field size check
    static_assert(sizeof(System::Xml::XmlRawWriter*) == 0x8);
    // private System.Xml.OnRemoveWriter onRemove
    // Size: 0x8
    // Offset: 0x28
    System::Xml::OnRemoveWriter* onRemove;
    // Field size check
    static_assert(sizeof(System::Xml::OnRemoveWriter*) == 0x8);
    // private System.Xml.XmlWriterSettings writerSettings
    // Size: 0x8
    // Offset: 0x30
    System::Xml::XmlWriterSettings* writerSettings;
    // Field size check
    static_assert(sizeof(System::Xml::XmlWriterSettings*) == 0x8);
    // private System.Xml.XmlEventCache eventCache
    // Size: 0x8
    // Offset: 0x38
    System::Xml::XmlEventCache* eventCache;
    // Field size check
    static_assert(sizeof(System::Xml::XmlEventCache*) == 0x8);
    // private System.IO.TextWriter textWriter
    // Size: 0x8
    // Offset: 0x40
    System::IO::TextWriter* textWriter;
    // Field size check
    static_assert(sizeof(System::IO::TextWriter*) == 0x8);
    // private System.IO.Stream strm
    // Size: 0x8
    // Offset: 0x48
    System::IO::Stream* strm;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // Creating value type constructor for type: XmlAutoDetectWriter
    XmlAutoDetectWriter(System::Xml::XmlRawWriter* wrapped_ = {}, System::Xml::OnRemoveWriter* onRemove_ = {}, System::Xml::XmlWriterSettings* writerSettings_ = {}, System::Xml::XmlEventCache* eventCache_ = {}, System::IO::TextWriter* textWriter_ = {}, System::IO::Stream* strm_ = {}) noexcept : wrapped{wrapped_}, onRemove{onRemove_}, writerSettings{writerSettings_}, eventCache{eventCache_}, textWriter{textWriter_}, strm{strm_} {}
    // private System.Void .ctor(System.Xml.XmlWriterSettings writerSettings)
    // Offset: 0x19331E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAutoDetectWriter* New_ctor(System::Xml::XmlWriterSettings* writerSettings) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlAutoDetectWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAutoDetectWriter*, creationType>(writerSettings)));
    }
    // public System.Void .ctor(System.IO.TextWriter textWriter, System.Xml.XmlWriterSettings writerSettings)
    // Offset: 0x19332DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAutoDetectWriter* New_ctor(System::IO::TextWriter* textWriter, System::Xml::XmlWriterSettings* writerSettings) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlAutoDetectWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAutoDetectWriter*, creationType>(textWriter, writerSettings)));
    }
    // public System.Void .ctor(System.IO.Stream strm, System.Xml.XmlWriterSettings writerSettings)
    // Offset: 0x1933308
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlAutoDetectWriter* New_ctor(System::IO::Stream* strm, System::Xml::XmlWriterSettings* writerSettings) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlAutoDetectWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlAutoDetectWriter*, creationType>(strm, writerSettings)));
    }
    // static private System.Boolean IsHtmlTag(System.String tagName)
    // Offset: 0x1933440
    static bool IsHtmlTag(::Il2CppString* tagName);
    // private System.Void EnsureWrappedWriter(System.Xml.XmlOutputMethod outMethod)
    // Offset: 0x19333A8
    void EnsureWrappedWriter(System::Xml::XmlOutputMethod outMethod);
    // private System.Boolean TextBlockCreatesWriter(System.String textBlock)
    // Offset: 0x1933780
    bool TextBlockCreatesWriter(::Il2CppString* textBlock);
    // private System.Void CreateWrappedWriter(System.Xml.XmlOutputMethod outMethod)
    // Offset: 0x1933560
    void CreateWrappedWriter(System::Xml::XmlOutputMethod outMethod);
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x1933334
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x19333B8
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x19336B4
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteEndAttribute()
    // Offset: 0x1933718
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEndAttribute()
    void WriteEndAttribute();
    // public override System.Void WriteCData(System.String text)
    // Offset: 0x1933738
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteCData(System.String text)
    void WriteCData(::Il2CppString* text);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x19337E8
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteComment(System.String text)
    void WriteComment(::Il2CppString* text);
    // public override System.Void WriteProcessingInstruction(System.String name, System.String text)
    // Offset: 0x1933818
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteProcessingInstruction(System.String name, System.String text)
    void WriteProcessingInstruction(::Il2CppString* name, ::Il2CppString* text);
    // public override System.Void WriteWhitespace(System.String ws)
    // Offset: 0x1933848
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteWhitespace(System.String ws)
    void WriteWhitespace(::Il2CppString* ws);
    // public override System.Void WriteString(System.String text)
    // Offset: 0x1933878
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteString(System.String text)
    void WriteString(::Il2CppString* text);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x19338C4
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1933900
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.String data)
    // Offset: 0x193393C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteRaw(System.String data)
    void WriteRaw(::Il2CppString* data);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x1933988
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::Il2CppString* name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x19339D8
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x1933A28
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1933A88
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    void WriteBase64(::Array<uint8_t>* buffer, int index, int count);
    // public override System.Void WriteBinHex(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1933AF0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteBinHex(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    void WriteBinHex(::Array<uint8_t>* buffer, int index, int count);
    // public override System.Void Close()
    // Offset: 0x1933B58
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Close()
    void Close();
    // public override System.Void Flush()
    // Offset: 0x1933BA0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Flush()
    void Flush();
    // public override System.Void WriteValue(System.String value)
    // Offset: 0x1933BE8
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteValue(System.String value)
    void WriteValue(::Il2CppString* value);
    // override System.Void set_NamespaceResolver(System.Xml.IXmlNamespaceResolver value)
    // Offset: 0x1933C38
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::set_NamespaceResolver(System.Xml.IXmlNamespaceResolver value)
    void set_NamespaceResolver(System::Xml::IXmlNamespaceResolver* value);
    // override System.Void WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    // Offset: 0x1933C6C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    void WriteXmlDeclaration(System::Xml::XmlStandalone standalone);
    // override System.Void WriteXmlDeclaration(System.String xmldecl)
    // Offset: 0x1933CBC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteXmlDeclaration(System.String xmldecl)
    void WriteXmlDeclaration(::Il2CppString* xmldecl);
    // override System.Void StartElementContent()
    // Offset: 0x1933D0C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::StartElementContent()
    void StartElementContent();
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x1933D30
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x1933D54
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteFullEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteNamespaceDeclaration(System.String prefix, System.String ns)
    // Offset: 0x1933D78
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteNamespaceDeclaration(System.String prefix, System.String ns)
    void WriteNamespaceDeclaration(::Il2CppString* prefix, ::Il2CppString* ns);
    // override System.Boolean get_SupportsNamespaceDeclarationInChunks()
    // Offset: 0x1933DD8
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Boolean XmlRawWriter::get_SupportsNamespaceDeclarationInChunks()
    bool get_SupportsNamespaceDeclarationInChunks();
    // override System.Void WriteStartNamespaceDeclaration(System.String prefix)
    // Offset: 0x1933DFC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteStartNamespaceDeclaration(System.String prefix)
    void WriteStartNamespaceDeclaration(::Il2CppString* prefix);
    // override System.Void WriteEndNamespaceDeclaration()
    // Offset: 0x1933E4C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteEndNamespaceDeclaration()
    void WriteEndNamespaceDeclaration();
  }; // System.Xml.XmlAutoDetectWriter
  #pragma pack(pop)
  static check_size<sizeof(XmlAutoDetectWriter), 72 + sizeof(System::IO::Stream*)> __System_Xml_XmlAutoDetectWriterSizeCheck;
  static_assert(sizeof(XmlAutoDetectWriter) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlAutoDetectWriter*, "System.Xml", "XmlAutoDetectWriter");
// Writing includes for template specializations
#include "System/Xml/XmlWriterSettings.hpp"
#include "System/IO/TextWriter.hpp"
#include "System/IO/Stream.hpp"
#include "System/Xml/XmlOutputMethod.hpp"
#include "System/Xml/IXmlNamespaceResolver.hpp"
#include "System/Xml/XmlStandalone.hpp"
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::IsHtmlTag
// Il2CppName: IsHtmlTag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::IsHtmlTag)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "IsHtmlTag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::EnsureWrappedWriter
// Il2CppName: EnsureWrappedWriter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(System::Xml::XmlOutputMethod)>(&System::Xml::XmlAutoDetectWriter::EnsureWrappedWriter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "EnsureWrappedWriter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Xml::XmlOutputMethod>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::TextBlockCreatesWriter
// Il2CppName: TextBlockCreatesWriter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlAutoDetectWriter::*)(::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::TextBlockCreatesWriter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "TextBlockCreatesWriter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::CreateWrappedWriter
// Il2CppName: CreateWrappedWriter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(System::Xml::XmlOutputMethod)>(&System::Xml::XmlAutoDetectWriter::CreateWrappedWriter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "CreateWrappedWriter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Xml::XmlOutputMethod>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteDocType
// Il2CppName: WriteDocType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::WriteDocType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteDocType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteStartElement
// Il2CppName: WriteStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::WriteStartElement)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteStartAttribute
// Il2CppName: WriteStartAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::WriteStartAttribute)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteStartAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteEndAttribute
// Il2CppName: WriteEndAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)()>(&System::Xml::XmlAutoDetectWriter::WriteEndAttribute)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteEndAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteCData
// Il2CppName: WriteCData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::WriteCData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteCData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteComment
// Il2CppName: WriteComment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::WriteComment)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteComment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteProcessingInstruction
// Il2CppName: WriteProcessingInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppString*, ::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::WriteProcessingInstruction)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteProcessingInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteWhitespace
// Il2CppName: WriteWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::WriteWhitespace)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteString
// Il2CppName: WriteString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::WriteString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteChars
// Il2CppName: WriteChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Array<::Il2CppChar>*, int, int)>(&System::Xml::XmlAutoDetectWriter::WriteChars)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppChar>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Array<::Il2CppChar>*, int, int)>(&System::Xml::XmlAutoDetectWriter::WriteRaw)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<::Il2CppChar>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::WriteRaw)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteEntityRef
// Il2CppName: WriteEntityRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::WriteEntityRef)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteEntityRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteCharEntity
// Il2CppName: WriteCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppChar)>(&System::Xml::XmlAutoDetectWriter::WriteCharEntity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteSurrogateCharEntity
// Il2CppName: WriteSurrogateCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppChar, ::Il2CppChar)>(&System::Xml::XmlAutoDetectWriter::WriteSurrogateCharEntity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteSurrogateCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppChar>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteBase64
// Il2CppName: WriteBase64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Array<uint8_t>*, int, int)>(&System::Xml::XmlAutoDetectWriter::WriteBase64)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteBase64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteBinHex
// Il2CppName: WriteBinHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Array<uint8_t>*, int, int)>(&System::Xml::XmlAutoDetectWriter::WriteBinHex)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteBinHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)()>(&System::Xml::XmlAutoDetectWriter::Close)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)()>(&System::Xml::XmlAutoDetectWriter::Flush)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteValue
// Il2CppName: WriteValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::WriteValue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::set_NamespaceResolver
// Il2CppName: set_NamespaceResolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(System::Xml::IXmlNamespaceResolver*)>(&System::Xml::XmlAutoDetectWriter::set_NamespaceResolver)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "set_NamespaceResolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Xml::IXmlNamespaceResolver*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteXmlDeclaration
// Il2CppName: WriteXmlDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(System::Xml::XmlStandalone)>(&System::Xml::XmlAutoDetectWriter::WriteXmlDeclaration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteXmlDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Xml::XmlStandalone>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteXmlDeclaration
// Il2CppName: WriteXmlDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::WriteXmlDeclaration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteXmlDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::StartElementContent
// Il2CppName: StartElementContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)()>(&System::Xml::XmlAutoDetectWriter::StartElementContent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "StartElementContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteEndElement
// Il2CppName: WriteEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::WriteEndElement)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteFullEndElement
// Il2CppName: WriteFullEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::WriteFullEndElement)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteFullEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteNamespaceDeclaration
// Il2CppName: WriteNamespaceDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppString*, ::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::WriteNamespaceDeclaration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteNamespaceDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::get_SupportsNamespaceDeclarationInChunks
// Il2CppName: get_SupportsNamespaceDeclarationInChunks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlAutoDetectWriter::*)()>(&System::Xml::XmlAutoDetectWriter::get_SupportsNamespaceDeclarationInChunks)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "get_SupportsNamespaceDeclarationInChunks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteStartNamespaceDeclaration
// Il2CppName: WriteStartNamespaceDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)(::Il2CppString*)>(&System::Xml::XmlAutoDetectWriter::WriteStartNamespaceDeclaration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteStartNamespaceDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlAutoDetectWriter::WriteEndNamespaceDeclaration
// Il2CppName: WriteEndNamespaceDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlAutoDetectWriter::*)()>(&System::Xml::XmlAutoDetectWriter::WriteEndNamespaceDeclaration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlAutoDetectWriter*), "WriteEndNamespaceDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
