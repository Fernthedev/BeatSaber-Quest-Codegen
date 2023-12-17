#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAutoDetectWriter)
namespace System::Xml {
class XmlEventCache;
}
namespace System::IO {
class TextWriter;
}
namespace System::Xml {
class OnRemoveWriter;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::IO {
class Stream;
}
namespace System::Xml {
class XmlRawWriter;
}
namespace System::Xml {
class XmlWriterSettings;
}
namespace System::Xml {
struct XmlOutputMethod;
}
// Forward declare root types
namespace System::Xml {
class XmlAutoDetectWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlAutoDetectWriter);
// Type: System.Xml::XmlAutoDetectWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11455))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11448))
// CS Name: ::System.Xml::XmlAutoDetectWriter*
class CORDL_TYPE XmlAutoDetectWriter : public ::System::Xml::XmlRawWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Xml::XmlRawWriter)]{};

/// @brief Field wrapped offset 0x20
 __declspec(property(get=__get_wrapped, put=__set_wrapped)) ::System::Xml::XmlRawWriter*  wrapped;

/// @brief Field onRemove offset 0x28
 __declspec(property(get=__get_onRemove, put=__set_onRemove)) ::System::Xml::OnRemoveWriter*  onRemove;

/// @brief Field writerSettings offset 0x30
 __declspec(property(get=__get_writerSettings, put=__set_writerSettings)) ::System::Xml::XmlWriterSettings*  writerSettings;

/// @brief Field eventCache offset 0x38
 __declspec(property(get=__get_eventCache, put=__set_eventCache)) ::System::Xml::XmlEventCache*  eventCache;

/// @brief Field textWriter offset 0x40
 __declspec(property(get=__get_textWriter, put=__set_textWriter)) ::System::IO::TextWriter*  textWriter;

/// @brief Field strm offset 0x48
 __declspec(property(get=__get_strm, put=__set_strm)) ::System::IO::Stream*  strm;

 __declspec(property(put=set_NamespaceResolver)) ::System::Xml::IXmlNamespaceResolver*  NamespaceResolver;

 __declspec(property(get=get_SupportsNamespaceDeclarationInChunks)) bool  SupportsNamespaceDeclarationInChunks;

constexpr void __set_wrapped(::System::Xml::XmlRawWriter*  value) ;

constexpr ::System::Xml::XmlRawWriter* __get_wrapped() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlRawWriter*> __get_wrapped() const;

constexpr void __set_onRemove(::System::Xml::OnRemoveWriter*  value) ;

constexpr ::System::Xml::OnRemoveWriter* __get_onRemove() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::OnRemoveWriter*> __get_onRemove() const;

constexpr void __set_writerSettings(::System::Xml::XmlWriterSettings*  value) ;

constexpr ::System::Xml::XmlWriterSettings* __get_writerSettings() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlWriterSettings*> __get_writerSettings() const;

constexpr void __set_eventCache(::System::Xml::XmlEventCache*  value) ;

constexpr ::System::Xml::XmlEventCache* __get_eventCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlEventCache*> __get_eventCache() const;

constexpr void __set_textWriter(::System::IO::TextWriter*  value) ;

constexpr ::System::IO::TextWriter* __get_textWriter() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::TextWriter*> __get_textWriter() const;

constexpr void __set_strm(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_strm() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_strm() const;

static inline ::System::Xml::XmlAutoDetectWriter* New_ctor(::System::Xml::XmlWriterSettings*  writerSettings) ;

/// @brief Method .ctor addr 0x28553f0 size 0xc0 virtual false final false
inline void _ctor(::System::Xml::XmlWriterSettings*  writerSettings) ;

static inline ::System::Xml::XmlAutoDetectWriter* New_ctor(::System::IO::TextWriter*  textWriter, ::System::Xml::XmlWriterSettings*  writerSettings) ;

/// @brief Method .ctor addr 0x28554e0 size 0x28 virtual false final false
inline void _ctor(::System::IO::TextWriter*  textWriter, ::System::Xml::XmlWriterSettings*  writerSettings) ;

static inline ::System::Xml::XmlAutoDetectWriter* New_ctor(::System::IO::Stream*  strm, ::System::Xml::XmlWriterSettings*  writerSettings) ;

/// @brief Method .ctor addr 0x2855508 size 0x28 virtual false final false
inline void _ctor(::System::IO::Stream*  strm, ::System::Xml::XmlWriterSettings*  writerSettings) ;

/// @brief Method WriteDocType addr 0x2855530 size 0x68 virtual true final false
inline void WriteDocType(::StringW  name, ::StringW  pubid, ::StringW  sysid, ::StringW  subset) ;

/// @brief Method WriteStartElement addr 0x28555a8 size 0x80 virtual true final false
inline void WriteStartElement(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteStartAttribute addr 0x285587c size 0x60 virtual true final false
inline void WriteStartAttribute(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteEndAttribute addr 0x28558dc size 0x24 virtual true final false
inline void WriteEndAttribute() ;

/// @brief Method WriteCData addr 0x2855900 size 0x48 virtual true final false
inline void WriteCData(::StringW  text) ;

/// @brief Method WriteComment addr 0x28559a8 size 0x30 virtual true final false
inline void WriteComment(::StringW  text) ;

/// @brief Method WriteProcessingInstruction addr 0x28559d8 size 0x30 virtual true final false
inline void WriteProcessingInstruction(::StringW  name, ::StringW  text) ;

/// @brief Method WriteWhitespace addr 0x2855a08 size 0x30 virtual true final false
inline void WriteWhitespace(::StringW  ws) ;

/// @brief Method WriteString addr 0x2855a38 size 0x48 virtual true final false
inline void WriteString(::StringW  text) ;

/// @brief Method WriteChars addr 0x2855a80 size 0x30 virtual true final false
inline void WriteChars(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteRaw addr 0x2855ab0 size 0x30 virtual true final false
inline void WriteRaw(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteRaw addr 0x2855ae0 size 0x48 virtual true final false
inline void WriteRaw(::StringW  data) ;

/// @brief Method WriteEntityRef addr 0x2855b28 size 0x4c virtual true final false
inline void WriteEntityRef(::StringW  name) ;

/// @brief Method WriteCharEntity addr 0x2855b74 size 0x4c virtual true final false
inline void WriteCharEntity(char16_t  ch) ;

/// @brief Method WriteSurrogateCharEntity addr 0x2855bc0 size 0x54 virtual true final false
inline void WriteSurrogateCharEntity(char16_t  lowChar, char16_t  highChar) ;

/// @brief Method WriteBase64 addr 0x2855c14 size 0x64 virtual true final false
inline void WriteBase64(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteBinHex addr 0x2855c78 size 0x64 virtual true final false
inline void WriteBinHex(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method Close addr 0x2855cdc size 0x3c virtual true final false
inline void Close() ;

/// @brief Method Flush addr 0x2855d18 size 0x3c virtual true final false
inline void Flush() ;

/// @brief Method WriteValue addr 0x2855d54 size 0x4c virtual true final false
inline void WriteValue(::StringW  value) ;

/// @brief Method set_NamespaceResolver addr 0x2855da0 size 0x34 virtual true final false
inline void set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver*  value) ;

/// @brief Method WriteXmlDeclaration addr 0x2855dd4 size 0x4c virtual true final false
inline void WriteXmlDeclaration(::System::Xml::XmlStandalone  standalone) ;

/// @brief Method WriteXmlDeclaration addr 0x2855e20 size 0x4c virtual true final false
inline void WriteXmlDeclaration(::StringW  xmldecl) ;

/// @brief Method StartElementContent addr 0x2855e6c size 0x24 virtual true final false
inline void StartElementContent() ;

/// @brief Method WriteEndElement addr 0x2855e90 size 0x24 virtual true final false
inline void WriteEndElement(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteFullEndElement addr 0x2855eb4 size 0x24 virtual true final false
inline void WriteFullEndElement(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteNamespaceDeclaration addr 0x2855ed8 size 0x54 virtual true final false
inline void WriteNamespaceDeclaration(::StringW  prefix, ::StringW  ns) ;

/// @brief Method get_SupportsNamespaceDeclarationInChunks addr 0x2855f2c size 0x24 virtual true final false
inline bool get_SupportsNamespaceDeclarationInChunks() ;

/// @brief Method WriteStartNamespaceDeclaration addr 0x2855f50 size 0x4c virtual true final false
inline void WriteStartNamespaceDeclaration(::StringW  prefix) ;

/// @brief Method WriteEndNamespaceDeclaration addr 0x2855f9c size 0x24 virtual true final false
inline void WriteEndNamespaceDeclaration() ;

/// @brief Method IsHtmlTag addr 0x2855628 size 0x114 virtual false final false
static inline bool IsHtmlTag(::StringW  tagName) ;

/// @brief Method EnsureWrappedWriter addr 0x2855598 size 0x10 virtual false final false
inline void EnsureWrappedWriter(::System::Xml::XmlOutputMethod  outMethod) ;

/// @brief Method TextBlockCreatesWriter addr 0x2855948 size 0x60 virtual false final false
inline bool TextBlockCreatesWriter(::StringW  textBlock) ;

/// @brief Method CreateWrappedWriter addr 0x285573c size 0x140 virtual false final false
inline void CreateWrappedWriter(::System::Xml::XmlOutputMethod  outMethod) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlAutoDetectWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlAutoDetectWriter(XmlAutoDetectWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlAutoDetectWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlAutoDetectWriter(XmlAutoDetectWriter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlAutoDetectWriter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlAutoDetectWriter, 0x50>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlAutoDetectWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlAutoDetectWriter*, "System.Xml", "XmlAutoDetectWriter");
